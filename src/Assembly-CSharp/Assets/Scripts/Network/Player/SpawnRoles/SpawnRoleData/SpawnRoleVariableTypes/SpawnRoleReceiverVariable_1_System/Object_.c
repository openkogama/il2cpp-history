
/* Void OnChange(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object__OnChange
               (SpawnRoleReceiverVariable_1_System_Object_ *this,Object *newValue,MethodInfo *method
               )

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
              (pSVar1,newValue,method->klass->rgctx_data[3].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SpawnRoleReceiverVariable`1[System.Object](SubscribableVariable`1[System.Object],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object___ctor
               (SpawnRoleReceiverVariable_1_System_Object_ *this,
               SubscribableVariable_1_System_Object_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_System_Object_ *)0x0) {
    uVar1 = (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                      (subscribableVariableExternal,method->klass->rgctx_data[1].rgctxDataDummy);
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pSVar3 = (SubscribableVariable_1_System_Object_ *)func_?(pvVar2);
    if (pSVar3 != (SubscribableVariable_1_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pSVar3,uVar1,method->klass->rgctx_data[4].rgctxDataDummy);
      (this->fields).subscribableVariable = pSVar3;
      func_?(&(this->fields).subscribableVariable,pSVar3);
      pSVar3 = (this->fields).subscribableVariable;
      pvVar2 = method->klass->rgctx_data[6].rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      iVar4 = func_?(pvVar2);
      if (iVar4 != 0) {
        (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                  (iVar4,this,method->klass->rgctx_data[5].rgctxDataDummy,
                   method->klass->rgctx_data[7].rgctxDataDummy);
        if (pSVar3 != (SubscribableVariable_1_System_Object_ *)0x0) {
          (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                    (pSVar3,iVar4,method->klass->rgctx_data[8].rgctxDataDummy);
          (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
          func_?(&this->fields,spawnRoleDataReceiver);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
         SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
         SpawnRoleReceiverVariable_1_System_Object__get_Value
                   (SpawnRoleReceiverVariable_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    pOVar2 = (Object *)
             (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                       (pSVar1,method->klass->rgctx_data[1].rgctxDataDummy);
    return pOVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
     SpawnRoleReceiverVariable_1_System_Object__set_Value
               (SpawnRoleReceiverVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                (pSVar2,value,method->klass->rgctx_data[3].rgctxDataDummy);
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<System::Object>__set_Value_System__Object_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

