
/* Void <GetSettingsSettingsList>b__0(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
     GameOptionSettingsManager+<>c__DisplayClass1::
     GameOptionSettingsManager_c_DisplayClass1__GetSettingsSettingsList_b__0
               (GameOptionSettingsManager_c_DisplayClass1 *this,
               KogamaSettingWrapperBase *settingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
  ;
  if (settingNode != (KogamaSettingWrapperBase *)0x0) {
    pKVar2 = settingNode->klass;
    bVar3 = (pKVar2->_1).naturalAligment;
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if ((bVar3 < bVar4) ||
       ((pKVar2->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
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
          (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
           *)0x0) {
        func_?(0);
        settingNode = extraout_EDX;
      }
      else {
        bVar4 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                ->_1).naturalAligment;
        if ((bVar3 < bVar4) ||
           ((pKVar2->_1).typeHierarchy[bVar4 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
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
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Add_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                    );
          return;
        }
      }
      func_?(settingNode,pKVar1);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

