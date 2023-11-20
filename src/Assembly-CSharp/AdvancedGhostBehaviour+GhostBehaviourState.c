
/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+GhostBehaviourState::
       AdvancedGhostBehaviour_GhostBehaviourState_Update
                 (AdvancedGhostBehaviour_GhostBehaviourState *this,
                 AdvancedGhostBehaviour *ghostBehaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Die);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    bVar1 = AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_IsDead
                      (ghostBehaviour,(MethodInfo *)0x0);
    handle = TypeRef__AdvancedGhostBehaviour__Die;
    if (bVar1 == 0) {
      pTVar2 = (Type *)(*(code *)(this->klass->vtable).__unknown_1.method)
                                 (this,ghostBehaviour,(this->klass->vtable).__unknown_2.methodPtr);
      return pTVar2;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    return pTVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}

