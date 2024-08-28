
/* Void AddRequestsToActiveRequests(Queue`1[AsyncWebRequest], Int32) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_AddRequestsToActiveRequests
               (Queue_1_AsyncWebRequest_ *requestQueue,int32_t maxRequestForQueue,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__get_Count__);
    cRam_? = '\x01';
  }
  while( true ) {
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AsyncWWWManager);
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
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    item = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
           Queue_1_System_Object__Dequeue
                     ((Queue_1_System_Object_ *)requestQueue,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Dequeue__);
    if (pHVar1 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
              ((HashSet_1_System_Object_ *)pHVar1,item,
               MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
              );
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_BackgroundUpdate(MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                   );
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  pDVar6 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar6 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    pQVar7 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,2,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar7,0x7fffffff,(MethodInfo *)0x0);
    pDVar6 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar6 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
      pQVar7 = (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,1,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
      AsyncWWWManager_AddRequestsToActiveRequests(pQVar7,4,(MethodInfo *)0x0);
      ppAStack_8 = &pAStack_9;
      pAStack_10 = (AsyncWWWManager__Class *)0x0;
      pAStack_9 = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
      uStack_1._0_1_ = 1;
      uStack_1._1_3_ = 0;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        pAStack_10 = TypeInfo__AsyncWWWManager;
        HStack_11._current = (uint32_t)&UNK_?;
        func_?();
      }
      pAVar12 = (AsyncWebRequest *)TypeInfo__AsyncWWWManager->static_fields->activeRequests;
      if (pAVar12 != (AsyncWebRequest *)0x0) {
        pHVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           (&HStack_11,(HashSet_1_System_UInt32_ *)pAVar12,
                            MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                           );
        this_00 = (AsyncWebRequest *)pHVar13->_current;
        HStack_11._version = 0;
        uStack_1._0_1_ = 3;
        HStack_11._current = (uint32_t)&stack0xffffffb0;
        while( true ) {
          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                            );
          if (bVar14 == 0) break;
          pAStack_15 = this_00;
          if (this_00 == (AsyncWebRequest *)0x0) goto code_?;
          if ((this_00->fields).requestPriority != 0) {
            bVar14 = AsyncWebRequest::AsyncWebRequest_Update(this_00,(MethodInfo *)0x0);
            if (bVar14 != 0) {
              if (pAStack_9 == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0)
              goto code_?;
              pAVar12 = pAStack_15;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                        ((HashSet_1_System_Object_ *)pAStack_9,(Object *)pAStack_15,
                         MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                        );
            }
          }
        }
        uStack_1._0_1_ = 1;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   ,(MethodInfo *)pAVar12);
        uStack_1._0_1_ = 1;
        if (pAStack_9 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
          pHVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             (&HStack_11,(HashSet_1_System_UInt32_ *)pAStack_9,
                              MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pHVar13->_version;
          pAVar12 = (AsyncWebRequest *)pHVar13->_current;
          HStack_11._version = 0;
          uStack_1._0_1_ = 6;
          HStack_11._current = (uint32_t)&stack0xffffffb0;
          while( true ) {
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                              ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = CONCAT31(uStack_1._1_3_,1);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffb0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                         ,method_00);
              uStack_1 = 0xffffffff;
              if (pAStack_9 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
                func_?();
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pAStack_15 = pAVar12;
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
            if (this == (HashSet_1_AsyncWebRequest_ *)0x0) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Remove
                      ((HashSet_1_System_Object_ *)this,(Object *)pAStack_15,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                      );
          }
        }
      }
    }
  }
code_?:
  uVar16 = func_?();
  uVar16 = func_?(uVar16);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AsyncWWWManager_quitCallback_is_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AsyncWWWManager_quitCallback_is_,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
    func_?();
  }
  return;
}


/* Void Quit() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Quit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    in_stack_1 =
         &MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__;
    func_?();
    func_?(&StringLiteral_AsyncWWWManager_successfully_han);
    func_?(&StringLiteral_AsyncWWWManager_failed_to_handle);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback == (Action *)0x0) {
    return;
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar2 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar2 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if ((pHVar2->fields)._count == 0) {
      message = StringLiteral_AsyncWWWManager_successfully_han;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        message = StringLiteral_AsyncWWWManager_successfully_han;
      }
    }
    else {
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar3 = WaitForTicksLocal::WaitForTicksLocal_Diff
                        (TypeInfo__AsyncWWWManager->static_fields->quitTime,(MethodInfo *)0x0);
      if (iVar3 < 0x1389) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_1 = (MethodInfo **)0x0;
      message = StringLiteral_AsyncWWWManager_failed_to_handle;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)message,(MethodInfo *)in_stack_1);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar4 = TypeInfo__AsyncWWWManager->static_fields->quitCallback;
    if (pAVar4 != (Action *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)();
      TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
      func_?(&TypeInfo__AsyncWWWManager->static_fields->quitCallback);
      return;
    }
  }
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Reset(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__TrimExcess__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__TrimExcess__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar7 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (pDVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pMVar8 = (MethodInfo *)&UNK_?;
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_10,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                         );
      DStack_11._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar9->_dictionary;
      DStack_11._index = pDVar9->_index;
      DStack_11._version = pDVar9->_version;
      DStack_11._currentValue = pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&DStack_11;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                          );
        this_02 = (MethodInfo *)DStack_11._currentValue;
        if (bVar12 == 0) break;
        if ((MethodInfo *)DStack_11._currentValue == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                   DStack_11._currentValue,
                   MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__TrimExcess
                  ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)this_02,
                   MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__TrimExcess__);
        pMVar8 = this_02;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_11,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 ,pMVar8);
      uStack_1 = 0xffffffff;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      pMVar8 = (MethodInfo *)TypeInfo__AsyncWWWManager->static_fields->activeRequests;
      if (pMVar8 != (MethodInfo *)0x0) {
        pHVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           ((HashSet_1_T_Enumerator_System_UInt32_ *)&DStack_10,
                            (HashSet_1_System_UInt32_ *)pMVar8,
                            MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pHVar13->_set;
        DStack_6._index = pHVar13->_index;
        DStack_6._version = pHVar13->_version;
        DStack_6._currentValue = (Object *)pHVar13->_current;
        DStack_10._version = 0;
        uStack_1 = 4;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            ((HashSet_1_T_Enumerator_System_Object_ *)&DStack_6,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                            );
          if (bVar12 == 0) break;
          if (DStack_6._currentValue == (Object *)0x0) goto code_?;
          if ((UnityWebRequest *)DStack_6._currentValue[5].monitor != (UnityWebRequest *)0x0) {
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_Dispose
                      ((UnityWebRequest *)DStack_6._currentValue[5].monitor,(MethodInfo *)0x0);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   ,pMVar8);
        uStack_1 = 0xffffffff;
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AsyncWWWManager);
        }
        this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
        if (this != (HashSet_1_AsyncWebRequest_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                    ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
                     MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Clear__);
          this_00 = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
          if (this_00 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__TrimExcess
                      ((HashSet_1_System_Object_ *)this_00,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__TrimExcess__
                      );
            pAVar14 = TypeInfo__AsyncWWWManager->static_fields->cache;
            if (pAVar14 != (AsyncWWWManager_Cache *)0x0) {
              if (cRam_? == '\0') {
                DStack_11._dictionary =
                     (Dictionary_2_System_UInt32_System_Object_ *)
                     &
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                ;
                func_?();
                cRam_? = '\x01';
              }
              pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(pAVar14->fields).cachedRequests;
              if (pDVar7 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                          (pDVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                          );
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ShutDown(Action) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_ShutDown
               (Action *quitHandled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
    func_?(&StringLiteral_Handle_quit_called_twice);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Handle_quit_called_twice,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 1;
  pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    this = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
    if (this != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
      Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                (this,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
      TypeInfo__AsyncWWWManager->static_fields->retries = 0;
      pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
        requestQueue = (Action *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,
                                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                 );
        AsyncWWWManager_AddRequestsToActiveRequests
                  ((Queue_1_AsyncWebRequest_ *)requestQueue,0x7fffffff,(MethodInfo *)0x0);
        pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
          requestQueue_00 =
               (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
          AsyncWWWManager_AddRequestsToActiveRequests(requestQueue_00,0x7fffffff,(MethodInfo *)0x0);
          iVar2 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          TypeInfo__AsyncWWWManager->static_fields->quitTime = iVar2;
          TypeInfo__AsyncWWWManager->static_fields->quitCallback = requestQueue;
          func_?();
          return;
        }
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Unsubscribe(AsyncWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Unsubscribe
               (AsyncWebRequest *request,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    cRam_? = '\x01';
  }
  if (request != (AsyncWebRequest *)0x0) {
    pAVar1 = &request->fields;
    bVar2 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                      ((Delegate *)pAVar1->callback,(Delegate *)callback,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar1->callback,(Delegate *)callback,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        pAVar1->callback = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
        func_?();
        return;
      }
      pAVar4 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)func_?();
      if (pAVar4 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) goto code_?;
      pAVar1->callback = pAVar4;
      func_?();
    }
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnsubscribeWWWRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  QStack_6._q = (Queue_1_System_Object_ *)0x0;
  QStack_6._version = 0;
  QStack_6._index = 0;
  QStack_6._currentElement = (Object *)0x0;
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  method_00 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
              TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (method_00 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       (&HStack_8,(HashSet_1_System_UInt32_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    QStack_9._q = (Queue_1_System_Object_ *)pHVar7->_set;
    QStack_9._version = pHVar7->_index;
    QStack_9._index = pHVar7->_version;
    QStack_9._currentElement = (Object *)pHVar7->_current;
    HStack_8._version = 0;
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    HStack_8._current = (uint32_t)&QStack_9;
    while( true ) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        ((HashSet_1_T_Enumerator_System_Object_ *)&QStack_9,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                        );
      if (bVar10 == 0) break;
      pOStack_11 = QStack_9._currentElement;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        cRam_? = '\x01';
      }
      if (pOStack_11 == (Object *)0x0) goto code_?;
      method_00 = callback;
      bVar10 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                        ((Delegate *)pOStack_11[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pDStack_12 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pOStack_11[1].klass,(Delegate *)callback,
                                (MethodInfo *)0x0);
        pAStack_13 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        pOVar14 = (Object__Class *)0x0;
        if (pDStack_12 != (Delegate *)0x0) {
          pOVar14 = (Object__Class *)func_?();
          if (pOVar14 == (Object__Class *)0x0) {
            func_?();
            goto code_?;
          }
        }
        pOStack_11[1].klass = pOVar14;
        func_?();
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&QStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
               ,(MethodInfo *)method_00);
    uStack_1._0_1_ = 0xff;
    uStack_1._1_3_ = 0xffffff;
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    method_01 = (MethodInfo *)TypeInfo__AsyncWWWManager->static_fields->requests;
    if (method_01 != (MethodInfo *)0x0) {
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          auStack_16,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                         );
      uStack_17 = 0;
      uVar18 = *(undefined8 *)&(pDVar15->_current).value;
      pDStack_12 = (Delegate *)&stack0xffffff70;
      uStack_1 = 0;
      while( true ) {
        uStack_1._0_1_ = 4;
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffff70,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                          );
        if (bVar10 == 0) break;
        pQStack_19 = (Queue_1_System_Object_ *)uVar18;
        if (pQStack_19 == (Queue_1_System_Object_ *)0x0) goto code_?;
        pQVar20 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__GetEnumerator
                           ((Queue_1_T_Enumerator_System_Object_ *)(auStack_16 + 8),pQStack_19,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                           );
        HStack_8._version = 0;
        QStack_6._q = pQVar20->_q;
        QStack_6._version = pQVar20->_version;
        QStack_6._index = pQVar20->_index;
        QStack_6._currentElement = pQVar20->_currentElement;
        uStack_1._0_1_ = 6;
        HStack_8._current = (uint32_t)&QStack_6;
        while( true ) {
          method_01 = (MethodInfo *)&UNK_?;
          bVar10 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]
                  ::Queue_1_T_Enumerator_System_Object__MoveNext
                            (&QStack_6,
                             MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                            );
          if (bVar10 == 0) break;
          request = (AsyncWebRequest *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                    Object]::Queue_1_T_Enumerator_System_Object__get_Current
                              (&QStack_6,
                               MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                              );
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager_Unsubscribe(request,callback,(MethodInfo *)0x0);
        }
        uStack_1 = CONCAT31(uStack_1._1_3_,4);
        mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
        Queue_1_T_Enumerator_System_Object__Dispose
                  (&QStack_6,
                   MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pDStack_12,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 ,method_01);
      uStack_1._0_1_ = 0xff;
      uStack_1._1_3_ = 0xffffff;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      this = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this,callback,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar21 = func_?();
  uVar21 = func_?(uVar21);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Update(MethodInfo *method)

{
  _Stack_8.__klassIndex._0_1_ = 0xff;
  _Stack_8.__klassIndex._1_3_ = 0xffffff;
  pcStack_1 = &DAT_?;
  pcStack_2 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_2;
  puStack_3 = &stack0xffffffa4;
  puVar4 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                   );
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
    puVar4 = puStack_3;
  }
  puStack_3 = puVar4;
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  pDVar5 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar5 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    pQVar6 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,2,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar6,0x7fffffff,(MethodInfo *)0x0);
    pDVar5 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar5 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
      pQVar6 = (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,1,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
      AsyncWWWManager_AddRequestsToActiveRequests(pQVar6,4,(MethodInfo *)0x0);
      MVar7 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar7 == MVJoinState__Enum_Playing) {
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          pAStack_8 = TypeInfo__AsyncWWWManager;
          func_?();
        }
        pDVar5 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (pDVar5 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
        goto code_?;
        pQVar6 = (Queue_1_AsyncWebRequest_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,0,
                            MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                           );
        AsyncWWWManager_AddRequestsToActiveRequests(pQVar6,4,(MethodInfo *)0x0);
      }
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      pAStack_8 = (AsyncWWWManager__Class *)&pIStack_9;
      puStack_10 = (undefined *)0x0;
      pIStack_9 = (Il2CppImage *)TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
      _Stack_8.__klassIndex._0_1_ = 1;
      _Stack_8.__klassIndex._1_3_ = 0;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      pAVar11 = (AsyncWebRequest *)TypeInfo__AsyncWWWManager->static_fields->activeRequests;
      if (pAVar11 != (AsyncWebRequest *)0x0) {
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           (&HStack_13,(HashSet_1_System_UInt32_ *)pAVar11,
                            MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                           );
        this_00 = (AsyncWebRequest *)pHVar12->_current;
        HStack_13._version = 0;
        _Stack_8.__klassIndex._0_1_ = 3;
        HStack_13._current = (uint32_t)&stack0xffffffb0;
        while( true ) {
          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                            );
          if (bVar14 == 0) break;
          pAStack_15 = this_00;
          if (this_00 == (AsyncWebRequest *)0x0) goto code_?;
          bVar14 = AsyncWebRequest::AsyncWebRequest_Update(this_00,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            if (pIStack_9 == (Il2CppImage *)0x0) goto code_?;
            pAVar11 = pAStack_15;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                      ((HashSet_1_System_Object_ *)pIStack_9,(Object *)pAStack_15,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                      );
          }
        }
        _Stack_8.__klassIndex._0_1_ = 1;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   ,(MethodInfo *)pAVar11);
        _Stack_8.__klassIndex._0_1_ = 1;
        if (pIStack_9 != (Il2CppImage *)0x0) {
          pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             (&HStack_13,(HashSet_1_System_UInt32_ *)pIStack_9,
                              MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pHVar12->_version;
          pAVar11 = (AsyncWebRequest *)pHVar12->_current;
          HStack_13._version = 0;
          _Stack_8.__klassIndex._0_1_ = 6;
          HStack_13._current = (uint32_t)&stack0xffffffb0;
          while( true ) {
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                              ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                              );
            if (bVar14 == 0) {
              _Stack_8.__klassIndex._0_1_ = 1;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffb0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                         ,method_00);
              _Stack_8.__klassIndex = -1;
              if (pIStack_9 != (Il2CppImage *)0x0) {
                func_?();
              }
              _Stack_8.__klassIndex = -1;
              if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
                if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                AsyncWWWManager_Quit((MethodInfo *)0x0);
              }
              *unaff_FS_OFFSET = pcStack_2;
              return;
            }
            pAStack_15 = pAVar11;
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
            if (this == (HashSet_1_AsyncWebRequest_ *)0x0) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Remove
                      ((HashSet_1_System_Object_ *)this,(Object *)pAStack_15,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                      );
          }
        }
      }
    }
  }
code_?:
  uVar16 = func_?();
  uVar16 = func_?(uVar16);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void WWWRequest(AsyncWebRequest) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_WWWRequest
               (AsyncWebRequest *asyncRequest,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedGetRequest);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
    if (asyncRequest != (AsyncWebRequest *)0x0) {
      bVar1 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      unaff_EDI = TypeInfo__CachedGetRequest;
      if ((bVar1 <= (asyncRequest->klass->_1).naturalAligment) &&
         ((asyncRequest->klass->_1).typeHierarchy[bVar1 - 1] ==
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AsyncWWWManager);
        }
        unaff_EDI = TypeInfo__CachedGetRequest;
        bVar1 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if (((asyncRequest->klass->_1).naturalAligment < bVar1) ||
           ((asyncRequest->klass->_1).typeHierarchy[bVar1 - 1] !=
            (Il2CppClass *)TypeInfo__CachedGetRequest)) goto code_?;
        cVar2 = (*asyncRequest->klass[1]._0.gc_desc)
                          (asyncRequest,TypeInfo__AsyncWWWManager->static_fields->cache,
                           asyncRequest->klass[1]._0.name);
        if (cVar2 != '\0') {
          return;
        }
      }
    }
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (((asyncRequest == (AsyncWebRequest *)0x0) ||
        (this == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) ||
       (this_00 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                             (asyncRequest->fields).requestPriority,
                             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                            ), this_00 == (Queue_1_System_Object_ *)0x0)) {
      func_?();
code_?:
      func_?(asyncRequest,unaff_EDI);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              (this_00,(Object *)asyncRequest,
               MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
              );
  }
  return;
}


/* AsyncWWWManager() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__AsyncWWWManager__Cache);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<AsyncWebRequest>);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
    func_?(&
                    MethodInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>__TemporaryHashSet__
                   );
    func_?(&TypeInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>);
    func_?(&C636521C6D02D3A8CF5ADC5B7FBACDB485933B8516F1D7F7484AB2ADB6DC44EC_Field);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AsyncWebRequest_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<AsyncWebRequest>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this,
             MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__HashSet__);
  TypeInfo__AsyncWWWManager->static_fields->activeRequests = this;
  func_?(TypeInfo__AsyncWWWManager->static_fields,this);
  this_00 = (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)
            func_?(TypeInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>);
  AsyncWWWManager+TemporaryHashSet`1[System::Object]::
  AsyncWWWManager_TemporaryHashSet_1_System_Object___ctor
            ((AsyncWWWManager_TemporaryHashSet_1_System_Object_ *)this_00,
             MethodInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>__TemporaryHashSet__);
  TypeInfo__AsyncWWWManager->static_fields->tempHashSet = this_00;
  func_?(&TypeInfo__AsyncWWWManager->static_fields->tempHashSet,this_00);
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  array = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,_C636521C6D02D3A8CF5ADC5B7FBACDB485933B8516F1D7F7484AB2ADB6DC44EC_Field,
             (MethodInfo *)0x0);
  TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts = array;
  func_?(&TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts,array);
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dictionary__
            );
  pSVar1 = (Stack_1_System_Int32_ *)func_?();
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            (pSVar1,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
  if (this_01 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    pSVar1 = (Stack_1_System_Int32_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
              (pSVar1,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    pSVar1 = (Stack_1_System_Int32_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
              (pSVar1,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    TypeInfo__AsyncWWWManager->static_fields->requests =
         (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)this_01;
    ppMStack2 = (MethodInfo **)this_01;
    func_?();
    value = (AsyncWWWManager_Cache *)func_?();
    if (cRam_? == '\0') {
      ppMStack2 =
           &
           MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
      ;
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    ppMStack2 =
         (MethodInfo **)
         TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>;
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
              );
    method_00 = (MethodInfo *)&value->fields;
    ((AsyncWWWManager_Cache__Fields *)method_00)->cachedRequests =
         (Dictionary_2_System_String_CachedGetRequest_ *)this_02;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,method_00);
    TypeInfo__AsyncWWWManager->static_fields->cache = value;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Retries() */

int32_t Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_get_Retries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  return TypeInfo__AsyncWWWManager->static_fields->retries;
}

