
/* Void <FadeOutAndPopPromotion>b__13_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion+<>c::TouristPromotion_c__FadeOutAndPopPromotion_b__13_1
               (TouristPromotion_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnContinueClicked>b__12_0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion+<>c::TouristPromotion_c__OnContinueClicked_b__12_0
               (TouristPromotion_c *this,ITouristAdController *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    pIStack_1 = (ITouristAdController *)&TypeInfo__ITouristAdController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__ITouristAdController;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (ITouristAdController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnContinueClicked>b__12_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion+<>c::TouristPromotion_c__OnContinueClicked_b__12_1
               (TouristPromotion_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* TouristPromotion+<>c() */

void Assembly-CSharp.dll::TouristPromotion+<>c::TouristPromotion_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TouristPromotion____c);
    cRam_? = '\x01';
  }
  value = (TouristPromotion_c *)func_?(TypeInfo__TouristPromotion____c);
  if (value != (TouristPromotion_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__TouristPromotion____c->static_fields->__9 = value;
    func_?(TypeInfo__TouristPromotion____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

