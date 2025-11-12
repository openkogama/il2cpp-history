
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c__DisplayClass19_0::
     AvatarAccessoryPurchasePopup_c_DisplayClass19_0__ProductPurchaseResponseHandler_b__1
               (AvatarAccessoryPurchasePopup_c_DisplayClass19_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).__4__this;
  if ((pAVar1 != (AvatarAccessoryPurchasePopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).returnCode,(pAVar1->fields).price);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

