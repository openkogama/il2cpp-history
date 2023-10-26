
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
      return (float)fVar8 <= (pAVar1->fields).perceptionRadius + (pAVar1->fields).radius;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
      pMStack_3 = (pMStack_2->klass->vtable).GetTargetPosition.method;
      pVVar4 = (Vector3 *)(*(pMStack_2->klass->vtable).GetTargetPosition.methodPtr)(&pMStack_2);
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
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if (bVar1 == 0) {
      return;
    }
    pAVar2 = (this->fields).ghostBehaviour;
    if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) &&
       (pAVar3 = (pAVar2->fields).networkedValues,
       pAVar3 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
      fVar4 = (pAVar3->fields).nextPosition.y;
      fVar5 = (pAVar3->fields).nextPosition.z;
      fVar6 = (((this->fields).ghostBehaviour)->fields).perceptionRadius;
      pOVar7 = (this->fields).perception;
      if (pOVar7 != (OptimizedPerception *)0x0) {
        (pOVar7->fields).position.x = (pAVar3->fields).nextPosition.x;
        (pOVar7->fields).position.y = fVar4;
        (pOVar7->fields).position.z = fVar5;
        (pOVar7->fields).radius = fVar6;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
          func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Player);
          cRam_? = '\x01';
        }
        if (*(HashSet_1_UnityEngine_Vector3_ **)(in_stack_8 + 0x18) !=
            (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3__Clear
                    (*(HashSet_1_UnityEngine_Vector3_ **)(in_stack_8 + 0x18),
                     MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          uVar9 = *(undefined8 *)(in_stack_8 + 8);
          fVar5 = *(float *)(in_stack_8 + 0x10);
          fVar6 = *(float *)(in_stack_8 + 0x14);
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CollisionDetectionGlobalBuffers);
          }
          pCVar10 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
          iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          position.z = fVar5;
          position.x = (float)(int)uVar9;
          position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          uVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                   Physics_OverlapSphereNonAlloc_1
                             (position,fVar6,pCVar10,1 << ((byte)iVar11 & 0x1f),(MethodInfo *)0x0);
          uVar13 = (ulonglong)uVar12 << 0x20;
          uVar14 = 0;
          if (0 < (int)uVar12) {
            iVar15 = 0x10;
            do {
              if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CollisionDetectionGlobalBuffers);
              }
              pCVar10 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
              if (pCVar10 == (Collider__Array *)0x0) goto code_?;
              if (pCVar10->max_length <= uVar14) goto code_?;
              this_01 = *(Component **)((int)pCVar10->vector + iVar15 + -0x10);
              if (this_01 == (Component *)0x0) goto code_?;
              t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_01,(MethodInfo *)0x0);
              this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                  (t,(MethodInfo *)0x0);
              if (this_02 != (MVWorldObjectClient *)0x0) {
                item = (Object_1__Class *)(this_02->fields)._.id;
                uVar13 = uVar13 & 0xffffffff00000000;
                this_03 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                    (this_02,(MethodInfo *)0x0);
                pOVar16 = TypeInfo__UnityEngine__Object;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  uVar13 = 0x1020a3db00000000;
                  func_?();
                  item = pOVar16;
                }
                bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar1 != 0) {
                  if (this_03 == (InteractionDataHandlerBase *)0x0) goto code_?;
                  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                     ((Behaviour *)this_03,(MethodInfo *)0x0);
                  if (bVar1 != 0) {
                    if (*(HashSet_1_System_Object_ **)(in_stack_8 + 0x18) ==
                        (HashSet_1_System_Object_ *)0x0) goto code_?;
                    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                    HashSet_1_System_Object__Add
                              (*(HashSet_1_System_Object_ **)(in_stack_8 + 0x18),
                               (Object *)item,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  }
                }
              }
              uVar14 = uVar14 + 1;
              iVar15 = iVar15 + 4;
            } while ((int)uVar14 < (int)(uVar13 >> 0x20));
          }
          return;
        }
code_?:
        func_?();
code_?:
        func_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).ghostBehaviour = ghostBehaviour;
  func_?(&(this->fields).ghostBehaviour,ghostBehaviour);
  value = (OptimizedPerception *)func_?(TypeInfo__OptimizedPerception);
  if (value != (OptimizedPerception *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
      cRam_? = '\x01';
    }
    pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      (value->fields).potentialTargets = (HashSet_1_System_Int32_ *)pHVar1;
      func_?(&(value->fields).potentialTargets,pHVar1);
      pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
               func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        (value->fields).removeSet = (HashSet_1_System_Int32_ *)pHVar1;
        func_?(&(value->fields).removeSet,pHVar1);
        this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>
                                 );
        if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                    (this_00,0x10,
                     MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_
                    );
          method_00 = (MethodInfo *)&(value->fields).targets;
          (value->fields).targets = (List_1_WorldObjectClientRef_ *)this_00;
          func_?(method_00,this_00);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value,ExceptionArgument__Enum_obj,method_00);
          (this->fields).perception = value;
          func_?(&(this->fields).perception,value);
          range = (this->fields).perceptionIntervalMilliseconds;
          this_01 = (DeterministicSyncedInterval *)
                    func_?(TypeInfo__DeterministicSyncedInterval);
          if (this_01 != (DeterministicSyncedInterval *)0x0) {
            DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
                      (this_01,woID,range,(MethodInfo *)0x0);
            (this->fields).syncedInterval = this_01;
            func_?(&(this->fields).syncedInterval,this_01);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

