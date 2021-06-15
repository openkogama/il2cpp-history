
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameStatCounterManager *)0x0) {
      iVar1 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_01,GameStatCounterType__Enum_Kill,(data->fields).team,
                         (data->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}

