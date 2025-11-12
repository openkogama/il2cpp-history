
/* Int32 CalcOffset(Int32, Int32, Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_CalcOffset
                  (DeterministicSyncedInterval *this,int32_t curTime,int32_t offset,int32_t range,
                  MethodInfo *method)

{
  iVar1 = curTime % range;
  if (iVar1 <= offset) {
    iVar2 = offset - iVar1;
    if (offset <= iVar1) {
      iVar2 = offset;
    }
    return iVar2;
  }
  return (offset - iVar1) + range;
}


/* Int32 GetIntWithinRange(Int32, Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::
        DeterministicSyncedInterval_GetIntWithinRange
                  (DeterministicSyncedInterval *this,int32_t seed,int32_t range,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (seed & 0xffffU) * 0x9069 + (seed >> 0x10);
  iVar2 = (uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10);
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = iVar2 * -0x10001;
  if (iVar3 < 0) {
    iVar3 = iVar2 * 0x10001;
  }
  return iVar3 % range;
}


/* Int32 Noise(Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_Noise
                  (DeterministicSyncedInterval *this,int32_t seed,MethodInfo *method)

{
  uVar1 = (seed >> 0x10) + (seed & 0xffffU) * 0x9069;
  return ((uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10)) * 0x10001;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_Update
               (DeterministicSyncedInterval *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    bVar3 = (this->fields).nextTickThres <= iVar2;
    if (bVar3) {
      (this->fields).nextTickThres =
           ((this->fields).range - (iVar2 - (this->fields).nextTickThres) % (this->fields).range) +
           iVar2;
    }
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* DeterministicSyncedInterval(Int32, Int32) */

void Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
               (DeterministicSyncedInterval *this,int32_t id,int32_t range,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).range = range;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = (id & 0xffffU) * 0x9069 + (id >> 0x10);
  iVar3 = (uVar2 & 0xffff) * 18000 + ((int)uVar2 >> 0x10);
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = iVar3 * -0x10001;
  if (iVar4 < 0) {
    iVar4 = iVar3 * 0x10001;
  }
  iVar4 = iVar4 % range;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar5 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar5->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    iVar3 = iVar6 % range;
    if (iVar4 < iVar3) {
      iVar4 = (iVar4 - iVar3) + range;
    }
    else if (iVar3 < iVar4) {
      iVar4 = iVar4 - iVar3;
    }
    (this->fields).nextTickThres = iVar4 + iVar6;
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

