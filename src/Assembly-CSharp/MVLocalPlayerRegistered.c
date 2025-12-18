
/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_Destroy
               (MVLocalPlayerRegistered *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (this->fields)._.xpProgress;
  if (object == (XPProgress *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar2 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,(Object *)object,
             MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
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
  DStack_3._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_3._version = 0;
  DStack_3._index = 0;
  DStack_3._current.key = 0;
  DStack_3._current._4_4_ = 0;
  DStack_3._current.value = (Object *)0x0;
  DStack_3._getEnumeratorRetType = 0;
  DStack_3._36_4_ = 0;
  QStack_4._q = (Queue_1_System_Object_ *)0x0;
  QStack_4._version = 0;
  QStack_4._index = 0;
  QStack_4._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar5 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar5 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pHStack_7 >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar5->fields)._version << 0x20);
    uStack_13 = 0;
    auStack_14._8_8_ = pDStack_12;
    pOStack_15 = (Object *)0x0;
    pHStack_7 = pHVar5;
    auStack_14._0_8_ = pHVar5;
code_?:
    while (bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_14,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar17 = pOStack_15, bVar16 != 0) {
      ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar18 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar17 == (Object *)0x0) goto code_?;
      pOVar19 = pOVar17[1].klass;
      if (pOVar19 == (Object__Class *)0x0) goto code_?;
      if ((pUVar2 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar20 = (**(code **)&(pOVar19->_0).image[4].typeCount)(pOVar19,pUVar2), cVar20 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar21 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar21 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pDStack_22 >> 0xc);
        lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      uStack_23 = (ulonglong)(uint)(pDVar21->fields)._version;
      uStack_24 = 2;
      uStack_25 = 0;
      uStack_26 = 0;
      DStack_3._version = (undefined4)uStack_23;
      DStack_3._index = uStack_23._4_4_;
      DStack_3._current.key = 0;
      DStack_3._current._4_4_ = 0;
      DStack_3._current.value = (Object *)0x0;
      DStack_3._getEnumeratorRetType = 2;
      DStack_3._36_4_ = 0;
      pHStack_7 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_12 = &DStack_3;
      pDStack_22 = pDVar21;
      DStack_3._dictionary = pDVar21;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_3,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar16 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_3._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_23 = 0;
        uStack_25 = 0;
        pDStack_22 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_3._current.value;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pDStack_22 >> 0xc);
          lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (ulonglong)(uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_3._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_4._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_3._current.value + 0x10))->_freeList;
        uStack_23 = CONCAT44(0xffffffff,QStack_4._version);
        uStack_25 = 0;
        QStack_4._q = (Queue_1_System_Object_ *)DStack_3._current.value;
        QStack_4._index = 0xffffffff;
        QStack_4._currentElement = (Object *)0x0;
        while (bVar16 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_4,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar17 = QStack_4._currentElement, bVar16 != 0) {
          ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_4._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar17,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar17;
        }
        QStack_4._index = 0xfffffffe;
        QStack_4._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar18,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar8 = func_?((((AsyncWWWManager__Class *)ppAVar18)->_0).byval_arg.data.dummy);
  uVar27 = func_?(*(undefined8 *)(lVar8 + 0xc0),4);
  FUN_?(&QStack_4,uVar27);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  if (pUVar2 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar17[1].klass,(Delegate *)pUVar2,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar19 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar19 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar19 == (Object__Class *)0x0)) goto code_?;
    pOVar17[1].klass = pOVar19;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)(pOVar17 + 1) >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  goto code_?;
}


/* Void InitializeLeveling(InitialLevelData) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_InitializeLeveling
               (MVLocalPlayerRegistered *this,InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__XPProgress);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    (this->fields)._._.level = (initialLevelData->fields).Level;
    pXVar1 = (XPProgress *)FUN_?(TypeInfo__XPProgress);
    XPProgress::XPProgress__ctor(pXVar1,(MVLocalPlayer *)this,initialLevelData,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._.xpProgress = pXVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.xpProgress >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pAVar7 = (this->fields)._.OnInitializeLeveling;
    if (pAVar7 != (Action *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
    }
    pXVar1 = (this->fields)._.xpProgress;
    if (pXVar1 != (XPProgress *)0x0) {
      pXVar8 = (pXVar1->fields).OnXPProgressData;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      uVar9 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__OnXPProgressDataChangeRegistered_XPProgressData_
                 ,(MethodInfo *)0x0);
      pXVar8 = (XPProgress_OnXPProgressDataDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pXVar8,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pXVar8 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pXVar1->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
      }
      else {
        pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar10 = pXVar8;
        }
        if (pXVar10 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          FUN_?(pXVar8,TypeInfo__XPProgress__OnXPProgressDataDelegate);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pXVar1->fields).OnXPProgressData = pXVar10;
        pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar10 = pXVar8;
        }
        if (pXVar10 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pXVar1->fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal
                ((MVLocalPlayer *)this,(this->fields)._._.level,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar12 != (MVGameControllerBase *)0x0) &&
          (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
         (pMVar14 = (pMVar13->fields).operationRequests,
         pMVar14 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MV__Common__NotificationType);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar12 != (MVGameControllerBase *)0x0) &&
            (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
           ((pMVar15 = (pMVar13->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0 &&
            (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar15,(MethodInfo *)0x0), pMVar16 != (MVLocalPlayer *)0x0)))) {
          if ((pMVar16->fields)._._ProfileID_k__BackingField == 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar12 != (MVGameControllerBase *)0x0) &&
              (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
             ((pMVar15 = (pMVar13->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0 &&
              (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar15,(MethodInfo *)0x0), pMVar16 != (MVLocalPlayer *)0x0)))) {
            if ((pMVar16->fields)._.playerState == 3) {
              return;
            }
            this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pOVar17 = (Object *)FUN_?();
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar15 = (pMVar13->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0))
                && (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar15,(MethodInfo *)0x0), pMVar16 != (MVLocalPlayer *)0x0)
                ) && (value = (Object *)FUN_?(uRam_?,&stack0x00000018),
                     this_01 !=
                     (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                      *)0x0)) {
              uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar17,value,
                         (InsertionBehavior__Enum)uVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pOVar17 = (Object *)FUN_?();
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar13 != (MVNetworkGame *)0x0) &&
                  (pMVar15 = (pMVar13->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0))
                 && (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (pMVar15,(MethodInfo *)0x0), pMVar16 != (MVLocalPlayer *)0x0
                    )) {
                uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar17,
                           (Object *)(pMVar16->fields)._._RegionCode_k__BackingField,
                           (InsertionBehavior__Enum)uVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pDVar18 = (Dictionary_2_System_Byte_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          (pDVar18,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                pOVar17 = (Object *)
                          FUN_?(TypeInfo__MV__Common__NotificationType,&stack0x00000018);
                if (pDVar18 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                  uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (pDVar18,0xc9,pOVar17,(InsertionBehavior__Enum)uVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (pDVar18,0xca,(Object *)this_01,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  pPVar19 = (pMVar14->fields).peer;
                  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c ==
                      0) {
                    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                  }
                  if (pPVar19 != (PhotonPeer *)0x0) {
                    SVar20 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                             SendReliable;
                    (*(pPVar19->klass->vtable).SendOperation.methodPtr)();
                    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((pMVar13 != (MVNetworkGame *)0x0) &&
                        (pMVar15 = (pMVar13->fields).playerContainer,
                        pMVar15 != (MVPlayerContainer *)0x0)) &&
                       ((pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                             (pMVar15,(MethodInfo *)0x0),
                        pMVar16 != (MVLocalPlayer *)0x0 &&
                        (this_00 = (pMVar16->fields)._._SubscriptionRules_k__BackingField,
                        this_00 != (SubscriptionRulesWrapper *)0x0)))) {
                      bVar21 = MVWorldObject.dll::MV::WorldObject::Subscription::
                               SubscriptionRulesWrapper::SubscriptionRulesWrapper_HasBenefit
                                         (this_00,SubscriptionBenefit__Enum_XPBoost,
                                          (MethodInfo *)0x0);
                      if (bVar21 == 0) {
                        return;
                      }
                      pDVar18 = (Dictionary_2_System_Byte_System_Object_ *)
                                FUN_?(
                                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                             );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (pDVar18,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      pOVar17 = (Object *)
                                FUN_?(TypeInfo__MV__Common__NotificationType,
                                              &stack0x00000018);
                      if (pDVar18 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                        uVar22 = CONCAT71(SVar20._1_7_,2);
                        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                    ->klass->rgctx_data[0x22].method;
                        uVar23 = (undefined7)((ulonglong)method_00 >> 8);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                  (pDVar18,0xc9,pOVar17,(InsertionBehavior__Enum)uVar22,method_00);
                        uVar9 = CONCAT71(uVar23,0xca);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                  (pDVar18,0xca,(Object *)this_01,
                                   (InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)uVar22 >> 8),2),
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                   ->klass->rgctx_data[0x22].method);
                        pPVar19 = (pMVar14->fields).peer;
                        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                                     field_0x1c == 0) {
                          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                        }
                        if (pPVar19 != (PhotonPeer *)0x0) {
                          (*(pPVar19->klass->vtable).SendOperation.methodPtr)
                                    (pPVar19,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x40),pDVar18,
                                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields
                                     ->SendReliable,(pPVar19->klass->vtable).SendOperation.method);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void LevelCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::MVLocalPlayerRegistered_LevelCallback
               (MVLocalPlayerRegistered *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((result != (UnityWebRequest *)0x0) &&
     (pDVar1 = (result->fields).m_DownloadHandler, pDVar1 != (DownloadHandler *)0x0)) {
    value = (String *)
            (*(pDVar1->klass->vtable).GetText.methodPtr)
                      (pDVar1,(pDVar1->klass->vtable).GetText.method);
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar2 = int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_;
    if ((int_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<int>_System__String_->
        field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar2);
      }
    }
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    lVar3 = *(longlong *)(pMVar2->field7_0x38).methodMetadataHandle;
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      LOCK();
      UNLOCK();
      if (*(longlong *)(lVar3 + 0x38) == 0) {
        FUN_?(lVar3);
      }
    }
    lVar4 = **(longlong **)(lVar3 + 0x38);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    type = (Type *)0x0;
    if (lVar4 != 0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(lVar4,1);
      type = (Type *)FUN_?(lVar4 + 0x20);
    }
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                       (value,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_?(lVar3);
    }
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class == *(Il2CppClass **)(lVar3 + 0x40)) {
        iVar6 = *(int *)&pOVar5[1].klass;
        iVar7 = (this->fields)._._.level;
        (this->fields)._._.level = iVar6;
        if ((iVar7 != iVar6) &&
           ((this->fields)._._.OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
          pUVar8 = (this->fields)._._.OnLevelChanged;
          (*(pUVar8->fields)._._.invoke_impl)
                    ((pUVar8->fields)._._.method_code,iVar6,(pUVar8->fields)._._.method);
        }
        return;
      }
      FUN_?(pOVar5,lVar3);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnLevelChangedLocalReceivedLevelData(Int32) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnLevelChangedLocalReceivedLevelData
               (MVLocalPlayerRegistered *this,int32_t level,MethodInfo *method)

{
  MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal((MVLocalPlayer *)this,level,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
      (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
      pMVar6 != (MVLocalPlayer *)0x0)))) {
    if ((pMVar6->fields)._._ProfileID_k__BackingField == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
        (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
        pMVar6 != (MVLocalPlayer *)0x0)))) {
      if ((pMVar6->fields)._.playerState == 3) {
        return;
      }
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,9);
      pOVar7 = (Object *)FUN_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
         (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
         pMVar6 != (MVLocalPlayer *)0x0)) {
        aiStackX_18[0] = (pMVar6->fields)._._ActorNr_k__BackingField;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,value,
                     (InsertionBehavior__Enum)uVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0xc);
          pOVar7 = (Object *)FUN_?();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar2 != (MVNetworkGame *)0x0) &&
              (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
             (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0)) {
            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,
                       (Object *)(pMVar6->fields)._._RegionCode_k__BackingField,
                       (InsertionBehavior__Enum)uVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar9 = (Dictionary_2_System_Byte_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                   );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (pDVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            aiStackX_18[0] = 3;
            pOVar7 = (Object *)FUN_?(TypeInfo__MV__Common__NotificationType,aiStackX_18);
            if (pDVar9 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (pDVar9,0xc9,pOVar7,(InsertionBehavior__Enum)uVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (pDVar9,0xca,(Object *)this_01,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pPVar10 = (pMVar3->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar10 != (PhotonPeer *)0x0) {
                SVar11 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable;
                (*(pPVar10->klass->vtable).SendOperation.methodPtr)();
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 != (MVNetworkGame *)0x0) &&
                    (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0))
                   && ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                           (pMVar5,(MethodInfo *)0x0),
                       pMVar6 != (MVLocalPlayer *)0x0 &&
                       (this_00 = (pMVar6->fields)._._SubscriptionRules_k__BackingField,
                       this_00 != (SubscriptionRulesWrapper *)0x0)))) {
                  bVar12 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                          ::SubscriptionRulesWrapper_HasBenefit
                                    (this_00,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                  if (bVar12 == 0) {
                    return;
                  }
                  pDVar9 = (Dictionary_2_System_Byte_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                         );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object___ctor
                            (pDVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                            );
                  aiStackX_18[0] = 0x1d;
                  pOVar7 = (Object *)
                           FUN_?(TypeInfo__MV__Common__NotificationType,aiStackX_18);
                  if (pDVar9 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                    uVar13 = CONCAT71(SVar11._1_7_,2);
                    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                ->klass->rgctx_data[0x22].method;
                    uVar14 = (undefined7)((ulonglong)method_00 >> 8);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (pDVar9,0xc9,pOVar7,(InsertionBehavior__Enum)uVar13,method_00);
                    uVar8 = CONCAT71(uVar14,0xca);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (pDVar9,0xca,(Object *)this_01,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    pPVar10 = (pMVar3->fields).peer;
                    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                        == 0) {
                      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                    }
                    if (pPVar10 != (PhotonPeer *)0x0) {
                      (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                                (pPVar10,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x40),pDVar9,
                                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                 SendReliable,(pPVar10->klass->vtable).SendOperation.method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnXPProgressDataChangeRegistered(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayerRegistered::
     MVLocalPlayerRegistered_OnXPProgressDataChangeRegistered
               (MVLocalPlayerRegistered *this,XPProgressData *xpProgress,MethodInfo *method)

{
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
                  MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((xpProgress != (XPProgressData *)0x0) &&
     (pXVar1 = (xpProgress->fields).xpLevelLimits, pXVar1 != (XPLevelLimits *)0x0)) {
    if ((pXVar1->fields)._NextXP_k__BackingField <= (pXVar1->fields)._PrevXP_k__BackingField) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_prevXp____nextXp);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
      FUN_?(pEVar3,uVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar6 = (xpProgress->fields).playerCurrentXP;
    if (iVar6 < (pXVar1->fields)._PrevXP_k__BackingField) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_currentXp___prevXp);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
      FUN_?(pEVar3,uVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (iVar6 < (pXVar1->fields)._NextXP_k__BackingField) {
      if (iVar6 < 0) {
        uVar2 = func_?(&TypeInfo__System__Exception);
        pEVar3 = (Exception *)func_?(uVar2);
        pSVar4 = (String *)func_?(&StringLiteral_currentXp___0);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
        FUN_?(pEVar3,uVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationController);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_You_gained__0__XP_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields)._.OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        pXVar7 = (this->fields)._.OnXPProgressData;
        (*(pXVar7->fields)._._.invoke_impl)((pXVar7->fields)._._.method_code);
      }
      pSVar4 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
      aiStackX_10[0] = (xpProgress->fields).xpDelta;
      arg0 = (Object *)FUN_?(uRam_?,aiStackX_10);
      PStack_8._arg0 = (Object *)0x0;
      PStack_8._arg1 = (Object *)0x0;
      PStack_8._arg2 = (Object *)0x0;
      PStack_8._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_8,arg0,(MethodInfo *)0x0);
      PStack_9._arg0 = PStack_8._arg0;
      PStack_9._arg1 = PStack_8._arg1;
      PStack_9._arg2 = PStack_8._arg2;
      PStack_9._args = PStack_8._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar4,&PStack_9,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_PushNotification
                (pSVar4,(Sprite *)0x0,5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar10 == (MVGameControllerBase *)0x0) ||
          (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
         (pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 == (GameEventManager *)0x0))
      goto code_?;
      if ((pGVar12->fields).OnXPRewarded != (Action_1_Int32_ *)0x0) {
        pAVar13 = (pGVar12->fields).OnXPRewarded;
        (*(pAVar13->fields)._._.invoke_impl)
                  ((pAVar13->fields)._._.method_code,(xpProgress->fields).xpDelta,
                   (pAVar13->fields)._._.method);
      }
    }
    else {
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_xp_level_level__profile_id_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = MVCommon.dll::MV::Common::Urls::Urls_get_API((MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar4,StringLiteral_xp_level_level__profile_id_,(MethodInfo *)0x0);
      value = (this->fields)._._._ProfileID_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      PStack_8._arg0 = (Object *)0x0;
      PStack_8._arg1 = (Object *)0x0;
      str1 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,(ReadOnlySpan_1_Char_ *)&PStack_8,(IFormatProvider *)0x0,
                        (MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,str1,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVLocalPlayerRegistered__LevelCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar4,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

