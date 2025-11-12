
/* GameBoosterSettingWithGoldSetting CreateDefaultBool(String, KogamaSettingsCollectionBase) */

GameBoosterSettingWithGoldSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterPrototypeSettings::GameBoosterPrototypeSettingsManager::
GameBoosterPrototypeSettingsManager_CreateDefaultBool
          (String *key,KogamaSettingsCollectionBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingBoolBase *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this,StringLiteral_sk,1,parent,(MethodInfo *)0x0);
  if (parent != (KogamaSettingsCollectionBase *)0x0) {
    (*(parent->klass->vtable).AddChild.methodPtr)
              (parent,this,(parent->klass->vtable).AddChild.method);
    return (GameBoosterSettingWithGoldSetting *)parent;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pGVar2 = (GameBoosterSettingWithGoldSetting *)(*pcVar1)();
  return pGVar2;
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
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this,key,root,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                        );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (pKVar1,StringLiteral_gsk,10,5,0x32,this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar1,(this->klass->vtable).AddChild.method);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_tsk);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pKVar1 = (KogamaSettingNumericBase_1_System_Int32_ *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                          );
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32___ctor
              (pKVar1,StringLiteral_tsk,600,600,600,this,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
              );
    (*(this->klass->vtable).AddChild.methodPtr)(this,pKVar1,(this->klass->vtable).AddChild.method);
    if (root != (KogamaSettingsCollectionBase *)0x0) {
      (*(root->klass->vtable).AddChild.methodPtr)(root,this,(root->klass->vtable).AddChild.method);
      return (GameBoosterSettingWithGoldSetting *)this;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameBoosterSettingWithGoldSetting *)(*pcVar2)();
  return pGVar3;
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
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  parent = (KogamaSettingsCollectionBase *)
           GameBoosterPrototypeSettingsManager_CreateDefaultGameBoosterSettingWithGoldSetting
                     (key,root,(MethodInfo *)0x0);
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            (this,StringLiteral_sk,defaultVal,minVal,maxVal,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  if (parent != (KogamaSettingsCollectionBase *)0x0) {
    (*(parent->klass->vtable).AddChild.methodPtr)
              (parent,this,(parent->klass->vtable).AddChild.method);
    return (GameBoosterSettingWithGoldSetting *)parent;
  }
  FUN_?();
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
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JumpPower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameBoosterPrototypeSetting);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XRayVision);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ammo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PoisonResist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameCoinBoost);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         FUN_?(
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
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         FUN_?(
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
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingNumericBase_1_System_Int32_ *)
         FUN_?(
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
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0
                        );
  this = (Object__Class *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>
                      );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__List__
            );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
              *)(*pcVar1)();
    return pLVar2;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = this;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterPrototypeSettings__GameBoosterPrototypeSettingsManager____c__DisplayClass9_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
             ,(MethodInfo *)0x0);
  KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
            (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)this_00,(MethodInfo *)0x0);
  return (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
          *)object[1].klass;
}

