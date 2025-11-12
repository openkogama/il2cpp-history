
/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+ResetState::
       AdvancedGhostBehaviour_ResetState_Update
                 (AdvancedGhostBehaviour_ResetState *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__AdvancedGhostBehaviour__Idle;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    lVar2 = lVar2 + 0x20;
    apTStackX_10[0] = (Type *)0x0;
    lStackX_8 = lVar2;
    cVar3 = FUN_?(lVar2,&lStackX_8,apTStackX_10,in_R9,unaff_RBX);
    if (cVar3 != '\0') {
      return apTStackX_10[0];
    }
    lVar4 = FUN_?(uRam_?);
    *(longlong *)(lVar4 + 0x10) = lVar2;
    pTVar5 = (Type *)FUN_?();
    return pTVar5;
  }
  return (Type *)0x0;
}

