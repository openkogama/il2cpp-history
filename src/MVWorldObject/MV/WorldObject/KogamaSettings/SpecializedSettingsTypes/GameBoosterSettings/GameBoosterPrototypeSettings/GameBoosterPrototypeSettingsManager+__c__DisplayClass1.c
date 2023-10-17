
/* Void <GetSettingsSettingsList>b__0(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterPrototypeSettings::
     GameBoosterPrototypeSettingsManager+<>c__DisplayClass1::
     GameBoosterPrototypeSettingsManager_c_DisplayClass1__GetSettingsSettingsList_b__0
               (GameBoosterPrototypeSettingsManager_c_DisplayClass1 *this,
               KogamaSettingWrapperBase *settingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
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
        (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)settingNode,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
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

