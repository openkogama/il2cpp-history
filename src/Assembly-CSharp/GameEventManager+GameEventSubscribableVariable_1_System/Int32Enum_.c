
/* GameEventManager+GameEventSubscribableVariable`1[System.Int32Enum](Int32Enum) */

void Assembly-CSharp.dll::GameEventManager+GameEventSubscribableVariable`1[System::Int32Enum]::
     GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum___ctor
               (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *this,
               Int32Enum__Enum value,MethodInfo *method)

{
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            ((SubscribableVariable_1_System_Int32Enum_ *)this,value,
             method->klass->rgctx_data[3].method);
  return;
}


/* Void set_ValueSet(Int32Enum) */

void Assembly-CSharp.dll::GameEventManager+GameEventSubscribableVariable`1[System::Int32Enum]::
     GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum__set_ValueSet
               (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *this,
               Int32Enum__Enum value,MethodInfo *method)

{
  (this->fields)._.value = value;
  SubscribableVariableBase`1[System::Object]::SubscribableVariableBase_1_System_Object__Notify
            ((SubscribableVariableBase_1_System_Object_ *)this,method->klass->rgctx_data[2].method);
  return;
}

