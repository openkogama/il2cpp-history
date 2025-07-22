
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c__DisplayClass19_0::
     AvatarAccessoryPurchasePopup_c_DisplayClass19_0__ProductPurchaseResponseHandler_b__1
               (AvatarAccessoryPurchasePopup_c_DisplayClass19_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).__4__this;
  if ((pAVar2 != (AvatarAccessoryPurchasePopup *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    ppIStack_1 = (IModalPopupCreator__Class **)(pAVar2->fields).price;
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

