
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup+<ProductPurchaseResponseHandler>c__AnonStorey2::
     TierUnlockDetailsPopup_ProductPurchaseResponseHandler_c_AnonStorey2___m__0
               (TierUnlockDetailsPopup_ProductPurchaseResponseHandler_c_AnonStorey2 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._this;
  if ((pTVar1 != (TierUnlockDetailsPopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                    (this->fields).returnCode,(pTVar1->fields).price);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

