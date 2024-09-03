
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
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  uVar1 = (seed & 0xffffU) * 0x9069 + (seed >> 0x10);
  uVar1 = ((uVar1 & 0xffff) * 18000 + ((int)uVar1 >> 0x10)) * 0x10001;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
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
  bVar2 = (this->fields).nextTickThres <= iVar1;
  if (bVar2) {
    (this->fields).nextTickThres =
         ((this->fields).range - (iVar1 - (this->fields).nextTickThres) % (this->fields).range) +
         iVar1;
  }
  return bVar2;
}


/* DeterministicSyncedInterval(Int32, Int32) */

void Assembly-CSharp.dll::DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
               (DeterministicSyncedInterval *this,int32_t id,int32_t range,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  bVar1 = cRam_? == '\0';
  (this->fields).range = range;
  if (bVar1) {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  uVar2 = (id & 0xffffU) * 0x9069 + (id >> 0x10);
  uVar2 = ((uVar2 & 0xffff) * 18000 + ((int)uVar2 >> 0x10)) * 0x10001;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  iVar3 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  uVar4 = (int)uVar2 >> 0x1f;
  iVar5 = (int)((uVar2 ^ uVar4) - uVar4) % range;
  iVar6 = iVar3 % range;
  if (iVar6 <= iVar5) {
    if (iVar6 < iVar5) {
      iVar5 = iVar5 - iVar6;
    }
    (this->fields).nextTickThres = iVar5 + iVar3;
    return;
  }
  (this->fields).nextTickThres = range + (iVar5 - iVar6) + iVar3;
  return;
}

