
/* Boolean <GetPlayersInTeam>b__0(MVPlayer) */

bool Assembly-CSharp.dll::MVTeamManager+<>c__DisplayClass29_0::
     MVTeamManager_c_DisplayClass29_0__GetPlayersInTeam_b__0
               (MVTeamManager_c_DisplayClass29_0 *this,MVPlayer *player,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (player != (MVPlayer *)0x0) {
    return (player->fields)._Team_k__BackingField == (this->fields).team;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

