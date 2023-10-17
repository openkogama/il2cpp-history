
/* SpawnRoleReceiverVariable`1[System.ByteEnum](SubscribableVariable`1[System.ByteEnum],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,
               SubscribableVariable_1_System_ByteEnum_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  pSVar1 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    uVar2 = (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                      (subscribableVariableExternal,method->klass->rgctx_data[1].rgctxDataDummy);
    this = (SpawnRoleReceiverVariable_1_System_ByteEnum_ *)CONCAT31(this._1_3_,uVar2);
    pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pSVar4 = (SubscribableVariable_1_System_ByteEnum_ *)func_?(pvVar3);
    if (pSVar4 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pSVar4,this,method->klass->rgctx_data[4].rgctxDataDummy);
      (pSVar1->fields).subscribableVariable = pSVar4;
      func_?(&(pSVar1->fields).subscribableVariable,pSVar4);
      pSVar4 = (pSVar1->fields).subscribableVariable;
      pvVar3 = method->klass->rgctx_data[6].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      iVar5 = func_?(pvVar3);
      if (iVar5 != 0) {
        (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                  (iVar5,pSVar1,method->klass->rgctx_data[5].rgctxDataDummy,
                   method->klass->rgctx_data[7].rgctxDataDummy);
        if (pSVar4 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
          (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                    (pSVar4,iVar5,method->klass->rgctx_data[8].rgctxDataDummy);
          (pSVar1->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
          func_?(&pSVar1->fields,spawnRoleDataReceiver);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_Value(ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,ByteEnum__Enum value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
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
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<System::ByteEnum>__set_Value_System__ByteEnum_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

