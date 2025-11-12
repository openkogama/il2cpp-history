
/* Void Clicked() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_Clicked
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  (this->fields).buttonHasBeenClicked = 1;
  if ((this->fields).isReady == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeActivatableElementBase;
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
  if (pFVar1 != (FirstTimeActivatableElementBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pFVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pFVar1 = (this->fields).firstTimeActivatableElementBase;
      if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pFVar1 = (this->fields).firstTimeActivatableElementBase;
        if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
      }
    }
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar4 = (void *)0x0;
  if (this != (FirstTimeButtonClicked *)0x0) {
    pvVar4 = (this->fields)._._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void FirstTimeStateReceiver(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_FirstTimeStateReceiver
               (FirstTimeButtonClicked *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum latestFirstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,firstTimeState,
                  CONCAT44(in_register_00000084,latestFirstTimeEvent));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).isReady = 1;
    if ((this->fields).buttonHasBeenClicked == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar2 = (this->fields).firstTimeActivatableElementBase;
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
    if (pFVar2 != (FirstTimeActivatableElementBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pFVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pFVar2 = (this->fields).firstTimeActivatableElementBase;
        if (pFVar2 == (FirstTimeActivatableElementBase *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                          ((pFVar2->fields)._.firstTimeEvent,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pFVar2 = (this->fields).firstTimeActivatableElementBase;
          if (pFVar2 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
          FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                    ((pFVar2->fields)._.firstTimeEvent,(MethodInfo *)0x0);
        }
      }
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
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
  }
  else {
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
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar4 = (void *)0x0;
  if (this != (FirstTimeButtonClicked *)0x0) {
    pvVar4 = (this->fields)._._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void HandleFirstTimeEvent() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_HandleFirstTimeEvent
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeActivatableElementBase;
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
  if (pFVar1 != (FirstTimeActivatableElementBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pFVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pFVar1 = (this->fields).firstTimeActivatableElementBase;
      if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pFVar1 = (this->fields).firstTimeActivatableElementBase;
        if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
      }
    }
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar4 = (void *)0x0;
  if (this != (FirstTimeButtonClicked *)0x0) {
    pvVar4 = (this->fields)._._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_OnDestroy
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeButtonClicked__Clicked__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_01,(MethodInfo *)0x0);
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = (pBVar1->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__FirstTimeButtonClicked__Clicked__,
               (MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      pOVar3 = (this_02->fields)._._.m_target;
      uVar4 = (*(this_02->klass->vtable).GetMethodImpl.methodPtr)
                         (this_02,(this_02->klass->vtable).GetMethodImpl.method);
      pIVar5 = (pBVar2->fields)._._.m_Calls;
      if (pIVar5 != (InvokableCallList *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__RemoveAll_System__Predicate<UnityEngine::Events::BaseInvokableCall>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__List__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__List_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Predicate<UnityEngine::Events::BaseInvokableCall>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_03 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>
                               );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__List__
                  );
        pLVar6 = (pIVar5->fields).m_RuntimeCalls;
        uVar7 = 0;
        if (pLVar6 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
          lVar8 = 0x20;
          while (this_00 = (List_1_System_Object_ *)(pIVar5->fields).m_RuntimeCalls,
                (int)uVar7 < (pLVar6->fields)._size) {
            if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
            if ((uint)(this_00->fields)._size <= uVar7) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pOVar10 = (this_00->fields)._items;
            if (pOVar10 == (Object__Array *)0x0) goto code_?;
            if ((uint)pOVar10->max_length <= uVar7) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            plVar11 = *(longlong **)((longlong)pOVar10->vector + lVar8 + -0x20);
            if (plVar11 == (longlong *)0x0) goto code_?;
            cVar12 = (**(code **)(*plVar11 + 0x188))(plVar11,pOVar3,uVar4);
            if (cVar12 != '\0') {
              pLVar6 = (pIVar5->fields).m_RuntimeCalls;
              if ((pLVar6 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) ||
                 (uVar13 = FUN_?(pLVar6,uVar7),
                 this_03 ==
                 (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
              goto code_?;
              FUN_?(this_03,uVar13);
            }
            pLVar6 = (pIVar5->fields).m_RuntimeCalls;
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 8;
            if (pLVar6 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0)
            goto code_?;
          }
          this_04 = (Predicate_1_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Predicate<UnityEngine::Events::BaseInvokableCall>
                                 );
          if ((this_03 != (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
             && (mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                           (this_04,(Object *)this_03,(this_03->klass->vtable).Remove.method,
                            (MethodInfo *)0x0), this_00 != (List_1_System_Object_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAll
                      (this_00,this_04,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__RemoveAll_System__Predicate<UnityEngine::Events::BaseInvokableCall>_
                      );
            pLVar6 = (pIVar5->fields).m_PersistentCalls;
            if (pLVar6 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
              pLVar14 = (pIVar5->fields).m_RuntimeCalls;
              iVar15 = (pLVar6->fields)._size;
              if (pLVar14 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                iVar16 = (pLVar14->fields)._size;
                this_05 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                           *)FUN_?(
                                          TypeInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>
                                          );
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                          (this_05,iVar16 + iVar15,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__List_int_
                          );
                if (this_05 !=
                    (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__InsertRange
                            ((List_1_System_Object_ *)this_05,(this_05->fields)._size,
                             (IEnumerable_1_System_Object_ *)(pIVar5->fields).m_PersistentCalls,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                             ->klass->rgctx_data[0x12].method);
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__InsertRange
                            ((List_1_System_Object_ *)this_05,(this_05->fields)._size,
                             (IEnumerable_1_System_Object_ *)(pIVar5->fields).m_RuntimeCalls,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                             ->klass->rgctx_data[0x12].method);
                  bVar17 = iRam_? != 0;
                  (pIVar5->fields).m_ExecutingCalls =
                       (List_1_UnityEngine_Events_BaseInvokableCall_ *)this_05;
                  if (bVar17) {
                    uVar7 = (uint)((ulonglong)&(pIVar5->fields).m_ExecutingCalls >> 0xc);
                    puVar18 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar19 = *puVar18;
                      LOCK();
                      uVar20 = *puVar18;
                      if (uVar19 == uVar20) {
                        *puVar18 = uVar19 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar19 != uVar20);
                  }
                  (pIVar5->fields).m_NeedsUpdate = 0;
                  return;
                }
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
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_Start
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeButtonClicked__Clicked__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__FirstTimeButtonClicked__Clicked__,
               (MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Int32_ *)
                FUN_?(
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
      UnityAction_2_System_Object_System_Int32___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__FirstTimeEventManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeState != (FirstTimeState *)0x0) {
        if (this_02 == (UnityAction_2_System_Object_System_Int32_ *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(this_02->fields)._._.invoke_impl)
                  ((this_02->fields)._._.method_code,
                   TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0xffffffff,
                   (this_02->fields)._._.method,unaff_RBX);
      }
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)
                          TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                          (Delegate *)this_02,(MethodInfo *)0x0);
      pAVar4 = 
      TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
      ;
      if (pDVar3 == (Delegate *)0x0) {
        TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
             (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)0x0;
      }
      else {
        pAVar5 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)FUN_?(pDVar3,
                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                 );
        if (pAVar5 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                       *)0x0) {
          FUN_?(pDVar3,pAVar4);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar5;
        pAVar4 = 
        TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
        ;
        lVar6 = FUN_?(pDVar3,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
        if (lVar6 == 0) {
          FUN_?(pDVar3,pAVar4);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
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
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

