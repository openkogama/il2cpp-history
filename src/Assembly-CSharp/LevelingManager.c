
/* InitialLevelData CreateInitialLevelData() */

InitialLevelData *
Assembly-CSharp.dll::LevelingManager::LevelingManager_CreateInitialLevelData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InitialLevelData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (InitialLevelData *)FUN_?(TypeInfo__InitialLevelData);
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar2 = LevelingManager_TestBadgeUrlData((MethodInfo *)0x0);
  if (pIVar1 != (InitialLevelData *)0x0) {
    bVar3 = iRam_? != 0;
    (pIVar1->fields).BadgeUrlData = pLVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pIVar1->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (pIVar1->fields).Level = 2;
    (pIVar1->fields).XP = 0x78;
    this = TypeInfo__LevelingManager->static_fields->TestLevelToLimits;
    if (this != (Dictionary_2_System_Int32_XPLevelLimits_ *)0x0) {
      pXVar8 = (XPLevelLimits *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this,2,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                         );
      bVar3 = iRam_? != 0;
      (pIVar1->fields).XPLevelLimits = pXVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(pIVar1->fields).XPLevelLimits >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      return pIVar1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pIVar1 = (InitialLevelData *)(*pcVar9)();
  return pIVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (UnityAction_1_System_Object_ *)
         FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,
             MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,(MethodInfo *)0x0);
  FUN_?();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Initialize
               (int32_t profileID,MethodInfo *method)

{
  aIStackX_8[0].m_value = profileID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_xp_level_init_data__profile_id_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (TypeInfo__MV__Common__Urls->static_fields->api,
                      StringLiteral_xp_level_init_data__profile_id_,(MethodInfo *)0x0);
  str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
  AsyncWebRequest::AsyncWebRequest__ctor
            (this_01,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedGetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
    return;
  }
  if (this_01 != (AsyncWebRequest *)0x0) {
    bVar2 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
    if ((bVar2 <= (this_01->klass->_1).naturalAligment) &&
       ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__CachedGetRequest)) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar3 = this_01->klass;
      bVar2 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((pAVar3->_1).naturalAligment < bVar2) ||
         ((pAVar3->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        FUN_?(this_01,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar3,unaff_RBX
                     );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar5 = (*(code *)pAVar3[1]._0.image)
                        (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                         pAVar3[1]._0.gc_desc);
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (((this_01 != (AsyncWebRequest *)0x0) &&
      (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                          (this_01->fields).requestPriority,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         ), pOVar6 != (Object *)0x0)) {
    if (pOVar6[1].klass != (Object__Class *)0x0) {
      if (*(int *)&pOVar6[2].klass == *(int *)&((pOVar6[1].klass)->_0).namespaze) {
        pOVar7 = pOVar6[1].klass;
        iVar8 = *(int *)&(pOVar7->_0).namespaze * 2;
        if (iVar8 < *(int *)&(pOVar7->_0).namespaze + 4) {
          iVar8 = *(int *)&(pOVar7->_0).namespaze + 4;
        }
        FUN_?(pOVar6,iVar8,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      if (pOVar6[1].klass != (Object__Class *)0x0) {
        FUN_?(pOVar6[1].klass,(longlong)*(int *)((longlong)&pOVar6[1].monitor + 4),this_01);
        if (pOVar6[1].klass != (Object__Class *)0x0) {
          iVar9 = *(int *)((longlong)&pOVar6[1].monitor + 4) + 1;
          iVar8 = 0;
          if (iVar9 != *(int *)&((pOVar6[1].klass)->_0).namespaze) {
            iVar8 = iVar9;
          }
          *(int *)((longlong)&pOVar6[1].monitor + 4) = iVar8;
          *(int *)&pOVar6[2].klass = *(int *)&pOVar6[2].klass + 1;
          piVar10 = (int *)((longlong)&pOVar6[2].klass + 4);
          *piVar10 = *piVar10 + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Notify(InitialLevelData) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Notify
               (InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    badgeUrlDatas = (initialLevelData->fields).BadgeUrlData;
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_Initialize(badgeUrlDatas,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (this = (pMVar2->fields).playerContainer, this != (MVPlayerContainer *)0x0)) &&
       (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      (*(pMVar3->klass->vtable).InitializeLeveling.methodPtr)
                (pMVar3,initialLevelData,(pMVar3->klass->vtable).InitializeLeveling.method);
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__LevelingManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
      if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized != (UnityAction *)0x0) {
        if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pUVar4 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        if (pUVar4 == (UnityAction *)0x0) goto code_?;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,(pUVar4->fields)._._.method);
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInitialData(UnityWebRequest) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_OnInitialData
               (UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InitialLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<InitialLevelData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Text_is_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_extract_inital_level_d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Download_Handler_is_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Result_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((result == (UnityWebRequest *)0x0) ||
     (pDVar1 = (result->fields).m_DownloadHandler, pDVar1 == (DownloadHandler *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (String *)
            (*(pDVar1->klass->vtable).GetText.methodPtr)
                      (pDVar1,(pDVar1->klass->vtable).GetText.method);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      (pSVar3,
                       InitialLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<InitialLevelData>_System__String_
                      );
  if (pOVar4 == (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_extract_inital_level_d,(MethodInfo *)0x0);
    if ((result->fields).m_DownloadHandler != (DownloadHandler *)0x0) {
      lVar5 = (*(((result->fields).m_DownloadHandler)->klass->vtable).GetText.methodPtr)();
      if (lVar5 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Text_is_null,(MethodInfo *)0x0);
      }
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = StringLiteral_Download_Handler_is_null;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar6 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,2,pSVar3);
    return;
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar4 != (Object *)0x0) {
    badgeUrlDatas = pOVar4[1].klass;
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_Initialize((List_1_BadgeUrlData_ *)badgeUrlDatas,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar7 != (MVGameControllerBase *)0x0) &&
         (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
        (this = (pMVar8->fields).playerContainer, this != (MVPlayerContainer *)0x0)) &&
       (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0),
       pMVar9 != (MVLocalPlayer *)0x0)) {
      (*(pMVar9->klass->vtable).InitializeLeveling.methodPtr)
                (pMVar9,pOVar4,(pMVar9->klass->vtable).InitializeLeveling.method);
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__LevelingManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
      if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized != (UnityAction *)0x0) {
        if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pUVar10 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        if (pUVar10 == (UnityAction *)0x0) goto code_?;
        (*(pUVar10->fields)._._.invoke_impl)
                  ((pUVar10->fields)._._.method_code,(pUVar10->fields)._._.method);
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar12;
            LOCK();
            uVar14 = *puVar12;
            if (uVar13 == uVar14) {
              *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar14);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[BadgeUrlData] TestBadgeUrlData() */

List_1_BadgeUrlData_ *
Assembly-CSharp.dll::LevelingManager::LevelingManager_TestBadgeUrlData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeUrlData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<BadgeUrlData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Promotion_Promotion_03_png);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Promotion_Promotion_04_png);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Promotion_Promotion_02_png);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Promotion_Promotion_01_png);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_BadgeUrlData_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar2,StringLiteral_Promotion_Promotion_01_png,(MethodInfo *)0x0);
  pBVar3 = (BadgeUrlData *)FUN_?(TypeInfo__BadgeUrlData);
  BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,1,pSVar2,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_BadgeUrlData_ *)0x0) {
    FUN_?(pLVar1,pBVar3);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,StringLiteral_Promotion_Promotion_02_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)FUN_?(TypeInfo__BadgeUrlData);
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,2,pSVar2,(MethodInfo *)0x0);
    FUN_?(pLVar1,pBVar3);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,StringLiteral_Promotion_Promotion_03_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)FUN_?(TypeInfo__BadgeUrlData);
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,3,pSVar2,(MethodInfo *)0x0);
    FUN_?(pLVar1,pBVar3);
    pSVar2 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,StringLiteral_Promotion_Promotion_04_png,(MethodInfo *)0x0);
    pBVar3 = (BadgeUrlData *)FUN_?(TypeInfo__BadgeUrlData);
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar3,4,pSVar2,(MethodInfo *)0x0);
    FUN_?(pLVar1,pBVar3);
    return pLVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pLVar1 = (List_1_BadgeUrlData_ *)(*pcVar4)();
  return pLVar1;
}


/* LevelingManager() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPLevelLimits);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__)
  ;
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  *(undefined4 *)&pOVar1[1].klass = 0;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 100;
  *(undefined4 *)&pOVar1[1].monitor = 1;
  if (this == (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,1,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  *(undefined4 *)&pOVar1[1].klass = 0x65;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 200;
  *(undefined4 *)&pOVar1[1].monitor = 2;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,2,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  *(undefined4 *)&pOVar1[1].klass = 0xc9;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 300;
  *(undefined4 *)&pOVar1[1].monitor = 3;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,3,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  *(undefined4 *)&pOVar1[1].klass = 0x12d;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 400;
  *(undefined4 *)&pOVar1[1].monitor = 4;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,4,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  *(undefined4 *)&pOVar1[1].klass = 0x191;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 500;
  *(undefined4 *)&pOVar1[1].monitor = 5;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,5,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__XPLevelLimits);
  *(undefined4 *)&pOVar1[1].klass = 0x1f5;
  *(undefined4 *)((longlong)&pOVar1[1].klass + 4) = 600;
  *(undefined4 *)&pOVar1[1].monitor = 6;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this,6,pOVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__LevelingManager->static_fields->TestLevelToLimits =
       (Dictionary_2_System_Int32_XPLevelLimits_ *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__LevelingManager->static_fields->TestLevelToLimits >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Boolean get_IsInitialized() */

bool Assembly-CSharp.dll::LevelingManager::LevelingManager_get_IsInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  return TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField;
}


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = value;
  return;
}

