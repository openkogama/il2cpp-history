
/* GameBoosterSettingWithGoldSetting CreateDefaultBool(String, KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultBool
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&StringLiteral_sk);
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                   );
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_gsk);
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
    ppMStack2 = (MethodInfo **)(this->klass->vtable).CopyWithOutChildren.methodPtr;
    (*(code *)(this->klass->vtable).AddChild.method)();
    if (cRam_? == '\0') {
      ppMStack2 =
           &
           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    ppMStack2 =
         (MethodInfo **)
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
      ppMStack2 = (MethodInfo **)(root->klass->vtable).CopyWithOutChildren.methodPtr;
      (*(code *)(root->klass->vtable).AddChild.method)();
      return (GameBoosterSettingWithGoldSetting *)this;
    }
  }
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_sk);
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&StringLiteral_JumpPower);
    func_?(&StringLiteral_GameBoosterPrototypeSetting);
    func_?(&StringLiteral_XRayVision);
    func_?(&StringLiteral_Ammo);
    func_?(&StringLiteral_PoisonResist);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_GameCoinBoost);
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_gsk);
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_tsk);
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
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0
  ;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this = (Object__Class *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                        );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
            );
  if (value != (Object *)0x0) {
    value[1].klass = this;
    func_?(value + 1);
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(
                             TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                             );
    Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
    SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,value,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ,(MethodInfo *)0x0);
    KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
              (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)this_00,(MethodInfo *)0x0);
    return (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)value[1].klass;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
            *)(*pcVar1)();
  return pLVar2;
}

