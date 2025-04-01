
/* IAsyncResult BeginInvoke(Vector3, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Vector3 value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__UnityEngine__Vector3,&value);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}


/* Void Invoke(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
     SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3__Invoke
               (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  (*(this->fields)._._.invoke_impl)
            ((this->fields)._._.method_code,value._0_8_,value.z,(this->fields)._._.method);
  return;
}


/* SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3](Object, IntPtr) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
     SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *this,Object *object,
               void *method_1,MethodInfo *method)

{
  ppOVar1 = &(this->fields)._._.m_target;
  (this->fields)._._.method_ptr = *(void **)((int)method_1 + 4);
  (this->fields)._._.method = method_1;
  *ppOVar1 = object;
  func_?(ppOVar1,object);
  cVar2 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar3 = func_?(method_1);
  if (cVar3 == '\0') {
    if (object == (Object *)0x0) {
      uVar4 = func_?(0,&UNK_?,0);
      func_?(uVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (cVar2 == '\x01') {
    (this->fields)._._.invoke_impl = &UNK_?;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  (this->fields)._._.method_code = *ppOVar1;
  (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

