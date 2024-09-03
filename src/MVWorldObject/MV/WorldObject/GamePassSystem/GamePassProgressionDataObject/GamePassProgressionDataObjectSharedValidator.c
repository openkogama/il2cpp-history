
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator::
         GamePassProgressionDataObjectSharedValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__0_,(Object *)(this->fields).XpTiersRewardsValidator,
                      (MethodInfo *)0x0);
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
  func_?();
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
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                   );
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).XpTiersRewardsValidator = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                   );
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).XpTiersRewardsValidator = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).XpTiersRewardsValidator = xpTiersRewardsValidator;
  func_?(&this->fields,xpTiersRewardsValidator);
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
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
           func_?(
                          TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                          );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
            (pGVar1,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).XpTiersRewardsValidator = pGVar1;
  func_?(method_00,pGVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pGVar1 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
           func_?(
                          TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                          );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
            (pGVar1,xpRangeValidators,xpRewardRemovalAllowed,(MethodInfo *)0x0);
  (this->fields).XpTiersRewardsValidator = pGVar1;
  func_?(&this->fields,pGVar1);
  return;
}

