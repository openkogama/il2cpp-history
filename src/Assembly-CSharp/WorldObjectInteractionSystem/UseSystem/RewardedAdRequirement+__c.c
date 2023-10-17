
/* Void <OnAdFinished>b__27_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement+<>c::
     RewardedAdRequirement_c__OnAdFinished_b__27_0
               (RewardedAdRequirement_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_No_Ad_Available);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          pVVar4 = &(pIVar1->klass->vtable).get_RewardedAdNotAvailableText +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)
             func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,0);
code_?:
    uVar5 = (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
    pSVar6 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      uVar2 = 0;
      uVar3 = (x->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            pVVar4 = &(x->klass->vtable).Create_3 + x->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
      (*pVVar4->methodPtr)(x,uVar5,pSVar6,pVVar4->method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* RewardedAdRequirement+<>c() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement+<>c::
     RewardedAdRequirement_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c);
    cRam_? = '\x01';
  }
  value = (RewardedAdRequirement_c *)
          func_?(
                         TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c
                         );
  if (value != (RewardedAdRequirement_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->static_fields->
    __9 = value;
    func_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
                    static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

