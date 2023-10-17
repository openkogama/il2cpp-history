
/* Void <Close>b__39_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::SpawnRoleSelectionElement_c__Close_b__39_0
               (SpawnRoleSelectionElement_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    pIStack_1 = handler;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>b__44_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__OnPlayerPlanetDataUpdated_b__44_0
               (SpawnRoleSelectionElement_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>b__44_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__OnPlayerPlanetDataUpdated_b__44_1
               (SpawnRoleSelectionElement_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <PreviewTier>b__43_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__PreviewTier_b__43_0
               (SpawnRoleSelectionElement_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    uVar1 = 0;
    uVar2 = (x->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          pVVar3 = &(x->klass->vtable).Create_1 + x->klass->interfaceOffsets[uVar1].offset;
          (*pVVar3->methodPtr)(x,pVVar3->method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2);
    (*(code *)*puVar4)(x,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <PreviewTier>b__43_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__PreviewTier_b__43_1
               (SpawnRoleSelectionElement_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_An_error_occurred);
    func_?(&StringLiteral_Free_try_cannot_be_activated_at_);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>b__42_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__RewardedAdCallback_b__42_0
               (SpawnRoleSelectionElement_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Video_canceled);
    func_?(&StringLiteral_The_video_was_canceled__Your_Fre);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_video_was_canceled__Your_Fre,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Video_canceled,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>b__42_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::
     SpawnRoleSelectionElement_c__RewardedAdCallback_b__42_1
               (SpawnRoleSelectionElement_c *this,IModalPopupCreator *x,BaseEventData *y,
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
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar5,pSVar6);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <ShowAd>b__41_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::SpawnRoleSelectionElement_c__ShowAd_b__41_0
               (SpawnRoleSelectionElement_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_An_error_occurred);
    func_?(&StringLiteral_Free_try_cannot_be_activated_at_);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SpawnRoleSelectionElement+<>c() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement+<>c::SpawnRoleSelectionElement_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SpawnRoleSelectionElement____c);
    cRam_? = '\x01';
  }
  value = (SpawnRoleSelectionElement_c *)func_?(TypeInfo__SpawnRoleSelectionElement____c);
  if (value != (SpawnRoleSelectionElement_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9 = value;
    func_?(TypeInfo__SpawnRoleSelectionElement____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

