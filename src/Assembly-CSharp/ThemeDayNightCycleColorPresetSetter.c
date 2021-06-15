
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
        ThemeDayNightCycleColorPresetSetter_Constrain
                  (ThemeDayNightCycleColorPresetSetter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colorPresets;
  if (this_00 != (DayNightCycleColorPresets *)0x0) {
    iVar1 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Length
                      (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                      (value % iVar1,(MethodInfo *)0x0);
    if (iVar1 != value) {
      iVar1 = 0;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Day_Night_cycle_color_preset_ind,(MethodInfo *)0x0);
    }
    return iVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Void Decrement() */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Decrement
               (ThemeDayNightCycleColorPresetSetter *this,MethodInfo *method)

{
  piVar1 = &(this->fields).colorPresetIndex;
  *piVar1 = *piVar1 + -1;
  iVar2 = (this->fields).colorPresetIndex;
  if (*piVar1 < 0) {
    this_00 = (this->fields).colorPresets;
    if (this_00 == (DayNightCycleColorPresets *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Length
                      (this_00,(MethodInfo *)0x0);
    (this->fields).colorPresetIndex = iVar4 + iVar2;
  }
  ThemeDayNightCycleColorPresetSetter_OnSettingChanged(this,(MethodInfo *)0x0);
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
  if (pDVar1 != (DayNightCycleColorPresets *)0x0) {
    iVar3 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Length
                      (pDVar1,(MethodInfo *)0x0);
    if (iVar3 <= iVar2) {
      pDVar1 = (this->fields).colorPresets;
      iVar2 = (this->fields).colorPresetIndex;
      if (pDVar1 == (DayNightCycleColorPresets *)0x0) goto code_?;
      iVar3 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Length
                        (pDVar1,(MethodInfo *)0x0);
      (this->fields).colorPresetIndex = iVar2 - iVar3;
    }
    ThemeDayNightCycleColorPresetSetter_OnSettingChanged(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_Initialize
               (ThemeDayNightCycleColorPresetSetter *this,IntAttribute *attrib,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).onChange = onChange;
  if (attrib != (IntAttribute *)0x0) {
    value = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                      ((KogamaSettingNumericBase_1_System_Single_ *)attrib,
                       MethodInfo__ThemeAttributes__ThemeAttribute<int>__get_Value__);
    iVar1 = ThemeDayNightCycleColorPresetSetter_Constrain(this,(int32_t)value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).settingNameLabel;
    (this->fields).colorPresetIndex = iVar1;
    System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json
    ::Schema::JsonSchemaType]::
    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                *)attrib,MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
      this_00 = (this->fields).colorPresets;
      pTVar2 = (this->fields).presetNameLabel;
      if (this_00 != (DayNightCycleColorPresets *)0x0) {
        this_01 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                            (this_00,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
        if (this_01 != (DayNightCycleColorPresets_Preset *)0x0) {
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged() */

void Assembly-CSharp.dll::ThemeDayNightCycleColorPresetSetter::
     ThemeDayNightCycleColorPresetSetter_OnSettingChanged
               (ThemeDayNightCycleColorPresetSetter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  i = ThemeDayNightCycleColorPresetSetter_Constrain
                (this,(this->fields).colorPresetIndex,(MethodInfo *)0x0);
  this_00 = (this->fields).colorPresets;
  pTVar1 = (this->fields).presetNameLabel;
  (this->fields).colorPresetIndex = i;
  if (this_00 != (DayNightCycleColorPresets *)0x0) {
    this_02 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                        (this_00,i,(MethodInfo *)0x0);
    if (this_02 != (DayNightCycleColorPresets_Preset *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        this_01 = (Action_1_UIPushOption_ *)(this->fields).onChange;
        if (this_01 != (Action_1_UIPushOption_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_01,(this->fields).colorPresetIndex,
                     MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

