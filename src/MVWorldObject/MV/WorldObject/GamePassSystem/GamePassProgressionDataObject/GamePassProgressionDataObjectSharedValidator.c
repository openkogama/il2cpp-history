
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator::
         GamePassProgressionDataObjectSharedValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields).XpTiersRewardsValidator;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__0_,(Object *)arg0,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  (this->fields).XpTiersRewardsValidator =
       (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)this_00;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  (this->fields).XpTiersRewardsValidator =
       (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).XpTiersRewardsValidator = xpTiersRewardsValidator;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  (this->fields).XpTiersRewardsValidator =
       (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  this_02 = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator
                           );
  GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
  GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
            (this_02,xpRangeValidators,xpRewardRemovalAllowed,(MethodInfo *)0x0);
  (this->fields).XpTiersRewardsValidator = this_02;
  return;
}

