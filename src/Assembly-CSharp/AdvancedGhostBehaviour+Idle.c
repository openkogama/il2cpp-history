
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle_Enter
               (AdvancedGhostBehaviour_Idle *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar1 = (ghostBehaviour->fields).weapon, pAVar1 != (AdvancedGhostBodyRotateWeapon *)0x0)) {
    (pAVar1->fields).factor = 0.3;
    this_00 = (ghostBehaviour->fields).GhostVisualization;
    if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
      AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_SetRotationSpeed
                (this_00,(this->fields).idleRotationSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle_UpdateState
                 (AdvancedGhostBehaviour_Idle *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClient *)0x0;
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (ghostBehaviour->fields).networkedValues,
     pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    fVar3 = (pAVar2->fields).nextPosition.y;
    fVar4 = (pAVar2->fields).nextPosition.z;
    this_00 = (ghostBehaviour->fields).perception;
    (ghostBehaviour->fields).nextPosition.x = (pAVar2->fields).nextPosition.x;
    (ghostBehaviour->fields).nextPosition.y = fVar3;
    (ghostBehaviour->fields).nextPosition.z = fVar4;
    if ((this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
       (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
      targets = OptimizedPerception::OptimizedPerception_GetTargets
                          (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
      bVar5 = AdvancedGhostBehaviour+AdvancedGhostPerception::
              AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                        (this_00,targets,&pMStack_1,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        this_02 = (Object *)(ghostBehaviour->fields).currentState;
        if (this_02 != (Object *)0x0) {
          pTVar6 = mscorlib.dll::System::Object::Object_GetType(this_02,(MethodInfo *)0x0);
          return pTVar6;
        }
      }
      else if (pMStack_1 != (MVWorldObjectClient *)0x0) {
        pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMStack_1,(MethodInfo *)0x0);
        (this_00->fields).currentWoID = (int32_t)pIVar7;
        handle = TypeRef__AdvancedGhostBehaviour__Alert;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        return pTVar6;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pTVar6 = (Type *)(*pcVar8)();
  return pTVar6;
}


/* AdvancedGhostBehaviour+Idle() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle__ctor
               (AdvancedGhostBehaviour_Idle *this,MethodInfo *method)

{
  (this->fields).idleRotationSpeed = 0.3;
  return;
}

