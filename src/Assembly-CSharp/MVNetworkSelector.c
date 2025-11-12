
/* Boolean CanRequestOwnerShip(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnerShip
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVNetworkSelector_OwnershipTest(id,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGroup *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_00,id,(MethodInfo *)0x0);
    if (this_01 != (MVGroup *)0x0) {
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((bVar2 <= (this_01->klass->_1).naturalAligment) &&
         ((MVGroup__Class *)(this_01->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVGroup)) {
        LStack_3._list =
             (List_1_System_Object_ *)MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
        if ((List_1_MVWorldObjectClient_ *)LStack_3._list != (List_1_MVWorldObjectClient_ *)0x0) {
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
          pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)(((List_1_MVWorldObjectClient_ *)LStack_3._list)->fields)._version <<
                       0x20);
          uStack_10 = 0;
          LStack_3._8_8_ = pLStack_9;
          LStack_3._current = (Object *)0x0;
          uStack_5 = 0;
          pLStack_9 = &LStack_3;
          while( true ) {
            bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_3,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar1 == 0) {
              return 1;
            }
            if (LStack_3._current == (Object *)0x0) break;
            bVar1 = MVNetworkSelector_CanRequestOwnerShip
                              (this,*(int32_t *)&LStack_3._current[1].klass,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              return 0;
            }
          }
          FUN_?();
          FUN_?();
          pcVar11 = (code *)swi(3);
          bVar1 = (*pcVar11)();
          return bVar1;
        }
        goto code_?;
      }
    }
    return 1;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar1 = (*pcVar11)();
  return bVar1;
}


/* Boolean CanRequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnership
               (HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  ppHStack_8 = (HashSet_1_System_Int32_ **)
                ((ulonglong)(uint)(selectionSet->fields)._version << 0x20);
  uStack_9 = 0;
  lStack_10 = (longlong)ppHStack_8;
  uStack_11 = 0;
  uStack_4 = 0;
  ppHStack_8 = &pHStack_12;
  pHStack_12 = selectionSet;
  do {
    cVar13 = FUN_?(&pHStack_12);
    if (cVar13 == '\0') {
      return 1;
    }
    bVar2 = MVNetworkSelector_OwnershipTest((int32_t)uStack_11,(MethodInfo *)0x0);
  } while (bVar2 != 0);
  return 0;
}


/* Void Instance_OnWorldObjectTransferOwnershipResponse(Object,
   OnTransferOwnershipResponseEventArgs) */

void Assembly-CSharp.dll::MVNetworkSelector::
     MVNetworkSelector_Instance_OnWorldObjectTransferOwnershipResponse
               (MVNetworkSelector *this,Object *sender,OnTransferOwnershipResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    LOCK();
    UNLOCK();
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
    if ((this->fields).pendingRequestedOwnershipIds != (Queue_1_System_Int32_ *)0x0) {
      FUN_?();
      pQVar1 = (this->fields).pendingRequestedOwnershipIds;
      if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
        if ((pQVar1->fields)._size == 0) {
          this_00 = (this->fields).esm;
          auStackX_18[0] = 0x2f;
          value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_18);
          if (this_00 == (EditorStateMachine *)0x0) goto code_?;
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OwnershipTest(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_OwnershipTest
               (int32_t id,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,id,(MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObjectClient *)0x0) || ((pMVar1->fields)._.ownerActorNr == 0)) {
      return 1;
    }
    iVar2 = (pMVar1->fields)._.ownerActorNr;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (this = (pMVar3->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
      pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        return iVar2 == (pMVar4->fields)._._ActorNr_k__BackingField;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean RequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVNetworkSelector_CanRequestOwnership(selectionSet,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  iStack_8 = (selectionSet->fields)._version;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_4 = 0;
  ppHStack_12 = &pHStack_13;
  while( true ) {
    pHStack_13 = selectionSet;
    cVar14 = FUN_?(&pHStack_13,
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                         );
    if (cVar14 == '\0') break;
    MVNetworkSelector_RequestOwnership_1(this,(int32_t)uStack_11,(MethodInfo *)0x0);
    selectionSet = pHStack_13;
  }
  return 1;
}


/* Void RequestOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership_1
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,id,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      iVar3 = (pMVar2->fields)._.ownerActorNr;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
           (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
          (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
         (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
      if (iVar3 == (pMVar7->fields)._._ActorNr_k__BackingField) {
        return;
      }
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,id,(MethodInfo *)0x0), pMVar2 != (MVWorldObjectClient *)0x0)) {
      if ((pMVar2->fields)._.ownerActorNr != 0) {
        return;
      }
      pQVar8 = (this->fields).pendingRequestedOwnershipIds;
      if (pQVar8 != (Queue_1_System_Int32_ *)0x0) {
        FUN_?(pQVar8,id);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar4 != (MVGameControllerBase *)0x0) &&
            (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
           ((pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0 &&
            ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar6,(MethodInfo *)0x0), pMVar7 != (MVLocalPlayer *)0x0 &&
             (this_00 != (MVNetworkGame_OperationRequests *)0x0)))))) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                    (this_00,id,(pMVar7->fields)._._ActorNr_k__BackingField,(Transform *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RequestReleaseOwnership(HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  iStack_7 = (selectionSet->fields)._version;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_3 = 0;
  ppHStack_11 = &pHStack_12;
  while( true ) {
    pHStack_12 = selectionSet;
    cVar13 = FUN_?(&pHStack_12,
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                         );
    if (cVar13 == '\0') {
      return;
    }
    id = (int32_t)uStack_10;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_02,id,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar15 == (MVGameControllerBase *)0x0) break;
    pMVar16 = (pMVar15->fields).game;
    if (pMVar16 == (MVNetworkGame *)0x0) {
code_?:
      FUN_?();
      break;
    }
    pTVar17 = (pMVar16->fields).transformNetworkManager;
    if (pTVar17 == (TransformNetworkManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pTVar17->fields).networkedObjects;
    if (this_00 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar15 == (MVGameControllerBase *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar16 = (pMVar15->fields).game;
    if (pMVar16 == (MVNetworkGame *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this_01 = (pMVar16->fields).operationRequests;
    if (pMVar14 == (MVWorldObjectClient *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
      FUN_?();
      goto code_?;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
              (this_01,id,0,(pMVar14->fields).transform,(MethodInfo *)0x0);
    selectionSet = pHStack_12;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RequestReleaseOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership_1
               (int32_t id,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,id,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pTVar4 = (pMVar3->fields).transformNetworkManager, pTVar4 != (TransformNetworkManager *)0x0)
       ) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (pTVar4->fields).networkedObjects;
      if (this != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this,id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           ((pMVar1 != (MVWorldObjectClient *)0x0 &&
            (this_00 = (pMVar3->fields).operationRequests,
            this_00 != (MVNetworkGame_OperationRequests *)0x0)))) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                    (this_00,id,0,(pMVar1->fields).transform,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVNetworkSelector(EditorStateMachine) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector__ctor
               (MVNetworkSelector *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkSelector__Instance_OnWorldObjectTransferOwnershipResponse_System__Object__OnTransferOwnershipResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
  FUN_?();
  iVar2 = iRam_?;
  (this->fields).pendingRequestedOwnershipIds = pQVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).pendingRequestedOwnershipIds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).esm = esm;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pEVar10 = (pMVar8->fields).OnWorldObjectTransferOwnershipResponse;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVNetworkSelector__Instance_OnWorldObjectTransferOwnershipResponse_System__Object__OnTransferOwnershipResponseEventArgs_
             ,(MethodInfo *)0x0);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pEVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  pEVar12 = TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>;
  if (pDVar11 == (Delegate *)0x0) {
    (pMVar8->fields).OnWorldObjectTransferOwnershipResponse =
         (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0;
  }
  else {
    pEVar10 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)
             FUN_?(pDVar11,
                           TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>);
    if (pEVar10 == (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
      FUN_?(pDVar11,pEVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pMVar8->fields).OnWorldObjectTransferOwnershipResponse = pEVar10;
    pEVar12 = TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>;
    lVar4 = FUN_?(pDVar11,
                           TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>);
    if (lVar4 == 0) {
      FUN_?(pDVar11,pEVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar8->fields).OnWorldObjectTransferOwnershipResponse >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

