
/* Boolean <GetPlayersInTeam>b__0(MVPlayer) */

bool Assembly-CSharp.dll::MVTeamManager+<>c__DisplayClass29_0::
     MVTeamManager_c_DisplayClass29_0__GetPlayersInTeam_b__0
               (MVTeamManager_c_DisplayClass29_0 *this,MVPlayer *player,MethodInfo *method)

{
  if (player != (MVPlayer *)0x0) {
    return (player->fields)._Team_k__BackingField == (this->fields).team;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

