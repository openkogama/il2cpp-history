
/* Boolean DailyWelcomeRewardClaimedToday() */

bool MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
               (PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  puStack_2 = (undefined *)DVar1._dateData;
  iVar3 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                    (&(this->fields).lastDailyWelcomeRewardClaim,(MethodInfo *)0x0);
  iVar4 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                    ((DateTime *)&puStack_2,(MethodInfo *)0x0);
  if (iVar3 != iVar4) {
    return 0;
  }
  iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Year
                    (&(this->fields).lastDailyWelcomeRewardClaim,(MethodInfo *)0x0);
  iVar4 = mscorlib.dll::System::DateTime::DateTime_get_Year
                    ((DateTime *)&puStack_2,(MethodInfo *)0x0);
  return iVar3 == iVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
         PlayerPlanetMetaDataClient_ToString(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&StringLiteral_gamePassTierSeen___0_u000AwelcomeRew);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PlayerPlanetMetaDataClient *)CONCAT13((this->fields).gamePassTierSeen,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,(int)&this + 3);
  bStack_2 = (pPVar1->fields).welcomeRewardClaimed;
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_2);
  uStack_3 = (undefined4)(pPVar1->fields).lastDailyWelcomeRewardClaim._dateData;
  uStack_4 = *(undefined4 *)((int)&(pPVar1->fields).lastDailyWelcomeRewardClaim._dateData + 4);
  arg2 = (Object *)func_?(TypeInfo__System__DateTime,&uStack_3);
  pSVar5 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_gamePassTierSeen___0_u000AwelcomeRew,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar5;
}


/* PlayerPlanetMetaDataClient() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4)
  ;
  *(int *)&(this->fields).lastDailyWelcomeRewardClaim._dateData =
       (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim._dateData + 4) = uVar1;
  return;
}


/* PlayerPlanetMetaDataClient(GamePassTier, Boolean, DateTime) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor_1
               (PlayerPlanetMetaDataClient *this,GamePassTier__Enum gamePassTierSeen,
               bool welcomeRewardClaimed,DateTime lastDailyWelcomeRewardClaim,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4)
  ;
  *(int *)&(this->fields).lastDailyWelcomeRewardClaim._dateData =
       (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim._dateData + 4) = uVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).gamePassTierSeen = (undefined1)gamePassTierSeen;
  (this->fields).welcomeRewardClaimed = welcomeRewardClaimed;
  *(undefined4 *)&(this->fields).lastDailyWelcomeRewardClaim._dateData = in_stack_2;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim._dateData + 4) =
       (undefined4)lastDailyWelcomeRewardClaim._dateData;
  return;
}

