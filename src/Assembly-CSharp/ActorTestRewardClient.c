
/* String ToString() */

String * Assembly-CSharp.dll::ActorTestRewardClient::ActorTestRewardClient_ToString
                   (ActorTestRewardClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  iStack_2 = (this->fields)._RewardType_k__BackingField;
  arg0 = (Object *)func_?(TypeInfo__MV__Common__RewardType,&iStack_2);
  this = (ActorTestRewardClient *)
         CONCAT13((pAVar1->fields)._RewardRarity_k__BackingField,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__RewardRarity,(int)&this + 3);
  iStack_3 = (pAVar1->fields).xpAmount;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_RewardType__0___RewardRarity__1_,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}

