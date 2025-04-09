
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
  iVar1 = (this->fields).colorPresetIndex + -1;
  (this->fields).colorPresetIndex = iVar1;
  if (iVar1 < 0) {
    pDVar2 = (this->fields).colorPresets;
    if ((pDVar2 == (DayNightCycleColorPresets *)0x0) ||
       (pDVar3 = (pDVar2->fields).presets, pDVar3 == (DayNightCycleColorPresets_Preset__Array *)0x0)
       ) goto code_?;
    (this->fields).colorPresetIndex = pDVar3->max_length + iVar1;
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
  pDVar1 = (this->fields).colorPresets;
  iVar2 = (this->fields).colorPresetIndex + 1;
  (this->fields).colorPresetIndex = iVar2;
  if ((pDVar1 != (DayNightCycleColorPresets *)0x0) &&
     (pDVar3 = (pDVar1->fields).presets, pDVar3 != (DayNightCycleColorPresets_Preset__Array *)0x0))
  {
    if ((int)pDVar3->max_length <= iVar2) {
      (this->fields).colorPresetIndex =
           iVar2 - ((((this->fields).colorPresets)->fields).presets)->max_length;
    }
    i = ThemeDayNightCycleColorPresetSetter_Constrain
                  (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
    pDVar1 = (this->fields).colorPresets;
    pTVar4 = (this->fields).presetNameLabel;
    (this->fields).colorPresetIndex = i;
    if (((pDVar1 != (DayNightCycleColorPresets *)0x0) &&
        (pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                            (pDVar1,i,(MethodInfo *)0x0),
        pDVar5 != (DayNightCycleColorPresets_Preset *)0x0)) && (pTVar4 != (Text *)0x0)) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)();
      pAVar6 = (this->fields).onChange;
      if (pAVar6 != (Action_1_Int32_ *)0x0) {
        (*(pAVar6->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
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
  (this->fields).onChange = onChange;
  func_?(&(this->fields).onChange,onChange);
  if (attrib != (IntAttribute *)0x0) {
    iVar1 = ThemeDayNightCycleColorPresetSetter_Constrain
                      (this,(attrib->fields)._._.value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).settingNameLabel;
    (this->fields).colorPresetIndex = iVar1;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,(attrib->fields)._.name,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).colorPresets;
      pTVar2 = (this->fields).presetNameLabel;
      if (this_00 != (DayNightCycleColorPresets *)0x0) {
        pDVar3 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                           (this_00,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
        if ((pDVar3 != (DayNightCycleColorPresets_Preset *)0x0) && (pTVar2 != (Text *)0x0)) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,(pDVar3->fields).name,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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

