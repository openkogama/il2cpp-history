
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator
         ::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
                    *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
          *)CONCAT13((this->fields).isRemovalAllowed,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  arg1 = (pGVar1->fields).rangeValidator;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_isRemovalAllowed__0___xpRewardRa,arg0,(Object *)arg1,
                      (MethodInfo *)0x0);
  return pSVar2;
}


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
        GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator::
        GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_Validate
                  (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
                   *this,int32_t xpTierReward,bool fixIfInValid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (xpTierReward == 0) {
    if ((this->fields).isRemovalAllowed != 0) {
      return 0;
    }
    if (fixIfInValid == 0) goto code_?;
    pRVar1 = (this->fields).rangeValidator;
    if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
      xpTierReward = (pRVar1->fields).min;
      goto code_?;
    }
  }
  else {
code_?:
    pRVar1 = (this->fields).rangeValidator;
    if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
      iVar2 = AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                        (pRVar1,xpTierReward,fixIfInValid,
                         MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                        );
      return iVar2;
    }
  }
  func_?(0);
code_?:
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Reward_removal_is_illegal,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}

