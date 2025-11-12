
/* Void OnEnable() */

void Assembly-CSharp.dll::FireObject::FireObject_OnEnable(FireObject *this,MethodInfo *method)

{
  if ((this->fields).OnFireObjectCreated != (Action *)0x0) {
    pAVar1 = (this->fields).OnFireObjectCreated;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

