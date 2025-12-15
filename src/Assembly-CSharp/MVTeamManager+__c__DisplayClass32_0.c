
/* Boolean <GetNoOfPlayersInTeamWithoutLocalPlayer>g__predicate|0(MVPlayer) */

bool Assembly-CSharp.dll::MVTeamManager+<>c__DisplayClass32_0::
     MVTeamManager_c_DisplayClass32_0__GetNoOfPlayersInTeamWithoutLocalPlayer_g__predicate_0
               (MVTeamManager_c_DisplayClass32_0 *this,MVPlayer *player,MethodInfo *method)

{
  if (player != (MVPlayer *)0x0) {
    if ((player->fields)._Team_k__BackingField != (this->fields).team) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      return (MVLocalPlayer *)player != pMVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

