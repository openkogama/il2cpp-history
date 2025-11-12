
/* RewardStateDataEventArgs get_RewardStateEventArgs() */

RewardStateDataEventArgs *
Assembly-CSharp.dll::TimeReward+RewardStateBase::TimeReward_RewardStateBase_get_RewardStateEventArgs
          (TimeReward_RewardStateBase *this,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  pRVar2 = (this->fields).rewardStateEventArgs;
  (this->fields).rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pRVar2;
}

