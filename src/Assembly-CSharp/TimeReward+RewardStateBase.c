
/* RewardStateDataEventArgs get_RewardStateEventArgs() */

RewardStateDataEventArgs *
Assembly-CSharp.dll::TimeReward+RewardStateBase::TimeReward_RewardStateBase_get_RewardStateEventArgs
          (TimeReward_RewardStateBase *this,MethodInfo *method)

{
  pTVar1 = &this->fields;
  pRVar2 = pTVar1->rewardStateEventArgs;
  pTVar1->rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
  func_?(pTVar1,0);
  return pRVar2;
}

