
/* IAsyncResult BeginInvoke(Quaternion, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Quaternion]::
SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Quaternion__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Quaternion_ *this,Quaternion *value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__UnityEngine__Quaternion,value);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

