
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator
         ::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
                    *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&StringLiteral_isRemovalAllowed__0___xpRewardRa);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
          *)CONCAT13((this->fields).isRemovalAllowed,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_isRemovalAllowed__0___xpRewardRa,arg0,
                      (Object *)(pGVar1->fields).rangeValidator,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                   );
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
      pRVar1 = (this->fields).rangeValidator;
      goto code_?;
    }
  }
  else {
    pRVar1 = (this->fields).rangeValidator;
    if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
code_?:
      iVar2 = AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                        (pRVar1,xpTierReward,fixIfInValid,
                         MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                        );
      return iVar2;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Reward_removal_is_illegal);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  uVar3 = func_?(&
                          MethodInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator__Validate_int__bool_
                         );
  func_?(this_00,uVar3);
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}

