
/* Void Invoke(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
     SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
               (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *this,Object *value,
               MethodInfo *method)

{
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields)._.prev;
  if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(this_00,value,method);
  }
  pcVar1 = (this->fields)._._.method_ptr;
  this_01 = (this->fields)._._.method;
  pOVar2 = (this->fields)._._.m_target;
  pOVar3 = pOVar2;
  if (this_01->flags == 0xffff) {
    func_?(this_01,pOVar2);
  }
  cVar4 = func_?(this_01);
  cVar5 = (char)this_01->iflags;
  if (cVar4 == '\0') {
    if (cVar5 == '\x01') {
      (*pcVar1)();
      return;
    }
code_?:
    (*pcVar1)(pOVar2,value,this_01);
    return;
  }
  if (cVar5 == '\x01') {
    if (((this_01->flags == 0xffff) ||
        ((pOVar2 != (Object *)0x0 && (((pOVar2->klass->_1).token & 0x100) != 0)))) ||
       ((this->fields)._._.invoke_impl == (void *)0x0)) goto code_?;
    cVar5 = func_?(pOVar2);
    if (cVar5 != '\0') {
      return;
    }
    if (pOVar2 != (Object *)0x0) {
      pMVar6 = this_01;
      cVar5 = func_?();
      pOVar2 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
      cVar4 = func_?(pOVar2);
      if (cVar5 == '\0') {
        if (cVar4 != '\0') {
          puVar7 = &UNK_?;
          pOVar2 = mscorlib.dll::System::Collections::Generic::
                   KeyValuePair`2[WinningConditionType,System::Object]::
                   KeyValuePair_2_WinningConditionType_System_Object__get_Value
                             ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                              unaff_EBP);
          func_?(this_01->flags,pOVar2,puVar7,value);
          return;
        }
        func_?(this_01->flags,pOVar3,value);
        return;
      }
      if (cVar4 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3,value);
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar2);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar4 = func_?(pOVar2);
    if (cVar5 != '\0') {
      if (cVar4 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,value);
      return;
    }
    if (cVar4 != '\0') {
      pOVar2 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,unaff_EBP);
      func_?(this_01->flags,pOVar2,value);
      return;
    }
    func_?(this_01->flags,value);
    return;
  }
  (*pcVar1)(value,this_01);
  return;
}

