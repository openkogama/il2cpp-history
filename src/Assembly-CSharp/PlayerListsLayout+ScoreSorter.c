
/* Int32 Compare(MVPlayer, MVPlayer) */

int32_t Assembly-CSharp.dll::PlayerListsLayout+ScoreSorter::PlayerListsLayout_ScoreSorter_Compare
                  (PlayerListsLayout_ScoreSorter *this,MVPlayer *data1,MVPlayer *data2,
                  MethodInfo *method)

{
  if (data2 == (MVPlayer *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = MVPlayer::MVPlayer_GetGameStat(data2,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
  }
  if (data1 != (MVPlayer *)0x0) {
    iVar2 = MVPlayer::MVPlayer_GetGameStat(data1,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
    return iVar1 - iVar2;
  }
  return iVar1;
}


/* Int32 PlayerValue(MVPlayer) */

int32_t Assembly-CSharp.dll::PlayerListsLayout+ScoreSorter::
        PlayerListsLayout_ScoreSorter_PlayerValue
                  (PlayerListsLayout_ScoreSorter *this,MVPlayer *data,MethodInfo *method)

{
  if (data == (MVPlayer *)0x0) {
    return 0;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).gameStatCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      iVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_00,GameStatCounterType__Enum_Kill,(data->fields)._Team_k__BackingField
                         ,(data->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
      return iVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}

