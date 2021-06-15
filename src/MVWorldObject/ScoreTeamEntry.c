
/* String ToString() */

String * MVWorldObject.dll::ScoreTeamEntry::ScoreTeamEntry_ToString
                   (ScoreTeamEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (ScoreTeamEntry *)(this->fields).team;
  arg0 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&this);
  iStack_2 = (pSVar1->fields).counter;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Team___0___Counter___1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

