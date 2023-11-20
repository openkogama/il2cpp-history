
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
    targetPosition.x = (float)uVar4 - targetPosition.x;
    targetPosition.y = (float)uVar5 - targetPosition.y;
    targetPosition.z = (pAVar3->fields).nextPosition.z - targetPosition.z;
    fVar6 = (float10)func_?(&targetPosition,0);
    pAVar2 = (this->fields).ghostBehaviour;
    targetPosition.z = (float)fVar6;
    if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
      pfVar7 = &(pAVar2->fields).perceptionRadius;
      if (*pfVar7 <= targetPosition.z && targetPosition.z != *pfVar7) {
        return 0;
      }
      return 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}


/* Single DistanceToTargetPosition(Vector3) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
      AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
                MethodInfo *method)

{
  pAVar1 = (this->fields).ghostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (pAVar1->fields).networkedValues,
     pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    uVar3 = (pAVar2->fields).nextPosition.x;
    uVar4 = (pAVar2->fields).nextPosition.y;
    fStack_5 = (pAVar2->fields).nextPosition.z - targetPosition.z;
    uStack_6 = CONCAT44((float)uVar4 - targetPosition.y,(float)uVar3 - targetPosition.x);
    fVar7 = (float10)func_?(&uStack_6,0);
    return (float)fVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  fVar7 = (float10)(*pcVar8)();
  return (float)fVar7;
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
    fStack_5 = (pAVar2->fields).nextPosition.z - targetPosition.z;
    uStack_6 = CONCAT44((float)uVar4 - targetPosition.y,(float)uVar3 - targetPosition.x);
    fVar7 = (float10)func_?(&uStack_6,0);
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      pfVar8 = &(pAVar1->fields).perceptionRadius;
      return (float)fVar7 < *pfVar8 || (float)fVar7 == *pfVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    VStack_3.z = pVVar2->z - targetPosition.z;
    uStack_6 = CONCAT44((float)uVar5 - targetPosition.y,(float)uVar4 - targetPosition.x);
    fStack_7 = VStack_3.z;
    fVar8 = (float10)func_?(&uStack_6,0);
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      fVar9 = AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_RoamRadius
                        (pAVar1,(MethodInfo *)0x0);
      return (float)fVar8 <= fVar9;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Reset
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  pDVar1 = (this->fields).syncedInterval;
  if (pDVar1 != (DeterministicSyncedInterval *)0x0) {
    iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    if ((pDVar1->fields).nextTickThres <= iVar2) {
      (pDVar1->fields).nextTickThres =
           ((pDVar1->fields).range -
           (iVar2 - (pDVar1->fields).nextTickThres) % (pDVar1->fields).range) + iVar2;
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
      pMStack_2 = *worldObjectClient;
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
  this_00 = (this->fields).ghostBehaviour;
  if ((this_00 != (AdvancedGhostBehaviour *)0x0) &&
     (fVar5 = AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_RoamRadius
                        (this_00,(MethodInfo *)0x0), targets != (List_1_WorldObjectClientRef_ *)0x0)
     ) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffbc,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)targets
                        ,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                       );
    uStack_1 = 1;
    RVar7 = pLVar6->_current;
    while( true ) {
      do {
        do {
          this_01 = RVar7;
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffac,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffffac,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                       ,(MethodInfo *)in_stack_9);
            uStack_1 = 0xffffffff;
            if ((RStack_4 != (RegexCharClass_SingleRange)0x0) &&
               (pOVar10 = WorldObjectClientRef`1[System::Object]::
                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                   ((WorldObjectClientRef_1_System_Object_ *)RStack_4,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   ), pOVar10 != (Object *)0x0)) {
              pMVar11 = (MVWorldObjectClient *)
                       WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)RStack_4,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 );
              *target = pMVar11;
              func_?();
              pMVar11 = *target;
              *unaff_FS_OFFSET = uStack_3;
              return pMVar11 != (MVWorldObjectClient *)0x0;
            }
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          RVar7 = this_01;
        } while ((this_01 == (RegexCharClass_SingleRange)0x0) ||
                (RVar7 = (RegexCharClass_SingleRange)
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                , pOVar10 = WorldObjectClientRef`1[System::Object]::
                           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                     ((WorldObjectClientRef_1_System_Object_ *)this_01,
                                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                     ), pOVar10 == (Object *)0x0));
        RVar7 = (RegexCharClass_SingleRange)&UNK_?;
        in_stack_9 = this_01;
        pOVar10 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_01,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar10 == (Object *)0x0) goto code_?;
      } while (pOVar10[10].monitor == (MonitorData *)0x3d);
      pOVar10 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)this_01,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar10 == (Object *)0x0) break;
      pVVar12 = (Vector3 *)func_?();
      targetPosition = *pVVar12;
      bVar8 = AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
                        (this,*pVVar12,(MethodInfo *)0x0);
      if ((bVar8 != 0) &&
         (fVar13 = AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                            (this,targetPosition,(MethodInfo *)0x0), fVar13 < fVar5)) {
        RStack_4 = this_01;
        fVar5 = fVar13;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  bVar8 = (*pcVar14)();
  return bVar8;
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
      this_01 = (this->fields).perception;
      if (this_01 != (OptimizedPerception *)0x0) {
        OptimizedPerception::OptimizedPerception_Update
                  (this_01,(pAVar3->fields).nextPosition,
                   (((this->fields).ghostBehaviour)->fields).perceptionRadius,(MethodInfo *)0x0);
        return;
      }
    }
  }
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).ghostBehaviour = ghostBehaviour;
  func_?(&(this->fields).ghostBehaviour,ghostBehaviour);
  this_00 = (OptimizedPerception *)func_?(TypeInfo__OptimizedPerception);
  OptimizedPerception::OptimizedPerception__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).perception = this_00;
  func_?(&(this->fields).perception,this_00);
  range = (this->fields).perceptionIntervalMilliseconds;
  this_01 = (DeterministicSyncedInterval *)func_?(TypeInfo__DeterministicSyncedInterval);
  DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
            (this_01,woID,range,(MethodInfo *)0x0);
  (this->fields).syncedInterval = this_01;
  func_?(&(this->fields).syncedInterval,this_01);
  return;
}

