
/* Void Destroy() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_Destroy(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
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
             MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_,
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


/* Void Download(String) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_Download
               (SoundLoader *this,String *soundUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_asset_info_for_au);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (soundUrl != (String *)0x0) {
    if ((soundUrl->fields)._stringLength == 0) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Could_not_find_asset_info_for_au,(this->fields).currentUrl,
                          (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,soundUrl,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      length = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                         (&(pSVar1->fields)._firstChar,0x2f,(pSVar1->fields)._stringLength,
                          (MethodInfo *)0x0);
      str0 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,length,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar1,length,(pSVar1->fields)._stringLength - length,(MethodInfo *)0x0);
      if (pSVar1 != (String *)0x0) {
        pSVar1 = mscorlib.dll::System::String::String_ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_1_System_Object_ *)
                 FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
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
                   MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_00 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
        AsyncWebRequest::AsyncWebRequest__ctor
                  (this_00,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
                   WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
        AsyncWWWManager::AsyncWWWManager_WWWRequest(this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LoadSound() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_LoadSound(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundLoader__LoadSound__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).url;
  pSVar2 = (this->fields).currentUrl;
  if ((pSVar1 == pSVar2) ||
     ((((pSVar1 != (String *)0x0 && (pSVar2 != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(pSVar2->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 != 0)))) {
    pAVar4 = (this->fields).audioSource;
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
    if (pAVar4 != (AudioSource *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pSVar5 = (this->fields).callback;
        if (pSVar5 != (SoundLoader_UpdateSoundCallback *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar5->fields)._._.invoke_impl)
                    ((pSVar5->fields)._._.method_code,(pSVar5->fields)._._.method);
          return;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__Common__Urls);
      }
      pUVar7 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
               FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
      pUVar7 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pUVar7 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
             (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      }
      else {
        pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar7->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar9 = pUVar7;
        }
        if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          FUN_?(pUVar7,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar9;
        pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar7->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar9 = pUVar7;
        }
        if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          FUN_?(pUVar7,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      SoundLoader_StopAndDestroySound(this,(MethodInfo *)0x0);
      bVar14 = iRam_? != 0;
      (this->fields).currentUrl = (this->fields).url;
      if (bVar14) {
        uVar10 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      pSVar1 = (this->fields).currentUrl;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AsyncWWWManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedAssetBundleRequest);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__StreamingAsset);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Could_not_find_asset_info_for_au);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar1 != (String *)0x0) {
        if ((pSVar1->fields)._stringLength == 0) {
          pSVar1 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Could_not_find_asset_info_for_au,
                               (this->fields).currentUrl,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar1,(MethodInfo *)0x0);
          return;
        }
        if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar2 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar1,(MethodInfo *)0x0);
        if (pSVar1 != (String *)0x0) {
          length = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                             (&(pSVar1->fields)._firstChar,0x2f,(pSVar1->fields)._stringLength,
                              (MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Substring_1
                              (pSVar1,0,length,(MethodInfo *)0x0);
          pSVar1 = mscorlib.dll::System::String::String_Substring_1
                              (pSVar1,length,(pSVar1->fields)._stringLength - length,
                               (MethodInfo *)0x0);
          if (pSVar1 != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_ToLowerInvariant
                                (pSVar1,(MethodInfo *)0x0);
            pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                (pSVar2,pSVar1,(MethodInfo *)0x0);
            pUVar15 = (UnityAction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar15,(Object *)this,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                      ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar15,(MethodInfo *)0x0
                      );
            pUVar15 = (UnityAction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar15,(Object *)this,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_00 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
            AsyncWebRequest::AsyncWebRequest__ctor
                      (this_00,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar15,
                       WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
            AsyncWWWManager::AsyncWWWManager_WWWRequest(this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar7 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar7 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
    if (pUVar7 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar7->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar9 = pUVar7;
      }
      if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar7,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar9;
      pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar7->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar9 = pUVar7;
      }
      if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar7,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
  }
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_OnDownloadFinished
               (SoundLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__AudioClip_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::AudioClip>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_download__www_error__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      SoundLoader_StopAndDestroySound(this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
        FUN_?();
      }
      value = (AudioResource *)
              StreamingAsset::StreamingAsset_UnpackBundle_Cached
                        (www,
                         UnityEngine__AudioClip_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::AudioClip>_UnityEngine__Networking__UnityWebRequest_
                        );
      this_00 = (this->fields).audioSource;
      if (this_00 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (this_00,value,(MethodInfo *)0x0);
      if ((this->fields).callback != (SoundLoader_UpdateSoundCallback *)0x0) {
        pSVar2 = (this->fields).callback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->fields)._._.invoke_impl)
                  ((pSVar2->fields)._._.method_code,(pSVar2->fields)._._.method);
        return;
      }
    }
    else {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Failed_to_download__www_error__,pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopAndDestroySound() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_StopAndDestroySound
               (SoundLoader *this,MethodInfo *method)

{
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 == (AudioSource *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pAVar1->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 != '\0') {
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
              (pAVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateSound(AudioClip) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_UpdateSound
               (SoundLoader *this,AudioClip *clip,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
            (this_00,(AudioResource *)clip,(MethodInfo *)0x0);
  if ((this->fields).callback != (SoundLoader_UpdateSoundCallback *)0x0) {
    pSVar2 = (this->fields).callback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar2->fields)._._.invoke_impl)
              ((pSVar2->fields)._._.method_code,(pSVar2->fields)._._.method);
    return;
  }
  return;
}


/* SoundLoader() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader__ctor(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).currentUrl = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).url = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).url >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

