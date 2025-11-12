
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator
         ::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
                    *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_isRemovalAllowed__0___xpRewardRa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  abStackX_8[0] = (this->fields).isRemovalAllowed;
  arg0 = (Object *)FUN_?(uRam_?,abStackX_8);
  pSVar1 = StringLiteral_isRemovalAllowed__0___xpRewardRa;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,arg0,(Object *)(this->fields).rangeValidator,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
        GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator::
        GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_Validate
                  (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator
                   *this,int32_t xpTierReward,bool fixIfInValid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
  if (xpTierReward == 0) {
    if ((this->fields).isRemovalAllowed != 0) {
      return 0;
    }
    if (fixIfInValid == 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_Reward_removal_is_illegal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&
                                  MethodInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator__Validate_int__bool_
                                 );
      FUN_?(pEVar3,uVar2);
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
    pRVar7 = (this->fields).rangeValidator;
    if (pRVar7 == (RangeValidator_1_System_Int32_ *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
    xpTierReward = (pRVar7->fields).min;
    pRVar7 = (this->fields).rangeValidator;
  }
  else {
    pRVar7 = (this->fields).rangeValidator;
    if (pRVar7 == (RangeValidator_1_System_Int32_ *)0x0) goto code_?;
  }
  if (xpTierReward < (pRVar7->fields).min) {
    if (fixIfInValid == 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      FUN_?(pEVar3,pMVar1);
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
    xpTierReward = (pRVar7->fields).min;
  }
  else {
    iVar8 = (pRVar7->fields).max;
    if (iVar8 < xpTierReward) {
      if (fixIfInValid != 0) {
        return iVar8;
      }
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      FUN_?(pEVar3,pMVar1);
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
  }
  return xpTierReward;
}

