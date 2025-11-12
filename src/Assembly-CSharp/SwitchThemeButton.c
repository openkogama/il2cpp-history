
/* Void Initialize(Int32, Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_Initialize
               (SwitchThemeButton *this,int32_t levelRequirement,int32_t goldReq,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 == (MVLocalPlayer *)0x0)) goto code_?;
  if ((pMVar4->fields)._.level < levelRequirement) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BadgeManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = (this->fields).levelReq;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    if (levelRequirement < 1) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (levelRequirement,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 (MethodInfo *)0x0);
    }
    pGVar5 = (this->fields).levelReq;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
    pGVar5 = (this->fields).memberUI;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pGVar5 = (this->fields).priceTag;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
        ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar4 == (MVLocalPlayer *)0x0 ||
         (this_00 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
         this_00 == (SubscriptionRulesWrapper *)0x0)))))) goto code_?;
    bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_00,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      pTVar7 = (this->fields).priceTagNumber;
      aIStack_8[0].m_value = goldReq;
      mscorlib.dll::System::Int32::Int32_ToString(aIStack_8,(MethodInfo *)0x0);
      if (pTVar7 == (Text *)0x0) goto code_?;
      (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7);
      pGVar5 = (this->fields).levelReq;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pGVar5 = (this->fields).priceTag;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (this->fields).memberUI;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      uVar9 = 0;
      goto code_?;
    }
    pGVar5 = (this->fields).levelReq;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pGVar5 = (this->fields).priceTag;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pGVar5 = (this->fields).memberUI;
  }
  if (pGVar5 != (GameObject *)0x0) {
    uVar9 = 1;
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,uVar9,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar5 == (GameObject *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pvVar11 = (pGVar5->fields)._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar11,uVar9);
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_OnDestroy
               (SwitchThemeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  QStack_2._q = (Queue_1_System_Object_ *)0x0;
  QStack_2._version = 0;
  QStack_2._index = 0;
  QStack_2._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar3 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar3 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pHStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar3->fields)._version << 0x20);
    uStack_11 = 0;
    auStack_12._8_8_ = pDStack_10;
    pOStack_13 = (Object *)0x0;
    pHStack_5 = pHVar3;
    auStack_12._0_8_ = pHVar3;
code_?:
    while (bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_12,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar15 = pOStack_13, bVar14 != 0) {
      ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar16 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar15 == (Object *)0x0) goto code_?;
      pOVar17 = pOVar15[1].klass;
      if (pOVar17 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar18 = (**(code **)&(pOVar17->_0).image[4].typeCount)(pOVar17,this_01), cVar18 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar19 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar19 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pDStack_20 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_21 = (ulonglong)(uint)(pDVar19->fields)._version;
      uStack_22 = 2;
      uStack_23 = 0;
      uStack_24 = 0;
      DStack_1._version = (undefined4)uStack_21;
      DStack_1._index = uStack_21._4_4_;
      DStack_1._current.key = 0;
      DStack_1._current._4_4_ = 0;
      DStack_1._current.value = (Object *)0x0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      pHStack_5 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_10 = &DStack_1;
      pDStack_20 = pDVar19;
      DStack_1._dictionary = pDVar19;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar14 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_21 = 0;
        uStack_23 = 0;
        pDStack_20 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&pDStack_20 >> 0xc);
          lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_2._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_1._current.value + 0x10))->_freeList;
        uStack_21 = CONCAT44(0xffffffff,QStack_2._version);
        uStack_23 = 0;
        QStack_2._q = (Queue_1_System_Object_ *)DStack_1._current.value;
        QStack_2._index = 0xffffffff;
        QStack_2._currentElement = (Object *)0x0;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_2,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar15 = QStack_2._currentElement, bVar14 != 0) {
          ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_2._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar15,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar15;
        }
        QStack_2._index = 0xfffffffe;
        QStack_2._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar16,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar6 = func_?((((AsyncWWWManager__Class *)ppAVar16)->_0).byval_arg.data.dummy);
  uVar25 = func_?(*(undefined8 *)(lVar6 + 0xc0),4);
  FUN_?(&QStack_2,uVar25);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar15[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar17 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar17 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar17 == (Object__Class *)0x0)) goto code_?;
    pOVar15[1].klass = pOVar17;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)(pOVar15 + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  goto code_?;
}


/* Void OnLevelTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_OnLevelTextureReceived
               (SwitchThemeButton *this,UnityWebRequest *www,MethodInfo *method)

{
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (DownloadHandlerTexture *)
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_GetCheckedDownloader
                        (www,
                         UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                        );
    if (this_01 != (DownloadHandlerTexture *)0x0) {
      pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
               DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                         (this_01,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).levelRequirementTextureAsset = pTVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).levelRequirementTextureAsset >> 0xc);
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
      this_00 = (this->fields).levelReqImage;
      if (this_00 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(Texture *)(this->fields).levelRequirementTextureAsset,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_Reset
               (SwitchThemeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar1 != (Button *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).button = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).button >> 0xc);
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
  return;
}


/* Void set_GoldRequirement(Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_set_GoldRequirement
               (SwitchThemeButton *this,int32_t value,MethodInfo *method)

{
  pTVar1 = (this->fields).priceTagNumber;
  aIStackX_10[0].m_value = value;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_LevelRequirement(Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_set_LevelRequirement
               (SwitchThemeButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).levelReq;
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < value) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    this_04 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_04,(Object *)this,
               MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AsyncWWWManager,this_04,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__BadgeManager);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__CachedTextureRequest);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_No_badges_was_loaded);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__Unity_2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_No_badges_was_loaded;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
              TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (this_02 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_02,value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar4 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        value = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
      }
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_03 = TypeInfo__BadgeManager->static_fields->badgeUrls;
      if ((this_03 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_03,value,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                             ), pOVar5 != (Object *)0x0)) {
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                            ((String *)pOVar5[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
        this_05 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
        AsyncWebRequest::AsyncWebRequest__ctor
                  (this_05,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                   WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
        *(undefined1 *)&this_05[1].klass = 0;
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
        if (this_05 != (AsyncWebRequest *)0x0) {
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar6 <= (this_05->klass->_1).naturalAligment) &&
             ((this_05->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar7 = this_05->klass;
            bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar7->_1).naturalAligment < bVar6) ||
               ((pAVar7->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_05,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar7,
                            unaff_RBX);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            cVar8 = (*(code *)pAVar7[1]._0.image)
                              (this_05,TypeInfo__AsyncWWWManager->static_fields->cache,
                               pAVar7[1]._0.gc_desc);
            if (cVar8 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (((this_05 != (AsyncWebRequest *)0x0) &&
            (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                (this_05->fields).requestPriority,
                                MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                               ), pOVar5 != (Object *)0x0)) {
          if (pOVar5[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar5[2].klass == *(int *)&((pOVar5[1].klass)->_0).namespaze) {
              pOVar9 = pOVar5[1].klass;
              iVar10 = *(int *)&(pOVar9->_0).namespaze * 2;
              if (iVar10 < *(int *)&(pOVar9->_0).namespaze + 4) {
                iVar10 = *(int *)&(pOVar9->_0).namespaze + 4;
              }
              FUN_?(pOVar5,iVar10,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar5[1].klass,(longlong)*(int *)((longlong)&pOVar5[1].monitor + 4),
                            this_05);
              if (pOVar5[1].klass != (Object__Class *)0x0) {
                iVar11 = *(int *)((longlong)&pOVar5[1].monitor + 4) + 1;
                iVar10 = 0;
                if (iVar11 != *(int *)&((pOVar5[1].klass)->_0).namespaze) {
                  iVar10 = iVar11;
                }
                *(int *)((longlong)&pOVar5[1].monitor + 4) = iVar10;
                *(int *)&pOVar5[2].klass = *(int *)&pOVar5[2].klass + 1;
                piVar12 = (int *)((longlong)&pOVar5[2].klass + 4);
                *piVar12 = *piVar12 + 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar13 = (this_01->fields)._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar13,0);
  return;
}

