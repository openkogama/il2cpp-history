
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup+<>c__DisplayClass8_0::
     TierPurchasePopup_c_DisplayClass8_0__ProductPurchaseResponseHandler_b__2
               (TierPurchasePopup_c_DisplayClass8_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields).__4__this;
  if ((pTVar2 != (TierPurchasePopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    ppIStack_1 = (IModalPopupCreator__Class **)(pTVar2->fields).price;
    puStack_3 = (undefined *)(this->fields).returnCode;
    pIStack_4 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  ppIStack_1 = (IModalPopupCreator__Class **)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

