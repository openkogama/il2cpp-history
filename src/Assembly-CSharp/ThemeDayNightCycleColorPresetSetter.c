
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
        ThemeDayNightCycleColorPresetSetter_Constrain
                  (ThemeDayNightCycleColorPresetSetter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Day_Night_cycle_color_preset_ind);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).colorPresets;
  if ((pDVar1 != (DayNightCycleColorPresets *)0x0) &&
     (pDVar2 = (pDVar1->fields).presets, pDVar2 != (DayNightCycleColorPresets_Preset__Array *)0x0))
  {
    iVar3 = pDVar2->max_length;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar4 = value % (int)iVar3;
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar5 = -iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar4;
    }
    if (iVar5 != value) {
      iVar5 = 0;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Day_Night_cycle_color_preset_ind,(MethodInfo *)0x0);
    }
    return iVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
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
       ) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields).colorPresetIndex = iVar1 + (int)pDVar3->max_length;
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
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,(pDVar6->fields).name,(pTVar5->klass->vtable).set_text.method);
      pAVar7 = (this->fields).onChange;
      if (pAVar7 != (Action_1_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(this->fields).colorPresetIndex,
                   (pAVar7->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
           iVar2 - (int)((((this->fields).colorPresets)->fields).presets)->max_length;
    }
    i = ThemeDayNightCycleColorPresetSetter_Constrain
                  (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
    pDVar1 = (this->fields).colorPresets;
    pTVar4 = (this->fields).presetNameLabel;
    (this->fields).colorPresetIndex = i;
    if (pDVar1 != (DayNightCycleColorPresets *)0x0) {
      pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                         (pDVar1,i,(MethodInfo *)0x0);
      if ((pDVar5 != (DayNightCycleColorPresets_Preset *)0x0) && (pTVar4 != (Text *)0x0)) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)
                  (pTVar4,(pDVar5->fields).name,(pTVar4->klass->vtable).set_text.method);
        pAVar6 = (this->fields).onChange;
        if (pAVar6 != (Action_1_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar6->fields)._._.invoke_impl)
                    ((pAVar6->fields)._._.method_code,(this->fields).colorPresetIndex,
                     (pAVar6->fields)._._.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Initialize
               (ThemeDayNightCycleColorPresetSetter *this,IntAttribute *attrib,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__ThemeAttribute<int>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onChange = onChange;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (attrib != (IntAttribute *)0x0) {
    iVar6 = ThemeDayNightCycleColorPresetSetter_Constrain
                      (this,(attrib->fields)._._.value,(MethodInfo *)0x0);
    pTVar7 = (this->fields).settingNameLabel;
    (this->fields).colorPresetIndex = iVar6;
    if (pTVar7 != (Text *)0x0) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,(attrib->fields)._.name);
      this_00 = (this->fields).colorPresets;
      pTVar7 = (this->fields).presetNameLabel;
      if (((this_00 != (DayNightCycleColorPresets *)0x0) &&
          (pDVar8 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                              (this_00,(this->fields).colorPresetIndex,(MethodInfo *)0x0),
          pDVar8 != (DayNightCycleColorPresets_Preset *)0x0)) && (pTVar7 != (Text *)0x0)) {
        UNRECOVERED_JUMPTABLE = (pTVar7->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar7,(pDVar8->fields).name,(pTVar7->klass->vtable).set_text.method,
                   UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,(pDVar2->fields).name,(pTVar1->klass->vtable).set_text.method);
      pAVar3 = (this->fields).onChange;
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(this->fields).colorPresetIndex,
                   (pAVar3->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

