
/* IAsyncResult BeginInvoke(Single, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
SpawnRoleVariable_1_T_SubDelegate_System_Single__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *this,float value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  uStack_1 = 0;
  afStackX_10[0] = value;
  uStack_2 = FUN_?(uRam_?,afStackX_10);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

