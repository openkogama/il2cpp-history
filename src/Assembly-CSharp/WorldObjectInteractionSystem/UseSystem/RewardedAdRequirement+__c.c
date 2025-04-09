
/* Void <OnAdFinished>b__29_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement+<>c::
     RewardedAdRequirement_c__OnAdFinished_b__29_0
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
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_RewardedAdNotAvailableText)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)
              func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,0);
code_?:
    uVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    pSVar7 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      pIVar8 = x->klass;
      uVar4 = 0;
      uVar3._0_1_ = (pIVar8->_1).rank;
      uVar3._1_1_ = (pIVar8->_1).minimumAlignment;
      if (uVar3 != 0) {
        do {
          if (pIVar8->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            ppMVar5 = &(&(x->klass->vtable).Create_3)[pIVar8->interfaceOffsets[uVar4].offset].method
            ;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      ppMVar5 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
      (*(code *)*ppMVar5)(x,uVar6,pSVar7,ppMVar5[1]);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  method_00 = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c;
  value = (RewardedAdRequirement_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->static_fields->__9
       = value;
  func_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
                  static_fields,value);
  return;
}

