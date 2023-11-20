
/* SubscribableVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  p_Var4 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)pMVar1->klass->rgctx_data->method->return_type < 0) {
    p_Var4 = value;
  }
  func_?(&stack0xfffffff0,p_Var4,uVar2);
  value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
  if (-1 < (int)pMVar1->klass->rgctx_data->method->return_type) {
    value = unaff_EDI;
  }
  pMVar3 = pMVar1->klass->rgctx_data[3].method;
  (*pMVar3->invoker_method)
            ((pMVar1->klass->rgctx_data[3].method)->methodPointer,pMVar3,this,&value,value);
  return;
}


/* Void set_ValueSet(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_ValueSet
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  p_Var4 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)pMVar1->klass->rgctx_data->method->return_type < 0) {
    p_Var4 = value;
  }
  func_?(&stack0xfffffff0,p_Var4,uVar2);
  func_?(this,(pMVar1->klass->rgctx_data[1].klass)->fields,&stack0xfffffff0,uVar2);
  if (this != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar1 = pMVar1->klass->rgctx_data[2].method;
    (*pMVar1->methodPointer)(this,pMVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

