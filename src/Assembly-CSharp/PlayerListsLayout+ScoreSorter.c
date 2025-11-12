
/* Int32 Compare(MVPlayer, MVPlayer) */

int32_t Assembly-CSharp.dll::PlayerListsLayout+ScoreSorter::PlayerListsLayout_ScoreSorter_Compare
                  (PlayerListsLayout_ScoreSorter *this,MVPlayer *data1,MVPlayer *data2,
                  MethodInfo *method)

{
  gameStatCounterType = (GameStatCounterType__Enum)data1;
  iVar1 = 0;
  if (data2 == (MVPlayer *)0x0) {
    iVar2 = 0;
  }
  else {
    gameStatCounterType = CONCAT31((int3)((ulonglong)data1 >> 8),1);
    iVar2 = MVPlayer::MVPlayer_GetGameStat(data2,gameStatCounterType,(MethodInfo *)0x0);
  }
  if (data1 != (MVPlayer *)0x0) {
    iVar1 = MVPlayer::MVPlayer_GetGameStat
                      (data1,CONCAT31((int3)(gameStatCounterType >> 8),1),(MethodInfo *)0x0);
  }
  return iVar2 - iVar1;
}


/* Int32 PlayerValue(MVPlayer) */

int32_t Assembly-CSharp.dll::PlayerListsLayout+ScoreSorter::
        PlayerListsLayout_ScoreSorter_PlayerValue
                  (PlayerListsLayout_ScoreSorter *this,MVPlayer *data,MethodInfo *method)

{
  if (data == (MVPlayer *)0x0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
  {
    iVar3 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_00,GameStatCounterType__Enum_Kill,(data->fields)._Team_k__BackingField,
                       (data->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}

