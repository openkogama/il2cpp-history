
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
  pIVar1 = (InitialLevelData *)func_?(TypeInfo__InitialLevelData);
  if (pIVar1 != (InitialLevelData *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pIVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar2 = LevelingManager_TestBadgeUrlData((MethodInfo *)0x0);
    (pIVar1->fields).BadgeUrlData = pLVar2;
    func_?(&pIVar1->fields);
    (pIVar1->fields).Level = 2;
    (pIVar1->fields).XP = 0x78;
    this = TypeInfo__LevelingManager->static_fields->TestLevelToLimits;
    if (this != (Dictionary_2_System_Int32_XPLevelLimits_ *)0x0) {
      pXVar3 = (XPLevelLimits *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                         );
      (pIVar1->fields).XPLevelLimits = pXVar3;
      func_?(&(pIVar1->fields).XPLevelLimits,pXVar3);
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
  puStack_4 = &stack0xffffffcc;
  puVar5 = &stack0xffffffcc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_1 = 2;
  this = (Action_1_Object_ *)
         func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  uStack_6 = uRam_?;
  func_?(&uStack_6,&UNK_?);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this = (Action_1_Object_ *)
         func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this != (Action_1_Object_ *)0x0) {
    profileID = 0;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this,(Object *)0x0,
               MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    profileID = (int32_t)TypeInfo__GetRequest;
    this_00 = (AssetBundleRequest *)func_?();
    if (this_00 != (AssetBundleRequest *)0x0) {
      profileID = 0;
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_00,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  profileID = (int32_t)&UNK_?;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        (*(pMVar1->klass->vtable).InitializeLeveling.methodPtr)();
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
    this = (DownloadHandler *)
           mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::Object]::
           ValueListBuilder_1_System_Object__1_get_Length
                     ((ValueListBuilder_1_System_Object__1 *)result,(MethodInfo *)0x0);
    if (this != (DownloadHandler *)0x0) {
      value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_get_text(this,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
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
            (*(pMVar2->klass->vtable).InitializeLeveling.methodPtr)
                      (pMVar2,pOVar1,(pMVar2->klass->vtable).InitializeLeveling.method);
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
  if (pLVar1 != (List_1_BadgeUrlData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral_Promotion_Promotion_01_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
    if (pBVar3 != (BadgeUrlData *)0x0) {
      BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,1,pSVar2,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
                 MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
      pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,StringLiteral_Promotion_Promotion_02_png,(MethodInfo *)0x0);
      pBVar3 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
      if (pBVar3 != (BadgeUrlData *)0x0) {
        BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,2,pSVar2,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
                   MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
        pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,StringLiteral_Promotion_Promotion_03_png,(MethodInfo *)0x0);
        pBVar3 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
        if (pBVar3 != (BadgeUrlData *)0x0) {
          BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,3,pSVar2,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
                     MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_
                    );
          pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar2,StringLiteral_Promotion_Promotion_04_png,(MethodInfo *)0x0);
          pBVar3 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
          if (pBVar3 != (BadgeUrlData *)0x0) {
            BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,4,pSVar2,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar1,(Object *)pBVar3,
                       MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_
                      );
            return pLVar1;
          }
        }
      }
    }
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
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
    if (pOVar1 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
      pOVar1[1].klass = (Object__Class *)0x0;
      pOVar1[1].monitor = (MonitorData *)0x64;
      pOVar1[2].klass = (Object__Class *)0x1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this,(Object *)0x1,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                );
      pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
      if (pOVar1 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
        pOVar1[1].klass = (Object__Class *)0x65;
        pOVar1[1].monitor = (MonitorData *)0xc8;
        pOVar1[2].klass = (Object__Class *)0x2;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)0x2,pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                  );
        pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
        if (pOVar1 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
          pOVar1[1].klass = (Object__Class *)0xc9;
          pOVar1[1].monitor = (MonitorData *)0x12c;
          pOVar1[2].klass = (Object__Class *)0x3;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this,(Object *)0x3,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                    );
          pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
          if (pOVar1 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
            pOVar1[1].klass = (Object__Class *)0x12d;
            pOVar1[1].monitor = (MonitorData *)0x190;
            pOVar1[2].klass = (Object__Class *)0x4;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this,(Object *)0x4,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                      );
            pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
            if (pOVar1 != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
              pOVar1[1].klass = (Object__Class *)0x191;
              pOVar1[1].monitor = (MonitorData *)0x1f4;
              pOVar1[2].klass = (Object__Class *)0x5;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this,(Object *)0x5,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                        );
              pOVar1 = (Object *)func_?(TypeInfo__XPLevelLimits);
              if (pOVar1 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                pOVar1[1].klass = (Object__Class *)0x1f5;
                pOVar1[1].monitor = (MonitorData *)0x258;
                pOVar1[2].klass = (Object__Class *)0x6;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this,(Object *)0x6,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                          );
                TypeInfo__LevelingManager->static_fields->TestLevelToLimits =
                     (Dictionary_2_System_Int32_XPLevelLimits_ *)this;
                func_?(&TypeInfo__LevelingManager->static_fields->TestLevelToLimits,this);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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

