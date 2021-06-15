
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup+<ProductPurchaseResponseHandler>c__AnonStorey0::
     MaterialPurchasePopup_ProductPurchaseResponseHandler_c_AnonStorey0___m__0
               (MaterialPurchasePopup_ProductPurchaseResponseHandler_c_AnonStorey0 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).returnCode;
  pMVar2 = (this->fields)._this;
  if ((pMVar2 != (MaterialPurchasePopup *)0x0) &&
     (pTVar3 = (pMVar2->fields).price, pTVar3 != (Text *)0x0)) {
    s = (String *)
        (*(code *)(pTVar3->klass->vtable).get_text.method)
                  (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse_3(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,iVar1,iVar4);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

