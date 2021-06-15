
/* Void set_Value(SpawnRoleModeType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType__set_Value
               (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *this,
               SpawnRoleModeType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleDataReceiver;
  if (this_00 != (SpawnRoleDataReceiver *)0x0) {
    bVar1 = Mediator::SpawnRoleDataReceiver::SpawnRoleDataReceiver_get_IsActive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    if ((this->fields).subscribableVariable !=
        (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c))();
      return;
    }
  }
  func_?();
code_?:
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_SpawnRole_receiver_not_active__P,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

