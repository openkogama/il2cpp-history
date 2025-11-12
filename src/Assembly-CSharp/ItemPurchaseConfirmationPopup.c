
/* Void AcceptPurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_AcceptPurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?(0,(char)method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeclinePurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_DeclinePurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

