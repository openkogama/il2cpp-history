
/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+GhostBehaviourState::
       AdvancedGhostBehaviour_GhostBehaviourState_Update
                 (AdvancedGhostBehaviour_GhostBehaviourState *this,
                 AdvancedGhostBehaviour *ghostBehaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((ghostBehaviour->fields).lives != 0) {
      this_00 = (ghostBehaviour->fields).deathCheckFunc;
      if (this_00 == (Func_1_Boolean_ *)0x0) goto code_?;
      bVar1 = System.Core.dll::System::Func`1[Boolean]::Func_1_Boolean__Invoke
                        (this_00,MethodInfo__System__Func<bool>__Invoke__);
      if (bVar1 == 0) {
        pTVar2 = (Type *)(*(code *)(this->klass->vtable).__unknown_1.method)
                                   (this,ghostBehaviour,(this->klass->vtable).__unknown_2.methodPtr)
        ;
        return pTVar2;
      }
    }
    handle = TypeRef__AdvancedGhostBehaviour__Die;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    return pTVar2;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}

