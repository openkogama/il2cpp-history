
/* Dsn(String) */

void Assembly-CSharp.dll::Sentry::Dsn::Dsn__ctor(Dsn *this,String *dsn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UriBuilder);
    func_?(&TypeInfo__System__Uri);
    func_?(&StringLiteral__0__api__1__store_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  bVar1 = mscorlib.dll::System::String::String_op_Equality(dsn,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pUVar2 = (Uri *)func_?();
    System.dll::System::Uri::Uri__ctor(pUVar2,dsn,(MethodInfo *)0x0);
    (this->fields)._uri = pUVar2;
    func_?(&this->fields,pUVar2);
    pUVar2 = (this->fields)._uri;
    if (pUVar2 == (Uri *)0x0) goto code_?;
    pSVar3 = System.dll::System::Uri::Uri_get_UserInfo(pUVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    pUVar2 = (this->fields)._uri;
    if (pUVar2 == (Uri *)0x0) goto code_?;
    pSVar3 = System.dll::System::Uri::Uri_get_UserInfo(pUVar2,(MethodInfo *)0x0);
    if (pSVar3 == (String *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_Split
                       (pSVar3,0x3a,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    if (pSVar4->max_length != 0) {
      (this->fields).publicKey = pSVar4->vector[0];
      func_?();
      bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((this->fields).publicKey,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
      (this->fields).secretKey = (String *)0x0;
      func_?();
      if (1 < (int)pSVar4->max_length) {
        if (pSVar4->max_length < 2) goto code_?;
        (this->fields).secretKey = pSVar4->vector[1];
        func_?();
      }
      pUVar2 = (this->fields)._uri;
      if (pUVar2 == (Uri *)0x0) goto code_?;
      pSVar3 = System.dll::System::Uri::Uri_get_AbsolutePath(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (this->fields)._uri;
      if (pUVar2 == (Uri *)0x0) goto code_?;
      pSVar5 = System.dll::System::Uri::Uri_get_AbsolutePath(pUVar2,(MethodInfo *)0x0);
      if (pSVar5 == (String *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::String::String_LastIndexOf(pSVar5,0x2f,(MethodInfo *)0x0);
      if (pSVar3 == (String *)0x0) goto code_?;
      mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar6,(MethodInfo *)0x0);
      pUVar2 = (this->fields)._uri;
      if (pUVar2 == (Uri *)0x0) goto code_?;
      pSVar3 = System.dll::System::Uri::Uri_get_AbsoluteUri(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (this->fields)._uri;
      if (pUVar2 == (Uri *)0x0) goto code_?;
      pSVar5 = System.dll::System::Uri::Uri_get_AbsoluteUri(pUVar2,(MethodInfo *)0x0);
      if (pSVar5 == (String *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::String::String_LastIndexOf(pSVar5,0x2f,(MethodInfo *)0x0);
      if (pSVar3 == (String *)0x0) goto code_?;
      pSVar3 = mscorlib.dll::System::String::String_Substring(pSVar3,iVar6 + 1,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        this_00 = (UriBuilder *)func_?();
        System.dll::System::UriBuilder::UriBuilder__ctor(this_00,(MethodInfo *)0x0);
        pUVar2 = (this->fields)._uri;
        if (pUVar2 != (Uri *)0x0) {
          pSVar5 = System.dll::System::Uri::Uri_get_Scheme(pUVar2,(MethodInfo *)0x0);
          if (this_00 != (UriBuilder *)0x0) {
            System.dll::System::UriBuilder::UriBuilder_set_Scheme(this_00,pSVar5,(MethodInfo *)0x0);
            pUVar2 = (this->fields)._uri;
            if (pUVar2 != (Uri *)0x0) {
              pSVar5 = System.dll::System::Uri::Uri_get_DnsSafeHost(pUVar2,(MethodInfo *)0x0);
              System.dll::System::UriBuilder::UriBuilder_set_Host(this_00,pSVar5,(MethodInfo *)0x0);
              pUVar2 = (this->fields)._uri;
              if (pUVar2 != (Uri *)0x0) {
                iVar6 = System.dll::System::Uri::Uri_get_Port(pUVar2,(MethodInfo *)0x0);
                System.dll::System::UriBuilder::UriBuilder_set_Port(this_00,iVar6,(MethodInfo *)0x0)
                ;
                pSVar3 = mscorlib.dll::System::String::String_Format_1
                                   (StringLiteral__0__api__1__store_,(Object *)&UNK_?,
                                    (Object *)pSVar3,(MethodInfo *)0x0);
                System.dll::System::UriBuilder::UriBuilder_set_Path
                          (this_00,pSVar3,(MethodInfo *)0x0);
                pUVar2 = System.dll::System::UriBuilder::UriBuilder_get_Uri
                                   (this_00,(MethodInfo *)0x0);
                (this->fields).callUri = pUVar2;
                func_?();
                return;
              }
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    uVar7 = func_?();
    pAVar8 = (ArgumentException *)func_?(uVar7);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_invalid_argument___DSN_cannot_be);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar8,pSVar3,method_00);
    func_?();
    func_?();
code_?:
    func_?();
    pAVar8 = (ArgumentException *)func_?();
    pSVar3 = (String *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (pAVar8,pSVar3,(MethodInfo *)0x0);
    func_?();
    func_?();
code_?:
    func_?();
    pAVar8 = (ArgumentException *)func_?();
    pSVar3 = (String *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (pAVar8,pSVar3,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

