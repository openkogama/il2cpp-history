
/* Boolean CanRequestOwnerShip(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnerShip
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object__Class *)0x0;
  bVar2 = MVNetworkSelector_OwnershipTest(id,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    *unaff_FS_OFFSET = method_00;
    return 0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGroup *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,id,(MethodInfo *)0x0);
    if (this_01 != (MVGroup *)0x0) {
      if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (this_01->klass->_1).typeHierarchyDepth) &&
         ((MVGroup__Class *)
          (this_01->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVGroup)) {
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffd8,this_02,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                             );
          pOStack_1 = (Object__Class *)pLVar3->_list;
          RVar4 = pLVar3->_current;
          do {
            bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&pOStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar2 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&pOStack_1,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                         ,method_00);
              goto code_?;
            }
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            bVar2 = MVNetworkSelector_CanRequestOwnerShip
                              (this,*(int32_t *)((int)RVar4 + 8),(MethodInfo *)0x0);
          } while (bVar2 != 0);
          method_00 = (MethodInfo *)&UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_1,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,unaff_EBP);
          goto code_?;
        }
        goto code_?;
      }
    }
code_?:
    *unaff_FS_OFFSET = method_00;
    return 1;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean CanRequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnership
               (HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
  }
  if (selectionSet != (HashSet_1_System_Int32_ *)0x0) {
    pHVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd8,
                        (HashSet_1_System_Object_ *)selectionSet,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    method_00 = (MethodInfo *)pHVar4->_version;
    id = pHVar4->_current;
    uStack_1 = 1;
    do {
      bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      bVar5 = MVNetworkSelector_OwnershipTest((int32_t)id,(MethodInfo *)0x0);
    } while (bVar5 != 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               in_stack_6);
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Void Instance_OnWorldObjectTransferOwnershipResponse(Object,
   OnTransferOwnershipResponseEventArgs) */

void Assembly-CSharp.dll::MVNetworkSelector::
     MVNetworkSelector_Instance_OnWorldObjectTransferOwnershipResponse
               (MVNetworkSelector *this,Object *sender,OnTransferOwnershipResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    cRam_? = '\x01';
  }
  if (e != (OnTransferOwnershipResponseEventArgs *)0x0) {
    if ((e->fields).ownerActorNr == 0) {
      return;
    }
    if ((e->fields).success != 0) {
      return;
    }
    if ((e->fields).ownerActorNr == 0) {
      return;
    }
    if ((e->fields).success != 0) {
      return;
    }
    pQVar1 = (this->fields).pendingRequestedOwnershipIds;
    if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
      Queue_1_System_Int32__Dequeue
                (pQVar1,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
      pQVar1 = (this->fields).pendingRequestedOwnershipIds;
      if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
        if ((pQVar1->fields)._size == 0) {
          this_00 = (this->fields).esm;
          e = (OnTransferOwnershipResponseEventArgs *)0x2f;
          value = (Object *)func_?(TypeInfo__EditorEvent,&e);
          if (this_00 == (EditorStateMachine *)0x0) goto code_?;
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OwnershipTest(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_OwnershipTest
               (int32_t id,MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this,id,(MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObject *)0x0) || ((pMVar1->fields).ownerActorNr == 0)) {
      return 1;
    }
    iVar2 = (pMVar1->fields).ownerActorNr;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar3 != (MVLocalPlayer *)0x0) {
        return iVar2 == (pMVar3->fields)._._ActorNr_k__BackingField;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean RequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
  }
  bVar4 = MVNetworkSelector_CanRequestOwnership(selectionSet,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    bVar4 = (*pcVar5)();
    return bVar4;
  }
  pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
           HashSet_1_System_Object__GetEnumerator
                     ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd8,
                      (HashSet_1_System_Object_ *)selectionSet,
                      MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  uStack_1 = 1;
  pOVar7 = pHVar6->_current;
code_?:
  id = pOVar7;
  bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]::
          HashSet_1_T_Enumerator_System_Int32__MoveNext
                    ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc8,
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                    );
  if (bVar4 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               in_stack_8);
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
    in_stack_8 = (MethodInfo *)0x0;
    pOVar7 = id;
    pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar9,(int32_t)id,(MethodInfo *)0x0);
    if (pMVar10 == (MVWorldObject *)0x0) goto code_?;
    iVar11 = (pMVar10->fields).ownerActorNr;
    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
      if (pMVar13 != (MVLocalPlayer *)0x0) goto code_?;
    }
  }
  goto code_?;
code_?:
  if (iVar11 != (pMVar13->fields)._._ActorNr_k__BackingField) {
code_?:
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar9,(int32_t)id,(MethodInfo *)0x0);
    if (pMVar10 == (MVWorldObject *)0x0) goto code_?;
    if ((pMVar10->fields).ownerActorNr == 0) {
      this_00 = (this->fields).pendingRequestedOwnershipIds;
      if (this_00 == (Queue_1_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
      Queue_1_System_Int32__Enqueue
                (this_00,(int32_t)id,
                 MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
      in_stack_8 =
           (MethodInfo *)
           MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar12 == (MVNetworkGame *)0x0) goto code_?;
      pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
      if (pMVar13 == (MVLocalPlayer *)0x0) goto code_?;
      if (in_stack_8 == (MethodInfo *)0x0) goto code_?;
      pOVar7 = (Object *)&UNK_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                ((MVNetworkGame_OperationRequests *)in_stack_8,(int32_t)id,
                 (pMVar13->fields)._._ActorNr_k__BackingField,(Transform *)0x0,(MethodInfo *)0x0);
    }
  }
  goto code_?;
}


/* Void RequestOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership_1
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,id,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObject *)0x0) {
      iVar3 = (pMVar2->fields).ownerActorNr;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
      if (iVar3 == (pMVar5->fields)._._ActorNr_k__BackingField) {
        return;
      }
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,id,(MethodInfo *)0x0), pMVar2 != (MVWorldObject *)0x0)) {
      if ((pMVar2->fields).ownerActorNr != 0) {
        return;
      }
      if (_UNK_? != (Queue_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
        Queue_1_System_Int32__Enqueue
                  (_UNK_?,id,
                   MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 != (MVNetworkGame *)0x0) &&
            (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
            pMVar5 != (MVLocalPlayer *)0x0)) && (this_00 != (MVNetworkGame_OperationRequests *)0x0))
        {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                    (this_00,id,(pMVar5->fields)._._ActorNr_k__BackingField,(Transform *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RequestReleaseOwnership(HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._set = (HashSet_1_System_Int32_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = 0;
  if (selectionSet != (HashSet_1_System_Int32_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       (&HStack_8,(HashSet_1_System_Object_ *)selectionSet,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    HStack_6._set = (HashSet_1_System_Int32_ *)pHVar7->_set;
    HStack_6._index = pHVar7->_index;
    HStack_6._version = pHVar7->_version;
    HStack_6._current = (int32_t)pHVar7->_current;
    HStack_8._version = 0;
    uStack_1 = 1;
    HStack_8._current = (Object *)&HStack_6;
    while( true ) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        (&HStack_6,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      id = HStack_6._current;
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&HStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_10);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      in_stack_10 = (MethodInfo *)0x0;
      pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,id,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar12 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar12->fields).transformNetworkManager,
         this_00 == (TransformNetworkManager *)0x0)) break;
      TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                (this_00,id,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((pMVar11 == (MVWorldObject *)0x0) || (this_02 == (MVNetworkGame_OperationRequests *)0x0))
      break;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                (this_02,id,0,(Transform *)pMVar11[1].fields.ownerActorNr,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RequestReleaseOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership_1
               (int32_t id,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,id,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this = (pMVar2->fields).transformNetworkManager, this != (TransformNetworkManager *)0x0)) {
      TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                (this,id,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObject *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                  (this_01,id,0,(Transform *)pMVar1[1].fields.ownerActorNr,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVNetworkSelector(EditorStateMachine) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector__ctor
               (MVNetworkSelector *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>);
    func_?(&
                    MethodInfo__MVNetworkSelector__Instance_OnWorldObjectTransferOwnershipResponse_System__Object__OnTransferOwnershipResponseEventArgs_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  if (this_00 != (Queue_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    method_00 = (MethodInfo *)&(this->fields).pendingRequestedOwnershipIds;
    (this->fields).pendingRequestedOwnershipIds = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).esm = esm;
    func_?(&this->fields,esm);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pEVar2 = (pMVar1->fields).OnWorldObjectTransferOwnershipResponse;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>
                               );
      if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVNetworkSelector__Instance_OnWorldObjectTransferOwnershipResponse_System__Object__OnTransferOwnershipResponseEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pEVar2,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (pMVar1->fields).OnWorldObjectTransferOwnershipResponse =
               (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0;
          func_?();
          return;
        }
        pEVar2 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)func_?();
        if (pEVar2 != (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
          (pMVar1->fields).OnWorldObjectTransferOwnershipResponse = pEVar2;
          iVar4 = func_?();
          if (iVar4 != 0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

