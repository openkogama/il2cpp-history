
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
  lVar2 = FUN_?(**(undefined8 **)((longlong)(this->fields)._._.method + 0x30),1);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_?(lVar2);
  }
  if (*(int *)(lVar2 + 0x28) < 0) {
    value = (_Il2CppFullySharedGenericType *)FUN_?(lVar2,value);
  }
  p_Stack_18 = value;
  pIVar3 = (IAsyncResult *)FUN_?(this,&p_Stack_18,callback,object);
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
  FUN_?(result,auStack_1,&pIStackX_20);
  if (pIStackX_20 == (Il2CppChar *)0x0) {
    return;
  }
  il2cpp_set_config_utf16(pIStackX_20);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

