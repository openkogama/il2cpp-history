
/* IAsyncResult BeginInvoke(Vector3, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Vector3 *value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__UnityEngine__Vector3,value);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}


/* Void Invoke(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
     SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3__Invoke
               (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Vector3 *value,
               MethodInfo *method)

{
  fStack_1 = value->z;
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  (*(this->fields)._._.invoke_impl)
            ((this->fields)._._.method_code,&uStack_2,(this->fields)._._.method);
  return;
}


/* SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3](Object, IntPtr) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
     SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Object *object,
               void *method_1,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._._.method_ptr = *(void **)((longlong)method_1 + 8);
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.m_target >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  cVar6 = *(char *)((longlong)method_1 + 0x52);
  (this->fields)._._.method_code = this;
  if ((*(byte *)((longlong)method_1 + 0x4c) & 0x10) == 0) {
    if (object == (Object *)0x0) {
      uVar7 = func_?();
      FUN_?(uVar7,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (cVar6 == '\x01') {
    (this->fields)._._.invoke_impl = FUN_?;
    (this->fields)._._.extra_arg = FUN_?;
    return;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
  (this->fields)._._.extra_arg = FUN_?;
  return;
}

