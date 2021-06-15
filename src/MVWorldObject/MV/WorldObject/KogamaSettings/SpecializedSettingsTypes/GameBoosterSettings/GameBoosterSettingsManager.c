
/* KogamaSettingWrapperBase get_ActiveSettings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingsManager::GameBoosterSettingsManager_get_ActiveSettings
          (GameBoosterSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
           GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0)
  ;
  values = (this->fields).woData;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  pKVar1 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar1,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  prototypeRoot =
       GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
       GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes((MethodInfo *)0x0);
  values = (this->fields).woData;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
            (values,prototypeRoot,
             (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
              *)pUVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
            );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    pAStack2 =
         TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
    ;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this_00,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Action_System__Object__void__
              );
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
              (in_stack_3,
               (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)pUVar1,(MethodInfo *)0x0);
    return (this_00->fields)._._._._.m_CachedPtr;
  }
  pAStack2 =
       (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase___Class
        *)0x0;
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
    func_?(_UNK_?);
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
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  pKVar1 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (target,pKVar1,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
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
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
            (target,obj,
             (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
              *)pUVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
            );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    pAStack2 =
         TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
    ;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this_00,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Action_System__Object__void__
              );
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
              (in_stack_3,
               (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)pUVar1,(MethodInfo *)0x0);
    return (this_00->fields)._._._._.m_CachedPtr;
  }
  pAStack2 =
       (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase___Class
        *)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar4)();
  return pLVar5;
}

