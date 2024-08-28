
/* Void set_ValueSet(Object) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Object]::
     SubscribableVariable_1_System_Object__set_ValueSet
               (SubscribableVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  pSVar1 = &this->fields;
  (pSVar1->_).value = value;
  func_?(pSVar1,value);
  pAVar2 = (this->fields)._.OnChange;
  if (pAVar2 != (Action_1_Object_ *)0x0) {
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pSVar1->_).value,(pAVar2->fields)._._.method);
  }
  return;
}

