
/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown_Update
          (TimeReward_RewardCountdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeReward__RequestReward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_is_up);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForTicks;
  if (this_00 != (WaitForTicks *)0x0) {
    bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Time_is_up,(MethodInfo *)0x0);
      this = (TimeReward_RewardCountdown *)FUN_?(TypeInfo__TimeReward__RequestReward);
      TimeReward+RequestReward::TimeReward_RequestReward__ctor
                ((TimeReward_RequestReward *)this,(MethodInfo *)0x0);
    }
    return (TimeReward_RewardStateBase *)this;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pTVar3 = (TimeReward_RewardStateBase *)(*pcVar2)();
  return pTVar3;
}


/* TimeReward+RewardCountdown(Int32, Int32) */

void Assembly-CSharp.dll::TimeReward+RewardCountdown::TimeReward_RewardCountdown__ctor
               (TimeReward_RewardCountdown *this,int32_t timeInSeconds,int32_t amountGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RewardStateDataEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaitForTicks);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_is_started);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Time_is_started,(MethodInfo *)0x0);
  this_00 = (WaitForTicks *)FUN_?(TypeInfo__WaitForTicks);
  WaitForTicks::WaitForTicks__ctor(this_00,timeInSeconds * 1000,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).waitForTicks = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).waitForTicks >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pRVar6 = (RewardStateDataEventArgs *)FUN_?(TypeInfo__RewardStateDataEventArgs);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (0x68db8bac710ca < (longlong)timeInSeconds * 1000 + 0x346dc5d638865U) {
    uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_01 = (ArgumentOutOfRangeException *)func_?(uVar7);
    message = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_01,(String *)0x0,message,(MethodInfo *)0x0);
    uVar7 = func_?(&MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_);
    FUN_?(this_01,uVar7);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar1 = iRam_? != 0;
  (pRVar6->fields).timeSpan._ticks = (longlong)timeInSeconds * 10000000;
  (pRVar6->fields).amountGold = amountGold;
  (this->fields)._.rewardStateEventArgs = pRVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

