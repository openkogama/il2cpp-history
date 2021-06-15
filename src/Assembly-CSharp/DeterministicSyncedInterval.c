
/* Int32 CalcOffset(Int32, Int32, Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_CalcOffset
                  (DeterministicSyncedInterval *this,int32_t curTime,int32_t offset,int32_t range,
                  MethodInfo *method)

{
  iVar1 = curTime % range;
  if (offset < iVar1) {
    offset = (offset - iVar1) + range;
  }
  else if (iVar1 < offset) {
    return offset - iVar1;
  }
  return offset;
}


/* Int32 GetIntWithinRange(Int32, Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::
        DeterministicSyncedInterval_GetIntWithinRange
                  (DeterministicSyncedInterval *this,int32_t seed,int32_t range,MethodInfo *method)

{
  uVar1 = (seed & 0xffffU) * 0x9069 + (seed >> 0x10);
  uVar1 = ((uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10)) * 0x10001;
  uVar2 = (int)uVar1 >> 0x1f;
  return (int)((uVar1 ^ uVar2) - uVar2) % range;
}


/* Int32 Noise(Int32) */

int32_t Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_Noise
                  (DeterministicSyncedInterval *this,int32_t seed,MethodInfo *method)

{
  uVar1 = (seed & 0xffffU) * 0x9069 + (seed >> 0x10);
  return ((uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10)) * 0x10001;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval_Update
               (DeterministicSyncedInterval *this,MethodInfo *method)

{
  iVar1 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar2 = (this->fields).nextTickThres;
  if (iVar2 <= iVar1) {
    iVar3 = (this->fields).range;
    (this->fields).nextTickThres = (iVar3 - (iVar1 - iVar2) % iVar3) + iVar1;
  }
  return iVar2 <= iVar1;
}


/* DeterministicSyncedInterval(Int32, Int32) */

void Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
               (DeterministicSyncedInterval *this,int32_t id,int32_t range,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).range = range;
  uVar1 = (id & 0xffffU) * 0x9069 + (id >> 0x10);
  iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  uVar1 = ((uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10)) * 0x10001;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar4 = (int)((uVar1 ^ uVar3) - uVar3) % range;
  iVar5 = iVar2 % range;
  if (iVar5 <= iVar4) {
    if (iVar5 < iVar4) {
      iVar4 = iVar4 - iVar5;
    }
    (this->fields).nextTickThres = iVar4 + iVar2;
    return;
  }
  (this->fields).nextTickThres = range + (iVar4 - iVar5) + iVar2;
  return;
}

