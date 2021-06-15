
/* String ToString() */

String * Assembly-CSharp.dll::TimedPlayReward+RewardData::TimedPlayReward_RewardData_ToString
                   (TimedPlayReward_RewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  this = (TimedPlayReward_RewardData *)CONCAT13((this->fields).rewardEnabled,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  iStack_2 = (pTVar1->fields).timeInSeconds;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_rewardEnabled__0___timeInSeconds,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

