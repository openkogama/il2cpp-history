
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_Enter
               (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Entering_attack_without_valid_at);
    cRam_? = '\x01';
  }
  if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
     (this_00 = (ghostBehaviour->fields).perception,
     this_00 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMStack_1 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,(this_00->fields).currentWoID,(MethodInfo *)0x0);
  func_?(&pMStack_1,pMStack_1);
  if (pMStack_1 == (MVWorldObjectClient *)0x0) {
code_?:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Entering_attack_without_valid_at,(MethodInfo *)0x0);
  }
  else {
    pVVar2 = (Vector3 *)
             (*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)
                       (apEStack_3,pMStack_1,
                        (pMStack_1->klass->vtable).DrawTransformGizmo.methodPtr);
    bVar4 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                      (this_00,*pVVar2,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    if (pMStack_1 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (pMStack_1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pIVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
    if (pMStack_1 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (pMStack_1,(MethodInfo *)0x0);
    if (pIVar5 == (InteractionDataHandlerBase *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pIVar5,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
  }
  pAVar6 = (ghostBehaviour->fields).weapon;
  if (pAVar6 != (AdvancedGhostBodyRotateWeapon *)0x0) {
    (pAVar6->fields).factor = 1.0;
    pAVar7 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar7 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_01 = (pAVar7->fields).moving, this_01 != (AudioSource *)0x0)) {
      fVar8 = (this->fields).attackRotationSpeed;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (this_01,fVar8 * _UNK_?,(MethodInfo *)0x0);
      pGVar9 = (pAVar7->fields).ghostBody;
      if (pGVar9 != (GhostBody *)0x0) {
        (pGVar9->fields).angularMaxRotation = fVar8 * (pGVar9->fields).angularMaxRotationBase;
        pAVar7 = (ghostBehaviour->fields).GhostVisualization;
        if (pAVar7 != (AdvancedGhostVisualizaton *)0x0) {
          this_02 = (pAVar7->fields).ghostEye;
          if (pMStack_1 != (MVWorldObjectClient *)0x0) {
            apEStack_3[0] = (EventInfo *)(pMStack_1->klass->vtable).DrawTransformGizmo.methodPtr;
            pVVar2 = (Vector3 *)
                     (*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)
                               (apEStack_3,pMStack_1);
            if (this_02 != (GhostEye *)0x0) {
              GhostEye::GhostEye_UpdateLookAtTarget(this_02,*pVVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Exit(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_Exit
               (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (pAVar1 = (ghostBehaviour->fields).GhostVisualization,
      pAVar1 != (AdvancedGhostVisualizaton *)0x0)) &&
     (pGVar2 = (pAVar1->fields).ghostEye, pGVar2 != (GhostEye *)0x0)) {
    if ((pGVar2->fields).currentEyeState != 1) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pDVar3 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pGVar2->fields).ghostEyeStates;
    (pGVar2->fields).currentTransitionTime = 0.0;
    if ((pDVar3 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar3,(pGVar2->fields).currentEyeState,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           ), pOVar4 != (Object *)0x0)) {
      func_?();
      pDVar3 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pGVar2->fields).ghostEyeStates;
      if ((pDVar3 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (pDVar3,0,
                              MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                             ), pOVar4 != (Object *)0x0)) {
        pOVar5 = pOVar4->klass;
        uVar6 = 0;
        uVar7._0_1_ = (pOVar5->_1).rank;
        uVar7._1_1_ = (pOVar5->_1).minimumAlignment;
        if (uVar7 != 0) {
          do {
            if (pOVar5->interfaceOffsets[uVar6].interfaceType ==
                (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
              ppMVar8 = &(&(pOVar5->vtable).Equals)[pOVar5->interfaceOffsets[uVar6].offset].method;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        ppMVar8 = (MethodInfo **)func_?();
code_?:
        (*(code *)*ppMVar8)();
        (pGVar2->fields).currentEyeState = 0;
        return;
      }
    }
  }
  uVar9 = func_?(&stack0xffffffe4);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_UpdateState
                 (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
     (pAVar1 = (ghostBehaviour->fields).perception,
     pAVar1 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMStack_2 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,(pAVar1->fields).currentWoID,(MethodInfo *)0x0);
  func_?(&pMStack_2,pMStack_2);
  if (pMStack_2 == (MVWorldObjectClient *)0x0) {
code_?:
    pAVar1 = (ghostBehaviour->fields).perception;
    if ((pAVar1 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) ||
       (this_00 = (pAVar1->fields).perception, this_00 == (OptimizedPerception *)0x0))
    goto code_?;
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_00,(pAVar1->fields).alliedTeam,(MethodInfo *)0x0);
    bVar3 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (pAVar1,targets,&pMStack_2,(MethodInfo *)0x0);
    handle = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar3 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      return pTVar4;
    }
    if (pMStack_2 == (MVWorldObjectClient *)0x0) goto code_?;
    (pAVar1->fields).currentWoID = (pMStack_2->fields)._.id;
  }
  else {
    pVVar5 = (Vector3 *)
             (*(code *)(pMStack_2->klass->vtable).GetTargetPosition.method)
                       (auStack_6,pMStack_2,(pMStack_2->klass->vtable).DrawTransformGizmo.methodPtr
                       );
    bVar3 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                      (pAVar1,*pVVar5,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
    if (pMStack_2 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (pMStack_2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pIVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    if (pMStack_2 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (pMStack_2,(MethodInfo *)0x0);
    if (pIVar7 == (InteractionDataHandlerBase *)0x0) goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pIVar7,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
  }
  if (pMStack_2 != (MVWorldObjectClient *)0x0) {
    pVVar5 = (Vector3 *)
             (*(code *)(pMStack_2->klass->vtable).GetTargetPosition.method)
                       (auStack_6,pMStack_2,(pMStack_2->klass->vtable).DrawTransformGizmo.methodPtr
                       );
    pAVar8 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar8 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_01 = (pAVar8->fields).ghostEye, this_01 != (GhostEye *)0x0)) {
      GhostEye::GhostEye_UpdateLookAtTarget(this_01,*pVVar5,(MethodInfo *)0x0);
      if (pMStack_2 != (MVWorldObjectClient *)0x0) {
        puVar9 = (undefined8 *)
                 (*(code *)(pMStack_2->klass->vtable).GetTargetPosition.method)
                           (auStack_6,pMStack_2,
                            (pMStack_2->klass->vtable).DrawTransformGizmo.methodPtr);
        uVar10 = *puVar9;
        fVar11 = *(float *)(puVar9 + 1);
        (ghostBehaviour->fields).nextPosition.x = (float)(int)uVar10;
        (ghostBehaviour->fields).nextPosition.y = (float)(int)((ulonglong)uVar10 >> 0x20);
        (ghostBehaviour->fields).nextPosition.z = fVar11;
        this_02 = (Object *)(ghostBehaviour->fields).currentState;
        if (this_02 != (Object *)0x0) {
          pTVar4 = mscorlib.dll::System::Object::Object_GetType(this_02,(MethodInfo *)0x0);
          return pTVar4;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pTVar4 = (Type *)(*pcVar12)();
  return pTVar4;
}


/* AdvancedGhostBehaviour+Attack() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack__ctor
               (AdvancedGhostBehaviour_Attack *this,MethodInfo *method)

{
  (this->fields).attackRotationSpeed = 1.0;
  return;
}

