
/* Void <ClaimGold>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c::ClaimGoldRewardPopup_c__ClaimGold_b__10_0
               (ClaimGoldRewardPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <CreateErrorMessage>b__9_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c::
     ClaimGoldRewardPopup_c__CreateErrorMessage_b__9_0
               (ClaimGoldRewardPopup_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* Void <Update>b__4_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c::ClaimGoldRewardPopup_c__Update_b__4_1
               (ClaimGoldRewardPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* ClaimGoldRewardPopup+<>c() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c::ClaimGoldRewardPopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClaimGoldRewardPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ClaimGoldRewardPopup____c;
  value = (ClaimGoldRewardPopup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9 = value;
  func_?(TypeInfo__ClaimGoldRewardPopup____c->static_fields,value);
  return;
}

