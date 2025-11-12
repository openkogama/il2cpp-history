
/* Void AddFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_2 = obj;
  UStack_6 = priority;
  iStack_7 = conditionInp;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar8 != (List_1_PriorityDataFixedUpdate___Array *)0x0) {
    if ((UpdatePriority__Enum)pLVar8->max_length <= priority) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[(int)priority] != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      UStack_12 = UStack_6;
      iStack_13 = iStack_7;
      FUN_?(pLVar8->vector[(int)priority],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_2 = obj;
  UStack_6 = priority;
  iStack_7 = conditionInp;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar8 != (List_1_PriorityDataLateUpdate___Array *)0x0) {
    if ((UpdatePriority__Enum)pLVar8->max_length <= priority) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[(int)priority] != (List_1_PriorityDataLateUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      UStack_12 = UStack_6;
      iStack_13 = iStack_7;
      FUN_?(pLVar8->vector[(int)priority],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddUpdateObject(IUpdatecontrollerSubscriberUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_2 = obj;
  UStack_6 = priority;
  iStack_7 = conditionInp;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar8 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((UpdatePriority__Enum)pLVar8->max_length <= priority) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[(int)priority] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      UStack_12 = UStack_6;
      iStack_13 = iStack_7;
      FUN_?(pLVar8->vector[(int)priority],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Clear(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x20;
  uVar2 = 0;
  lVar3 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UpdateController);
    }
    pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar4->max_length <= (int)uVar2) {
      uVar2 = 0;
      lVar3 = 0x20;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UpdateController);
    }
    pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((uint)pLVar4->max_length <= uVar2) goto code_?;
    lVar5 = *(longlong *)((longlong)pLVar4->vector + lVar3 + -0x20);
    if (lVar5 == 0) break;
    iVar6 = *(int32_t *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar6) {
      mscorlib.dll::System::Array::Array_Clear(*(Array **)(lVar5 + 0x10),0,iVar6,(MethodInfo *)0x0);
    }
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 8;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar8->max_length <= (int)uVar2) {
    uVar2 = 0;
    goto code_?;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  if ((uint)pLVar8->max_length <= uVar2) goto code_?;
  lVar5 = *(longlong *)((longlong)pLVar8->vector + lVar3 + -0x20);
  if (lVar5 == 0) goto code_?;
  iVar6 = *(int32_t *)(lVar5 + 0x18);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  *(undefined4 *)(lVar5 + 0x18) = 0;
  if (0 < iVar6) {
    mscorlib.dll::System::Array::Array_Clear(*(Array **)(lVar5 + 0x10),0,iVar6,(MethodInfo *)0x0);
  }
  uVar2 = uVar2 + 1;
  lVar3 = lVar3 + 8;
  goto code_?;
code_?:
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar9 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar9 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar9->max_length <= (int)uVar2) {
    return;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar9 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar9 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  if ((uint)pLVar9->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = *(longlong *)((longlong)pLVar9->vector + lVar1 + -0x20);
  if (lVar3 == 0) goto code_?;
  iVar6 = *(int32_t *)(lVar3 + 0x18);
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if (0 < iVar6) {
    mscorlib.dll::System::Array::Array_Clear(*(Array **)(lVar3 + 0x10),0,iVar6,(MethodInfo *)0x0);
  }
  uVar2 = uVar2 + 1;
  lVar1 = lVar1 + 8;
  goto code_?;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_FixedUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    if ((uint)pLVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateController_FixedUpdateList
              (state,*(List_1_PriorityDataFixedUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20)
               ,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FixedUpdateList(Int32, List`1[PriorityDataFixedUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_FixedUpdateList
               (int32_t state,List_1_PriorityDataFixedUpdate_ *priorityDatas,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IUpdatecontrollerSubscriberFixedUpdate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (priorityDatas != (List_1_PriorityDataFixedUpdate_ *)0x0) {
    while( true ) {
      uVar2 = (priorityDatas->fields)._size;
      if ((int)uVar2 <= (int)uVar1) {
        return;
      }
      if (uVar2 <= uVar1) goto code_?;
      pPVar3 = (priorityDatas->fields)._items;
      if (pPVar3 == (PriorityDataFixedUpdate__Array *)0x0) break;
      if ((uint)pPVar3->max_length <= uVar1) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = pPVar3->vector[(int)uVar1].condition;
      if (0 < (state & uVar5)) {
        if (uVar1 < (uint)(priorityDatas->fields)._size) {
          pPVar3 = (priorityDatas->fields)._items;
          if (pPVar3 != (PriorityDataFixedUpdate__Array *)0x0) {
            if ((uint)pPVar3->max_length <= uVar1) goto code_?;
            if (pPVar3->vector[(int)uVar1].obj != (IUpdatecontrollerSubscriberFixedUpdate *)0x0) {
              FUN_?(0,TypeInfo__IUpdatecontrollerSubscriberFixedUpdate);
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      uVar1 = uVar1 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetPresentState() */

int32_t Assembly-CSharp.dll::UpdateController::UpdateController_GetPresentState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0) {
    return 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iVar2 = 5;
    if ((pGVar1->fields).gameMode != 0) {
      iVar2 = 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 0) {
        this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this == (MVNetworkGame *)0x0) goto DAT_?;
        bVar3 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          iVar2 = iVar2 + 8;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        iVar4 = iVar2 + 2;
        if ((pGVar1->fields).gameMode != 1) {
          iVar4 = iVar2;
        }
        return iVar4;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
    if ((uint)pLVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateController_LateUpdateList
              (state,*(List_1_PriorityDataLateUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LateUpdateList(Int32, List`1[PriorityDataLateUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_LateUpdateList
               (int32_t state,List_1_PriorityDataLateUpdate_ *priorityDatas,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IUpdatecontrollerSubscriberLateUpdate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (priorityDatas != (List_1_PriorityDataLateUpdate_ *)0x0) {
    while( true ) {
      uVar2 = (priorityDatas->fields)._size;
      if ((int)uVar2 <= (int)uVar1) {
        return;
      }
      if (uVar2 <= uVar1) goto code_?;
      pPVar3 = (priorityDatas->fields)._items;
      if (pPVar3 == (PriorityDataLateUpdate__Array *)0x0) break;
      if ((uint)pPVar3->max_length <= uVar1) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = pPVar3->vector[(int)uVar1].condition;
      if (0 < (state & uVar5)) {
        if (uVar1 < (uint)(priorityDatas->fields)._size) {
          pPVar3 = (priorityDatas->fields)._items;
          if (pPVar3 != (PriorityDataLateUpdate__Array *)0x0) {
            if ((uint)pPVar3->max_length <= uVar1) goto code_?;
            if (pPVar3->vector[(int)uVar1].obj != (IUpdatecontrollerSubscriberLateUpdate *)0x0) {
              FUN_?(0,TypeInfo__IUpdatecontrollerSubscriberLateUpdate);
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      uVar1 = uVar1 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass7_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(IUpdatecontrollerSubscriberFixedUpdate **)(lVar1 + 0x10) = obj;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
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
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
              ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataLateUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass8_0___RemoveLateUpdateObject_b__0_PriorityDataLateUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass8_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(IUpdatecontrollerSubscriberLateUpdate **)(lVar1 + 0x10) = obj;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
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
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
              ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataLateUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveUpdateObject(IUpdatecontrollerSubscriberUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(IUpdatecontrollerSubscriberUpdate **)(lVar1 + 0x10) = obj;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
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
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
              ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((uint)pLVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateController_UpdateList
              (state,*(List_1_PriorityDataUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateList(Int32, List`1[PriorityDataUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_UpdateList
               (int32_t state,List_1_PriorityDataUpdate_ *priorityDatas,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IUpdatecontrollerSubscriberUpdate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (priorityDatas != (List_1_PriorityDataUpdate_ *)0x0) {
    do {
      uVar2 = (priorityDatas->fields)._size;
      if ((int)uVar2 <= (int)uVar1) {
        return;
      }
      if (uVar2 <= uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pPVar4 = (priorityDatas->fields)._items;
      if (pPVar4 == (PriorityDataUpdate__Array *)0x0) break;
      if ((uint)pPVar4->max_length <= uVar1) goto code_?;
      if (pPVar4->vector[(int)uVar1].obj != (IUpdatecontrollerSubscriberUpdate *)0x0) {
        if ((uint)(priorityDatas->fields)._size <= uVar1) goto code_?;
        if (pPVar4 == (PriorityDataUpdate__Array *)0x0) break;
        if ((uint)pPVar4->max_length <= uVar1) goto code_?;
        uVar5 = pPVar4->vector[(int)uVar1].condition;
        if (0 < (state & uVar5)) {
          if (uVar1 < (uint)(priorityDatas->fields)._size) {
            pPVar4 = (priorityDatas->fields)._items;
            if (pPVar4 != (PriorityDataUpdate__Array *)0x0) {
              if (uVar1 < (uint)pPVar4->max_length) {
                if (pPVar4->vector[(int)uVar1].obj != (IUpdatecontrollerSubscriberUpdate *)0x0) {
                  FUN_?(0,TypeInfo__IUpdatecontrollerSubscriberUpdate);
                  goto code_?;
                }
              }
              else {
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
code_?:
      uVar1 = uVar1 + 1;
    } while( true );
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* UpdateController() */

void Assembly-CSharp.dll::UpdateController::UpdateController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_PriorityDataUpdate___Array *)
           FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>,5);
  lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
  FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
  if (pLVar1 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((lVar2 != 0) && (lVar3 = FUN_?(lVar2,(pLVar1->klass->_0).element_class), lVar3 == 0)
       ) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pLVar1,0,lVar2);
    lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if ((lVar2 != 0) && (lVar3 = FUN_?(lVar2,(pLVar1->klass->_0).element_class), lVar3 == 0)
       ) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pLVar1,1,lVar2);
    lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if ((lVar2 != 0) && (lVar3 = FUN_?(lVar2,(pLVar1->klass->_0).element_class), lVar3 == 0)
       ) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pLVar1,2,lVar2);
    lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if ((lVar2 != 0) && (lVar3 = FUN_?(lVar2,(pLVar1->klass->_0).element_class), lVar3 == 0)
       ) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pLVar1,3,lVar2);
    lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    FUN_?(lVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if ((lVar2 != 0) && (lVar3 = FUN_?(lVar2,(pLVar1->klass->_0).element_class), lVar3 == 0)
       ) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pLVar1,4,lVar2);
    bVar6 = iRam_? != 0;
    TypeInfo__UpdateController->static_fields->updateBuckets = pLVar1;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)TypeInfo__UpdateController->static_fields >> 0xc);
      lVar2 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar9 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar6 = uVar8 == *puVar9;
        if (bVar6) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pLVar10 = (List_1_PriorityDataFixedUpdate___Array *)
             FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>,5);
    lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    FUN_?(lVar2,
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar10 != (List_1_PriorityDataFixedUpdate___Array *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = FUN_?(lVar2,(pLVar10->klass->_0).element_class), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(pLVar10,0,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
      FUN_?(lVar2,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__)
      ;
      if ((lVar2 != 0) &&
         (lVar3 = FUN_?(lVar2,(pLVar10->klass->_0).element_class), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(pLVar10,1,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
      FUN_?(lVar2,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__)
      ;
      if ((lVar2 != 0) &&
         (lVar3 = FUN_?(lVar2,(pLVar10->klass->_0).element_class), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(pLVar10,2,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
      FUN_?(lVar2,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__)
      ;
      if ((lVar2 != 0) &&
         (lVar3 = FUN_?(lVar2,(pLVar10->klass->_0).element_class), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(pLVar10,3,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
      FUN_?(lVar2,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__)
      ;
      if ((lVar2 != 0) &&
         (lVar3 = FUN_?(lVar2,(pLVar10->klass->_0).element_class), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(pLVar10,4,lVar2);
      bVar6 = iRam_? != 0;
      TypeInfo__UpdateController->static_fields->fixedUpdateBuckets = pLVar10;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&TypeInfo__UpdateController->static_fields->fixedUpdateBuckets >>
                       0xc);
        lVar2 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar9 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar6 = uVar8 == *puVar9;
          if (bVar6) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pLVar11 = (List_1_PriorityDataLateUpdate___Array *)
               FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>,5)
      ;
      lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
      FUN_?(lVar2,
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
      if (pLVar11 != (List_1_PriorityDataLateUpdate___Array *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = FUN_?(lVar2,(pLVar11->klass->_0).element_class), lVar3 == 0)) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(pLVar11,0,lVar2);
        lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
        FUN_?(lVar2,
                      MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
                     );
        if ((lVar2 != 0) &&
           (lVar3 = FUN_?(lVar2,(pLVar11->klass->_0).element_class), lVar3 == 0)) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(pLVar11,1,lVar2);
        lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
        FUN_?(lVar2,
                      MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
                     );
        if ((lVar2 != 0) &&
           (lVar3 = FUN_?(lVar2,(pLVar11->klass->_0).element_class), lVar3 == 0)) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(pLVar11,2,lVar2);
        lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
        FUN_?(lVar2,
                      MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
                     );
        if ((lVar2 != 0) &&
           (lVar3 = FUN_?(lVar2,(pLVar11->klass->_0).element_class), lVar3 == 0)) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(pLVar11,3,lVar2);
        lVar2 = FUN_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
        FUN_?(lVar2,
                      MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
                     );
        if ((lVar2 != 0) &&
           (lVar3 = FUN_?(lVar2,(pLVar11->klass->_0).element_class), lVar3 == 0)) {
          uVar4 = FUN_?();
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(pLVar11,4,lVar2);
        bVar6 = iRam_? != 0;
        TypeInfo__UpdateController->static_fields->lateUpdateBuckets = pLVar11;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&TypeInfo__UpdateController->static_fields->lateUpdateBuckets
                         >> 0xc);
          lVar2 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar9 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar6 = uVar8 == *puVar9;
            if (bVar6) {
              *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

