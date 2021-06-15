
/* XPProgressData(Int32, XPLevelLimits) */

void Assembly-CSharp.dll::XPProgressData::XPProgressData__ctor
               (XPProgressData *this,int32_t playerCurrentXP,XPLevelLimits *xpLevelLimits,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).playerCurrentXP = playerCurrentXP;
  (this->fields).xpLevelLimits = xpLevelLimits;
  return;
}


/* Int32 get_Level() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_Level
                  (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (pXVar1->fields)._Level_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_NextXP() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_NextXP
                  (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (pXVar1->fields)._NextXP_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_PrevXP() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_PrevXP
                  (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (pXVar1->fields)._PrevXP_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_XPLimitExceeded() */

bool Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XPLimitExceeded
               (XPProgressData *this,MethodInfo *method)

{
  this_00 = (this->fields).xpLevelLimits;
  if (this_00 != (XPLevelLimits *)0x0) {
    bVar1 = XPLevelLimits::XPLevelLimits_Validate
                      (this_00,(this->fields).playerCurrentXP,(MethodInfo *)0x0);
    return bVar1 == 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
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
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (pXVar1->fields)._NextXP_k__BackingField - (pXVar1->fields)._PrevXP_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_XpRel() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XpRel
                  (XPProgressData *this,MethodInfo *method)

{
  this_00 = (this->fields).xpLevelLimits;
  if (this_00 != (XPLevelLimits *)0x0) {
    iVar1 = XPLevelLimits::XPLevelLimits_XpRel
                      (this_00,(this->fields).playerCurrentXP,(MethodInfo *)0x0);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}

