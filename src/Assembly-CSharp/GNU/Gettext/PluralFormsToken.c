
/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsToken::PluralFormsToken_ToString
                   (PluralFormsToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken__Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Token__Type__0___Number__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).type;
  arg0 = (Object *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken__Type,aiStackX_8);
  aiStackX_8[0] = (this->fields).number;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral__Token__Type__0___Number__1__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsToken(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsToken::PluralFormsToken__ctor_1
               (PluralFormsToken *this,PluralFormsToken *src,MethodInfo *method)

{
  if (src != (PluralFormsToken *)0x0) {
    (this->fields).type = (src->fields).type;
    (this->fields).number = (src->fields).number;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

