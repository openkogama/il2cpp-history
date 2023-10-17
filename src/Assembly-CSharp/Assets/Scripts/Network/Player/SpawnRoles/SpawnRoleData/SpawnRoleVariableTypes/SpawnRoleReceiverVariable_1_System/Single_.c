
/* Void OnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single__OnChange
               (SpawnRoleReceiverVariable_1_System_Single_ *this,float newValue,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
              (pSVar1,newValue,method->klass->rgctx_data[3].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SpawnRoleReceiverVariable`1[System.Single](SubscribableVariable`1[System.Single],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single___ctor
               (SpawnRoleReceiverVariable_1_System_Single_ *this,
               SubscribableVariable_1_System_Single_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_System_Single_ *)0x0) {
    fVar1 = (float10)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                               (subscribableVariableExternal,
                                method->klass->rgctx_data[1].rgctxDataDummy);
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pSVar3 = (SubscribableVariable_1_System_Single_ *)func_?(pvVar2);
    if (pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0) {
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pSVar3,(float)fVar1,method->klass->rgctx_data[4].rgctxDataDummy);
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
        if (pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0) {
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


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__get_Value
                (SpawnRoleReceiverVariable_1_System_Single_ *this,MethodInfo *method)

{
  IStack_1.rgctxDataDummy = &stack0xfffffffc;
  pSStack_2 = (this->fields).subscribableVariable;
  if (pSStack_2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    IStack_1 = method->klass->rgctx_data[1];
    fVar3 = (float10)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)();
    return (float)fVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar3 = (float10)(*pcVar6)();
  return (float)fVar3;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single__set_Value
               (SpawnRoleReceiverVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
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
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

