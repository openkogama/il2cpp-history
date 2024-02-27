
/* Void <GetSpawnTransform>b__139_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__GetSpawnTransform_b__139_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).lastRespawnType,
     this_00 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,3,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <GetSpawnTransform>b__139_1(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__GetSpawnTransform_b__139_1
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).lastRespawnType,
     this_00 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,3,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <LeaveVehicle>b__82_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__LeaveVehicle_b__82_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).isInVehicle,
     this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::ByteEnum]::
    SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)this_00,0,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnCheckpointReachedResetRevive>b__140_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::
     MVAvatarLocal_c__OnCheckpointReachedResetRevive_b__140_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).reviveState,
     this_00 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
    this_01 = (ReviveState *)
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleReceiverVariable`1[System::Object]::
              SpawnRoleReceiverVariable_1_System_Object__get_Value
                        ((SpawnRoleReceiverVariable_1_System_Object_ *)this_00,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                        );
    if (this_01 != (ReviveState *)0x0) {
      ReviveState::ReviveState_ResetSafePostions(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnEnterVehicle>b__86_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__OnEnterVehicle_b__86_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).isInVehicle,
     this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::ByteEnum]::
    SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)this_00,1,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Suicide>b__128_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__Suicide_b__128_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver::
    SpawnRoleDataReceiver_NotifySuicide(receiver,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVAvatarLocal+<>c() */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c;
  value = (MVAvatarLocal_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MVAvatarLocal____c->static_fields->__9 = value;
  func_?(TypeInfo__MVAvatarLocal____c->static_fields,value);
  return;
}

