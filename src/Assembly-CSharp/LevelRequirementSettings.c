
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_Initialize
               (LevelRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Level_Requirement,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      this_04 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,woID,(MethodInfo *)0x0);
      if (this_04 != (PrefabPool *)0x0) {
        this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
        value = 0;
        if (this_05 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_05,StringLiteral_levelAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar1 != 0) {
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)this_05,
                                (Type *)StringLiteral_levelAmount,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pPVar2 == (Pool *)0x0) goto code_?;
            if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar3 = (int32_t *)func_?();
            value = *piVar3;
          }
          this_01 = (this->fields).slider;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_06 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_06 != (MVNetworkGame *)0x0) {
            this_07 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_06,(MethodInfo *)0x0);
            if (this_07 != (MVLocalPlayer *)0x0) {
              maxValue = System.dll::System::Collections::Generic::
                         SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                         ::Single,System::Object]::
                         SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                   ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                     *)this_07,(MethodInfo *)0x0);
              if (this_01 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize_1
                          (this_01,StringLiteral_levelAmount,value,0,(int32_t)maxValue,
                           (MethodInfo *)0x0);
                this_02 = (this->fields).inputField;
                if (this_02 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (this_02,StringLiteral_levelAmount,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_OnSettingChanged
               (LevelRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  this = (LevelRequirementSettings *)
         mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

