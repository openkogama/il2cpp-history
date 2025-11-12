
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Die::AdvancedGhostBehaviour_Die_Enter
               (AdvancedGhostBehaviour_Die *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  (this->fields).currentDieTime = (this->fields).dieTime;
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar1 = (ghostBehaviour->fields).GhostVisualization,
     pAVar1 != (AdvancedGhostVisualizaton *)0x0)) {
    AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
              (pAVar1,AdvancedGhostVisualizaton_Effect__Enum_Die,(this->fields).dieTime,
               (MethodInfo *)0x0);
    pAVar1 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar1 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_00 = (pAVar1->fields).moving, this_00 != (AudioSource *)0x0)) {
      fVar2 = (this->fields).deathRotationSpeed;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (this_00,fVar2 * _UNK_?,(MethodInfo *)0x0);
      pGVar3 = (pAVar1->fields).ghostBody;
      if (pGVar3 != (GhostBody *)0x0) {
        (pGVar3->fields).angularMaxRotation = fVar2 * (pGVar3->fields).angularMaxRotationBase;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Die::AdvancedGhostBehaviour_Die_Update
                 (AdvancedGhostBehaviour_Die *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Dead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currentDieTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pTVar4 = (Type *)(*pcVar2)();
    return pTVar4;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  fVar1 = fVar1 - fVar5;
  (this->fields).currentDieTime = fVar1;
  pIVar6 = TypeRef__AdvancedGhostBehaviour__Dead;
  if (fVar1 <= 0.0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar6 == (Il2CppType *)0x0) {
      return (Type *)0x0;
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pAVar7 = (AdvancedGhostBehaviour_IGhostBehaviourState__Class *)FUN_?(pIVar6,1);
  }
  else {
    if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
       (pAVar8 = (ghostBehaviour->fields).currentState,
       pAVar8 == (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar4 = (Type *)(*pcVar2)();
      return pTVar4;
    }
    pAVar7 = pAVar8->klass;
  }
  pIVar6 = &(pAVar7->_0).byval_arg;
  apTStackX_10[0] = (Type *)0x0;
  cVar9 = FUN_?(pIVar6,&stack0x00000008,apTStackX_10,in_R9,unaff_RBX);
  if (cVar9 == '\0') {
    lVar10 = FUN_?(uRam_?);
    *(Il2CppType **)(lVar10 + 0x10) = pIVar6;
    pTVar4 = (Type *)FUN_?(extraout_XMM0_Da,&stack0x00000008,lVar10);
    return pTVar4;
  }
  return apTStackX_10[0];
}


/* AdvancedGhostBehaviour+Die() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Die::AdvancedGhostBehaviour_Die__ctor
               (AdvancedGhostBehaviour_Die *this,MethodInfo *method)

{
  (this->fields).dieTime = 0.5;
  (this->fields).deathRotationSpeed = 0.15;
  return;
}

