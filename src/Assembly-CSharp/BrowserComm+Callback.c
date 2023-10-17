
/* Void Execute(Boolean, String) */

void Assembly-CSharp.dll::BrowserComm+Callback::BrowserComm_Callback_Execute
               (BrowserComm_Callback *this,bool success,String *data,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).callbackFunction;
  if (pAVar2 != (Action_2_Boolean_String_ *)0x0) {
    puStack_1 = (pAVar2->fields)._._.method;
    pSStack_3 = data;
    uStack_4 = _success;
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
    return;
  }
  uVar5 = func_?(&uStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

