
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data[2].klass;
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
  if (-1 < (int)(pIVar5[2].method)->return_type) {
    value = unaff_EDI;
  }
  pMVar1 = pIVar5[3].method;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,this,&value,value);
  return;
}

