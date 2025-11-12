
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator::
         GamePassProgressionDataObjectSharedValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_2,(Object *)(this->fields).XpTiersRewardsValidator,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* GamePassProgressionDataObjectShared Validate(GamePassProgressionDataObjectShared, Boolean) */

GamePassProgressionDataObjectShared *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
GamePassProgressionDataObjectSharedValidator::GamePassProgressionDataObjectSharedValidator_Validate
          (GamePassProgressionDataObjectSharedValidator *this,
          GamePassProgressionDataObjectShared *gamePassProgressionDataObjectShared,bool fixIfInValid
          ,MethodInfo *method)

{
  if (((gamePassProgressionDataObjectShared != (GamePassProgressionDataObjectShared *)0x0) &&
      (pGVar1 = (gamePassProgressionDataObjectShared->fields).xpTierRewards,
      pGVar1 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
     (this_00 = (this->fields).XpTiersRewardsValidator,
     this_00 != (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)0x0)) {
    GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
    GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_Validate
              (this_00,(pGVar1->fields).xpTierRewards,fixIfInValid,(MethodInfo *)0x0);
    return gamePassProgressionDataObjectShared;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GamePassProgressionDataObjectShared *)(*pcVar2)();
  return pGVar3;
}


/* GamePassProgressionDataObjectSharedValidator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator::
     GamePassProgressionDataObjectSharedValidator__ctor
               (GamePassProgressionDataObjectSharedValidator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                         );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).XpTiersRewardsValidator = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* GamePassProgressionDataObjectSharedValidator(GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator)
    */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator::
     GamePassProgressionDataObjectSharedValidator__ctor_1
               (GamePassProgressionDataObjectSharedValidator *this,
               GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator
               *xpTiersRewardsValidator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                         );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (this_00,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).XpTiersRewardsValidator = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).XpTiersRewardsValidator = xpTiersRewardsValidator;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* GamePassProgressionDataObjectSharedValidator(Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.AntiCheat.RangeValidator`1[System.Int32]],
   Dictionary`2[MV.Common.GamePassTier,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator::
     GamePassProgressionDataObjectSharedValidator__ctor_2
               (GamePassProgressionDataObjectSharedValidator *this,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_
               *xpRangeValidators,
               Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *xpRewardRemovalAllowed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
           FUN_?(
                        TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                        );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (pGVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).XpTiersRewardsValidator = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pGVar1 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
           FUN_?(
                        TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                        );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
            (pGVar1,xpRangeValidators,xpRewardRemovalAllowed,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).XpTiersRewardsValidator = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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

