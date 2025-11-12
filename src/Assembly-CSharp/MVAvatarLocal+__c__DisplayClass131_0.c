
/* Void <RelayDamageEvent>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass131_0::
     MVAvatarLocal_c_DisplayClass131_0__RelayDamageEvent_b__0
               (MVAvatarLocal_c_DisplayClass131_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    if ((receiver->fields).OnKilled != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
      pAVar1 = (receiver->fields).OnKilled;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(this->fields).localPlayerActorNr,
                 (this->fields).dmgDealerActorNr,(this->fields).damageType,
                 (pAVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

