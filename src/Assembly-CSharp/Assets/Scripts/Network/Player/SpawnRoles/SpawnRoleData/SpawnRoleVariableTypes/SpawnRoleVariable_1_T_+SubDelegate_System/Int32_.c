
/* IAsyncResult BeginInvoke(Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Int32]::
SpawnRoleVariable_1_T_SubDelegate_System_Int32__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Int32_ *this,int32_t value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  uStack_1 = 0;
  aiStackX_10[0] = value;
  uStack_2 = FUN_?(uRam_?,aiStackX_10);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

