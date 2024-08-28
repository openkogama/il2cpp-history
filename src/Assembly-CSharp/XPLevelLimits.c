
/* String ToString() */

String * Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_ToString
                   (XPLevelLimits *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Level__0___PrevXP__1___NextXP__2);
    cRam_? = '\x01';
  }
  pXVar1 = this;
  this = (XPLevelLimits *)(this->fields)._Level_k__BackingField;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pXVar1->fields)._PrevXP_k__BackingField;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  iStack_3 = (pXVar1->fields)._NextXP_k__BackingField;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Level__0___PrevXP__1___NextXP__2,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}


/* Boolean Validate(Int32) */

bool Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_Validate
               (XPLevelLimits *this,int32_t currentXp,MethodInfo *method)

{
  iVar1 = (this->fields)._PrevXP_k__BackingField;
  iVar2 = (this->fields)._NextXP_k__BackingField;
  if (iVar1 < iVar2) {
    if (currentXp < iVar1) goto code_?;
    if (iVar2 <= currentXp) {
      return 0;
    }
    if (-1 < currentXp) {
      return 1;
    }
  }
  else {
    uVar3 = func_?(&TypeInfo__System__Exception);
    pEVar4 = (Exception *)func_?(uVar3);
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?(&StringLiteral_prevXp___nextXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
    func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    func_?(pEVar4);
  }
  uVar3 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar3);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_currentXp__0);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar4);
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar3);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_currentXp___prevXp);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar6,pMVar5);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar4);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Int32 XpRel(Int32) */

int32_t Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_XpRel
                  (XPLevelLimits *this,int32_t currentXp,MethodInfo *method)

{
  return currentXp - (this->fields)._PrevXP_k__BackingField;
}


/* Int32 get_XPNextRel() */

int32_t Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_get_XPNextRel
                  (XPLevelLimits *this,MethodInfo *method)

{
  return (this->fields)._NextXP_k__BackingField - (this->fields)._PrevXP_k__BackingField;
}

