
/* SubscribableVariable`1[System.Object](Object) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Object]::
     SubscribableVariable_1_System_Object___ctor
               (SubscribableVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
            (this,value,method->klass->rgctx_data[1].rgctxDataDummy);
  return;
}


/* Void set_ValueSet(Object) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Object]::
     SubscribableVariable_1_System_Object__set_ValueSet
               (SubscribableVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  (this->fields)._.value = value;
  func_?(&this->fields,value);
  (*method->klass->rgctx_data->method->virtualMethodPointer)
            (this,method->klass->rgctx_data->rgctxDataDummy);
  return;
}

