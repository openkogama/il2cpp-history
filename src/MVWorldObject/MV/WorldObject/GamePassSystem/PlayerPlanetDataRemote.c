
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
         PlayerPlanetDataRemote_ToString(PlayerPlanetDataRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iStack_2 = (this->fields).highScoreGamePoints;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  this = (PlayerPlanetDataRemote *)CONCAT13((pPVar1->fields).gamePassTier,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_highScoreGamePoints__0___gamePas,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* PlayerPlanetDataRemote(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
     PlayerPlanetDataRemote__ctor_1
               (PlayerPlanetDataRemote *this,int32_t highScoreGamePoints,
               GamePassTier__Enum gamePassTier,MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).highScoreGamePoints = highScoreGamePoints;
  (this->fields).gamePassTier = (undefined1)gamePassTier;
  return;
}

