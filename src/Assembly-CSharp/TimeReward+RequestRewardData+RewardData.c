
/* String ToString() */

String * Assembly-CSharp.dll::TimeReward+RequestRewardData+RewardData::
         TimeReward_RequestRewardData_RewardData_ToString
                   (TimeReward_RequestRewardData_RewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_rewardEnabled__0___timeInSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).rewardEnabled);
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields).timeInSeconds;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields).gold;
  arg2 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral_rewardEnabled__0___timeInSeconds;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

