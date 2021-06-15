
/* Void <GetSettingsSettingsList>b__0(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterPrototypeSettings::
     GameBoosterPrototypeSettingsManager+<>c__DisplayClass1::
     GameBoosterPrototypeSettingsManager_c_DisplayClass1__GetSettingsSettingsList_b__0
               (GameBoosterPrototypeSettingsManager_c_DisplayClass1 *this,
               KogamaSettingWrapperBase *settingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
  ;
  if (settingNode != (KogamaSettingWrapperBase *)0x0) {
    pKVar2 = settingNode->klass;
    bVar3 = (pKVar2->_1).naturalAligment;
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
            ->_1).naturalAligment;
    if ((bVar3 < bVar4) ||
       ((pKVar2->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pKVar6 = (KogamaSettingWrapperBase *)0x0;
    if (bVar5) {
      pKVar6 = settingNode;
    }
    if (pKVar6 != (KogamaSettingWrapperBase *)0x0) {
      this_00 = (this->fields).inv;
      if (this_00 ==
          (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
           *)0x0) {
        func_?(0);
        settingNode = extraout_EDX;
      }
      else {
        bVar4 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                ->_1).naturalAligment;
        if ((bVar3 < bVar4) ||
           ((pKVar2->_1).typeHierarchy[bVar4 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
           )) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pKVar6 = (KogamaSettingWrapperBase *)0x0;
        if (bVar5) {
          pKVar6 = settingNode;
        }
        if (pKVar6 != (KogamaSettingWrapperBase *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pKVar6,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__Add_MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting_
                    );
          return;
        }
      }
      func_?(settingNode,pGVar1);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

