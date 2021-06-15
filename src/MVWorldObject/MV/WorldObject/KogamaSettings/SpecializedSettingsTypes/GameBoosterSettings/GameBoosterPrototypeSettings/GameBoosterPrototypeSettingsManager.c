
/* GameBoosterSettingWithGoldSetting CreateDefaultBool(String, KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultBool
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingBoolBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this,StringLiteral_sk,1,parent,(MethodInfo *)0x0);
  if (parent != (KogamaSettingsCollectionBase *)0x0) {
    pIStack1 = (parent->klass->vtable).CopyWithOutChildren.methodPtr;
    (*(code *)(parent->klass->vtable).AddChild.method)();
    return (GameBoosterSettingWithGoldSetting *)parent;
  }
  pIStack1 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameBoosterSettingWithGoldSetting *)(*pcVar2)();
  return pGVar3;
}


/* GameBoosterSettingWithGoldSetting CreateDefaultGameBoosterSettingWithGoldSetting(String,
   KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this,key,root,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                          );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar1,StringLiteral_gsk,10,5,0x32,this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    pKStack2 =
         (KogamaSettingNumericBase_1_System_Int32___Class *)
         (this->klass->vtable).CopyWithOutChildren.methodPtr;
    (*(code *)(this->klass->vtable).AddChild.method)();
    if (cRam_? == '\0') {
      pKStack2 = (KogamaSettingNumericBase_1_System_Int32___Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pKStack2 =
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)func_?();
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar1,StringLiteral_tsk,600,600,600,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    (*(code *)(this->klass->vtable).AddChild.method)();
    if (root != (KogamaSettingsCollectionBase *)0x0) {
      pKStack2 =
           (KogamaSettingNumericBase_1_System_Int32___Class *)
           (root->klass->vtable).CopyWithOutChildren.methodPtr;
      (*(code *)(root->klass->vtable).AddChild.method)();
      return (GameBoosterSettingWithGoldSetting *)this;
    }
  }
  pKStack2 = (KogamaSettingNumericBase_1_System_Int32___Class *)0x0;
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameBoosterSettingWithGoldSetting *)(*pcVar3)();
  return pGVar4;
}


/* GameBoosterSettingWithGoldSetting CreateDefaultInt(Int32, Int32, Int32, String,
   KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultInt
          (int32_t defaultVal,int32_t minVal,int32_t maxVal,String *key,
          KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (this,StringLiteral_sk,defaultVal,minVal,maxVal,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  if (parent != (KogamaSettingsCollectionBase *)0x0) {
    (*(code *)(parent->klass->vtable).AddChild.method)();
    return (GameBoosterSettingWithGoldSetting *)parent;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pGVar2 = (GameBoosterSettingWithGoldSetting *)(*pcVar1)();
  return pGVar2;
}


/* KogamaSettingWrapperBase CreateGameBoosterSettingPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateGameBoosterSettingPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this,StringLiteral_GameBoosterPrototypeSetting,(KogamaSettingsCollectionBase *)0x0,
             (MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultInt
            (0x32,10,100,StringLiteral_PoisonResist,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultInt
            (0x32,10,100,StringLiteral_JumpPower,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultInt
            (10,5,100,StringLiteral_Speed,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultInt
            (0x32,0x19,200,StringLiteral_Health,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultBool
            (StringLiteral_GameCoinBoost,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultBool(StringLiteral_Ammo,this,(MethodInfo *)0x0);
  GameBoosterPrototypeSettingsManager_CreateDefaultBool
            (StringLiteral_XRayVision,this,(MethodInfo *)0x0);
  return (KogamaSettingWrapperBase *)this;
}


/* KogamaSettingNumericBase`1[System.Int32] CreateGoldSetting(GameBoosterSettingWithGoldSetting) */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateGoldSetting
          (GameBoosterSettingWithGoldSetting *gameBoosterSettingWithGoldSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (this,StringLiteral_gsk,10,5,0x32,
             (KogamaSettingsCollectionBase *)gameBoosterSettingWithGoldSetting,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  return this;
}


/* KogamaSettingNumericBase`1[System.Int32] CreateTimeSetting(GameBoosterSettingWithGoldSetting) */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateTimeSetting
          (GameBoosterSettingWithGoldSetting *gameBoosterSettingWithGoldSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (this,StringLiteral_tsk,600,600,600,
             (KogamaSettingsCollectionBase *)gameBoosterSettingWithGoldSetting,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  return this;
}


/* List`1[MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes.GameBoosterSettingWithGoldSetting]
   GetSettingsSettingsList(KogamaSettingWrapperBase) */

List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings
  ::GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
  GameBoosterPrototypeSettingsManager_GetSettingsSettingsList
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1
  ;
  this = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00)
  ;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
            );
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = this_00;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass1___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
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
  pLVar2 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar1)();
  return pLVar2;
}

