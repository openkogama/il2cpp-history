
/* IAsyncResult BeginInvoke(Int32Enum, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Int32Enum]::
SpawnRoleVariable_1_T_SubDelegate_System_Int32Enum__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Int32Enum_ *this,Int32Enum__Enum value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  aIStackX_10[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32Enum);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__System__Int32Enum,aIStackX_10);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

