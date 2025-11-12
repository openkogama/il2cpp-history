
/* Void OnPlayerReady() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::
     SessionTimeDistributionManager_OnPlayerReady
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SessionTimeDistributionManager__OnPlayerReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnLocalPlayerReady;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__SessionTimeDistributionManager__OnPlayerReady__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
    (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
  }
  else {
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?(pAVar5,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnLocalPlayerReady = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerReady >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pcVar4 = pcRam_?;
  (this->fields).countingSessionTime = 1;
  pcVar12 = pcRam_?;
  if ((pcVar4 == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar12 = pcVar4, pcVar4 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar12;
  fVar14 = (float)(*pcVar4)();
  (this->fields).startTime = fVar14;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager_Start
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SessionTimeDistributionManager__OnPlayerReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  pAVar2 = pAVar1;
  do {
    pQVar3 = (this->fields).intervals;
    if ((pQVar3 == (Queue_1_System_Int32_ *)0x0) ||
       (pIVar4 = (pQVar3->fields)._array, pIVar4 == (Int32__Array *)0x0)) goto code_?;
    if ((pQVar3->fields)._size == (int)pIVar4->max_length) {
      pIVar4 = (pQVar3->fields)._array;
      iVar5 = (int)pIVar4->max_length * 2;
      if (iVar5 < (int)pIVar4->max_length + 4) {
        iVar5 = (int)pIVar4->max_length + 4;
      }
      FUN_?(pQVar3,iVar5);
    }
    pIVar4 = (pQVar3->fields)._array;
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    uVar6 = (pQVar3->fields)._tail;
    if ((uint)pIVar4->max_length <= uVar6) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar4->vector[(int)uVar6] = (int)pAVar2;
    pIVar4 = (pQVar3->fields)._array;
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    iVar8 = (pQVar3->fields)._tail + 1;
    iVar5 = 0;
    if (iVar8 != (int)pIVar4->max_length) {
      iVar5 = iVar8;
    }
    uVar6 = (int)pAVar2 + 2;
    pAVar2 = (Action *)(ulonglong)uVar6;
    (pQVar3->fields)._tail = iVar5;
    piVar9 = &(pQVar3->fields)._size;
    *piVar9 = *piVar9 + 1;
    piVar9 = &(pQVar3->fields)._version;
    *piVar9 = *piVar9 + 1;
  } while ((int)uVar6 < 0x12);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
       (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
      (pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0)) &&
     (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
     pMVar13 != (MVLocalPlayer *)0x0)) {
    if ((pMVar13->fields)._.playerState == 1) {
      SessionTimeDistributionManager_OnPlayerReady(this,(MethodInfo *)0x0);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar10 == (MVGameControllerBase *)0x0) ||
          (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
         (pMVar12 = (pMVar11->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0))
      goto code_?;
      pAVar2 = (pMVar12->fields).OnLocalPlayerReady;
      b = (Delegate *)FUN_?(TypeInfo__System__Action);
      pMVar14 = MethodInfo__SessionTimeDistributionManager__OnPlayerReady__;
      bVar15 = iRam_? != 0;
      pIVar16 = MethodInfo__SessionTimeDistributionManager__OnPlayerReady__->virtualMethodPointer;
      (b->fields).m_target = (Object *)this;
      (b->fields).method_ptr = pIVar16;
      (b->fields).method = pMVar14;
      if (bVar15) {
        uVar6 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
        lVar17 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
          puVar19 = (ulonglong *)(lVar17 + 0xADDR);
          LOCK();
          bVar15 = uVar18 == *puVar19;
          if (bVar15) {
            *puVar19 = uVar18 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      uVar20 = pMVar14->parameters_count;
      (b->fields).method_code = b;
      if (((pMVar14->flags & 0x10) == 0) || (uVar20 != 0)) {
        (b->fields).method_code = (b->fields).m_target;
        puVar21 = (b->fields).method_ptr;
      }
      else {
        puVar21 = &UNK_?;
      }
      (b->fields).invoke_impl = puVar21;
      (b->fields).extra_arg = FUN_?;
      pAVar2 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar2,b,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pMVar12->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        pAVar22 = pAVar1;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar22 = pAVar2;
        }
        if (pAVar22 == (Action *)0x0) {
          FUN_?(pAVar2);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar12->fields).OnLocalPlayerReady = pAVar22;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar1 = pAVar2;
        }
        if (pAVar1 == (Action *)0x0) {
          FUN_?(pAVar2);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pMVar12->fields).OnLocalPlayerReady >> 0xc);
        lVar17 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
          puVar19 = (ulonglong *)(lVar17 + 0xADDR);
          LOCK();
          bVar15 = uVar18 == *puVar19;
          if (bVar15) {
            *puVar19 = uVar18 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager_Update
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Peek__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SessionTimeMeasuredAtMinute);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).countingSessionTime == 0) {
    return;
  }
  pQVar1 = (this->fields).intervals;
  if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (SessionTimeDistributionManager *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
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
    fVar5 = (float)(*pcRam_?)();
    if ((this->fields).intervals != (Queue_1_System_Int32_ *)0x0) {
      fVar6 = (this->fields).startTime;
      iVar7 = FUN_?();
      if ((float)(iVar7 * 0x3c) < fVar5 - fVar6) {
        if ((this->fields).intervals == (Queue_1_System_Int32_ *)0x0) goto DAT_?;
        FUN_?();
        pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_SessionTimeMeasuredAtMinute,pSVar8,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(pSVar8,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SessionTimeDistributionManager() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager__ctor
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  FUN_?(pQVar1);
  bVar2 = iRam_? != 0;
  (this->fields).intervals = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).intervals >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

