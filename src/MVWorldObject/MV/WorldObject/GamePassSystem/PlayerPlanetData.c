
/* GamePassTier GetGamePassTierWithPreview() */

GamePassTier__Enum
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
PlayerPlanetData_GetGamePassTierWithPreview(PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).gamePassTier;
  bVar2 = (this->fields).previewGamePassTier;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (bVar1 < bVar2) {
    bVar1 = bVar2;
  }
  return (uint)bVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
         PlayerPlanetData_ToString(PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rank__0___highScoreGamePoints__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,7);
  iStackX_8 = CONCAT44(iStackX_8._4_4_,(this->fields).rank);
  lVar1 = FUN_?(uRam_?,&iStackX_8);
  if (args != (Object__Array *)0x0) {
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,0,lVar1);
    iStackX_8 = CONCAT44(iStackX_8._4_4_,(this->fields).highScoreGamePoints);
    lVar1 = FUN_?(uRam_?,&iStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,1,lVar1);
    iStackX_8 = CONCAT44(iStackX_8._4_4_,(this->fields).progressionGamePoints);
    lVar1 = FUN_?(uRam_?,&iStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,2,lVar1);
    iStackX_8 = CONCAT71(iStackX_8._1_7_,(this->fields).gamePassTier);
    lVar1 = FUN_?(TypeInfo__MV__Common__GamePassTier,&iStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,3,lVar1);
    iStackX_8 = CONCAT71(iStackX_8._1_7_,(this->fields).previewGamePassTier);
    lVar1 = FUN_?(TypeInfo__MV__Common__GamePassTier,&iStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,4,lVar1);
    iStackX_8 = (this->fields).playtime._ticks;
    lVar1 = FUN_?(TypeInfo__System__TimeSpan,&iStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,5,lVar1);
    pPVar6 = (this->fields).playerPlanetMetaData;
    if (pPVar6 != (PlayerPlanetMetaDataClient *)0x0) {
      lVar1 = FUN_?(pPVar6,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,6);
    pSVar5 = StringLiteral_rank__0___highScoreGamePoints__1;
    PStack_7._arg0 = (Object *)0x0;
    PStack_7._arg1 = (Object *)0x0;
    PStack_7._arg2 = (Object *)0x0;
    PStack_7._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_7,args,(MethodInfo *)0x0);
    PStack_8._arg0 = PStack_7._arg0;
    PStack_8._arg1 = PStack_7._arg1;
    PStack_8._arg2 = PStack_7._arg2;
    PStack_8._args = PStack_7._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar5,&PStack_8,(MethodInfo *)0x0);
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Void UpdateWithPurchase(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
     PlayerPlanetData_UpdateWithPurchase
               (PlayerPlanetData *this,int32_t deltaGamePoints,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  piVar1 = &(this->fields).progressionGamePoints;
  *piVar1 = *piVar1 + deltaGamePoints;
  (this->fields).gamePassTier = (uint8_t)gamePassTier;
  return;
}


/* PlayerPlanetData() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::PlayerPlanetData__ctor
               (PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  (this->fields).playtime._ticks = (TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  pPVar1 = (PlayerPlanetMetaDataClient *)
           FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTime);
  }
  bVar2 = iRam_? != 0;
  (pPVar1->fields).lastDailyWelcomeRewardClaim._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  (this->fields).playerPlanetMetaData = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).playerPlanetMetaData >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
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
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  (this->fields).playtime._ticks = (TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  pPVar1 = (PlayerPlanetMetaDataClient *)
           FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTime);
  }
  bVar2 = iRam_? != 0;
  (pPVar1->fields).lastDailyWelcomeRewardClaim._dateData =
       (TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  (this->fields).playerPlanetMetaData = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).playerPlanetMetaData >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).rank = rank;
  (this->fields).playtime._ticks = playtime._ticks;
  (this->fields).gamePassTier = (undefined1)gamePassTier;
  (this->fields).previewGamePassTier = (undefined1)previewGamePassTier;
  (this->fields).highScoreGamePoints = highScoreGamePoints;
  (this->fields).progressionGamePoints = progressionGamePoints;
  if (playerPlanetMetaData == (PlayerPlanetMetaDataClient *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar8 = (playerPlanetMetaData->fields).gamePassTierSeen;
  bVar9 = (playerPlanetMetaData->fields).welcomeRewardClaimed;
  uVar10 = (playerPlanetMetaData->fields).lastDailyWelcomeRewardClaim._dateData;
  pPVar1 = (PlayerPlanetMetaDataClient *)
           FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = iRam_? != 0;
  (pPVar1->fields).gamePassTierSeen = uVar8;
  (pPVar1->fields).welcomeRewardClaimed = bVar9;
  (pPVar1->fields).lastDailyWelcomeRewardClaim._dateData = uVar10;
  (this->fields).playerPlanetMetaData = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).playerPlanetMetaData >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

