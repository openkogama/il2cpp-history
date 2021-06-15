
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_Enter
               (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_03 = (MVWorldObjectClient *)0x0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar1 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,(MVWorldObjectClient **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Entering_alert_without_valid_att,(MethodInfo *)0x0);
    }
    else {
      if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0)
      ;
      (this_00->fields).currentWoID = (int32_t)pIVar2;
    }
    pAVar3 = (ghostBehaviour->fields).weapon;
    if (pAVar3 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      pAVar4 = (ghostBehaviour->fields).GhostVisualization;
      (pAVar3->fields).factor = 0.5;
      if (pAVar4 != (AdvancedGhostVisualizaton *)0x0) {
        AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_SetRotationSpeed
                  (pAVar4,(this->fields).alertRotationSpeed,(MethodInfo *)0x0);
        pAVar4 = (ghostBehaviour->fields).GhostVisualization;
        if ((pAVar4 != (AdvancedGhostVisualizaton *)0x0) &&
           (this_02 = (pAVar4->fields).ghostEye, this_03 != (MVWorldObjectClient *)0x0)) {
          pVVar5 = (Vector3 *)
                   (*(code *)(this_03->klass->vtable).GetTargetPosition.method)
                             (auStack_6,this_03,(MethodInfo *)this_03->klass[1]._0.image);
          if (this_02 != (GhostEye *)0x0) {
            GhostEye::GhostEye_UpdateLookAtTarget(this_02,*pVVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_UpdateState
                 (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.z = 0.0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar2 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,(MVWorldObjectClient **)&VStack_1.z,(MethodInfo *)0x0);
    handle.value = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar2 == 0) {
code_?:
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      return pTVar3;
    }
    fVar4 = VStack_1.z;
    if ((DayNightCycle *)VStack_1.z != (DayNightCycle *)0x0) {
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)VStack_1.z,(MethodInfo *)0x0);
      (this_00->fields).currentWoID = (int32_t)pIVar5;
      pAVar6 = (ghostBehaviour->fields).networkedValues;
      if (pAVar6 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
        fVar7 = (pAVar6->fields).nextPosition.y;
        fVar8 = (pAVar6->fields).nextPosition.z;
        pAVar9 = (ghostBehaviour->fields).GhostVisualization;
        (ghostBehaviour->fields).nextPosition.x = (pAVar6->fields).nextPosition.x;
        (ghostBehaviour->fields).nextPosition.y = fVar7;
        (ghostBehaviour->fields).nextPosition.z = fVar8;
        if (pAVar9 != (AdvancedGhostVisualizaton *)0x0) {
          this_02 = (pAVar9->fields).ghostEye;
          pVVar10 = (Vector3 *)(*(code *)(*(DayNightCycle__Class **)fVar4)[3]._1.flags)();
          if (this_02 != (GhostEye *)0x0) {
            GhostEye::GhostEye_UpdateLookAtTarget(this_02,*pVVar10,(MethodInfo *)0x0);
            this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                ((DayNightCycle *)fVar4,(MethodInfo *)0x0);
            if ((this_04 != (CelestialParam *)0x0) &&
               (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)this_04,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_1,pTVar11,(MethodInfo *)0x0);
              a = *pVVar10;
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)ghostBehaviour,(MethodInfo *)0x0);
              if (pTVar11 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffcc,pTVar11,(MethodInfo *)0x0);
                VStack_1.y = pVVar10->x;
                VStack_1.z = pVVar10->y;
                fVar4 = pVVar10->z;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                b.z = fVar4;
                b.x = VStack_1.y;
                b.y = VStack_1.z;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)&stack0xffffffcc,a,b,(MethodInfo *)0x0);
                fVar12 = (float10)func_?(&stack0xffffffd8,0);
                handle.value = TypeRef__AdvancedGhostBehaviour__Attack;
                if ((float)fVar12 <
                    (ghostBehaviour->fields).perceptionRadius * (this->fields).alertMultiplier)
                goto code_?;
                this_03 = (Object *)(ghostBehaviour->fields).currentState;
                if (this_03 != (Object *)0x0) {
                  pTVar3 = mscorlib.dll::System::Object::Object_GetType(this_03,(MethodInfo *)0x0);
                  return pTVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar13)();
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

