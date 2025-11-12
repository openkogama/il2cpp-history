
/* Boolean CanSense(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 *targetPosition,
               MethodInfo *method)

{
  VStack_1.x = targetPosition->x;
  VStack_1.y = targetPosition->y;
  VStack_1.z = targetPosition->z;
  bVar2 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                    (this,&VStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pAVar3 = (this->fields).ghostBehaviour;
  if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar4 = (pAVar3->fields).networkedValues,
     pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar5 = (pAVar4->fields).nextPosition.x;
    uVar6 = (pAVar4->fields).nextPosition.y;
    uVar7 = targetPosition->x;
    uVar8 = targetPosition->y;
    VStack_1.z = (pAVar4->fields).nextPosition.z - targetPosition->z;
    VStack_1.y = (float)uVar6 - (float)uVar8;
    VStack_1.x = (float)uVar5 - (float)uVar7;
    fVar9 = (float)FUN_?(&VStack_1);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      pfVar10 = &(pAVar3->fields).perceptionRadius;
      if (*pfVar10 <= fVar9 && fVar9 != *pfVar10) {
        return 0;
      }
      return 1;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar2 = (*pcVar11)();
  return bVar2;
}


/* Single DistanceToTargetPosition(Vector3) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
      AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 *targetPosition,
                MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (pAVar1->fields).networkedValues,
     pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar3 = (pAVar2->fields).nextPosition.x;
    uVar4 = (pAVar2->fields).nextPosition.y;
    uVar5 = targetPosition->x;
    uVar6 = targetPosition->y;
    fStack_7 = (pAVar2->fields).nextPosition.z - targetPosition->z;
    uStack_8 = CONCAT44((float)uVar4 - (float)uVar6,(float)uVar3 - (float)uVar5);
    fVar9 = (float)FUN_?(&uStack_8);
    return fVar9;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar9 = (float)(*pcVar10)();
  return fVar9;
}


/* Boolean IsWithinPerceptionRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinPerceptionRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 *targetPosition,
               MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (pAVar1->fields).networkedValues,
     pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar3 = (pAVar2->fields).nextPosition.x;
    uVar4 = (pAVar2->fields).nextPosition.y;
    uVar5 = targetPosition->x;
    uVar6 = targetPosition->y;
    fStack_7 = (pAVar2->fields).nextPosition.z - targetPosition->z;
    uStack_8 = CONCAT44((float)uVar4 - (float)uVar6,(float)uVar3 - (float)uVar5);
    fVar9 = (float)FUN_?(&uStack_8);
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      pfVar10 = &(pAVar1->fields).perceptionRadius;
      return fVar9 < *pfVar10 || fVar9 == *pfVar10;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean IsWithinRoamRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 *targetPosition,
               MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (obj = (pAVar1->fields).transformParent, obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    uVar8 = targetPosition->x;
    uVar9 = targetPosition->y;
    fStack_3 = fStack_3 - targetPosition->z;
    uStack_2 = CONCAT44(uStack_2._4_4_ - (float)uVar9,(float)uStack_2 - (float)uVar8);
    fVar10 = (float)FUN_?(&uStack_2);
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      return fVar10 <= (pAVar1->fields).perceptionRadius + (pAVar1->fields).radius;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Reset
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  pDVar1 = (this->fields).syncedInterval;
  if (pDVar1 == (DeterministicSyncedInterval *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar3 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar3->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    if ((pDVar1->fields).nextTickThres <= iVar4) {
      (pDVar1->fields).nextTickThres =
           ((pDVar1->fields).range -
           (iVar4 - (pDVar1->fields).nextTickThres) % (pDVar1->fields).range) + iVar4;
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean TryGetCurrentTarget(MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetCurrentTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               MVWorldObjectClient **worldObjectClient,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields).currentWoID,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    *worldObjectClient = pMVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)worldObjectClient >> 0xc);
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
    if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
      puVar7 = (undefined8 *)
               (*((*worldObjectClient)->klass->vtable).GetTargetPosition.methodPtr)(auStack_8);
      VStack_9._0_8_ = *puVar7;
      VStack_9.z = *(float *)(puVar7 + 1);
      bVar10 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                        (this,&VStack_9,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        if (*worldObjectClient == (MVWorldObjectClient *)0x0) goto code_?;
        pIVar11 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                           (*worldObjectClient,(MethodInfo *)0x0);
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
        if (pIVar11 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pIVar11->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if ((*worldObjectClient == (MVWorldObjectClient *)0x0) ||
               (pIVar11 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                   (*worldObjectClient,(MethodInfo *)0x0),
               pIVar11 == (InteractionDataHandlerBase *)0x0)) goto code_?;
            bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar11,(MethodInfo *)0x0);
            if (bVar10 != 0) {
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar10 = (*pcVar12)();
  return bVar10;
}


/* Boolean TryGetNewTarget(MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetNewTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               MVWorldObjectClient **worldObjectClient,MethodInfo *method)

{
  this_00 = (this->fields).perception;
  if (this_00 != (OptimizedPerception *)0x0) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_00,(this->fields).alliedTeam,(MethodInfo *)0x0);
    bVar1 = AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this,targets,worldObjectClient,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
      (this->fields).currentWoID = ((*worldObjectClient)->fields)._.id;
      return 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryGetTarget(List`1[WorldObjectClientRef], MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               List_1_WorldObjectClientRef_ *targets,MVWorldObjectClient **target,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *target = (MVWorldObjectClient *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)target >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pAVar6 = (this->fields).ghostBehaviour;
  if ((pAVar6 != (AdvancedGhostBehaviour *)0x0) &&
     (fVar7 = (pAVar6->fields).perceptionRadius, fVar8 = (pAVar6->fields).radius,
     targets != (List_1_WorldObjectClientRef_ *)0x0)) {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_9 >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(targets->fields)._version << 0x20);
    uStack_11 = 0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_9 = 0;
    pLStack_10 = &LStack_12;
    pOVar13 = (Object *)0x0;
    fVar7 = fVar7 + fVar8;
    LStack_12._list = (List_1_System_Object_ *)targets;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_12,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                             ), pOVar15 = LStack_12._current,
          pMVar16 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__,
          bVar14 != 0) {
      if ((LStack_12._current != (Object *)0x0) &&
         (lVar17 = FUN_?(LStack_12._current), lVar17 != 0)) {
        lVar17 = FUN_?(pOVar15);
        if (lVar17 == 0) goto code_?;
        if (*(int *)(lVar17 + 0x68) != 0x3d) {
          plVar18 = (longlong *)FUN_?(pOVar15);
          if (plVar18 == (longlong *)0x0) goto code_?;
          puVar19 = (undefined8 *)(**(code **)(*plVar18 + 0x648))(auStack_20,plVar18);
          VStack_21._0_8_ = *puVar19;
          fVar8 = *(float *)(puVar19 + 1);
          VStack_21.z = fVar8;
          VStack_22._0_8_ = VStack_21._0_8_;
          bVar14 = AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
                            (this,&VStack_21,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            pAVar6 = (this->fields).ghostBehaviour;
            if (pAVar6 == (AdvancedGhostBehaviour *)0x0) goto code_?;
            pAVar23 = (pAVar6->fields).networkedValues;
            if (pAVar23 == (AdvancedGhostBehaviour_NetworkedValues *)0x0) goto code_?;
            uVar24 = (pAVar23->fields).nextPosition.x;
            uVar25 = (pAVar23->fields).nextPosition.y;
            fStack_26 = (pAVar23->fields).nextPosition.z - fVar8;
            uStack_27 = CONCAT44((float)uVar25 - VStack_22.y,(float)uVar24 - VStack_22.x);
            fVar8 = (float)FUN_?(&uStack_27);
            if (fVar8 < fVar7) {
              pOVar13 = pOVar15;
              fVar7 = fVar8;
            }
          }
        }
      }
    }
    if (pOVar13 == (Object *)0x0) {
      return 0;
    }
    pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar28 != (MVWorldObjectClientManager *)0x0) {
      pOVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                          (pMVar28,*(int32_t *)&pOVar13[1].klass,pMVar16->klass->rgctx_data[1].method
                          );
      pMVar16 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
      if (pOVar15 == (Object *)0x0) {
        return 0;
      }
      pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar28 != (MVWorldObjectClientManager *)0x0) {
        pMVar29 = (MVWorldObjectClient *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar28,*(int32_t *)&pOVar13[1].klass,
                             pMVar16->klass->rgctx_data[1].method);
        *target = pMVar29;
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)target >> 0xc);
          uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        return *target != (MVWorldObjectClient *)0x0;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  bVar14 = (*pcVar30)();
  return bVar14;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Update
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  this_00 = (this->fields).syncedInterval;
  if (this_00 != (DeterministicSyncedInterval *)0x0) {
    bVar1 = DeterministicSyncedInterval::DeterministicSyncedInterval_Update
                       (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pAVar2 = (this->fields).ghostBehaviour;
    if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) &&
       (pAVar3 = (pAVar2->fields).networkedValues,
       pAVar3 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
      pOVar4 = (this->fields).perception;
      fVar5 = (pAVar2->fields).perceptionRadius;
      if (pOVar4 != (OptimizedPerception *)0x0) {
        fVar6 = (pAVar3->fields).nextPosition.y;
        fVar7 = (pAVar3->fields).nextPosition.z;
        (pOVar4->fields).position.x = (pAVar3->fields).nextPosition.x;
        (pOVar4->fields).position.y = fVar6;
        (pOVar4->fields).position.z = fVar7;
        (pOVar4->fields).radius = fVar5;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Physics);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Player);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pHVar8 = (pOVar4->fields).potentialTargets;
        if (pHVar8 == (HashSet_1_System_Int32_ *)0x0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar10 = 0;
        if (0 < (pHVar8->fields)._lastIndex) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pHVar8->fields)._slots,0,(pHVar8->fields)._lastIndex,
                     (MethodInfo *)0x0);
          pIVar11 = (pHVar8->fields)._buckets;
          if (pIVar11 == (Int32__Array *)0x0) goto code_?;
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pHVar8->fields)._buckets,0,(int32_t)pIVar11->max_length,
                     (MethodInfo *)0x0);
          (pHVar8->fields)._count = 0;
          (pHVar8->fields)._lastIndex = 0;
          (pHVar8->fields)._freeList = -1;
        }
        piVar12 = &(pHVar8->fields)._version;
        *piVar12 = *piVar12 + 1;
        fVar7 = (pOVar4->fields).position.z;
        uVar13._0_4_ = (pOVar4->fields).position.x;
        uVar13._4_4_ = (pOVar4->fields).position.y;
        uStack_14 = (undefined *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
        fVar5 = (pOVar4->fields).radius;
        if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
        }
        pCVar15 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        aVStack_17[0]._0_8_ = uVar13;
        aVStack_17[0].z = fVar7;
        iVar16 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                 Physics_OverlapSphereNonAlloc_1
                           (aVStack_17,fVar5,pCVar15,1 << ((byte)iVar16 & 0x1f),(MethodInfo *)0x0);
        if (0 < iVar16) {
          lVar18 = 0x20;
          uVar19 = uVar10;
          do {
            if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            pCVar15 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (pCVar15 == (Collider__Array *)0x0) goto code_?;
            if ((uint)pCVar15->max_length <= (uint)uVar19) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            obj = *(Object **)((longlong)pCVar15->vector + lVar18 + -0x20);
            if (obj == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar20 = obj[1].klass;
            if (pOVar20 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            gcHandlePtr = (void *)(*pcRam_?)(pOVar20);
            t = (Transform *)
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (gcHandlePtr,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
            this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                (t,(MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClient *)0x0) {
              value = (this_01->fields)._.id;
              this_02 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (this_01,(MethodInfo *)0x0);
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
              if (this_02 != (InteractionDataHandlerBase *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (((this_02->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
                   (bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                             Behaviour_get_enabled((Behaviour *)this_02,(MethodInfo *)0x0),
                   bVar1 != 0)) {
                  pHVar8 = (pOVar4->fields).potentialTargets;
                  if (pHVar8 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__AddIfNotPresent
                            (pHVar8,value,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass
                             ->rgctx_data[0x15].method);
                }
              }
            }
            uVar19 = (ulonglong)((uint)uVar19 + 1);
            uVar10 = uVar10 + 1;
            lVar18 = lVar18 + 8;
          } while ((longlong)uVar10 < (longlong)iVar16);
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


/* AdvancedGhostBehaviour+AdvancedGhostPerception(AdvancedGhostBehaviour, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception__ctor
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               AdvancedGhostBehaviour *ghostBehaviour,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeterministicSyncedInterval);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OptimizedPerception);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).alliedTeam = 4;
  (this->fields).currentWoID = -1;
  (this->fields).perceptionIntervalMilliseconds = 1000;
  (this->fields).ghostBehaviour = ghostBehaviour;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ghostBehaviour >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (OptimizedPerception *)FUN_?(TypeInfo__OptimizedPerception);
  OptimizedPerception::OptimizedPerception__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).perception = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).perception >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar6 = (this->fields).perceptionIntervalMilliseconds;
  pDVar7 = (DeterministicSyncedInterval *)FUN_?(TypeInfo__DeterministicSyncedInterval);
  bVar1 = cRam_? == '\0';
  (pDVar7->fields).range = iVar6;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = (woID & 0xffffU) * 0x9069 + (woID >> 0x10);
  iVar8 = (uVar2 & 0xffff) * 18000 + ((int)uVar2 >> 0x10);
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar9 = iVar8 * -0x10001;
  if (iVar9 < 0) {
    iVar9 = iVar8 * 0x10001;
  }
  iVar9 = iVar9 % iVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar10 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar10->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar11 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    iVar8 = iVar11 % iVar6;
    if (iVar9 < iVar8) {
      iVar9 = (iVar9 - iVar8) + iVar6;
    }
    else if (iVar8 < iVar9) {
      iVar9 = iVar9 - iVar8;
    }
    bVar1 = iRam_? != 0;
    (pDVar7->fields).nextTickThres = iVar9 + iVar11;
    (this->fields).syncedInterval = pDVar7;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).syncedInterval >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    return;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

