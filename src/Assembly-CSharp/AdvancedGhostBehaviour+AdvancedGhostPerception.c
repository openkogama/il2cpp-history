
/* Boolean CanSense(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  bVar1 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                    (this,targetPosition,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  pAVar2 = (this->fields).ghostBehaviour;
  if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar3 = (pAVar2->fields).networkedValues,
     pAVar3 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar4 = (pAVar3->fields).nextPosition.x;
    uVar5 = (pAVar3->fields).nextPosition.y;
    fVar6 = (pAVar3->fields).nextPosition.z - targetPosition.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    pAVar2 = (this->fields).ghostBehaviour;
    if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
      dVar7 = (double)(((float)uVar5 - targetPosition.y) * ((float)uVar5 - targetPosition.y) +
                       ((float)uVar4 - targetPosition.x) * ((float)uVar4 - targetPosition.x) +
                      fVar6 * fVar6);
      if (dVar7 < 0.0) {
        func_?();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      pfVar8 = &(pAVar2->fields).perceptionRadius;
      if (*pfVar8 <= (float)dVar7 && (float)dVar7 != *pfVar8) {
        return 0;
      }
      return 1;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar1 = (*pcVar9)();
  return bVar1;
}


/* Single DistanceToTargetPosition(Vector3) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
      AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
                MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 == (AdvancedGhostBehaviour *)0x0) ||
     (pAVar2 = (pAVar1->fields).networkedValues,
     pAVar2 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    func_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float10)(*pcVar3)();
    return (float)fVar4;
  }
  uVar5 = (pAVar2->fields).nextPosition.x;
  uVar6 = (pAVar2->fields).nextPosition.y;
  fVar7 = (pAVar2->fields).nextPosition.z - targetPosition.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar8 = (double)(((float)uVar6 - targetPosition.y) * ((float)uVar6 - targetPosition.y) +
                   ((float)uVar5 - targetPosition.x) * ((float)uVar5 - targetPosition.x) +
                  fVar7 * fVar7);
  if (0.0 <= dVar8) {
    return (float)SQRT(dVar8);
  }
  func_?();
  return (float)dVar8;
}


/* Boolean IsWithinPerceptionRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinPerceptionRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (pAVar1->fields).networkedValues,
     pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar3 = (pAVar2->fields).nextPosition.x;
    uVar4 = (pAVar2->fields).nextPosition.y;
    fVar5 = (pAVar2->fields).nextPosition.z - targetPosition.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      dVar6 = (double)(((float)uVar4 - targetPosition.y) * ((float)uVar4 - targetPosition.y) +
                       ((float)uVar3 - targetPosition.x) * ((float)uVar3 - targetPosition.x) +
                      fVar5 * fVar5);
      if (0.0 <= dVar6) {
        pfVar7 = &(pAVar1->fields).perceptionRadius;
        return (float)SQRT(dVar6) < *pfVar7 || (float)SQRT(dVar6) == *pfVar7;
      }
      func_?();
      pfVar7 = &(pAVar1->fields).perceptionRadius;
      return (float)dVar6 < *pfVar7 || (float)dVar6 == *pfVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean IsWithinRoamRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (pAVar1->fields).transformParent, this_00 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->x;
    VStack_3.y = pVVar2->y;
    VStack_3.z = pVVar2->z;
    fVar4 = VStack_3.x - targetPosition.x;
    fVar5 = VStack_3.y - targetPosition.y;
    fVar6 = VStack_3.z - targetPosition.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      dVar7 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
      if (dVar7 < 0.0) {
        func_?();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      return (float)dVar7 <= (pAVar1->fields).perceptionRadius + (pAVar1->fields).radius;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Reset
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  pDVar1 = (this->fields).syncedInterval;
  if (pDVar1 != (DeterministicSyncedInterval *)0x0) {
    iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    iVar3 = (pDVar1->fields).nextTickThres;
    if (iVar3 <= iVar2) {
      iVar4 = (pDVar1->fields).range;
      (pDVar1->fields).nextTickThres = (iVar4 - (iVar2 - iVar3) % iVar4) + iVar2;
    }
    return;
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean TryGetCurrentTarget(MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetCurrentTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               MVWorldObjectClient **worldObjectClient,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).currentWoID,(MethodInfo *)0x0);
    *worldObjectClient = pMVar1;
    func_?(worldObjectClient,pMVar1);
    pMStack_2 = *worldObjectClient;
    if (pMStack_2 != (MVWorldObjectClient *)0x0) {
      pIStack_3 = (pMStack_2->klass->vtable).DrawTransformGizmo.methodPtr;
      pVVar4 = (Vector3 *)
               (*(code *)(pMStack_2->klass->vtable).GetTargetPosition.method)(&pMStack_2);
      bVar5 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                        (this,*pVVar4,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
          pIVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                             (*worldObjectClient,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pIVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return 0;
          }
          if ((*worldObjectClient != (MVWorldObjectClient *)0x0) &&
             (pIVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                 (*worldObjectClient,(MethodInfo *)0x0),
             pIVar6 != (InteractionDataHandlerBase *)0x0)) {
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar6,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return 0;
            }
            return 1;
          }
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
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
  func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  RStack_4.First = 0;
  RStack_4.Last = 0;
  *target = (MVWorldObjectClient *)0x0;
  func_?(target,0);
  pAVar5 = (this->fields).ghostBehaviour;
  if (pAVar5 != (AdvancedGhostBehaviour *)0x0) {
    fVar6 = (pAVar5->fields).perceptionRadius;
    fVar7 = (pAVar5->fields).radius;
    if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffbc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          targets,
                          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                         );
      method_00 = (RegexCharClass_SingleRange)pLVar8->_version;
      uStack_1 = 1;
      RVar9 = pLVar8->_current;
      fStack_10 = fVar6 + fVar7;
      while( true ) {
        do {
          do {
            do {
              this_00 = RVar9;
              bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffac,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                                );
              if (bVar11 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffac,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                           ,(MethodInfo *)method_00);
                uStack_1 = 0xffffffff;
                if (RStack_4 != (RegexCharClass_SingleRange)0x0) {
                  pOVar12 = WorldObjectClientRef`1[System::Object]::
                           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                     ((WorldObjectClientRef_1_System_Object_ *)RStack_4,
                                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                     );
                  if (pOVar12 != (Object *)0x0) {
                    pMVar13 = (MVWorldObjectClient *)
                             WorldObjectClientRef`1[System::Object]::
                             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                       ((WorldObjectClientRef_1_System_Object_ *)RStack_4,
                                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                       );
                    *target = pMVar13;
                    func_?();
                    pMVar13 = *target;
                    *unaff_FS_OFFSET = uStack_3;
                    return pMVar13 != (MVWorldObjectClient *)0x0;
                  }
                }
                *unaff_FS_OFFSET = uStack_3;
                return 0;
              }
              RVar9 = this_00;
            } while (this_00 == (RegexCharClass_SingleRange)0x0);
            pOVar12 = WorldObjectClientRef`1[System::Object]::
                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                               ((WorldObjectClientRef_1_System_Object_ *)this_00,
                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                               );
          } while (pOVar12 == (Object *)0x0);
          method_00 = this_00;
          RVar9 = (RegexCharClass_SingleRange)
                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
          pOVar12 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_00,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             );
          if (pOVar12 == (Object *)0x0) goto code_?;
        } while (pOVar12[10].monitor == (MonitorData *)0x3d);
        RVar9 = (RegexCharClass_SingleRange)&UNK_?;
        pOVar12 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_00,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar12 == (Object *)0x0) break;
        pVVar14 = (Vector3 *)func_?();
        targetPosition = *pVVar14;
        bVar11 = AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
                          (this,*pVVar14,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          fVar6 = AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                            (this,targetPosition,(MethodInfo *)0x0);
          if (fVar6 < fStack_10) {
            RStack_4 = this_00;
            fStack_10 = fVar6;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  bVar11 = (*pcVar15)();
  return bVar11;
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
    if (bVar1 != 0) {
      pAVar2 = (this->fields).ghostBehaviour;
      if (((pAVar2 == (AdvancedGhostBehaviour *)0x0) ||
          (pAVar3 = (pAVar2->fields).networkedValues,
          pAVar3 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) ||
         (this_01 = (this->fields).perception, this_01 == (OptimizedPerception *)0x0))
      goto code_?;
      OptimizedPerception::OptimizedPerception_Update
                (this_01,(pAVar3->fields).nextPosition,(pAVar2->fields).perceptionRadius,
                 (MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AdvancedGhostBehaviour+AdvancedGhostPerception(AdvancedGhostBehaviour, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception__ctor
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               AdvancedGhostBehaviour *ghostBehaviour,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeterministicSyncedInterval);
    func_?(&TypeInfo__OptimizedPerception);
    cRam_? = '\x01';
  }
  (this->fields).alliedTeam = 4;
  (this->fields).currentWoID = -1;
  (this->fields).perceptionIntervalMilliseconds = 1000;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppAVar1 = &(this->fields).ghostBehaviour;
  *ppAVar1 = ghostBehaviour;
  func_?(ppAVar1,ghostBehaviour);
  this_00 = (OptimizedPerception *)func_?(TypeInfo__OptimizedPerception);
  OptimizedPerception::OptimizedPerception__ctor(this_00,(MethodInfo *)0x0);
  ppOVar2 = &(this->fields).perception;
  *ppOVar2 = this_00;
  func_?(ppOVar2,this_00);
  range = (this->fields).perceptionIntervalMilliseconds;
  this_01 = (DeterministicSyncedInterval *)func_?(TypeInfo__DeterministicSyncedInterval);
  DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
            (this_01,woID,range,(MethodInfo *)0x0);
  ppDVar3 = &(this->fields).syncedInterval;
  *ppDVar3 = this_01;
  func_?(ppDVar3,this_01);
  return;
}

