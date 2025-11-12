
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierPurchasePopup+<>c__DisplayClass8_0::
     TierPurchasePopup_c_DisplayClass8_0__ProductPurchaseResponseHandler_b__2
               (TierPurchasePopup_c_DisplayClass8_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).__4__this;
  if ((pTVar1 != (TierPurchasePopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).returnCode,(pTVar1->fields).price);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

