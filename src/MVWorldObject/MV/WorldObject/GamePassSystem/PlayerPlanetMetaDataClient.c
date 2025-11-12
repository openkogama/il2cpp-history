
/* Boolean DailyWelcomeRewardClaimedToday() */

bool MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
               (PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DStackX_8 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = mscorlib.dll::System::DateTime::DateTime_GetDatePart
                    (&(this->fields).lastDailyWelcomeRewardClaim,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = mscorlib.dll::System::DateTime::DateTime_GetDatePart(&DStackX_8,1,(MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    return 0;
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = mscorlib.dll::System::DateTime::DateTime_GetDatePart
                    (&(this->fields).lastDailyWelcomeRewardClaim,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = mscorlib.dll::System::DateTime::DateTime_GetDatePart(&DStackX_8,0,(MethodInfo *)0x0);
  return iVar1 == iVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
         PlayerPlanetMetaDataClient_ToString(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassTierSeen___0_u000AwelcomeRew);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8._0_1_ = (this->fields).gamePassTierSeen;
  arg0 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,&uStackX_8);
  uStackX_8 = CONCAT71(uStackX_8._1_7_,(this->fields).welcomeRewardClaimed);
  arg1 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uStackX_8 = (this->fields).lastDailyWelcomeRewardClaim._dateData;
  arg2 = (Object *)FUN_?(TypeInfo__System__DateTime,&uStackX_8);
  pSVar1 = StringLiteral_gamePassTierSeen___0_u000AwelcomeRew;
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


/* PlayerPlanetMetaDataClient() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTime);
  }
  (this->fields).lastDailyWelcomeRewardClaim._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  return;
}


/* PlayerPlanetMetaDataClient(GamePassTier, Boolean, DateTime) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor_1
               (PlayerPlanetMetaDataClient *this,GamePassTier__Enum gamePassTierSeen,
               bool welcomeRewardClaimed,DateTime lastDailyWelcomeRewardClaim,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).gamePassTierSeen = (uint8_t)gamePassTierSeen;
  (this->fields).welcomeRewardClaimed = welcomeRewardClaimed;
  (this->fields).lastDailyWelcomeRewardClaim._dateData = lastDailyWelcomeRewardClaim._dateData;
  return;
}

