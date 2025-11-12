
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup+<>c__DisplayClass22_0::
     TierUnlockDetailsPopup_c_DisplayClass22_0__ProductPurchaseResponseHandler_b__2
               (TierUnlockDetailsPopup_c_DisplayClass22_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).__4__this;
  if ((pTVar1 != (TierUnlockDetailsPopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).returnCode,(pTVar1->fields).price);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

