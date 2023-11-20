
/* IAsyncResult BeginInvoke(__Il2CppFullySharedGenericType, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,_Il2CppFullySharedGenericType *value,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  uStack_1 = 0;
  iVar2 = func_?(**(undefined4 **)((int)(this->fields)._._.method + 0x18));
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  if (*(int *)(iVar2 + 0x14) < 0) {
    value = (_Il2CppFullySharedGenericType *)func_?(iVar2,value);
  }
  uStack_1 = CONCAT44(uStack_1._4_4_,value);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}


/* Void EndInvoke(IAsyncResult) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__EndInvoke
               (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,IAsyncResult *result,MethodInfo *method)

{
  func_?(result,0);
  return;
}

