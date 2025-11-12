
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
         PlayerPlanetDataRemote_ToString(PlayerPlanetDataRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_highScoreGamePoints__0___gamePas);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).highScoreGamePoints;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).gamePassTier);
  arg1 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,aiStackX_8);
  pSVar1 = StringLiteral_highScoreGamePoints__0___gamePas;
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


/* PlayerPlanetDataRemote(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
     PlayerPlanetDataRemote__ctor_1
               (PlayerPlanetDataRemote *this,int32_t highScoreGamePoints,
               GamePassTier__Enum gamePassTier,MethodInfo *method)

{
  (this->fields).highScoreGamePoints = highScoreGamePoints;
  (this->fields).gamePassTier = (uint8_t)gamePassTier;
  return;
}

