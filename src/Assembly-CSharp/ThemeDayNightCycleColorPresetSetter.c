
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
        ThemeDayNightCycleColorPresetSetter_Constrain
                  (ThemeDayNightCycleColorPresetSetter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Day_Night_cycle_color_preset_ind);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).colorPresets;
  if ((pDVar1 != (DayNightCycleColorPresets *)0x0) &&
     (pDVar2 = (pDVar1->fields).presets, pDVar2 != (DayNightCycleColorPresets_Preset__Array *)0x0))
  {
    iVar3 = pDVar2->max_length;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    uVar4 = value % (int)iVar3;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    if (iVar6 != value) {
      iVar6 = 0;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Day_Night_cycle_color_preset_ind,(MethodInfo *)0x0);
    }
    return iVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Void Decrement() */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Decrement
               (ThemeDayNightCycleColorPresetSetter *this,MethodInfo *method)

{
  piVar1 = &(this->fields).colorPresetIndex;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    pDVar2 = (this->fields).colorPresets;
    if ((pDVar2 == (DayNightCycleColorPresets *)0x0) ||
       (pDVar3 = (pDVar2->fields).presets, pDVar3 == (DayNightCycleColorPresets_Preset__Array *)0x0)
       ) goto code_?;
    piVar1 = &(this->fields).colorPresetIndex;
    *piVar1 = *piVar1 + pDVar3->max_length;
  }
  i = ThemeDayNightCycleColorPresetSetter_Constrain
                (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
  pDVar2 = (this->fields).colorPresets;
  pTVar4 = (this->fields).presetNameLabel;
  (this->fields).colorPresetIndex = i;
  if (((pDVar2 != (DayNightCycleColorPresets *)0x0) &&
      (pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                          (pDVar2,i,(MethodInfo *)0x0),
      pDVar5 != (DayNightCycleColorPresets_Preset *)0x0)) && (pTVar4 != (Text *)0x0)) {
    (*(code *)(pTVar4->klass->vtable).set_text.method)();
    pAVar6 = (this->fields).onChange;
    if (pAVar6 != (Action_1_Int32_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)();
      return;
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Increment() */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Increment
               (ThemeDayNightCycleColorPresetSetter *this,MethodInfo *method)

{
  piVar1 = &(this->fields).colorPresetIndex;
  *piVar1 = *piVar1 + 1;
  pDVar2 = (this->fields).colorPresets;
  iVar3 = (this->fields).colorPresetIndex;
  if (pDVar2 != (DayNightCycleColorPresets *)0x0) {
    pDVar4 = (pDVar2->fields).presets;
    if (pDVar4 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
      if ((int)pDVar4->max_length <= iVar3) {
        (this->fields).colorPresetIndex = iVar3 - ((pDVar2->fields).presets)->max_length;
      }
      i = ThemeDayNightCycleColorPresetSetter_Constrain
                    (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
      pDVar2 = (this->fields).colorPresets;
      pTVar5 = (this->fields).presetNameLabel;
      (this->fields).colorPresetIndex = i;
      if (pDVar2 != (DayNightCycleColorPresets *)0x0) {
        pDVar6 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                           (pDVar2,i,(MethodInfo *)0x0);
        if ((pDVar6 != (DayNightCycleColorPresets_Preset *)0x0) && (pTVar5 != (Text *)0x0)) {
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          pAVar7 = (this->fields).onChange;
          if (pAVar7 != (Action_1_Int32_ *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,(this->fields).colorPresetIndex,
                       (pAVar7->fields)._._.method);
            return;
          }
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Initialize
               (ThemeDayNightCycleColorPresetSetter *this,IntAttribute *attrib,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<int>__get_Value__);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).onChange;
  *ppAVar1 = onChange;
  func_?(ppAVar1,onChange);
  if (attrib != (IntAttribute *)0x0) {
    iVar2 = ThemeDayNightCycleColorPresetSetter_Constrain
                      (this,(attrib->fields)._._.value,(MethodInfo *)0x0);
    pTVar3 = (this->fields).settingNameLabel;
    (this->fields).colorPresetIndex = iVar2;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,(attrib->fields)._.name,
                 (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).colorPresets;
      pTVar3 = (this->fields).presetNameLabel;
      if (this_00 != (DayNightCycleColorPresets *)0x0) {
        pDVar4 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                           (this_00,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
        if ((pDVar4 != (DayNightCycleColorPresets_Preset *)0x0) && (pTVar3 != (Text *)0x0)) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,(pDVar4->fields).name,
                     (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged() */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_OnSettingChanged
               (ThemeDayNightCycleColorPresetSetter *this,MethodInfo *method)

{
  i = ThemeDayNightCycleColorPresetSetter_Constrain
                (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
  this_00 = (this->fields).colorPresets;
  pTVar1 = (this->fields).presetNameLabel;
  (this->fields).colorPresetIndex = i;
  if (this_00 != (DayNightCycleColorPresets *)0x0) {
    pDVar2 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,i,(MethodInfo *)0x0);
    if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) && (pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      pAVar3 = (this->fields).onChange;
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(this->fields).colorPresetIndex,
                   (pAVar3->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

