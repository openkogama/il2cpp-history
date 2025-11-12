
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c__DisplayClass20_0::
     BundleView_c_DisplayClass20_0__ProductPurchaseResponseHandler_b__1
               (BundleView_c_DisplayClass20_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).returnCode,0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

