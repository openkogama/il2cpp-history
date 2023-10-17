
/* Void Initialize(UnityAction`1[System.Boolean], String, String) */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_Initialize
               (BundleErrorPopUp *this,UnityAction_1_System_Boolean_ *resultCallback,String *header,
               String *buttonText,MethodInfo *method)

{
  pTVar1 = (this->fields).buttonText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,buttonText,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,header,(pTVar1->klass->vtable).set_text.method);
      (this->fields).resultCallback = resultCallback;
      func_?(&(this->fields).resultCallback,resultCallback);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnButtonPressed
               (BundleErrorPopUp *this,MethodInfo *method)

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


/* Void OnExit() */

void Assembly-CSharp.dll::BundleErrorPopUp::BundleErrorPopUp_OnExit
               (BundleErrorPopUp *this,MethodInfo *method)

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

