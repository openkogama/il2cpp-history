
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
    if ((ghostBehaviour->fields).lives != 0) {
      pFVar1 = (ghostBehaviour->fields).deathCheckFunc;
      if (pFVar1 == (Func_1_Boolean_ *)0x0) goto code_?;
      cVar2 = (*(pFVar1->fields)._._.invoke_impl)
                        ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
      if (cVar2 == '\0') {
        pTVar3 = (Type *)(*(this->klass->vtable).__unknown_1.methodPtr)
                                   (this,ghostBehaviour,(this->klass->vtable).__unknown_1.method);
        return pTVar3;
      }
    }
    handle = TypeRef__AdvancedGhostBehaviour__Die;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    return pTVar3;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar4)();
  return pTVar3;
}

