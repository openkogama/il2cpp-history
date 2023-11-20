
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
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
  ;
  if (((settingNode == (KogamaSettingWrapperBase *)0x0) ||
      ((settingNode->klass->_1).naturalAligment <
       (
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       ->_1).naturalAligment)) ||
     ((settingNode->klass->_1).typeHierarchy
      [(
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       ->_1).naturalAligment - 1] !=
      (Il2CppClass *)
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
     )) {
    return;
  }
  this_00 = (this->fields).inv;
  if (this_00 ==
      (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
       *)0x0) {
code_?:
    func_?();
  }
  else {
    pGVar2 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
    ;
    if (((settingNode->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
         ->_1).naturalAligment) ||
       ((settingNode->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       )) goto code_?;
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pGVar4 = (this_00->fields)._items;
    if (pGVar4 == (GameBoosterSettingWithGoldSetting__Array *)0x0) goto code_?;
    uVar5 = (this_00->fields)._size;
    if (pGVar4->max_length <= uVar5) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)this_00,(Object *)settingNode,
                 pMVar1->klass->rgctx_data[0xe].method);
      return;
    }
    (this_00->fields)._size = uVar5 + 1;
    if (uVar5 < pGVar4->max_length) {
      pGVar4->vector[uVar5] = (GameBoosterSettingWithGoldSetting *)settingNode;
      func_?(pGVar4->vector + uVar5,settingNode);
      return;
    }
  }
  func_?();
  pGVar2 = extraout_EDX;
code_?:
  func_?(settingNode,pGVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

