
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle_Enter
               (AdvancedGhostBehaviour_Idle *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar1 = (ghostBehaviour->fields).weapon, pAVar1 != (AdvancedGhostBodyRotateWeapon *)0x0)) {
    (pAVar1->fields).factor = 0.3;
    pAVar2 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar2 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_00 = (pAVar2->fields).moving, this_00 != (AudioSource *)0x0)) {
      fVar3 = (this->fields).idleRotationSpeed;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (this_00,fVar3 * _UNK_?,(MethodInfo *)0x0);
      pGVar4 = (pAVar2->fields).ghostBody;
      if (pGVar4 != (GhostBody *)0x0) {
        (pGVar4->fields).angularMaxRotation = fVar3 * (pGVar4->fields).angularMaxRotationBase;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle_UpdateState
                 (AdvancedGhostBehaviour_Idle *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Alert);
    func_?(&TypeInfo__System__Type);
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
        (this_00->fields).currentWoID = (pMStack_1->fields)._.id;
        handle = TypeRef__AdvancedGhostBehaviour__Alert;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        return pTVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pTVar6 = (Type *)(*pcVar7)();
  return pTVar6;
}


/* AdvancedGhostBehaviour+Idle() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Idle::AdvancedGhostBehaviour_Idle__ctor
               (AdvancedGhostBehaviour_Idle *this,MethodInfo *method)

{
  (this->fields).idleRotationSpeed = 0.3;
  return;
}

