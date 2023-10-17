
/* Void set_ValueSet(Int32Enum) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Int32Enum]::
     SubscribableVariable_1_System_Int32Enum__set_ValueSet
               (SubscribableVariable_1_System_Int32Enum_ *this,Int32Enum__Enum value,
               MethodInfo *method)

{
  (this->fields)._.value = value;
  (*method->klass->rgctx_data->method->virtualMethodPointer)
            (this,method->klass->rgctx_data->rgctxDataDummy);
  return;
}

