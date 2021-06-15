
/* IAsyncResult BeginInvoke(Vector3, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Vector3 value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__UnityEngine__Vector3,&value);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

