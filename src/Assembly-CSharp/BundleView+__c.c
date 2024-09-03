
/* Void <OnInsufficientResourceCallback>b__22_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c::BundleView_c__OnInsufficientResourceCallback_b__22_0
               (BundleView_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnPop>b__21_0(IBundleController, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c::BundleView_c__OnPop_b__21_0
               (BundleView_c *this,IBundleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IBundleController *)&TypeInfo__UnityEngine__EventSystems__IBundleController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IBundleController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IBundleController;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IBundleController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPurchaseBundleConfirmation>b__19_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c::BundleView_c__OnPurchaseBundleConfirmation_b__19_0
               (BundleView_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ProductPurchaseResponseHandler>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c::BundleView_c__ProductPurchaseResponseHandler_b__20_0
               (BundleView_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* BundleView+<>c() */

void Assembly-CSharp.dll::BundleView+<>c::BundleView_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BundleView____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BundleView____c;
  value = (BundleView_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__BundleView____c->static_fields->__9 = value;
  func_?(TypeInfo__BundleView____c->static_fields,value);
  return;
}

