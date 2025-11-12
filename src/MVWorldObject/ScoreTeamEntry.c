
/* String ToString() */

String * MVWorldObject.dll::ScoreTeamEntry::ScoreTeamEntry_ToString
                   (ScoreTeamEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team___0___Counter___1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).team;
  arg0 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam,aiStackX_8);
  aiStackX_8[0] = (this->fields).counter;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral_Team___0___Counter___1__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

