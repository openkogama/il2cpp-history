
/* Void Validate(MVWorldObjectClient, String, Object) */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator_Validate
               (MVWorldObjectClient *wo,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)wo,(MethodInfo *)0x0),
     pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)0x0)) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (pDVar1,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  pTVar3 = (Type *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar1,StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      if ((((uint)(TypeInfo__WorldObjectDataValidator->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__WorldObjectDataValidator->_1).cctor_started == 0)) {
        func_?(TypeInfo__WorldObjectDataValidator);
      }
      pDVar4 = TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)pDVar4,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__WorldObjectDataValidator->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__WorldObjectDataValidator->_1).cctor_started == 0)) {
          func_?(TypeInfo__WorldObjectDataValidator);
        }
        pDVar4 = TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
        if (((pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
            (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)pDVar4,(Type *)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), pPVar5 == (Pool *)0x0)) ||
           (pTVar3 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)pPVar5,(MethodInfo *)0x0), value == (Object *)0x0))
        goto code_?;
        pTVar6 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
        if (pTVar3 == pTVar6) {
          return;
        }
        if ((((uint)(TypeInfo__WorldObjectDataValidator->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__WorldObjectDataValidator->_1).cctor_started == 0)) {
          func_?();
        }
        pDVar4 = TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
        if ((pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)pDVar4,(Type *)key,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pIVar7 = (IsolatedStorageException *)value, pPVar5 == (Pool *)0x0
           )) goto code_?;
        goto code_?;
      }
    }
    else {
      value = (Object *)&UNK_?;
      pDVar8 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
      if (pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
      Dictionary_2_System_Type_Pool__get_Item
                (pDVar8,(Type *)StringLiteral_BlueprintData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)func_?();
      if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) goto code_?;
      pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar5 == (Pool *)0x0) goto code_?;
      pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pPVar5,(MethodInfo *)0x0);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType
                         ((Object *)&UNK_?,(MethodInfo *)0x0);
      if (pTVar3 == pTVar6) {
        return;
      }
      pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar5 == (Pool *)0x0) goto code_?;
      pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pPVar5,(MethodInfo *)0x0);
      value = (Object *)&UNK_?;
      pTVar6 = mscorlib.dll::System::Object::Object_GetType
                         ((Object *)&UNK_?,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      key = mscorlib.dll::System::String::String_Format_2
                      (StringLiteral_Types_does_not_match_wo_data__ke,(Object *)key,(Object *)pTVar3
                       ,(Object *)pTVar6,(MethodInfo *)0x0);
      pIVar7 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar7,key,(MethodInfo *)0x0);
      pPVar5 = (Pool *)func_?();
code_?:
      pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pPVar5,(MethodInfo *)0x0);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)pIVar7,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      key = mscorlib.dll::System::String::String_Format_2
                      (StringLiteral_Types_does_not_match_lazy_added_,(Object *)key,(Object *)pTVar3
                       ,(Object *)pTVar6,(MethodInfo *)0x0);
      pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar7,key,(MethodInfo *)0x0);
      func_?();
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    key = mscorlib.dll::System::String::String_Format_1
                    (StringLiteral_Data_not_in_wo_or_in_lazyAddedDa,(Object *)key,value,
                     (MethodInfo *)0x0);
    pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar7,key,(MethodInfo *)0x0);
    pPVar5 = (Pool *)func_?();
  }
  else {
    if ((pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                    *)0x0) ||
       (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar5 == (Pool *)0x0)) goto code_?;
    pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)pPVar5,(MethodInfo *)0x0);
    pTVar3 = (Type *)&UNK_?;
    pTVar9 = mscorlib.dll::System::Object::Object_GetType((Object *)&UNK_?,(MethodInfo *)0x0)
    ;
    if (pTVar6 == pTVar9) {
      return;
    }
    pDVar8 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
    if ((pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar8,(Type *)key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar5 == (Pool *)0x0)) goto code_?;
  }
  pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)pPVar5,(MethodInfo *)0x0);
  pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pTVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Format_2
                      (StringLiteral_Types_does_not_match_wo_data__ke,(Object *)key,(Object *)pTVar6
                       ,(Object *)pTVar3,(MethodInfo *)0x0);
  pIVar7 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar7,message,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* WorldObjectDataValidator() */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pCVar1 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_test,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_levelAmount,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_gameCoinAmount,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack2 = &stack0xffffffec;
    pIStack3 = TypeInfo__System__Int32;
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_starAmount,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_RequiredRank,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_team,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack4 = &stack0xffffffe0;
    pIStack5 = TypeInfo__System__Int32;
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this,StringLiteral_Lives,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData = this;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

