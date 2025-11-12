
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup+<>c__DisplayClass13_0::
     MaterialPurchasePopup_c_DisplayClass13_0__ProductPurchaseResponseHandler_b__2
               (MaterialPurchasePopup_c_DisplayClass13_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).__4__this;
  iVar2 = (this->fields).returnCode;
  if ((pMVar1 != (MaterialPurchasePopup *)0x0) &&
     (pTVar3 = (pMVar1->fields).price, pTVar3 != (Text *)0x0)) {
    s = (String *)(*(pTVar3->klass->vtable).get_text.methodPtr)();
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,iVar2,iVar4);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

