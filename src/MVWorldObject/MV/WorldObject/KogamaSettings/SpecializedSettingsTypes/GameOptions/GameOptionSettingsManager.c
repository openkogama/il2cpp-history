
/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   GetSettingsSettingsList(KogamaSettingWrapperBase) */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_GetSettingsSettingsList
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1
  ;
  this = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00)
  ;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
            );
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = this_00;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Action_System__Object__void__
              );
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
              (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)this_01,(MethodInfo *)0x0);
    return (this->fields)._._._._.m_CachedPtr;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)(*pcVar1)();
  return pLVar2;
}


/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   get_GetOptions() */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
            (GameOptionSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  userValuesDict = (this->fields).woData;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (KogamaSettingsCollectionBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this_00,StringLiteral_GameOptionsRoot,(KogamaSettingsCollectionBase *)0x0,
             (MethodInfo *)0x0);
  this_01 = (KogamaSettingBoolBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                           );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this_01,StringLiteral_AllowRevive,1,this_00,(MethodInfo *)0x0);
  if (this_00 != (KogamaSettingsCollectionBase *)0x0) {
    pAStack1 =
         (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase___Class
          *)(this_00->klass->vtable).CopyWithOutChildren.methodPtr;
    (*(code *)(this_00->klass->vtable).AddChild.method)();
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
              );
    root = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreatePrototypeWithUserValues
                     (userValuesDict,(KogamaSettingWrapperBase *)this_00,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)pUVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1
    ;
    this_02 = (ScaleAnimationBase *)func_?();
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (this_02,0.0,(MethodInfo *)method_00);
    this_03 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
              );
    if (this_02 != (ScaleAnimationBase *)0x0) {
      (this_02->fields)._._._._.m_CachedPtr = this_03;
      pAStack1 =
           TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
      ;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_02,
                 MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 ,
                 MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Action_System__Object__void__
                );
      KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                       *)pUVar2,(MethodInfo *)0x0);
      return (this_02->fields)._._._._.m_CachedPtr;
    }
  }
  pAStack1 =
       (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase___Class
        *)0x0;
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)(*pcVar3)();
  return pLVar4;
}

