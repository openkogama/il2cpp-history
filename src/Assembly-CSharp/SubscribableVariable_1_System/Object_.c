
/* Void set_ValueSet(Object) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Object]::
     SubscribableVariable_1_System_Object__set_ValueSet
               (SubscribableVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  (this->fields)._.value = value;
  func_?(&this->fields,value);
  if ((this->fields)._.OnChange != (Action_1_Object_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.value,(pAVar1->fields)._._.method);
  }
  return;
}

