
/* Void AcceptPurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_AcceptPurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).resultCallback;
  if (pUVar2 != (UnityAction_1_System_Boolean_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    uStack_3 = 1;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DeclinePurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_DeclinePurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).resultCallback;
  if (pUVar2 != (UnityAction_1_System_Boolean_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    uStack_3 = 0;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

