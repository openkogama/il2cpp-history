
/* SubscribableVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var7 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var6 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var7,p_Var6);
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    p_Var7 = (_Il2CppFullySharedGenericType__Class *)(p_Var7->_0).image;
  }
  pIVar3 = method->klass;
  *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_4 + lVar2) = p_Var7;
  pMVar5 = pIVar3->rgctx_data[3].method;
  pIVar6 = pMVar5->invoker_method;
  pIVar7 = pMVar5->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  p_StackX_10 = p_Var7;
  (*pIVar6)(pIVar7,pMVar5,this,&p_StackX_10,*(void **)((longlong)alStack_4 + lVar2));
  return;
}


/* Void set_ValueSet(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::SubscribableVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_ValueSet
               (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar3 = FUN_?(this,value,value);
  lVar3 = -lVar3;
  p_Var6 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var6 = value;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffe8 + lVar3,p_Var6,uVar1);
  pFVar4 = (method->klass->rgctx_data[1].klass)->fields;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(this,pFVar4,&stack0xffffffffffffffe8 + lVar3,uVar1);
  if (this != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pIVar5 = (method->klass->rgctx_data[2].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    (*pIVar5)(this);
    return;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

