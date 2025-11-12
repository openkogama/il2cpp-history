
/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   GetSettingsSettingsList(KogamaSettingWrapperBase) */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_GetSettingsSettingsList
            (KogamaSettingWrapperBase *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0
                        );
  this = (Object__Class *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                      );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
            );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
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
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
             ,(MethodInfo *)0x0);
  KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
            (root,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)this_00,(MethodInfo *)0x0);
  return (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *)object[1].klass;
}


/* List`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase]
   get_GetOptions() */

List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
* MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
  GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
            (GameOptionSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).woData;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AllowRevive);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameOptionsRoot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (KogamaSettingsCollectionBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                         );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this_00,StringLiteral_GameOptionsRoot,(KogamaSettingsCollectionBase *)0x0,
             (MethodInfo *)0x0);
  this_01 = (KogamaSettingBoolBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                         );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this_01,StringLiteral_AllowRevive,0,this_00,(MethodInfo *)0x0);
  if (this_00 != (KogamaSettingsCollectionBase *)0x0) {
    (*(this_00->klass->vtable).AddChild.methodPtr)
              (this_00,this_01,(this_00->klass->vtable).AddChild.method);
    factoryFunc = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                   *)FUN_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                                  );
    FUN_?(factoryFunc);
    source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                       (pDVar1,(KogamaSettingWrapperBase *)this_00,factoryFunc,(MethodInfo *)0x0);
    pDVar1 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary
                       ((KogamaSettingWrapperBase *)this_00,(MethodInfo *)0x0);
    target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                       (pDVar1,(KogamaSettingWrapperBase *)this_00,factoryFunc,(MethodInfo *)0x0);
    if (source != (KogamaSettingWrapperBase *)0x0) {
      KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_OverrideValues
                (target,source,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)
             FUN_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0
                          );
    this_02 = (Object__Class *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__List__
              );
    if (object != (Object *)0x0) {
      bVar2 = iRam_? != 0;
      object[1].klass = this_02;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      this_03 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_03,object,
                 MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager____c__DisplayClass4_0___GetSettingsSettingsList_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 ,(MethodInfo *)0x0);
      KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                (target,(Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)this_03,(MethodInfo *)0x0);
      return (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
              *)object[1].klass;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pLVar8 = (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)(*pcVar7)();
  return pLVar8;
}

