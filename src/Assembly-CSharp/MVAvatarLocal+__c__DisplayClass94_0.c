
/* Void <OnSeatedChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass94_0::
     MVAvatarLocal_c_DisplayClass94_0__OnSeatedChanged_b__0
               (MVAvatarLocal_c_DisplayClass94_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((receiver != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (receiver->fields).isSeated,
     this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::ByteEnum]::
    SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)this_00,(uint)(this->fields).isSeated
               ,
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

