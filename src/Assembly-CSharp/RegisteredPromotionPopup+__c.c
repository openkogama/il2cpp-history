
/* Void <FadeOutAndPopPromotion>b__17_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::RegisteredPromotionPopup+<>c::
     RegisteredPromotionPopup_c__FadeOutAndPopPromotion_b__17_1
               (RegisteredPromotionPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnViewAdClicked>b__16_0(IRegisterPromotionAdController, BaseEventData) */

void Assembly-CSharp.dll::RegisteredPromotionPopup+<>c::
     RegisteredPromotionPopup_c__OnViewAdClicked_b__16_0
               (RegisteredPromotionPopup_c *this,IRegisterPromotionAdController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IRegisterPromotionAdController *)&TypeInfo__IRegisterPromotionAdController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IRegisterPromotionAdController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__IRegisterPromotionAdController;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IRegisterPromotionAdController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RegisteredPromotionPopup+<>c() */

void Assembly-CSharp.dll::RegisteredPromotionPopup+<>c::RegisteredPromotionPopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RegisteredPromotionPopup____c);
    cRam_? = '\x01';
  }
  value = (RegisteredPromotionPopup_c *)func_?(TypeInfo__RegisteredPromotionPopup____c);
  if (value != (RegisteredPromotionPopup_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__RegisteredPromotionPopup____c->static_fields->__9 = value;
    func_?(TypeInfo__RegisteredPromotionPopup____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

