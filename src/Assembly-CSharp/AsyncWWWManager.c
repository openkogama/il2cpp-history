
/* Void AddRequestsToActiveRequests(Queue`1[AsyncWebRequest], Int32) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_AddRequestsToActiveRequests
               (Queue_1_AsyncWebRequest_ *requestQueue,int32_t maxRequestForQueue,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  while( true ) {
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (pHVar1 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
    if (maxRequestForQueue <= (pHVar1->fields)._count) {
      return;
    }
    if (requestQueue == (Queue_1_AsyncWebRequest_ *)0x0) break;
    if ((requestQueue->fields)._size < 1) {
      return;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    value = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Dequeue
                      ((Queue_1_System_Object_ *)requestQueue,
                       MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Dequeue__);
    if (pHVar1 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)pHVar1,value,
               MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
               ->klass->rgctx_data[0x15].method);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_BackgroundUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  HStack_1._set = (HashSet_1_System_Object_ *)0x0;
  HStack_1._index = 0;
  HStack_1._version = 0;
  HStack_1._current = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pDVar2 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar2 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    pQVar3 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,2,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar3,0x7fffffff,(MethodInfo *)0x0);
    pDVar2 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar2 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
      pQVar3 = (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,1,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
      AsyncWWWManager_AddRequestsToActiveRequests(pQVar3,4,(MethodInfo *)0x0);
      this = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar4 = (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)
               TypeInfo__AsyncWWWManager->static_fields->activeRequests;
      if (pAVar4 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pHStack_11 = (HashSet_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)((HashSet_1_System_Object___Fields *)&pAVar4->fields)->_version << 0x20)
        ;
        uStack_12 = 0;
        HStack_1._8_8_ = pHStack_11;
        HStack_1._current = (Object *)0x0;
        uStack_6 = 0;
        pHStack_11 = &HStack_1;
        HStack_1._set = (HashSet_1_System_Object_ *)pAVar4;
code_?:
        bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          (&HStack_1,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                          );
        pOVar14 = HStack_1._current;
        if (bVar13 != 0) {
          if ((AsyncWebRequest *)HStack_1._current != (AsyncWebRequest *)0x0)
          goto code_?;
          goto code_?;
        }
        if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
            lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pHStack_11 = (HashSet_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)((HashSet_1_System_Object___Fields *)&this->fields)->_version << 0x20)
          ;
          uStack_12 = 0;
          HStack_1._8_8_ = pHStack_11;
          HStack_1._current = (Object *)0x0;
          uStack_6 = 0;
          pHStack_11 = &HStack_1;
          HStack_1._set = (HashSet_1_System_Object_ *)this;
          while( true ) {
            bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                              (&HStack_1,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                              );
            pOVar14 = HStack_1._current;
            if (bVar13 == 0) {
              if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
                FUN_?(0,TypeInfo__System__IDisposable,this);
              }
              return;
            }
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            this_00 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
            if (this_00 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Remove
                      ((HashSet_1_System_Object_ *)this_00,pOVar14,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                      );
          }
code_?:
          FUN_?();
          FUN_?();
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  if ((((AsyncWebRequest__Fields *)((longlong)HStack_1._current + 0x10))->requestPriority != 0) &&
     (bVar13 = AsyncWebRequest::AsyncWebRequest_Update
                        ((AsyncWebRequest *)HStack_1._current,(MethodInfo *)0x0), bVar13 != 0)) {
    if (this == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      goto code_?;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)this,pOVar14,
               MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
               ->klass->rgctx_data[0x15].method);
  }
  goto code_?;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AsyncWWWManager_quitCallback_is_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AsyncWWWManager_quitCallback_is_,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->quitCallback >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  return;
}


/* Void Quit() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Quit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AsyncWWWManager_successfully_han);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AsyncWWWManager_failed_to_handle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (pHVar1 != (HashSet_1_AsyncWebRequest_ *)0x0) {
      if ((pHVar1->fields)._count == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_AsyncWWWManager_successfully_han,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        pAVar2 = TypeInfo__AsyncWWWManager->static_fields->quitCallback;
        if (pAVar2 != (Action *)0x0) {
          (*(pAVar2->fields)._._.invoke_impl)
                    ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
          TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
          if (iRam_? == 0) {
            return;
          }
          uVar3 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->quitCallback >> 0xc);
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
          return;
        }
      }
      else {
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar7 = TypeInfo__AsyncWWWManager->static_fields->quitTime;
        iVar8 = FUN_?();
        if (iVar8 - iVar7 < 0x1389) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_AsyncWWWManager_failed_to_handle,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        pAVar2 = TypeInfo__AsyncWWWManager->static_fields->quitCallback;
        if (pAVar2 != (Action *)0x0) {
          (*(pAVar2->fields)._._.invoke_impl)
                    ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
          TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->quitCallback >> 0xc
                          );
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
      }
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__TrimExcess__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__TrimExcess__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aHStack_1[0]._set = (HashSet_1_System_Object_ *)0x0;
  aHStack_1[0]._index = 0;
  aHStack_1[0]._version = 0;
  aHStack_1[0]._current = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  pDVar2 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           TypeInfo__AsyncWWWManager->static_fields->requests;
  if ((pDVar2 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) ||
     (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                          (pDVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Values__
                          ),
     pDVar3 ==
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
      *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    HStack_4._set = (HashSet_1_System_Object_ *)(pDVar3->fields)._dictionary;
    pHStack_5 = (HashSet_1_T_Enumerator_System_Object_ *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    dVar13 = _UNK_?;
    if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
        HStack_4._set ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)HStack_4._set;
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pHStack_5 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)HStack_4._set)->fields)._version << 0x20);
    uStack_6 = 0;
    HStack_4._8_8_ = pHStack_5;
    HStack_4._current = (Object *)0x0;
    pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    pHStack_5 = &HStack_4;
code_?:
    if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
        HStack_4._set !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      if (HStack_4._version ==
          ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Fields
            *)&(HStack_4._set)->fields)->_version) {
        uVar9 = HStack_4._8_8_ & 0xffffffff;
code_?:
        if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )HStack_4._set !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          uVar7 = (uint)uVar9;
          if ((uint)((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Fields
                      *)&(HStack_4._set)->fields)->_count <= uVar7) {
            HStack_4._index =
                 ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Fields
                   *)&(HStack_4._set)->fields)->_count + 1;
            HStack_4._current = (Object *)0x0;
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            pHVar15 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
            if (pHVar15 != (HashSet_1_AsyncWebRequest_ *)0x0) {
              if (iRam_? != 0) {
                uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
                uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar12 = uVar10 == *puVar11;
                  if (bVar12) {
                    *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
              pHStack_5 = (HashSet_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)(uint)(pHVar15->fields)._version << 0x20);
              uStack_6 = 0;
              aHStack_1[0]._8_8_ = pHStack_5;
              aHStack_1[0]._current = (Object *)0x0;
              pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0;
              pHStack_5 = aHStack_1;
              aHStack_1[0]._set = (HashSet_1_System_Object_ *)pHVar15;
              while (bVar16 = System.Core.dll::System::Collections::Generic::
                              HashSet`1[T]+Enumerator[System::Object]::
                              HashSet_1_T_Enumerator_System_Object__MoveNext
                                        (aHStack_1,
                                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                        ), bVar16 != 0) {
                if (aHStack_1[0]._current == (Object *)0x0) goto code_?;
                if (aHStack_1[0]._current[4].klass != (Object__Class *)0x0) {
                  this = aHStack_1[0]._current[4].klass;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__GC);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_DisposeHandlers((UnityWebRequest *)this,(MethodInfo *)0x0);
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_InternalDestroy((UnityWebRequest *)this,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  mscorlib.dll::System::GC::GC_1_SuppressFinalize((Object *)this,(MethodInfo *)0x0);
                }
              }
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              pHVar15 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
              if (pHVar15 != (HashSet_1_AsyncWebRequest_ *)0x0) {
                if (0 < (pHVar15->fields)._lastIndex) {
                  mscorlib.dll::System::Array::Array_Clear
                            ((Array *)(pHVar15->fields)._slots,0,(pHVar15->fields)._lastIndex,
                             (MethodInfo *)0x0);
                  pIVar17 = (pHVar15->fields)._buckets;
                  if (pIVar17 == (Int32__Array *)0x0) goto code_?;
                  mscorlib.dll::System::Array::Array_Clear
                            ((Array *)(pHVar15->fields)._buckets,0,(int32_t)pIVar17->max_length,
                             (MethodInfo *)0x0);
                  (pHVar15->fields)._count = 0;
                  (pHVar15->fields)._lastIndex = 0;
                  (pHVar15->fields)._freeList = -1;
                }
                piVar18 = &(pHVar15->fields)._version;
                *piVar18 = *piVar18 + 1;
                this_00 = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
                if (this_00 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__TrimExcess
                            ((HashSet_1_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__TrimExcess__
                            );
                  pAVar19 = TypeInfo__AsyncWWWManager->static_fields->cache;
                  if (pAVar19 != (AsyncWWWManager_Cache *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pDVar2 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)(pAVar19->fields).cachedRequests;
                    if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                   *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                                (pDVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                                );
                      return;
                    }
                  }
                }
              }
            }
            goto code_?;
          }
          pDVar20 = ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Fields
                     *)&(HStack_4._set)->fields)->_entries;
          uVar9 = (ulonglong)(uVar7 + 1);
          HStack_4._index = uVar7 + 1;
          if (pDVar20 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) {
            if (uVar7 < (uint)pDVar20->max_length) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
code_?:
  if (-1 < (&pDVar20->vector[0].hashCode)[(longlong)(int)uVar7 * 6]) goto code_?;
  goto code_?;
code_?:
  HStack_4._current =
       *(Object **)((longlong)&pDVar20->vector[0].key + (longlong)(int)uVar7 * 0x18 + 8);
  func_?();
  pOVar21 = HStack_4._current;
  if ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)HStack_4._current ==
      (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::
  Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
  Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
            ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
             HStack_4._current,
             MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
  pNVar22 = ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData___Fields *)
           ((longlong)pOVar21 + 0x10))->_array;
  if (pNVar22 == (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0)
  goto code_?;
  if (((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData___Fields *)
      ((longlong)pOVar21 + 0x10))->_size < (int)((double)(int)pNVar22->max_length * dVar13)) {
    FUN_?(pOVar21,((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData___Fields
                            *)((longlong)pOVar21 + 0x10))->_size,
                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__TrimExcess__->
                  klass->rgctx_data[5].rgctxDataDummy);
  }
  goto code_?;
}


/* Void ShutDown(Action) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_ShutDown
               (Action *quitHandled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Handle_quit_called_twice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__AsyncWWWManager->static_fields->isQuiting = 1;
    pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if ((pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) &&
       (this = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         ),
       this != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
      Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                (this,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
      TypeInfo__AsyncWWWManager->static_fields->retries = 0;
      pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
        pQVar2 = (Queue_1_AsyncWebRequest_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,
                            MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                           );
        AsyncWWWManager_AddRequestsToActiveRequests(pQVar2,0x7fffffff,(MethodInfo *)0x0);
        pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
          pQVar2 = (Queue_1_AsyncWebRequest_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,
                              MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                             );
          AsyncWWWManager_AddRequestsToActiveRequests(pQVar2,0x7fffffff,(MethodInfo *)0x0);
          iVar3 = FUN_?();
          TypeInfo__AsyncWWWManager->static_fields->quitTime = iVar3;
          TypeInfo__AsyncWWWManager->static_fields->quitCallback = quitHandled;
          if (iRam_? == 0) {
            return;
          }
          uVar4 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->quitCallback >> 0xc)
          ;
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
          return;
        }
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar9 = StringLiteral_Handle_quit_called_twice;
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
  pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar10 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,0,pSVar9);
  return;
}


/* Void Unsubscribe(AsyncWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Unsubscribe
               (AsyncWebRequest *request,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (request == (AsyncWebRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (request->fields).callback;
  if (pAVar2 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    if (callback != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      return;
    }
  }
  else {
    if (callback == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      return;
    }
    cVar3 = (*(pAVar2->klass->vtable).Equals.methodPtr)(pAVar2,callback);
    if (cVar3 == '\0') {
      return;
    }
  }
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)(request->fields).callback,(Delegate *)callback,(MethodInfo *)0x0)
  ;
  pAVar5 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
  pAVar2 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
  if ((pDVar4 != (Delegate *)0x0) &&
     (pAVar2 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
               FUN_?(pDVar4,
                             TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
     pAVar2 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)) {
    FUN_?(pDVar4,pAVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar6 = iRam_? != 0;
  (request->fields).callback = pAVar2;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&request->fields >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Void UnsubscribeWWWRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
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
      if ((callback != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) &&
         (cVar18 = (**(code **)&(pOVar17->_0).image[4].typeCount)(pOVar17,callback), cVar18 != '\0'))
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
          AsyncWWWManager_Unsubscribe((AsyncWebRequest *)pOVar15,callback,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar15;
        }
        QStack_2._index = 0xfffffffe;
        QStack_2._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this,callback,(MethodInfo *)0x0);
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
  if (callback == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar15[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
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


/* Void Update() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  HStack_1._set = (HashSet_1_System_Object_ *)0x0;
  HStack_1._index = 0;
  HStack_1._version = 0;
  HStack_1._current = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pDVar2 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar2 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    FUN_?();
  }
  else {
    pQVar3 = (Queue_1_AsyncWebRequest_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,2,
                         MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                        );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar3,0x7fffffff,(MethodInfo *)0x0);
    pDVar2 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar2 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
    goto code_?;
    pQVar3 = (Queue_1_AsyncWebRequest_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,1,
                         MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                        );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar3,4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar4 == (MVGameControllerBase *)0x0) goto code_?;
    if ((pMVar4->fields)._joinState == 3) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pDVar2 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (pDVar2 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
      goto code_?;
      pQVar3 = (Queue_1_AsyncWebRequest_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,0,
                           MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                          );
      AsyncWWWManager_AddRequestsToActiveRequests(pQVar3,4,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    this = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pAVar5 = (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)
             TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (pAVar5 == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0)
    goto code_?;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pHStack_12 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)((HashSet_1_System_Object___Fields *)&pAVar5->fields)->_version
                 << 0x20);
    uStack_13 = 0;
    HStack_1._8_8_ = pHStack_12;
    HStack_1._current = (Object *)0x0;
    uStack_7 = 0;
    pHStack_12 = &HStack_1;
    HStack_1._set = (HashSet_1_System_Object_ *)pAVar5;
    while (bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             (&HStack_1,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar15 = HStack_1._current, bVar14 != 0) {
      if ((AsyncWebRequest *)HStack_1._current == (AsyncWebRequest *)0x0)
      goto code_?;
      bVar14 = AsyncWebRequest::AsyncWebRequest_Update
                        ((AsyncWebRequest *)HStack_1._current,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        if (this == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__AddIfNotPresent
                  ((HashSet_1_System_Object_ *)this,pOVar15,
                   MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                   ->klass->rgctx_data[0x15].method);
      }
    }
    if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pHStack_12 = (HashSet_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)((HashSet_1_System_Object___Fields *)&this->fields)->_version
                   << 0x20);
      uStack_13 = 0;
      HStack_1._8_8_ = pHStack_12;
      HStack_1._current = (Object *)0x0;
      uStack_7 = 0;
      pHStack_12 = &HStack_1;
      HStack_1._set = (HashSet_1_System_Object_ *)this;
      while( true ) {
        bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          (&HStack_1,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                          );
        pOVar15 = HStack_1._current;
        if (bVar14 == 0) {
          if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,this);
          }
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            AsyncWWWManager_Quit((MethodInfo *)0x0);
          }
          return;
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this_00 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
        if (this_00 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  ((HashSet_1_System_Object_ *)this_00,pOVar15,
                   MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                  );
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WWWRequest(AsyncWebRequest) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_WWWRequest
               (AsyncWebRequest *asyncRequest,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
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
  if (asyncRequest != (AsyncWebRequest *)0x0) {
    bVar1 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
    if ((bVar1 <= (asyncRequest->klass->_1).naturalAligment) &&
       ((asyncRequest->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__CachedGetRequest)) {
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      pAVar2 = asyncRequest->klass;
      bVar1 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((pAVar2->_1).naturalAligment < bVar1) ||
         ((pAVar2->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        FUN_?(asyncRequest,TypeInfo__CachedGetRequest);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = (*(code *)pAVar2[1]._0.image)
                        (asyncRequest,TypeInfo__AsyncWWWManager->static_fields->cache,
                         pAVar2[1]._0.gc_desc);
      if (cVar4 != '\0') {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (((asyncRequest != (AsyncWebRequest *)0x0) &&
      (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                          (asyncRequest->fields).requestPriority,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         ), pOVar5 != (Object *)0x0)) {
    if (pOVar5[1].klass != (Object__Class *)0x0) {
      if (*(int *)&pOVar5[2].klass == *(int *)&((pOVar5[1].klass)->_0).namespaze) {
        pOVar6 = pOVar5[1].klass;
        iVar7 = *(int *)&(pOVar6->_0).namespaze * 2;
        if (iVar7 < *(int *)&(pOVar6->_0).namespaze + 4) {
          iVar7 = *(int *)&(pOVar6->_0).namespaze + 4;
        }
        FUN_?(pOVar5,iVar7,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      if (pOVar5[1].klass != (Object__Class *)0x0) {
        FUN_?(pOVar5[1].klass,(longlong)*(int *)((longlong)&pOVar5[1].monitor + 4),
                      asyncRequest);
        if (pOVar5[1].klass != (Object__Class *)0x0) {
          iVar8 = *(int *)((longlong)&pOVar5[1].monitor + 4) + 1;
          iVar7 = 0;
          if (iVar8 != *(int *)&((pOVar5[1].klass)->_0).namespaze) {
            iVar7 = iVar8;
          }
          *(int *)((longlong)&pOVar5[1].monitor + 4) = iVar7;
          *(int *)&pOVar5[2].klass = *(int *)&pOVar5[2].klass + 1;
          piVar9 = (int *)((longlong)&pOVar5[2].klass + 4);
          *piVar9 = *piVar9 + 1;
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


/* AsyncWWWManager() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager__Cache);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<AsyncWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>__TemporaryHashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&C636521C6D02D3A8CF5ADC5B7FBACDB485933B8516F1D7F7484AB2ADB6DC44EC_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (HashSet_1_AsyncWebRequest_ *)
         FUN_?(TypeInfo__System__Collections__Generic__HashSet<AsyncWebRequest>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this,
             MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__HashSet__);
  TypeInfo__AsyncWWWManager->static_fields->activeRequests = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AsyncWWWManager->static_fields >> 0xc);
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
  this_00 = (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)
            FUN_?(TypeInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_00,
             MethodInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>__TemporaryHashSet__->
             klass->rgctx_data[1].method);
  TypeInfo__AsyncWWWManager->static_fields->tempHashSet = this_00;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->tempHashSet >> 0xc);
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
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  array = (Int32__Array *)FUN_?(TypeInfo__System__Int32,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,_C636521C6D02D3A8CF5ADC5B7FBACDB485933B8516F1D7F7484AB2ADB6DC44EC_Field,
             (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts = array;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts >> 0xc);
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
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dictionary__
            );
  pSVar6 = (Stack_1_System_Object_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            (pSVar6,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
  if (this_01 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  IVar8 = CONCAT31((int3)((uint)in_R9D >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,(Object *)pSVar6,IVar8,
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
             ->klass->rgctx_data[0x22].method);
  pSVar6 = (Stack_1_System_Object_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            (pSVar6,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
  IVar8 = CONCAT31((int3)(IVar8 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,(Object *)pSVar6,IVar8,
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
             ->klass->rgctx_data[0x22].method);
  pSVar6 = (Stack_1_System_Object_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            (pSVar6,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,(Object *)pSVar6,
             CONCAT31((int3)(IVar8 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__AsyncWWWManager->static_fields->requests =
       (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)this_01;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->requests >> 0xc);
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
  pAVar9 = (AsyncWWWManager_Cache *)FUN_?(TypeInfo__AsyncWWWManager__Cache);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
            );
  bVar5 = iRam_? != 0;
  (pAVar9->fields).cachedRequests = (Dictionary_2_System_String_CachedGetRequest_ *)this_02;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&pAVar9->fields >> 0xc);
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
  TypeInfo__AsyncWWWManager->static_fields->cache = pAVar9;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AsyncWWWManager->static_fields->cache >> 0xc);
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


/* Int32 get_Retries() */

int32_t Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_get_Retries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  return TypeInfo__AsyncWWWManager->static_fields->retries;
}

