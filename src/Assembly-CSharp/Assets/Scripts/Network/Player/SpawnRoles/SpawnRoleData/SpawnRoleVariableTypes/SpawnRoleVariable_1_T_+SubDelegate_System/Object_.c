
/* IAsyncResult BeginInvoke(Object, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
SpawnRoleVariable_1_T_SubDelegate_System_Object__BeginInvoke
          (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *this,Object *value,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  uStack_1 = ZEXT48(value);
  pIVar2 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar2;
}


/* SpawnRoleVariable`1[T]+SubDelegate[System.Object](Object, IntPtr) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
     SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
               (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *this,Object *object,void *method_1
               ,MethodInfo *method)

{
  (this->fields)._._.method_ptr = *(void **)((int)method_1 + 4);
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  func_?(&(this->fields)._._.m_target,object);
  cVar1 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar2 = func_?(method_1);
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      if ((this->fields)._._.method_is_virtual == 0) {
        (this->fields)._._.invoke_impl = &UNK_?;
        (this->fields)._._.extra_arg = &UNK_?;
        return;
      }
      cVar1 = func_?(method_1);
      if (cVar1 != '\0') {
        cVar1 = func_?(method_1);
        puVar3 = &UNK_?;
        if (cVar1 == '\0') {
          puVar3 = &UNK_?;
        }
        (this->fields)._._.invoke_impl = puVar3;
        (this->fields)._._.extra_arg = &UNK_?;
        return;
      }
      cVar1 = func_?(method_1);
      puVar3 = &UNK_?;
      if (cVar1 == '\0') {
        puVar3 = &UNK_?;
      }
      (this->fields)._._.invoke_impl = puVar3;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    if (object == (Object *)0x0) {
      uVar4 = func_?(0,&UNK_?,0);
      func_?(uVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (cVar1 == '\x01') {
    (this->fields)._._.invoke_impl = &UNK_?;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  pvVar6 = (this->fields)._._.method_ptr;
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = pvVar6;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

