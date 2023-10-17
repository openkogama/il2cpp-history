
/* KogamaSettingWrapperBase get_ActiveSettings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingsManager::GameBoosterSettingsManager_get_ActiveSettings
          (GameBoosterSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  pKVar1 = GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
           GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0)
  ;
  values = (this->fields).woData;
  this_00 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  if (this_00 !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
       *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    pKVar1 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                       (values,pKVar1,
                        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                         *)this_00,(MethodInfo *)0x0);
    return pKVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar2)();
  return pKVar1;
}


/* List`1[MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes.GameBoosterSettingWithGoldSetting]
   get_ActiveSettingsList() */

List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings
  ::GameBoosterSettingsManager::GameBoosterSettingsManager_get_ActiveSettingsList
            (GameBoosterSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  prototypeRoot =
       GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
       GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0);
  values = (this->fields).woData;
  this_02 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  if (this_02 !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
       *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              (this_02,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
              (values,prototypeRoot,
               (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                *)this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppAStack1 =
           &
           TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
      ;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,in_stack_2);
      this_00 = (Object__Class *)func_?();
      if (this_00 != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                  );
        value[1].klass = this_00;
        func_?();
        this_01 = (Action_1_Object_ *)func_?();
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                     ,(MethodInfo *)0x0);
          KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                    (in_stack_3,
                     (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)this_01,(MethodInfo *)0x0);
          return (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                  *)value[1].klass;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
              *)(*pcVar4)();
    return pLVar5;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar4)();
  return pLVar5;
}


/* KogamaSettingWrapperBase get_InactiveGameBoosterSettings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingsManager::GameBoosterSettingsManager_get_InactiveGameBoosterSettings
          (GameBoosterSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  pKVar1 = GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
           GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0)
  ;
  target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary
                     (pKVar1,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            (target,(this->fields).woData,1,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
            (target,(MethodInfo *)0x0);
  this_00 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  if (this_00 !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
       *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    pKVar1 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                       (target,pKVar1,
                        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                         *)this_00,(MethodInfo *)0x0);
    return pKVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar2)();
  return pKVar1;
}


/* List`1[MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes.GameBoosterSettingWithGoldSetting]
   get_InactiveGameBoosterSettingsList() */

List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings
  ::GameBoosterSettingsManager::GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
            (GameBoosterSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  obj = GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
        GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0);
  target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary
                     (obj,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            (target,(this->fields).woData,1,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
            (target,(MethodInfo *)0x0);
  this_02 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  if (this_02 !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
       *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              (this_02,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
              (target,obj,
               (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                *)this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppAStack1 =
           &
           TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
      ;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,in_stack_2);
      this_00 = (Object__Class *)func_?();
      if (this_00 != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                  );
        value[1].klass = this_00;
        func_?();
        this_01 = (Action_1_Object_ *)func_?();
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                     ,(MethodInfo *)0x0);
          KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                    (in_stack_3,
                     (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)this_01,(MethodInfo *)0x0);
          return (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                  *)value[1].klass;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
              *)(*pcVar4)();
    return pLVar5;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar4)();
  return pLVar5;
}

