
/* IAsyncResult BeginInvoke(ByteEnum, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::ByteEnum]::
SpawnRoleVariable_1_T_SubDelegate_System_ByteEnum__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_ByteEnum_ *this,ByteEnum__Enum value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  auStackX_10[0] = (undefined1)value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__ByteEnum);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__System__ByteEnum,auStackX_10);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

