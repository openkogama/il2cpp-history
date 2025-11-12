
/* Int32 <CapturePlayersInTeam>b__0(MVPlayer) */

int32_t Assembly-CSharp.dll::AvatarCapture+<>c__DisplayClass8_0::
        AvatarCapture_c_DisplayClass8_0__CapturePlayersInTeam_b__0
                  (AvatarCapture_c_DisplayClass8_0 *this,MVPlayer *o,MethodInfo *method)

{
  if (o == (MVPlayer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  bVar3 = (this->fields).counterType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,bVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar5->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
  {
    iVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_00,(uint)bVar3,(o->fields)._Team_k__BackingField,
                       (o->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
    return iVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

