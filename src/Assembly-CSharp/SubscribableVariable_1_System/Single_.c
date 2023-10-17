
/* SubscribableVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single___ctor
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
            (this,value,method->klass->rgctx_data[1].rgctxDataDummy);
  return;
}


/* Void set_ValueSet(Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single__set_ValueSet
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pIVar1 = method->klass;
  (this->fields)._.value = value;
  (*pIVar1->rgctx_data->method->virtualMethodPointer)
            (this,method->klass->rgctx_data->rgctxDataDummy);
  return;
}

