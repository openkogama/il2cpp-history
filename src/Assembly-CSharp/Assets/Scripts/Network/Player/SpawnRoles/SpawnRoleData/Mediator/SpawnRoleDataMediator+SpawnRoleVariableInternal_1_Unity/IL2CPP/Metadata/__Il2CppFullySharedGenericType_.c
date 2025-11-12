
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var7 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var6 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var7,p_Var6);
  if (-1 < *(int *)&(method->klass->rgctx_data[2].method)->return_type) {
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

