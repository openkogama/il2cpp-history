
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
  if ((this->fields)._PrevXP_k__BackingField < (this->fields)._NextXP_k__BackingField) {
    if (currentXp < (this->fields)._PrevXP_k__BackingField) goto code_?;
    if ((this->fields)._NextXP_k__BackingField <= currentXp) {
      return 0;
    }
    if (-1 < currentXp) {
      return 1;
    }
  }
  else {
    uVar1 = func_?(&TypeInfo__System__Exception);
    pEVar2 = (Exception *)func_?(uVar1);
    func_?(pEVar2);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_prevXp___nextXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar4,pMVar3);
    func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    func_?(pEVar2);
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  pEVar2 = (Exception *)func_?(uVar1);
  func_?(pEVar2);
  pMVar3 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_currentXp__0);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar4,pMVar3);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar2);
code_?:
  uVar1 = func_?(&TypeInfo__System__Exception);
  pEVar2 = (Exception *)func_?(uVar1);
  func_?(pEVar2);
  pMVar3 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_currentXp___prevXp);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar4,pMVar3);
  func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  func_?(pEVar2);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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

