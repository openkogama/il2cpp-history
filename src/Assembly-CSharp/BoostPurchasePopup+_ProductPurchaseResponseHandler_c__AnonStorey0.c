
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BoostPurchasePopup+<ProductPurchaseResponseHandler>c__AnonStorey0::
     BoostPurchasePopup_ProductPurchaseResponseHandler_c_AnonStorey0___m__0
               (BoostPurchasePopup_ProductPurchaseResponseHandler_c_AnonStorey0 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._this;
  if ((pBVar1 != (BoostPurchasePopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                    (this->fields).returnCode,(pBVar1->fields).price);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

