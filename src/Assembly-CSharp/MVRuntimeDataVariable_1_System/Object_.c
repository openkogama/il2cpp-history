
/* Object get_Value() */

Object * Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Object]::
         MVRuntimeDataVariable_1_System_Object__get_Value
                   (MVRuntimeDataVariable_1_System_Object_ *this,MethodInfo *method)

{
  if (this == (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
    func_?(0);
  }
  else {
    unaff_EDI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    unaff_ESI = **(int **)(method->name + 0x60);
    if ((*(byte *)(unaff_ESI + 0xbe) & 1) == 0) {
      func_?(unaff_ESI);
    }
    if (unaff_EDI == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar1 = (Object *)func_?(unaff_EDI,unaff_ESI);
    if (pOVar1 != (Object *)0x0) {
      return pOVar1;
    }
  }
  func_?(unaff_EDI,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Object]::
     MVRuntimeDataVariable_1_System_Object__set_Value
               (MVRuntimeDataVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if (this == (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obscuredValue =
       ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue(value,(MethodInfo *)0x0);
  pOVar2 = (this->fields)._.value;
  (this->fields)._.value = obscuredValue;
  if (pOVar2 != obscuredValue) {
    pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields)._.OnChange;
    if (pSVar3 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         (obscuredValue,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar3,pOVar2,(MethodInfo *)0x0);
    }
    if (((this->fields)._.writeThrough != 0) &&
       (pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields)._.OnWriteThrough
       , pSVar3 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields)._.value,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar3,pOVar2,(MethodInfo *)0x0);
    }
  }
  return;
}

