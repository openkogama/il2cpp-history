
/* GamePassTier GetGamePassTierWithPreview() */

GamePassTier__Enum
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
PlayerPlanetData_GetGamePassTierWithPreview(PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).gamePassTier;
  val2 = (this->fields).previewGamePassTier;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uVar1 = mscorlib.dll::System::Math::Math_Max(uVar1,val2,(MethodInfo *)0x0);
  return CONCAT31(extraout_var,uVar1);
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
         PlayerPlanetData_ToString(PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral_rank__0___highScoreGamePoints__1);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,7);
  iStack_1 = (this->fields).rank;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    iStack_5 = (this->fields).highScoreGamePoints;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    func_?(args->vector + 1,pOVar2);
    iStack_6 = (this->fields).progressionGamePoints;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    uStack_7 = (this->fields).gamePassTier;
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&uStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    func_?(args->vector + 3,pOVar2);
    uStack_8 = (this->fields).previewGamePassTier;
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&uStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    func_?(args->vector + 4,pOVar2);
    uStack_9 = (undefined4)(this->fields).playtime._ticks;
    uStack_10 = *(undefined4 *)((int)&(this->fields).playtime._ticks + 4);
    pOVar2 = (Object *)func_?(TypeInfo__System__TimeSpan,&uStack_9);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar2;
    func_?(args->vector + 5,pOVar2);
    pPVar11 = (this->fields).playerPlanetMetaData;
    if (pPVar11 != (PlayerPlanetMetaDataClient *)0x0) {
      iVar4 = func_?(pPVar11,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (6 < args->max_length) {
      args->vector[6] = (Object *)pPVar11;
      func_?(args->vector + 6,pPVar11);
      pSVar12 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_rank__0___highScoreGamePoints__1,args,(MethodInfo *)0x0);
      return pSVar12;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pSVar12 = (String *)(*pcVar13)();
  return pSVar12;
}


/* Void UpdateWithPurchase(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
     PlayerPlanetData_UpdateWithPurchase
               (PlayerPlanetData *this,int32_t deltaGamePoints,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  (this->fields).progressionGamePoints = (this->fields).progressionGamePoints + deltaGamePoints;
  (this->fields).gamePassTier = (undefined1)gamePassTier;
  return;
}


/* PlayerPlanetData() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::PlayerPlanetData__ctor
               (PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks + 4);
  *(int *)&(this->fields).playtime._ticks =
       (int)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = uVar1;
  this_00 = (PlayerPlanetMetaDataClient *)
            func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
  PlayerPlanetMetaDataClient::PlayerPlanetMetaDataClient__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).playerPlanetMetaData;
  (this->fields).playerPlanetMetaData = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* PlayerPlanetData(Int32, Int32, TimeSpan, GamePassTier, GamePassTier, Int32,
   PlayerPlanetMetaDataClient) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::PlayerPlanetData__ctor_1
               (PlayerPlanetData *this,int32_t highScoreGamePoints,int32_t progressionGamePoints,
               TimeSpan playtime,GamePassTier__Enum gamePassTier,
               GamePassTier__Enum previewGamePassTier,int32_t rank,
               PlayerPlanetMetaDataClient *playerPlanetMetaData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks + 4);
  *(int *)&(this->fields).playtime._ticks =
       (int)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = uVar1;
  pPVar2 = (PlayerPlanetMetaDataClient *)
           func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
  PlayerPlanetMetaDataClient::PlayerPlanetMetaDataClient__ctor(pPVar2,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).playerPlanetMetaData;
  (this->fields).playerPlanetMetaData = pPVar2;
  func_?(method_00,pPVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).highScoreGamePoints = highScoreGamePoints;
  (this->fields).rank = previewGamePassTier;
  (this->fields).progressionGamePoints = progressionGamePoints;
  (this->fields).gamePassTier = playtime._ticks._4_1_;
  (this->fields).previewGamePassTier = (undefined1)gamePassTier;
  *(undefined4 *)&(this->fields).playtime._ticks = in_stack_3;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = (undefined4)playtime._ticks;
  if (rank != 0) {
    gamePassTier = CONCAT31(gamePassTier._1_3_,*(undefined1 *)(rank + 8));
    welcomeRewardClaimed = *(bool *)(rank + 9);
    uVar4 = *(uint *)(rank + 0x14);
    method_01 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient;
    pPVar2 = (PlayerPlanetMetaDataClient *)func_?();
    lastDailyWelcomeRewardClaim._dateData._4_4_ = 0;
    lastDailyWelcomeRewardClaim._dateData._0_4_ = uVar4;
    PlayerPlanetMetaDataClient::PlayerPlanetMetaDataClient__ctor_1
              (pPVar2,gamePassTier,welcomeRewardClaimed,lastDailyWelcomeRewardClaim,
               (MethodInfo *)method_01);
    (this->fields).playerPlanetMetaData = pPVar2;
    func_?(&(this->fields).playerPlanetMetaData,pPVar2);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

