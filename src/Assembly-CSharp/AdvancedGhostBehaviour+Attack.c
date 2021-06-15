
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_Enter
               (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (ghostBehaviour->fields).perception,
     this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
    bVar2 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetCurrentTarget
                      (this_00,&pMStack_1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        pDStack_3 = TypeInfo__UnityEngine__Debug;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Entering_attack_without_valid_at,(MethodInfo *)0x0);
    }
    pAVar4 = (ghostBehaviour->fields).weapon;
    if (pAVar4 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      pAVar5 = (ghostBehaviour->fields).GhostVisualization;
      (pAVar4->fields).factor = 1.0;
      if (pAVar5 != (AdvancedGhostVisualizaton *)0x0) {
        AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_SetRotationSpeed
                  (pAVar5,(this->fields).attackRotationSpeed,(MethodInfo *)0x0);
        pAVar5 = (ghostBehaviour->fields).GhostVisualization;
        if (pAVar5 != (AdvancedGhostVisualizaton *)0x0) {
          this_01 = (pAVar5->fields).ghostEye;
          if (pMStack_1 != (MVWorldObjectClient *)0x0) {
            pDStack_3 = (Debug_1__Class *)pMStack_1->klass[1]._0.image;
            pMStack_6 = pMStack_1;
            pVVar7 = (Vector3 *)
                     (*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)(&pMStack_6);
            if (this_01 != (GhostEye *)0x0) {
              GhostEye::GhostEye_UpdateLookAtTarget(this_01,*pVVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
     (this_00 = (pAVar1->fields).ghostEye, this_00 != (GhostEye *)0x0)) {
    GhostEye::GhostEye_ClearLookAtTarget(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_UpdateState
                 (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
     (pAVar2 = (ghostBehaviour->fields).perception,
     pAVar2 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
  bVar3 = AdvancedGhostBehaviour+AdvancedGhostPerception::
          AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetCurrentTarget
                    (pAVar2,&pMStack_1,(MethodInfo *)0x0);
  pMVar4 = pMStack_1;
  if (bVar3 == 0) {
    pAVar2 = (ghostBehaviour->fields).perception;
    if ((pAVar2 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) ||
       (this_00 = (pAVar2->fields).perception, this_00 == (OptimizedPerception *)0x0))
    goto code_?;
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_00,(pAVar2->fields).alliedTeam,(MethodInfo *)0x0);
    bVar3 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (pAVar2,targets,&pMStack_1,(MethodInfo *)0x0);
    pMVar4 = pMStack_1;
    handle = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      return pTVar5;
    }
    if (pMStack_1 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMStack_1,(MethodInfo *)0x0)
    ;
    (pAVar2->fields).currentWoID = (int32_t)pIVar6;
  }
  if (pMVar4 != (MVWorldObjectClient *)0x0) {
    pVVar7 = (Vector3 *)
             (*(code *)(pMVar4->klass->vtable).GetTargetPosition.method)
                       (auStack_8,pMVar4,(MethodInfo *)pMVar4->klass[1]._0.image);
    pAVar9 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar9 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_01 = (pAVar9->fields).ghostEye, this_01 != (GhostEye *)0x0)) {
      GhostEye::GhostEye_UpdateLookAtTarget(this_01,*pVVar7,(MethodInfo *)0x0);
      puVar10 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).GetTargetPosition.method)
                         (auStack_8,pMVar4,(MethodInfo *)pMVar4->klass[1]._0.image);
      uVar11 = *puVar10;
      fVar12 = *(float *)(puVar10 + 1);
      (ghostBehaviour->fields).nextPosition.x = (float)(int)uVar11;
      (ghostBehaviour->fields).nextPosition.y = (float)(int)((ulonglong)uVar11 >> 0x20);
      (ghostBehaviour->fields).nextPosition.z = fVar12;
      this_02 = (Object *)(ghostBehaviour->fields).currentState;
      if (this_02 != (Object *)0x0) {
        pTVar5 = mscorlib.dll::System::Object::Object_GetType(this_02,(MethodInfo *)0x0);
        return pTVar5;
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  pTVar5 = (Type *)(*pcVar13)();
  return pTVar5;
}


/* AdvancedGhostBehaviour+Attack() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack__ctor
               (AdvancedGhostBehaviour_Attack *this,MethodInfo *method)

{
  (this->fields).attackRotationSpeed = 1.0;
  return;
}

