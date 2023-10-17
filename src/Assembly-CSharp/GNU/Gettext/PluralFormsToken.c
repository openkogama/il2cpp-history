
/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsToken::PluralFormsToken_ToString
                   (PluralFormsToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken__Type);
    func_?(&StringLiteral__Token__Type__0___Number__1__);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PluralFormsToken *)(this->fields).type;
  arg0 = (Object *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken__Type,&this);
  iStack_2 = (pPVar1->fields).number;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__Token__Type__0___Number__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* PluralFormsToken(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsToken::PluralFormsToken__ctor_1
               (PluralFormsToken *this,PluralFormsToken *src,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if (src != (PluralFormsToken *)0x0) {
    (this->fields).type = (src->fields).type;
    (this->fields).number = (src->fields).number;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

