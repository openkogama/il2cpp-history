
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<ProductPurchaseResponseHandler>c__AnonStorey6::
     BundleView_ProductPurchaseResponseHandler_c_AnonStorey6___m__0
               (BundleView_ProductPurchaseResponseHandler_c_AnonStorey6 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                    (this->fields).returnCode);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

