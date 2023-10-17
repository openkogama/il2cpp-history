
/* String ToString() */

String * Assembly-CSharp.dll::TimeReward+RequestRewardData+RewardData::
         TimeReward_RequestRewardData_RewardData_ToString
                   (TimeReward_RequestRewardData_RewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_rewardEnabled__0___timeInSeconds);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  this = (TimeReward_RequestRewardData_RewardData *)
         CONCAT13((this->fields).rewardEnabled,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  iStack_2 = (pTVar1->fields).timeInSeconds;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  iStack_3 = (pTVar1->fields).gold;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_rewardEnabled__0___timeInSeconds,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}

