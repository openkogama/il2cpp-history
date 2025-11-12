
/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+GhostBehaviourState::
       AdvancedGhostBehaviour_GhostBehaviourState_Update
                 (AdvancedGhostBehaviour_GhostBehaviourState *this,
                 AdvancedGhostBehaviour *ghostBehaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Die);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    if ((ghostBehaviour->fields).lives != 0) {
      pFVar1 = (ghostBehaviour->fields).deathCheckFunc;
      if (pFVar1 == (Func_1_Boolean_ *)0x0) goto code_?;
      cVar2 = (*(pFVar1->fields)._._.invoke_impl)
                        ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pTVar3 = (Type *)(*(this->klass->vtable).__unknown_1.methodPtr)
                                   (this,ghostBehaviour,(this->klass->vtable).__unknown_1.method);
        return pTVar3;
      }
    }
    pIVar4 = TypeRef__AdvancedGhostBehaviour__Die;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar4 == (Il2CppType *)0x0) {
      return (Type *)0x0;
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pIVar4,1);
    apTStackX_10[0] = (Type *)0x0;
    cVar2 = FUN_?(lVar5 + 0x20,&stack0x00000008,apTStackX_10,in_R9,unaff_RBX);
    if (cVar2 != '\0') {
      return apTStackX_10[0];
    }
    lVar6 = FUN_?(uRam_?);
    *(longlong *)(lVar6 + 0x10) = lVar5 + 0x20;
    pTVar3 = (Type *)FUN_?();
    return pTVar3;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar7)();
  return pTVar3;
}

