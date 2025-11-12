
/* Void Execute(Boolean, String) */

void Assembly-CSharp.dll::BrowserComm+Callback::BrowserComm_Callback_Execute
               (BrowserComm_Callback *this,bool success,String *data,MethodInfo *method)

{
  pAVar1 = (this->fields).callbackFunction;
  if (pAVar1 != (Action_2_Boolean_String_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,success,data,(pAVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

