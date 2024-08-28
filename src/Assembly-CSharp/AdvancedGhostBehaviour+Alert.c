
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_Enter
               (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Entering_alert_without_valid_att);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar2 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,&pMStack_1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Entering_alert_without_valid_att,(MethodInfo *)0x0);
    }
    else {
      if (pMStack_1 == (MVWorldObjectClient *)0x0) goto code_?;
      (this_00->fields).currentWoID = (pMStack_1->fields)._.id;
    }
    pAVar3 = (ghostBehaviour->fields).weapon;
    if (pAVar3 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      (pAVar3->fields).factor = 0.5;
      pAVar4 = (ghostBehaviour->fields).GhostVisualization;
      if ((pAVar4 != (AdvancedGhostVisualizaton *)0x0) &&
         (this_02 = (pAVar4->fields).moving, this_02 != (AudioSource *)0x0)) {
        fVar5 = (this->fields).alertRotationSpeed;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (this_02,fVar5 * _UNK_?,(MethodInfo *)0x0);
        pGVar6 = (pAVar4->fields).ghostBody;
        if (pGVar6 != (GhostBody *)0x0) {
          (pGVar6->fields).angularMaxRotation = (pGVar6->fields).angularMaxRotationBase * fVar5;
          pAVar4 = (ghostBehaviour->fields).GhostVisualization;
          if (pAVar4 != (AdvancedGhostVisualizaton *)0x0) {
            this_03 = (pAVar4->fields).ghostEye;
            if (pMStack_1 != (MVWorldObjectClient *)0x0) {
              apIStack_7[0] = (pMStack_1->klass->vtable).DrawTransformGizmo.methodPtr;
              pVVar8 = (Vector3 *)
                       (*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)
                                 (apIStack_7,pMStack_1);
              if (this_03 != (GhostEye *)0x0) {
                GhostEye::GhostEye_UpdateLookAtTarget(this_03,*pVVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_UpdateState
                 (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Attack);
    func_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar2 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,&pMStack_1,(MethodInfo *)0x0);
    handle.value = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar2 == 0) {
code_?:
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      return pTVar3;
    }
    if (pMStack_1 != (MVWorldObjectClient *)0x0) {
      (this_00->fields).currentWoID = (pMStack_1->fields)._.id;
      pAVar4 = (ghostBehaviour->fields).networkedValues;
      if (pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
        fVar5 = (pAVar4->fields).nextPosition.y;
        fVar6 = (pAVar4->fields).nextPosition.z;
        pAVar7 = (ghostBehaviour->fields).GhostVisualization;
        (ghostBehaviour->fields).nextPosition.x = (pAVar4->fields).nextPosition.x;
        (ghostBehaviour->fields).nextPosition.y = fVar5;
        (ghostBehaviour->fields).nextPosition.z = fVar6;
        if ((pAVar7 != (AdvancedGhostVisualizaton *)0x0) &&
           (this_02 = (pAVar7->fields).ghostEye, pMStack_1 != (MVWorldObjectClient *)0x0)) {
          VStack_8.z = (float)&VStack_9;
          VStack_9.y = (float)(pMStack_1->klass->vtable).DrawTransformGizmo.methodPtr;
          VStack_9.x = (float)pMStack_1;
          VStack_8.y = (float)&UNK_?;
          pVVar10 = (Vector3 *)(*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)();
          if (((this_02 != (GhostEye *)0x0) &&
              ((GhostEye::GhostEye_UpdateLookAtTarget(this_02,*pVVar10,(MethodInfo *)0x0),
               pMStack_1 != (MVWorldObjectClient *)0x0 &&
               (this_03 = (pMStack_1->fields).gameObject, this_03 != (GameObject *)0x0)))) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_03,(MethodInfo *)0x0),
             pTVar11 != (Transform *)0x0)) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_9,pTVar11,(MethodInfo *)0x0);
            uStack_12._0_4_ = pVVar10->x;
            uStack_12._4_4_ = pVVar10->y;
            fStack_13 = pVVar10->z;
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)ghostBehaviour,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_8,pTVar11,(MethodInfo *)0x0);
              uVar14 = pVVar10->x;
              uVar15 = pVVar10->y;
              VStack_9.z = fStack_13 - pVVar10->z;
              VStack_9.y = uStack_12._4_4_ - (float)uVar15;
              VStack_9.x = (float)uStack_12 - (float)uVar14;
              fStack_13 = VStack_9.z;
              fVar16 = (float10)func_?(&VStack_9,0);
              handle.value = TypeRef__AdvancedGhostBehaviour__Attack;
              if ((float)fVar16 <
                  (ghostBehaviour->fields).perceptionRadius * (this->fields).alertMultiplier)
              goto code_?;
              this_04 = (Object *)(ghostBehaviour->fields).currentState;
              if (this_04 != (Object *)0x0) {
                pTVar3 = mscorlib.dll::System::Object::Object_GetType(this_04,(MethodInfo *)0x0);
                return pTVar3;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar17)();
  return pTVar3;
}


/* AdvancedGhostBehaviour+Alert() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert__ctor
               (AdvancedGhostBehaviour_Alert *this,MethodInfo *method)

{
  (this->fields).alertRotationSpeed = 0.7;
  (this->fields).alertMultiplier = 0.8;
  return;
}

