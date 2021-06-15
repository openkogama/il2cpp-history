
/* String ToString() */

String * Assembly-CSharp.dll::TimeReward+RequestRewardData+RewardData::
         TimeReward_RequestRewardData_RewardData_ToString
                   (TimeReward_RequestRewardData_RewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_rewardEnabled__0___timeInSeconds,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}

