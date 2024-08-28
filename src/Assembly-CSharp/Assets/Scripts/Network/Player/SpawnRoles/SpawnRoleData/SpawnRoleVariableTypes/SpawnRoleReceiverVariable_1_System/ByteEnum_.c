
/* Void OnChange(ByteEnum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum__OnChange
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,ByteEnum__Enum newValue,
               MethodInfo *method)

{
  this_00 = (this->fields).subscribableVariableExternal;
  if (this_00 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    SubscribableVariable`1[System::ByteEnum]::SubscribableVariable_1_System_ByteEnum__set_ValueSet
              (this_00,newValue,method->klass->rgctx_data[5].method);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SpawnRoleReceiverVariable`1[System.ByteEnum](SubscribableVariable`1[System.ByteEnum],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
     SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
               (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,
               SubscribableVariable_1_System_ByteEnum_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  object = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppSVar1 = &(this->fields).subscribableVariableExternal;
  *ppSVar1 = subscribableVariableExternal;
  func_?(ppSVar1,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    this = (SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
           CONCAT31(this._1_3_,(subscribableVariableExternal->fields)._.value);
    pIVar2 = method->klass->rgctx_data[1].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    this_01 = (SubscribableVariable_1_System_ByteEnum_ *)func_?(pIVar2);
    SubscribableVariable`1[System::ByteEnum]::SubscribableVariable_1_System_ByteEnum___ctor
              (this_01,(ByteEnum__Enum)this,method->klass->rgctx_data[6].method);
    ppSVar1 = &(object->fields).subscribableVariable;
    *ppSVar1 = this_01;
    func_?(ppSVar1,this_01);
    this_00 = (SubscribableVariableBase_1_System_Single_ *)*ppSVar1;
    if (((uint)(method->klass->rgctx_data[8].klass)->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
    pIVar3 = method->klass->rgctx_data;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)object,pIVar3[7].rgctxDataDummy,pIVar3[9].method);
    if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__add_OnChange
                (this_00,(Action_1_Single_ *)this_02,method->klass->rgctx_data[10].method);
      (object->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&object->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ByteEnum get_Value() */

ByteEnum__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
SpawnRoleReceiverVariable_1_System_ByteEnum__get_Value
          (SpawnRoleReceiverVariable_1_System_ByteEnum_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
    return CONCAT31((int3)((uint)pSVar2 >> 8),(pSVar2->fields)._.value);
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  BVar6 = (*pcVar5)();
  return BVar6;
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
    this_00 = (this->fields).subscribableVariable;
    if (this_00 != (SubscribableVariable_1_System_ByteEnum_ *)0x0) {
      SubscribableVariable`1[System::ByteEnum]::SubscribableVariable_1_System_ByteEnum__set_ValueSet
                (this_00,value,method->klass->rgctx_data[5].method);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(this_01);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

