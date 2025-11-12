
/* String ToString() */

String * Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_ToString
                   (XPLevelLimits *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Level__0___PrevXP__1___NextXP__2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields)._Level_k__BackingField;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields)._PrevXP_k__BackingField;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields)._NextXP_k__BackingField;
  arg2 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral_Level__0___PrevXP__1___NextXP__2;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean Validate(Int32) */

bool Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_Validate
               (XPLevelLimits *this,int32_t currentXp,MethodInfo *method)

{
  iVar1 = (this->fields)._NextXP_k__BackingField;
  if (iVar1 <= (this->fields)._PrevXP_k__BackingField) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar3 = (Exception *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_prevXp____nextXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    FUN_?(pEVar3,uVar2);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (currentXp < (this->fields)._PrevXP_k__BackingField) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar3 = (Exception *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_currentXp___prevXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    FUN_?(pEVar3,uVar2);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (iVar1 <= currentXp) {
    return 0;
  }
  if (-1 < currentXp) {
    return 1;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar2);
  pSVar4 = (String *)func_?(&StringLiteral_currentXp___0);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
  FUN_?(pEVar3,uVar2);
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

