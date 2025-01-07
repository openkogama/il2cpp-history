
/* Void <RelayDamageEvent>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass131_0::
     MVAvatarLocal_c_DisplayClass131_0__RelayDamageEvent_b__0
               (MVAvatarLocal_c_DisplayClass131_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver::
    SpawnRoleDataReceiver_NotifyKilled
              (receiver,(this->fields).localPlayerActorNr,(this->fields).dmgDealerActorNr,
               (uint)(this->fields).damageType,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

