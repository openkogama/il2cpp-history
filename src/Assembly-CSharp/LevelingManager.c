
/* InitialLevelData CreateInitialLevelData() */

InitialLevelData *
Assembly-CSharp.dll::LevelingManager::LevelingManager_CreateInitialLevelData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                   );
    func_?(&TypeInfo__InitialLevelData);
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InitialLevelData;
  pIVar1 = (InitialLevelData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pIVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pLVar2 = LevelingManager_TestBadgeUrlData((MethodInfo *)0x0);
  if (pIVar1 != (InitialLevelData *)0x0) {
    (pIVar1->fields).BadgeUrlData = pLVar2;
    func_?();
    (pIVar1->fields).Level = 2;
    (pIVar1->fields).XP = 0x78;
    this = TypeInfo__LevelingManager->static_fields->TestLevelToLimits;
    if (this != (Dictionary_2_System_Int32_XPLevelLimits_ *)0x0) {
      pXVar3 = (XPLevelLimits *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this,2,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                         );
      (pIVar1->fields).XPLevelLimits = pXVar3;
      func_?();
      return pIVar1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar1 = (InitialLevelData *)(*pcVar4)();
  return pIVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Destroy(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  uStack_1 = 2;
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,
             MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,(MethodInfo *)0x0);
  uStack_1 = 0xffffffff;
  func_?();
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Initialize
               (int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_InitialData((MethodInfo *)0x0);
  str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&profileID,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,
             MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  this_00 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
  AssetBundleRequest::AssetBundleRequest__ctor
            (this_00,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Notify(InitialLevelData) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Notify
               (InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    badgeUrlDatas = (initialLevelData->fields).BadgeUrlData;
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_Initialize(badgeUrlDatas,(MethodInfo *)0x0);
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this != (MVNetworkGame *)0x0) {
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
      if (pMVar1 != (MVLocalPlayer *)0x0) {
        (*(code *)(pMVar1->klass->vtable).InitializeLeveling.method)();
        if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
        if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized != (UnityAction *)0x0) {
          if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
          if (pUVar2 == (UnityAction *)0x0) goto code_?;
          (*(pUVar2->fields)._._.invoke_impl)();
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
          func_?(TypeInfo__LevelingManager->static_fields);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInitialData(UnityWebRequest) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_OnInitialData
               (UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    InitialLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<InitialLevelData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    this = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
           __Il2CppFullySharedGenericType]::
           WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                     ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      result,(MethodInfo *)0x0);
    if (this != (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
      value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_get_text((DownloadHandler *)this,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                         (value,
                          InitialLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<InitialLevelData>_System__String_
                         );
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__BadgeManager);
        func_?(&TypeInfo__LevelingManager);
        cRam_? = '\x01';
      }
      if (pOVar1 != (Object *)0x0) {
        badgeUrlDatas = pOVar1[1].klass;
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BadgeManager);
        }
        BadgeManager::BadgeManager_Initialize
                  ((List_1_BadgeUrlData_ *)badgeUrlDatas,(MethodInfo *)0x0);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            (*(code *)(pMVar2->klass->vtable).InitializeLeveling.method)
                      (pMVar2,pOVar1,(pMVar2->klass->vtable).Destroy.methodPtr);
            if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__LevelingManager);
            }
            if (cRam_? == '\0') {
              func_?(&TypeInfo__LevelingManager);
              cRam_? = '\x01';
            }
            if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__LevelingManager);
            }
            TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
            if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized !=
                (UnityAction *)0x0) {
              if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__LevelingManager);
              }
              pUVar3 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
              if (pUVar3 == (UnityAction *)0x0) goto code_?;
              (*(pUVar3->fields)._._.invoke_impl)
                        ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
              TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
              func_?(TypeInfo__LevelingManager->static_fields,0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[BadgeUrlData] TestBadgeUrlData() */

List_1_BadgeUrlData_ *
Assembly-CSharp.dll::LevelingManager::LevelingManager_TestBadgeUrlData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeUrlData);
    func_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<BadgeUrlData>);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_Promotion_Promotion_03_png);
    func_?(&StringLiteral_Promotion_Promotion_04_png);
    func_?(&StringLiteral_Promotion_Promotion_02_png);
    func_?(&StringLiteral_Promotion_Promotion_01_png);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_BadgeUrlData_ *)
           func_?(TypeInfo__System__Collections__Generic__List<BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar2,StringLiteral_Promotion_Promotion_01_png,(MethodInfo *)0x0);
  pBVar3 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
  BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,1,pSVar2,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_BadgeUrlData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Promotion_Promotion_02_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,2,pSVar2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Promotion_Promotion_03_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,3,pSVar2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Promotion_Promotion_04_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,4,pSVar2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    return pLVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar1 = (List_1_BadgeUrlData_ *)(*pcVar4)();
  return pLVar1;
}


/* LevelingManager() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__XPLevelLimits);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__)
  ;
  pXVar1 = TypeInfo__XPLevelLimits;
  pOVar2 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
  pOVar2[1].klass = (Object__Class *)0x0;
  pOVar2[1].monitor = (MonitorData *)0x64;
  pOVar2[2].klass = (Object__Class *)0x1;
  if (this != (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pXVar1 = TypeInfo__XPLevelLimits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
    pOVar2[1].klass = (Object__Class *)0x65;
    pOVar2[1].monitor = (MonitorData *)0xc8;
    pOVar2[2].klass = (Object__Class *)0x2;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,2,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pXVar1 = TypeInfo__XPLevelLimits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
    pOVar2[1].klass = (Object__Class *)0xc9;
    pOVar2[1].monitor = (MonitorData *)0x12c;
    pOVar2[2].klass = (Object__Class *)0x3;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,3,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pXVar1 = TypeInfo__XPLevelLimits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
    pOVar2[1].klass = (Object__Class *)0x12d;
    pOVar2[1].monitor = (MonitorData *)0x190;
    pOVar2[2].klass = (Object__Class *)0x4;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,4,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pXVar1 = TypeInfo__XPLevelLimits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
    pOVar2[1].klass = (Object__Class *)0x191;
    pOVar2[1].monitor = (MonitorData *)0x1f4;
    pOVar2[2].klass = (Object__Class *)0x5;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,5,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pXVar1 = TypeInfo__XPLevelLimits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar1);
    pOVar2[1].klass = (Object__Class *)0x1f5;
    pOVar2[1].monitor = (MonitorData *)0x258;
    pOVar2[2].klass = (Object__Class *)0x6;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this,6,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    TypeInfo__LevelingManager->static_fields->TestLevelToLimits =
         (Dictionary_2_System_Int32_XPLevelLimits_ *)this;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_IsInitialized() */

bool Assembly-CSharp.dll::LevelingManager::LevelingManager_get_IsInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  return TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField;
}


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
    TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = value;
    return;
  }
  TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = value;
  return;
}

