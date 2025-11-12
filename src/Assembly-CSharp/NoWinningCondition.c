
/* Void Clear() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_Clear
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimer;
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
  if (pRVar1 != (RoundTimer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).roundTimer;
      if (pRVar1 == (RoundTimer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pRVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).roundTimer = (RoundTimer *)0x0;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).roundTimer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
    }
  }
  return;
}


/* Void CreateRoundTimer(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_CreateRoundTimer
               (NoWinningCondition *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimerPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                      (pTVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pRVar1 = (RoundTimer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pRVar1,pTVar2,0,
                       RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                      );
  bVar4 = iRam_? != 0;
  (this->fields).roundTimer = pRVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).roundTimer >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pRVar1 = (this->fields).roundTimer;
  if ((pRVar1 == (RoundTimer *)0x0) ||
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar9);
  pRVar1 = (this->fields).roundTimer;
  if (pRVar1 == (RoundTimer *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__,roundCube,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar4 = iRam_? != 0;
  (pRVar1->fields).roundCube = roundCube;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pRVar1->fields).roundCube >> 0xc);
    lVar11 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar6 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pLVar12 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar12,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar4 = iRam_? != 0;
  (pRVar1->fields).timeNotifications = pLVar12;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pRVar1->fields).timeNotifications >> 0xc);
    lVar11 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar6 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pRVar1->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  pLVar12 = (pRVar1->fields).timeNotifications;
  if (((pLVar12->fields)._size == 0) ||
     (iVar13 = FUN_?(pLVar12,10,
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                             klass->rgctx_data[0x17].rgctxDataDummy), iVar13 == -1)) {
    pLVar12 = (pRVar1->fields).timeNotifications;
    if (pLVar12 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar12,10,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar12 = (pRVar1->fields).timeNotifications;
  if (pLVar12 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar12->fields)._size == 0) ||
       (iVar13 = FUN_?(pLVar12,0x1e,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                               klass->rgctx_data[0x17].rgctxDataDummy), iVar13 == -1)) {
      pLVar12 = (pRVar1->fields).timeNotifications;
      if (pLVar12 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar12,0x1e,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar12 = (pRVar1->fields).timeNotifications;
    if (pLVar12 != (List_1_System_Int32_ *)0x0) {
      if (((pLVar12->fields)._size == 0) ||
         (iVar13 = FUN_?(pLVar12,0x3c,
                                 MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                 ->klass->rgctx_data[0x17].rgctxDataDummy), iVar13 == -1)) {
        pLVar12 = (pRVar1->fields).timeNotifications;
        if (pLVar12 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar12,0x3c,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar12 = (pRVar1->fields).timeNotifications;
      if (pLVar12 != (List_1_System_Int32_ *)0x0) {
        if (((pLVar12->fields)._size != 0) &&
           (iVar13 = FUN_?(pLVar12,300,
                                   MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                   ->klass->rgctx_data[0x17].rgctxDataDummy), iVar13 != -1)) {
          return;
        }
        pMVar14 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pLVar12 = (pRVar1->fields).timeNotifications;
        if (pLVar12 != (List_1_System_Int32_ *)0x0) {
          piVar15 = &(pLVar12->fields)._version;
          *piVar15 = *piVar15 + 1;
          pIVar16 = (pLVar12->fields)._items;
          if (pIVar16 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = (pLVar12->fields)._size;
          if (uVar5 < (uint)pIVar16->max_length) {
            (pLVar12->fields)._size = uVar5 + 1;
            if (uVar5 < (uint)pIVar16->max_length) {
              pIVar16->vector[(int)uVar5] = 300;
              return;
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar17 = (pLVar12->fields)._size;
          FUN_?(pLVar12,uVar17 + 1,
                        (pMVar14->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,(longlong)(int)uVar5,unaff_RDI);
          pIVar16 = (pLVar12->fields)._items;
          (pLVar12->fields)._size = uVar17 + 1;
          if (pIVar16 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar17 < (uint)pIVar16->max_length) {
            pIVar16->vector[(int)uVar17] = 300;
            return;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_RoundEndReset
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimer;
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
  if (pRVar1 != (RoundTimer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).roundTimer;
      if (pRVar1 == (RoundTimer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RoundTimer::RoundTimer_ResetTimeNotifications(pRVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void TryInitializeRoundCube() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_TryInitializeRoundCube
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                      (this_00,
                       WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                      );
  if (pWVar2 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar3 = (this->fields).roundTimerPrefab;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                      (pTVar4,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pRVar3 = (RoundTimer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pRVar3,pTVar4,0,
                       RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                      );
  bVar5 = iRam_? != 0;
  (this->fields).roundTimer = pRVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).roundTimer >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pRVar3 = (this->fields).roundTimer;
  if ((pRVar3 == (RoundTimer *)0x0) ||
     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar3,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar10 = (pTVar4->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar10);
  pRVar3 = (this->fields).roundTimer;
  if (pRVar3 == (RoundTimer *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__,pWVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = iRam_? != 0;
  (pRVar3->fields).roundCube = (WorldObjectClientRef_1_MVRoundCube_ *)pWVar2;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pRVar3->fields).roundCube >> 0xc);
    lVar12 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar7 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar5 = uVar9 == *puVar7;
      if (bVar5) {
        *puVar7 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLVar13 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar13,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar5 = iRam_? != 0;
  (pRVar3->fields).timeNotifications = pLVar13;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pRVar3->fields).timeNotifications >> 0xc);
    lVar12 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar7 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar5 = uVar9 == *puVar7;
      if (bVar5) {
        *puVar7 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pRVar3->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  pLVar13 = (pRVar3->fields).timeNotifications;
  if (((pLVar13->fields)._size == 0) ||
     (iVar14 = FUN_?(pLVar13,10,
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                             klass->rgctx_data[0x17].rgctxDataDummy), iVar14 == -1)) {
    pLVar13 = (pRVar3->fields).timeNotifications;
    if (pLVar13 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar13,10,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar13 = (pRVar3->fields).timeNotifications;
  if (pLVar13 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar13->fields)._size == 0) ||
       (iVar14 = FUN_?(pLVar13,0x1e,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                               klass->rgctx_data[0x17].rgctxDataDummy), iVar14 == -1)) {
      pLVar13 = (pRVar3->fields).timeNotifications;
      if (pLVar13 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar13,0x1e,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar13 = (pRVar3->fields).timeNotifications;
    if (pLVar13 != (List_1_System_Int32_ *)0x0) {
      if (((pLVar13->fields)._size == 0) ||
         (iVar14 = FUN_?(pLVar13,0x3c,
                                 MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                 ->klass->rgctx_data[0x17].rgctxDataDummy), iVar14 == -1)) {
        pLVar13 = (pRVar3->fields).timeNotifications;
        if (pLVar13 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar13,0x3c,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar13 = (pRVar3->fields).timeNotifications;
      if (pLVar13 != (List_1_System_Int32_ *)0x0) {
        if (((pLVar13->fields)._size != 0) &&
           (iVar14 = FUN_?(pLVar13,300,
                                   MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                   ->klass->rgctx_data[0x17].rgctxDataDummy), iVar14 != -1)) {
          return;
        }
        pMVar15 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pLVar13 = (pRVar3->fields).timeNotifications;
        if (pLVar13 != (List_1_System_Int32_ *)0x0) {
          piVar16 = &(pLVar13->fields)._version;
          *piVar16 = *piVar16 + 1;
          pIVar17 = (pLVar13->fields)._items;
          if (pIVar17 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar6 = (pLVar13->fields)._size;
          if (uVar6 < (uint)pIVar17->max_length) {
            (pLVar13->fields)._size = uVar6 + 1;
            if (uVar6 < (uint)pIVar17->max_length) {
              pIVar17->vector[(int)uVar6] = 300;
              return;
            }
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar18 = (pLVar13->fields)._size;
          FUN_?(pLVar13,uVar18 + 1,
                        (pMVar15->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,(longlong)(int)uVar6,unaff_RDI);
          pIVar17 = (pLVar13->fields)._items;
          (pLVar13->fields)._size = uVar18 + 1;
          if (pIVar17 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uVar18 < (uint)pIVar17->max_length) {
            pIVar17->vector[(int)uVar18] = 300;
            return;
          }
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

