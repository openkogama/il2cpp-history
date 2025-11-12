
/* Void UpdateJoinStateForUI(MVEventCodes) */

void Assembly-CSharp.dll::JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
               (MVEventCodes__Enum eventCode,MethodInfo *method)

{
  uVar1 = (uint8_t)eventCode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JoinUIUpdater);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar1 != 0x49) {
    if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent != 0x3e) || (uVar1 == 0x3f)) {
      if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
        FUN_?();
      }
      pQVar2 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
      if ((pQVar2 != (Queue_1_MV_Common_MVEventCodes_ *)0x0) &&
         (pMVar3 = (pQVar2->fields)._array, pMVar3 != (MVEventCodes__Enum__Array *)0x0)) {
        if ((pQVar2->fields)._size == (int)pMVar3->max_length) {
          pMVar3 = (pQVar2->fields)._array;
          iVar4 = (int)pMVar3->max_length * 2;
          if (iVar4 < (int)pMVar3->max_length + 4) {
            iVar4 = (int)pMVar3->max_length + 4;
          }
          FUN_?(pQVar2,iVar4,
                        MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                        ->klass->rgctx_data[5].rgctxDataDummy);
        }
        pMVar3 = (pQVar2->fields)._array;
        if (pMVar3 != (MVEventCodes__Enum__Array *)0x0) {
          uVar5 = (pQVar2->fields)._tail;
          if ((uint)pMVar3->max_length <= uVar5) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint8_t *)((longlong)pMVar3->vector + (longlong)(int)uVar5) = uVar1;
          pMVar3 = (pQVar2->fields)._array;
          if (pMVar3 != (MVEventCodes__Enum__Array *)0x0) {
            iVar4 = (pQVar2->fields)._tail + 1;
            iVar7 = 0;
            if (iVar4 != (int)pMVar3->max_length) {
              iVar7 = iVar4;
            }
            (pQVar2->fields)._tail = iVar7;
            piVar8 = &(pQVar2->fields)._size;
            *piVar8 = *piVar8 + 1;
            piVar8 = &(pQVar2->fields)._version;
            *piVar8 = *piVar8 + 1;
            TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = uVar1;
            return;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}


/* JoinUIUpdater() */

void Assembly-CSharp.dll::JoinUIUpdater::JoinUIUpdater__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JoinUIUpdater);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_MV_Common_MVEventCodes_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>);
  pMVar2 = (MVEventCodes__Enum__Array *)
           FUN_?(MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Queue__
                         ->klass->rgctx_data->rgctxDataDummy);
  bVar3 = iRam_? != 0;
  (pQVar1->fields)._array = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pQVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes = pQVar1;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__JoinUIUpdater->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = 0x3a;
  return;
}

