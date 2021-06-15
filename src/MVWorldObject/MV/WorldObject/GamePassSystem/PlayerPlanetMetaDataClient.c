
/* Boolean DailyWelcomeRewardClaimedToday() */

bool MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
               (PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow(&DStack_6,(MethodInfo *)0x0);
  pDVar7 = &(this->fields).lastDailyWelcomeRewardClaim;
  uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
  uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
  iStack_3 = pDVar5->kind;
  uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
  iVar8 = func_?(pDVar7,0);
  iVar9 = func_?(&uStack_1,0);
  if (iVar8 != iVar9) {
    return 0;
  }
  iVar8 = func_?(pDVar7,0);
  iVar9 = func_?(&uStack_1,0);
  return iVar8 == iVar9;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
         PlayerPlanetMetaDataClient_ToString(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PlayerPlanetMetaDataClient *)CONCAT13((this->fields).gamePassTierSeen,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,(int)&this + 3);
  bStack_2 = (pPVar1->fields).welcomeRewardClaimed;
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_2);
  uStack_3 = (undefined4)(pPVar1->fields).lastDailyWelcomeRewardClaim.ticks._ticks;
  uStack_4 = *(undefined4 *)((int)&(pPVar1->fields).lastDailyWelcomeRewardClaim.ticks._ticks + 4);
  iStack_5 = (pPVar1->fields).lastDailyWelcomeRewardClaim.kind;
  uStack_6 = *(undefined4 *)&(pPVar1->fields).lastDailyWelcomeRewardClaim.field_0xc;
  arg2 = (Object *)func_?(TypeInfo__System__DateTime,&uStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar7 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_gamePassTierSeen___0_u000AwelcomeRew,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar7;
}


/* PlayerPlanetMetaDataClient() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor(PlayerPlanetMetaDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  uVar2 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  iVar3 = (pDVar1->MinValue).kind;
  uVar4 = *(undefined4 *)&(pDVar1->MinValue).field_0xc;
  *(int *)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks =
       (int)(pDVar1->MinValue).ticks._ticks;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks + 4) = uVar2;
  (this->fields).lastDailyWelcomeRewardClaim.kind = iVar3;
  *(undefined4 *)&(this->fields).lastDailyWelcomeRewardClaim.field_0xc = uVar4;
  return;
}


/* PlayerPlanetMetaDataClient(GamePassTier, Boolean, DateTime) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
     PlayerPlanetMetaDataClient__ctor_1
               (PlayerPlanetMetaDataClient *this,GamePassTier__Enum gamePassTierSeen,
               bool welcomeRewardClaimed,DateTime lastDailyWelcomeRewardClaim,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = TypeInfo__System__DateTime->static_fields;
  uVar2 = *(undefined4 *)((int)&(pDVar1->MinValue).ticks._ticks + 4);
  iVar3 = (pDVar1->MinValue).kind;
  uVar4 = *(undefined4 *)&(pDVar1->MinValue).field_0xc;
  *(int *)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks =
       (int)(pDVar1->MinValue).ticks._ticks;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks + 4) = uVar2;
  (this->fields).lastDailyWelcomeRewardClaim.kind = iVar3;
  *(undefined4 *)&(this->fields).lastDailyWelcomeRewardClaim.field_0xc = uVar4;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).gamePassTierSeen = (undefined1)gamePassTierSeen;
  (this->fields).welcomeRewardClaimed = welcomeRewardClaimed;
  *(undefined4 *)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks = in_stack_5;
  *(undefined4 *)((int)&(this->fields).lastDailyWelcomeRewardClaim.ticks._ticks + 4) =
       (undefined4)lastDailyWelcomeRewardClaim.ticks._ticks;
  (this->fields).lastDailyWelcomeRewardClaim.kind = lastDailyWelcomeRewardClaim.ticks._ticks._4_4_;
  *(int32_t *)&(this->fields).lastDailyWelcomeRewardClaim.field_0xc =
       lastDailyWelcomeRewardClaim.kind;
  return;
}

