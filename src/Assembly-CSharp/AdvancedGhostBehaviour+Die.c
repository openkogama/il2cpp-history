
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
  func_?();
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
    func_?(&TypeRef__AdvancedGhostBehaviour__Dead);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currentDieTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).currentDieTime = fVar1;
  handle = TypeRef__AdvancedGhostBehaviour__Dead;
  if (0.0 < fVar1) {
    if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
       (this_00 = (Object *)(ghostBehaviour->fields).currentState, this_00 != (Object *)0x0)) {
      pTVar3 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
      return pTVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pTVar3 = (Type *)(*pcVar4)();
    return pTVar3;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return pTVar3;
}


/* AdvancedGhostBehaviour+Die() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Die::AdvancedGhostBehaviour_Die__ctor
               (AdvancedGhostBehaviour_Die *this,MethodInfo *method)

{
  (this->fields).dieTime = 0.5;
  (this->fields).deathRotationSpeed = 0.15;
  return;
}

