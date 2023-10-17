
/* Void <GetSettingsDictionary>b__3(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterPrototypeSettings::
     GameBoosterPrototypeSettingsManager+<>c__DisplayClass4::
     GameBoosterPrototypeSettingsManager_c_DisplayClass4__GetSettingsDictionary_b__3
               (GameBoosterPrototypeSettingsManager_c_DisplayClass4 *this,
               KogamaSettingWrapperBase *settingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_System__String__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                   );
    cRam_? = '\x01';
  }
  if (((settingNode != (KogamaSettingWrapperBase *)0x0) &&
      ((
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       ->_1).typeHierarchyDepth <= (settingNode->klass->_1).typeHierarchyDepth)) &&
     ((settingNode->klass->_1).typeHierarchy
      [(
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       ->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
     )) {
    this_00 = (this->fields).inv;
    if (this_00 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
         *)0x0) {
      func_?();
      pGVar1 = extraout_EDX;
    }
    else {
      pGVar1 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
      ;
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
           ->_1).typeHierarchyDepth <= (settingNode->klass->_1).typeHierarchyDepth) &&
         ((settingNode->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
         )) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)(settingNode->fields).key,(Object *)settingNode,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_System__String__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
                  );
        return;
      }
    }
    func_?(settingNode,pGVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

