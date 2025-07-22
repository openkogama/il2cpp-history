
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup+<>c__DisplayClass13_0::
     MaterialPurchasePopup_c_DisplayClass13_0__ProductPurchaseResponseHandler_b__2
               (MaterialPurchasePopup_c_DisplayClass13_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).returnCode;
  pMVar2 = (this->fields).__4__this;
  if ((pMVar2 != (MaterialPurchasePopup *)0x0) &&
     (pTVar3 = (pMVar2->fields).price, pTVar3 != (Text *)0x0)) {
    s = (String *)
        (*(code *)(pTVar3->klass->vtable).get_text.method)
                  (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,iVar1,iVar4);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

