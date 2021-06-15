
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GoldRewardedForLevelData::
         GoldRewardedForLevelData_ToString(GoldRewardedForLevelData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this = (GoldRewardedForLevelData *)(this->fields).level;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pGVar1->fields).goldReward;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Level__0___GoldReward__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

