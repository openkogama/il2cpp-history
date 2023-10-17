
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
         PlayerPlanetDataRemote_ToString(PlayerPlanetDataRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_highScoreGamePoints__0___gamePas);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iStack_2 = (this->fields).highScoreGamePoints;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  this = (PlayerPlanetDataRemote *)CONCAT13((pPVar1->fields).gamePassTier,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,(int)&this + 3);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_highScoreGamePoints__0___gamePas,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

