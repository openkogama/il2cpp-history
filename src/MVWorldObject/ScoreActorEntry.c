
/* String ToString() */

String * MVWorldObject.dll::ScoreActorEntry::ScoreActorEntry_ToString
                   (ScoreActorEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ActorNumber___0___Counter___1__);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (ScoreActorEntry *)(this->fields).actorNumber;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pSVar1->fields).counter;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_ActorNumber___0___Counter___1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

