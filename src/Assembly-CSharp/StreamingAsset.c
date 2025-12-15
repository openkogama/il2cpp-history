
/* Void ClearCache() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_ClearCache(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StreamingAsset);
  }
  pHVar3 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
  if (pHVar3 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    if (0 < (pHVar3->fields)._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar3->fields)._slots,0,(pHVar3->fields)._lastIndex,(MethodInfo *)0x0);
      pIVar4 = (pHVar3->fields)._buckets;
      if (pIVar4 == (Int32__Array *)0x0) goto DAT_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar3->fields)._buckets,0,(int32_t)pIVar4->max_length,(MethodInfo *)0x0
                );
      (pHVar3->fields)._freeList = -1;
      (pHVar3->fields)._count = 0;
      (pHVar3->fields)._lastIndex = 0;
    }
    piVar5 = &(pHVar3->fields)._version;
    *piVar5 = *piVar5 + 1;
    pMVar6 = 
    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
    ;
    pHVar3 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
    if (pHVar3 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Collections__HashHelpers);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar7 = iRam_?;
      if ((pHVar3->fields)._count == 0) {
        (pHVar3->fields)._buckets = (Int32__Array *)0x0;
        if (iVar7 != 0) {
          uVar8 = (uint)((ulonglong)&pHVar3->fields >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
            iVar7 = iRam_?;
          } while (!bVar12);
        }
        (pHVar3->fields)._slots =
             (HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)0x0;
        if (iVar7 != 0) {
          uVar8 = (uint)((ulonglong)&(pHVar3->fields)._slots >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        piVar5 = &(pHVar3->fields)._version;
        *piVar5 = *piVar5 + 1;
        return;
      }
      iVar13 = (pHVar3->fields)._count;
      if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar13 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_GetPrime
                         (iVar13,(MethodInfo *)0x0);
      pvVar14 = pMVar6->klass->rgctx_data[0x23].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
        pvVar14 = (void *)FUN_?(pvVar14);
      }
      pHVar15 = (HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)
                FUN_?(pvVar14,iVar13);
      pIVar4 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,iVar13);
      uVar16 = 0;
      uVar8 = 0;
      if (0 < (pHVar3->fields)._lastIndex) {
        lVar9 = 0x20;
        pHVar17 = pHVar15->vector;
        uVar8 = uVar16;
        do {
          pHVar18 = (pHVar3->fields)._slots;
          if (pHVar18 == (HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)0x0) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((uint)pHVar18->max_length <= uVar16) goto DAT_?;
          if (-1 < *(int *)((longlong)
                            &((HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)
                             (pHVar18->vector + -2))->klass + lVar9)) {
            if (pHVar15 == (HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)0x0)
            goto code_?;
            if ((uint)pHVar15->max_length <= uVar8) {
DAT_?:
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            piVar5 = (int32_t *)
                     ((longlong)
                      &((HashSet_1_T_Slot_UnityEngine_Networking_UnityWebRequest___Array *)
                       (pHVar18->vector + -2))->klass + lVar9);
            iVar19 = piVar5[1];
            iVar20 = piVar5[2];
            iVar21 = piVar5[3];
            pHVar17->hashCode = *piVar5;
            pHVar17->next = iVar19;
            *(int32_t *)&pHVar17->value = iVar20;
            *(int32_t *)((longlong)&pHVar17->value + 4) = iVar21;
            func_?(&pHVar15->vector[(int)uVar8].value);
            if ((uint)pHVar15->max_length <= uVar8) goto DAT_?;
            uVar22 = pHVar17->hashCode % iVar13;
            if (pIVar4 == (Int32__Array *)0x0) goto code_?;
            if (((uint)pIVar4->max_length <= uVar22) ||
               (pHVar17->next = pIVar4->vector[(int)uVar22] + -1,
               (uint)pIVar4->max_length <= uVar22)) goto DAT_?;
            iVar7 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            pHVar17 = pHVar17 + 1;
            pIVar4->vector[(int)uVar22] = iVar7;
          }
          uVar16 = uVar16 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((int)uVar16 < (pHVar3->fields)._lastIndex);
      }
      iVar7 = iRam_?;
      (pHVar3->fields)._lastIndex = uVar8;
      (pHVar3->fields)._slots = pHVar15;
      if (iVar7 != 0) {
        uVar8 = (uint)((ulonglong)&(pHVar3->fields)._slots >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
          iVar7 = iRam_?;
        } while (!bVar12);
      }
      (pHVar3->fields)._buckets = pIVar4;
      if (iVar7 != 0) {
        uVar8 = (uint)((ulonglong)&pHVar3->fields >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      (pHVar3->fields)._freeList = -1;
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String DBUrlToServerUrl(String) */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DBUrlToServerUrl
                   (String *url,MethodInfo *method)

{
  if (url != (String *)0x0) {
    length = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                       (&(url->fields)._firstChar,0x2f,(url->fields)._stringLength,(MethodInfo *)0x0
                       );
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(url,0,length,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                       (url,length,(url->fields)._stringLength - length,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
        if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
          return pSVar2;
        }
        return (String *)**(undefined8 **)(lRam_? + 0xb8);
      }
      if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
        return pSVar1;
      }
      iVar3 = (pSVar1->fields)._stringLength;
      pSVar4 = (String *)FUN_?((pSVar2->fields)._stringLength + iVar3,pSVar2,0);
      if (pSVar4 == (String *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar5)();
        return pSVar1;
      }
      if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength) {
        puVar6 = &(pSVar4->fields)._firstChar;
        puVar7 = &(pSVar1->fields)._firstChar;
        uVar8 = (pSVar1->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
           ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
        }
        if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
          puVar7 = &(pSVar4->fields)._firstChar + iVar3;
          puVar6 = &(pSVar2->fields)._firstChar;
          uVar8 = (pSVar2->fields)._stringLength * 2;
          if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
             ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
            FUN_?();
          }
          else {
            mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                      ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
          }
          return pSVar4;
        }
        uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar10,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                    MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                   );
        FUN_?(pIVar10,uVar9);
        pcVar5 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar5)();
        return pSVar1;
      }
      uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar10,(MethodInfo *)0x0);
      uVar9 = func_?(&
                                  MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                 );
      FUN_?(pIVar10,uVar9);
      pcVar5 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar5)();
      return pSVar1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* IEnumerator DelayedUnload(UnityWebRequest) */

IEnumerator *
Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DelayedUnload
          (UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset___DelayedUnload_d__13);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__StreamingAsset___DelayedUnload_d__13);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)www;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void Download_Cached(String, UnityAction, WWWRequestPriority) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_Cached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

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
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).onAssetSetAction = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).onAssetSetAction >> 0xc);
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
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,url,(MethodInfo *)0x0);
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this,(this->klass->vtable).__unknown_1.method,(MethodInfo *)0x0);
  this_03 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
  AsyncWebRequest::AsyncWebRequest__ctor
            (this_03,pSVar8,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
             requestPriority,(MethodInfo *)0x0);
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
  if (this_03 != (AsyncWebRequest *)0x0) {
    bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
    if ((bVar9 <= (this_03->klass->_1).naturalAligment) &&
       ((this_03->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
        (Il2CppClass *)TypeInfo__CachedGetRequest)) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar10 = this_03->klass;
      bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((pAVar10->_1).naturalAligment < bVar9) ||
         ((pAVar10->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        FUN_?(this_03,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar10,unaff_RBX
                     );
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar11 = (*(code *)pAVar10[1]._0.image)
                        (this_03,TypeInfo__AsyncWWWManager->static_fields->cache,
                         pAVar10[1]._0.gc_desc);
      if (cVar11 != '\0') {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (((this_03 != (AsyncWebRequest *)0x0) &&
      (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
     (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           (this_03->fields).requestPriority,
                           MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                          ), pOVar12 != (Object *)0x0)) {
    if (pOVar12[1].klass != (Object__Class *)0x0) {
      if (*(int *)&pOVar12[2].klass == *(int *)&((pOVar12[1].klass)->_0).namespaze) {
        pOVar13 = pOVar12[1].klass;
        iVar14 = *(int *)&(pOVar13->_0).namespaze * 2;
        if (iVar14 < *(int *)&(pOVar13->_0).namespaze + 4) {
          iVar14 = *(int *)&(pOVar13->_0).namespaze + 4;
        }
        FUN_?(pOVar12,iVar14,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      if (pOVar12[1].klass != (Object__Class *)0x0) {
        FUN_?(pOVar12[1].klass,(longlong)*(int *)((longlong)&pOVar12[1].monitor + 4),this_03
                     );
        if (pOVar12[1].klass != (Object__Class *)0x0) {
          iVar15 = *(int *)((longlong)&pOVar12[1].monitor + 4) + 1;
          iVar14 = 0;
          if (iVar15 != *(int *)&((pOVar12[1].klass)->_0).namespaze) {
            iVar14 = iVar15;
          }
          *(int *)((longlong)&pOVar12[1].monitor + 4) = iVar14;
          *(int *)&pOVar12[2].klass = *(int *)&pOVar12[2].klass + 1;
          piVar16 = (int *)((longlong)&pOVar12[2].klass + 4);
          *piVar16 = *piVar16 + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Download_NonCached(String, UnityAction, WWWRequestPriority) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_NonCached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).onAssetSetAction = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).onAssetSetAction >> 0xc);
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
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,url,(MethodInfo *)0x0);
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this,(this->klass->vtable).__unknown_1.method,(MethodInfo *)0x0);
  this_03 = (AsyncWebRequest *)FUN_?(TypeInfo__AssetBundleRequest);
  AsyncWebRequest::AsyncWebRequest__ctor
            (this_03,pSVar8,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
             requestPriority,(MethodInfo *)0x0);
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
  if (this_03 != (AsyncWebRequest *)0x0) {
    bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
    if ((bVar9 <= (this_03->klass->_1).naturalAligment) &&
       ((this_03->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
        (Il2CppClass *)TypeInfo__CachedGetRequest)) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar10 = this_03->klass;
      bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((pAVar10->_1).naturalAligment < bVar9) ||
         ((pAVar10->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        FUN_?(this_03,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar10,unaff_RBX
                     );
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar11 = (*(code *)pAVar10[1]._0.image)
                        (this_03,TypeInfo__AsyncWWWManager->static_fields->cache,
                         pAVar10[1]._0.gc_desc);
      if (cVar11 != '\0') {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (((this_03 != (AsyncWebRequest *)0x0) &&
      (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
     (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           (this_03->fields).requestPriority,
                           MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                          ), pOVar12 != (Object *)0x0)) {
    if (pOVar12[1].klass != (Object__Class *)0x0) {
      if (*(int *)&pOVar12[2].klass == *(int *)&((pOVar12[1].klass)->_0).namespaze) {
        pOVar13 = pOVar12[1].klass;
        iVar14 = *(int *)&(pOVar13->_0).namespaze * 2;
        if (iVar14 < *(int *)&(pOVar13->_0).namespaze + 4) {
          iVar14 = *(int *)&(pOVar13->_0).namespaze + 4;
        }
        FUN_?(pOVar12,iVar14,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      if (pOVar12[1].klass != (Object__Class *)0x0) {
        FUN_?(pOVar12[1].klass,(longlong)*(int *)((longlong)&pOVar12[1].monitor + 4),this_03
                     );
        if (pOVar12[1].klass != (Object__Class *)0x0) {
          iVar15 = *(int *)((longlong)&pOVar12[1].monitor + 4) + 1;
          iVar14 = 0;
          if (iVar15 != *(int *)&((pOVar12[1].klass)->_0).namespaze) {
            iVar14 = iVar15;
          }
          *(int *)((longlong)&pOVar12[1].monitor + 4) = iVar14;
          *(int *)&pOVar12[2].klass = *(int *)&pOVar12[2].klass + 1;
          piVar16 = (int *)((longlong)&pOVar12[2].klass + 4);
          *piVar16 = *piVar16 + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_OnDestroy
               (StreamingAsset *this,MethodInfo *method)

{
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
  pUVar1 = (this->fields).onAssetSetAction;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).onAssetSetAction = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).onAssetSetAction >> 0xc);
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
            (this_02,(Object *)this,(this->klass->vtable).__unknown_1.method,(MethodInfo *)0x0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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


/* Object UnpackBundle[Object](UnityWebRequest) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle
                   (UnityWebRequest *www,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Asset_download_failed__Most_like);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AThere_are_multiple_objects_in_b);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unable_to_extract_asset_bundle_f);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_extract_bundle__);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
         DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent(www,(MethodInfo *)0x0);
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
  if (this != (AssetBundle *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (method->field7_0x38).rgctx_data[1].method;
      if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar1);
      }
      pvVar2 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      type = (Type *)0x0;
      if (pvVar2 != (void *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar3 = FUN_?(pvVar2,1);
        type = (Type *)FUN_?(lVar3 + 0x20);
      }
      if (cRam_? == '\0') {
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (type == (Type *)0x0) {
        uVar4 = func_?(&TypeInfo__System__NullReferenceException);
        this_00 = (NullReferenceException *)func_?(uVar4);
        pSVar5 = (String *)func_?(&StringLiteral_The_input_type_cannot_be_null_);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,pSVar5,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                    MethodInfo__UnityEngine__AssetBundle__LoadAllAssets_System__Type_
                                   );
        FUN_?(this_00,uVar4);
        pcVar6 = (code *)swi(3);
        pOVar7 = (Object *)(*pcVar6)();
        return pOVar7;
      }
      rawObjects = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                   AssetBundle_LoadAssetWithSubAssets_Internal
                             (this,::StringLiteral__,type,(MethodInfo *)0x0);
      pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_ConvertObjects
                         (rawObjects,(pMVar1->field7_0x38).rgctx_data[1].method);
      if (pOVar8 == (Object__Array *)0x0) goto code_?;
      if (pOVar8->max_length != 0) {
        if (1 < (int)pOVar8->max_length) {
          if (www == (UnityWebRequest *)0x0) goto code_?;
          pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
          str2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                 UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (pSVar5,StringLiteral_u000AThere_are_multiple_objects_in_b,str2,
                              (MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar5,(MethodInfo *)0x0);
        }
        if ((int)pOVar8->max_length != 0) {
          return pOVar8->vector[0];
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pOVar7 = (Object *)(*pcVar6)();
        return pOVar7;
      }
      if (www == (UnityWebRequest *)0x0) goto code_?;
      pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Attempt_to_extract_bundle__,pSVar5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
      pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Asset_download_failed__Most_like,pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  if (www == (UnityWebRequest *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Attempt_to_extract_bundle__,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  pSVar5 = StringLiteral_Unable_to_extract_asset_bundle_f;
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar5,(MethodInfo *)0x0);
  return (Object *)0x0;
}


/* Object UnpackBundle_Cached[Object](UnityWebRequest) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_Cached
                   (UnityWebRequest *www,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Add_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = StreamingAsset_UnpackBundle(www,((method->field7_0x38).rgctx_data)->method);
  this = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
  if (this != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)this,(Object *)www,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Add_UnityEngine__Networking__UnityWebRequest_
               ->klass->rgctx_data[0x15].method);
    return pOVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object UnpackBundle_NonCached[Object](UnityWebRequest, MonoBehaviour) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_NonCached
                   (UnityWebRequest *www,MonoBehaviour *coroutineHost,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = StreamingAsset_UnpackBundle(www,((method->field7_0x38).rgctx_data)->method);
  routine = StreamingAsset_DelayedUnload(www,(MethodInfo *)0x0);
  if (coroutineHost != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (coroutineHost,routine,(MethodInfo *)0x0);
    return pOVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* StreamingAsset() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__HashSet__
            );
  TypeInfo__StreamingAsset->static_fields->cachedAssetBundles = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__StreamingAsset->static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__StreamingAsset->static_fields->assetBundleUrl = (String *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__StreamingAsset->static_fields->assetBundleUrl >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* StreamingAsset() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset__ctor
               (StreamingAsset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_NOT_SET);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).url = StringLiteral_NOT_SET;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).url >> 0xc);
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


/* String get_AssetBundleUrl() */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_get_AssetBundleUrl(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AssetBundles_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__StreamingAsset->static_fields->assetBundleUrl == (String *)0x0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral_AssetBundles_,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__StreamingAsset->static_fields->assetBundleUrl = pSVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__StreamingAsset->static_fields->assetBundleUrl >> 0xc);
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
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c != 0) {
    return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
  }
  FUN_?();
  return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
}

