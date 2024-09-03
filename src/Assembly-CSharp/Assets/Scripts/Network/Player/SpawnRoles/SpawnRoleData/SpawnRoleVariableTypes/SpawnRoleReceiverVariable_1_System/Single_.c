
/* Void OnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single__OnChange
               (SpawnRoleReceiverVariable_1_System_Single_ *this,float newValue,MethodInfo *method)

{
  this_00 = (this->fields).subscribableVariableExternal;
  if (this_00 != (SubscribableVariable_1_System_Single_ *)0x0) {
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single__set_ValueSet
              (this_00,newValue,method->klass->rgctx_data[5].method);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_System_Single_ *)0x0) {
    value = (subscribableVariableExternal->fields)._.value;
    pIVar1 = method->klass->rgctx_data[1].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    this_01 = (SubscribableVariable_1_System_Single_ *)func_?(pIVar1);
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              (this_01,value,method->klass->rgctx_data[6].method);
    (this->fields).subscribableVariable = this_01;
    func_?(&(this->fields).subscribableVariable,this_01);
    this_00 = (SubscribableVariableBase_1_System_Single_ *)(this->fields).subscribableVariable;
    if (((uint)(method->klass->rgctx_data[8].klass)->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    this_02 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_02,(Object *)this,method->klass->rgctx_data[7].rgctxDataDummy,
               method->klass->rgctx_data[9].method);
    if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__add_OnChange
                (this_00,(Action_1_Single_ *)this_02,method->klass->rgctx_data[10].method);
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&this->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__get_Value
                (SpawnRoleReceiverVariable_1_System_Single_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
    return (pSVar2->fields)._.value;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
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
    this_00 = (this->fields).subscribableVariable;
    if (this_00 != (SubscribableVariable_1_System_Single_ *)0x0) {
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single__set_ValueSet
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

