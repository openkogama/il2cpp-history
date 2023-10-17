
/* RewardStateDataEventArgs get_RewardStateEventArgs() */

RewardStateDataEventArgs *
Assembly-CSharp.dll::TimeReward+RewardStateBase::TimeReward_RewardStateBase_get_RewardStateEventArgs
          (TimeReward_RewardStateBase *this,MethodInfo *method)

{
  pRVar1 = (this->fields).rewardStateEventArgs;
  (this->fields).rewardStateEventArgs = (RewardStateDataEventArgs *)0x0;
  func_?(&this->fields,0);
  return pRVar1;
}

