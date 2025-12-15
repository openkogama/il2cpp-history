
/* Void DownloadWhenPossible() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__DownloadWhenPossible
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
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
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,method->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,method->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    requestPriority = (this->fields).requestPriority;
    onAssetSetAction = (this->fields)._.onAssetSetAction;
    url = (this->fields)._.url;
    if ((this->fields).useCache == 0) {
      StreamingAsset::StreamingAsset_Download_NonCached
                ((StreamingAsset *)this,url,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
    else {
      StreamingAsset::StreamingAsset_Download_Cached
                ((StreamingAsset *)this,url,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__OnDestroy
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (this == (StreamingAsset_2_System_Object_System_Object_ *)0x0) {
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
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar2 = (this->fields)._.onAssetSetAction;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar2 == (UnityAction *)0x0) {
    (this->fields)._.onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 == (UnityAction *)0x0) {
      FUN_?(pUVar2,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._.onAssetSetAction = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 == (UnityAction *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.onAssetSetAction >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this,(this->klass->vtable).OnDownloadFinished.method,
             (MethodInfo *)0x0);
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
  DStack_8._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = 0;
  DStack_8._current._4_4_ = 0;
  DStack_8._current.value = (Object *)0x0;
  DStack_8._getEnumeratorRetType = 0;
  DStack_8._36_4_ = 0;
  QStack_9._q = (Queue_1_System_Object_ *)0x0;
  QStack_9._version = 0;
  QStack_9._index = 0;
  QStack_9._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar10 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar10 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pHStack_11 >> 0xc);
      lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar5 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar13 = uVar7 == *puVar5;
        if (bVar13) {
          *puVar5 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar10->fields)._version << 0x20);
    uStack_15 = 0;
    auStack_16._8_8_ = pDStack_14;
    pOStack_17 = (Object *)0x0;
    pHStack_11 = pHVar10;
    auStack_16._0_8_ = pHVar10;
code_?:
    while (bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_16,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar19 = pOStack_17, bVar18 != 0) {
      ppAVar20 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar20 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar19 == (Object *)0x0) goto code_?;
      pOVar21 = pOVar19[1].klass;
      if (pOVar21 == (Object__Class *)0x0) goto code_?;
      if ((this_02 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar22 = (**(code **)&(pOVar21->_0).image[4].typeCount)(pOVar21,this_02), cVar22 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar23 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar23 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pDStack_24 >> 0xc);
        lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar5 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar13 = uVar7 == *puVar5;
          if (bVar13) {
            *puVar5 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      uStack_25 = (ulonglong)(uint)(pDVar23->fields)._version;
      uStack_26 = 2;
      uStack_27 = 0;
      uStack_28 = 0;
      DStack_8._version = (undefined4)uStack_25;
      DStack_8._index = uStack_25._4_4_;
      DStack_8._current.key = 0;
      DStack_8._current._4_4_ = 0;
      DStack_8._current.value = (Object *)0x0;
      DStack_8._getEnumeratorRetType = 2;
      DStack_8._36_4_ = 0;
      pHStack_11 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_14 = &DStack_8;
      pDStack_24 = pDVar23;
      DStack_8._dictionary = pDVar23;
      while (bVar18 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_8,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar18 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_8._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_25 = 0;
        uStack_27 = 0;
        pDStack_24 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_8._current.value;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&pDStack_24 >> 0xc);
          lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar12 + 0xADDR);
            puVar5 = (ulonglong *)(lVar12 + 0xADDR);
            LOCK();
            bVar13 = uVar7 == *puVar5;
            if (bVar13) {
              *puVar5 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_8._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_9._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_8._current.value + 0x10))->_freeList;
        uStack_25 = CONCAT44(0xffffffff,QStack_9._version);
        uStack_27 = 0;
        QStack_9._q = (Queue_1_System_Object_ *)DStack_8._current.value;
        QStack_9._index = 0xffffffff;
        QStack_9._currentElement = (Object *)0x0;
        while (bVar18 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_9,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar19 = QStack_9._currentElement, bVar18 != 0) {
          ppAVar20 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_9._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar19,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar19;
        }
        QStack_9._index = 0xfffffffe;
        QStack_9._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar20 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar20,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar12 = func_?((((AsyncWWWManager__Class *)ppAVar20)->_0).byval_arg.data.dummy);
  uVar29 = func_?(*(undefined8 *)(lVar12 + 0xc0),4);
  FUN_?(&QStack_9,uVar29);
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
  if (this_02 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar19[1].klass,(Delegate *)this_02,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar21 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar21 = (Object__Class *)
                  FUN_?(unaff_RDI,
                                TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar20 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar21 == (Object__Class *)0x0)) goto code_?;
    pOVar19[1].klass = pOVar21;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)(pOVar19 + 1) >> 0xc);
      lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar5 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar13 = uVar7 == *puVar5;
        if (bVar13) {
          *puVar5 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  goto code_?;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__OnDownloadFinished
               (StreamingAsset_2_System_Object_System_Object_ *this,UnityWebRequest *www,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((www != (UnityWebRequest *)0x0) &&
     ((pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_get_error(www,(MethodInfo *)0x0), pSVar1 == (String *)0x0 ||
      ((pSVar1->fields)._stringLength == 0)))) {
    if ((this->fields).useCache == 0) {
      if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar2 = method->klass->rgctx_data[5].method;
      if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__StreamingAsset);
        LOCK();
        UNLOCK();
        if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar2);
        }
      }
      if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar3 = StreamingAsset::StreamingAsset_UnpackBundle
                         (www,((pMVar2->field7_0x38).rgctx_data)->method);
      routine = StreamingAsset::StreamingAsset_DelayedUnload(www,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      pvVar4 = method->klass->rgctx_data[4].rgctxDataDummy;
      bVar5 = iRam_? != 0;
      (this->fields).asset = pOVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).asset >> 0xc);
        pvVar4 = (void *)(ulonglong)(uVar6 & 0x3f);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (longlong)pvVar4;
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pUVar10 = (this->fields)._.onAssetSetAction;
      if (pUVar10 == (UnityAction *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar10->fields)._._.invoke_impl)
                ((pUVar10->fields)._._.method_code,(pUVar10->fields)._._.method,pvVar4);
      return;
    }
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                       (www,method->klass->rgctx_data[3].method);
    StreamingAsset_2_System_Object_System_Object__set_Asset
              (this,pOVar3,method->klass->rgctx_data[4].method);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__Start
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StreamedAsset_is_missing_a_refer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.url;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_StreamedAsset_is_missing_a_refer;
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
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  pMVar4 = method->klass->rgctx_data[2].method;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
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
  bVar5 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar5 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar6 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,pMVar4->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar6->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar8 = pUVar6;
      }
      if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar6,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar8;
      pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar6->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar8 = pUVar6;
      }
      if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar6,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar6 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,pMVar4->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar6->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar8 = pUVar6;
      }
      if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar6,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar8;
      pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar6->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar8 = pUVar6;
      }
      if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar6,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    requestPriority = (this->fields).requestPriority;
    onAssetSetAction = (this->fields)._.onAssetSetAction;
    pSVar1 = (this->fields)._.url;
    if ((this->fields).useCache == 0) {
      StreamingAsset::StreamingAsset_Download_NonCached
                ((StreamingAsset *)this,pSVar1,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
    else {
      StreamingAsset::StreamingAsset_Download_Cached
                ((StreamingAsset *)this,pSVar1,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
  }
  return;
}


/* StreamingAsset`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object___ctor
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).useCache = 1;
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_NOT_SET);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.url = StringLiteral_NOT_SET;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.url >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x3052a1b1,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Object get_Asset() */

Object * Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
         StreamingAsset_2_System_Object_System_Object__get_Asset
                   (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  return (this->fields).asset;
}


/* Object op_Implicit(StreamingAsset`2[System.Object,System.Object]) */

Object * Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
         StreamingAsset_2_System_Object_System_Object__op_Implicit
                   (StreamingAsset_2_System_Object_System_Object_ *a,MethodInfo *method)

{
  if (a != (StreamingAsset_2_System_Object_System_Object_ *)0x0) {
    return (a->fields).asset;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}


/* Void set_Asset(Object) */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__set_Asset
               (StreamingAsset_2_System_Object_System_Object_ *this,Object *value,MethodInfo *method
               )

{
  bVar1 = iRam_? != 0;
  (this->fields).asset = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).asset >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pUVar6 = (this->fields)._.onAssetSetAction;
  if (pUVar6 == (UnityAction *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar6->fields)._._.invoke_impl)
            ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method,method);
  return;
}

