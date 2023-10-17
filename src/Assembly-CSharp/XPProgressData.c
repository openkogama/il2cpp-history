
/* XPProgressData(Int32, XPLevelLimits) */

void Assembly-CSharp.dll::XPProgressData::XPProgressData__ctor
               (XPProgressData *this,int32_t playerCurrentXP,XPLevelLimits *xpLevelLimits,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).playerCurrentXP = playerCurrentXP;
  (this->fields).xpLevelLimits = xpLevelLimits;
  func_?(&this->fields,xpLevelLimits);
  return;
}


/* Boolean get_XPLimitExceeded() */

bool Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XPLimitExceeded
               (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  iVar2 = (this->fields).playerCurrentXP;
  if (pXVar1 == (XPLevelLimits *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(&TypeInfo__System__Exception);
    pEVar4 = (Exception *)func_?(uVar3);
    func_?(pEVar4);
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?(&StringLiteral_currentXp__0);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
    func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    func_?(pEVar4);
  }
  else {
    iVar7 = (pXVar1->fields)._PrevXP_k__BackingField;
    if ((pXVar1->fields)._NextXP_k__BackingField <= iVar7) goto code_?;
    if (iVar7 <= iVar2) {
      if ((pXVar1->fields)._NextXP_k__BackingField <= iVar2) {
        return 1;
      }
      if (-1 < iVar2) {
        return 0;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar3);
  func_?(pEVar4);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_currentXp___prevXp);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar4);
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar3);
  func_?(pEVar4);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_prevXp___nextXp);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar4);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* String get_XPString() */

String * Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XPString
                   (XPProgressData *this,MethodInfo *method)

{
  this = (XPProgressData *)CONCAT31(this._1_3_,(this->fields).xpId);
  pSVar1 = LocalizedEnums::LocalizedEnums___2((XPRewardType__Enum)this,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int32 get_XpNextRel() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XpNextRel
                  (XPProgressData *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields).xpLevelLimits;
  if (pXVar2 != (XPLevelLimits *)0x0) {
    return (pXVar2->fields)._NextXP_k__BackingField - (pXVar2->fields)._PrevXP_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 get_XpRel() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XpRel
                  (XPProgressData *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pXVar2 = (this->fields).xpLevelLimits;
  if (pXVar2 != (XPLevelLimits *)0x0) {
    return (this->fields).playerCurrentXP - (pXVar2->fields)._PrevXP_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

