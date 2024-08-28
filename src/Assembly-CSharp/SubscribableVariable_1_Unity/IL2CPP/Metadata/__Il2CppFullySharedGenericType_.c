
/* SubscribableVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data->klass;
  uVar3 = pIVar2->actualSize;
  func_?();
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0x7;
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if (iVar4 < 0) {
    p_Var6 = value;
  }
  method = (MethodInfo *)&stack0xfffffff0;
  func_?(&stack0xfffffff0,p_Var6,uVar3);
  pIVar5 = pMVar1->klass->rgctx_data;
  value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
  if (-1 < (int)pIVar5->method->return_type) {
    value = unaff_EDI;
  }
  pMVar1 = pIVar5[3].method;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,this,&value,value);
  return;
}


/* Void set_ValueSet(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_ValueSet
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data->klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if (iVar3 < 0) {
    p_Var6 = value;
  }
  func_?(&stack0xfffffff0,p_Var6,uVar2);
  pMVar4 = method;
  func_?(this,(method->klass->rgctx_data[1].klass)->fields,&stack0xfffffff0,uVar2);
  if (this != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar4 = pMVar4->klass->rgctx_data[2].method;
    (*pMVar4->methodPointer)(this,pMVar4);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

