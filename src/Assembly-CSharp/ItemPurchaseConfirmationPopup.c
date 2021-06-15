
/* Void AcceptPurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_AcceptPurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,1,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeclinePurchase() */

void Assembly-CSharp.dll::ItemPurchaseConfirmationPopup::
     ItemPurchaseConfirmationPopup_DeclinePurchase
               (ItemPurchaseConfirmationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).resultCallback;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (this_00,0,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

