
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c__DisplayClass20_0::
     BundleView_c_DisplayClass20_0__ProductPurchaseResponseHandler_b__1
               (BundleView_c_DisplayClass20_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    ppIStack_1 = (IModalPopupCreator__Class **)0x0;
    puStack_2 = (undefined *)(this->fields).returnCode;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  ppIStack_1 = (IModalPopupCreator__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

