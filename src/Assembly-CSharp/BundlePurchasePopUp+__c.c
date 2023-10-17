
/* Void <OnGoldPurchaseDialogResult>b__12_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundlePurchasePopUp+<>c::
     BundlePurchasePopUp_c__OnGoldPurchaseDialogResult_b__12_0
               (BundlePurchasePopUp_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <Pop>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundlePurchasePopUp+<>c::BundlePurchasePopUp_c__Pop_b__13_0
               (BundlePurchasePopUp_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* BundlePurchasePopUp+<>c() */

void Assembly-CSharp.dll::BundlePurchasePopUp+<>c::BundlePurchasePopUp_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BundlePurchasePopUp____c);
    cRam_? = '\x01';
  }
  value = (BundlePurchasePopUp_c *)func_?(TypeInfo__BundlePurchasePopUp____c);
  if (value != (BundlePurchasePopUp_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__BundlePurchasePopUp____c->static_fields->__9 = value;
    func_?(TypeInfo__BundlePurchasePopUp____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

