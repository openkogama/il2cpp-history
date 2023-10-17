
/* Void <OnPlayerPlanetDataUpdated>b__12_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__OnPlayerPlanetDataUpdated_b__12_0
               (GamePassesProgressBarFreeTryHandler_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <PreviewTier>b__11_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__PreviewTier_b__11_0
               (GamePassesProgressBarFreeTryHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IModalPopupCreator *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IModalPopupCreator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <PreviewTier>b__11_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__PreviewTier_b__11_1
               (GamePassesProgressBarFreeTryHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* Void <RewardedAdCallback>b__10_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__RewardedAdCallback_b__10_0
               (GamePassesProgressBarFreeTryHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* Void <RewardedAdCallback>b__10_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__RewardedAdCallback_b__10_1
               (GamePassesProgressBarFreeTryHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
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
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <ShowAd>b__9_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__ShowAd_b__9_0
               (GamePassesProgressBarFreeTryHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
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
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GamePassesProgressBarFreeTryHandler+<>c() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler+<>c::
     GamePassesProgressBarFreeTryHandler_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    cRam_? = '\x01';
  }
  value = (GamePassesProgressBarFreeTryHandler_c *)
          func_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
  if (value != (GamePassesProgressBarFreeTryHandler_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9 = value;
    func_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

