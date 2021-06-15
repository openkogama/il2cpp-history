
/* Dsn(String) */

void Assembly-CSharp.dll::Sentry::Dsn::Dsn__ctor(Dsn *this,String *dsn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (dsn,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pUVar2 = (Uri *)func_?();
    System.dll::System::Uri::Uri__ctor(pUVar2,dsn,(MethodInfo *)0x0);
    (this->fields)._uri = pUVar2;
    if (pUVar2 == (Uri *)0x0) goto code_?;
    pSVar3 = System.dll::System::Uri::Uri_get_UserInfo(pUVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pUVar2 = (this->fields)._uri;
      if (pUVar2 == (Uri *)0x0) goto code_?;
      pSVar3 = System.dll::System::Uri::Uri_get_UserInfo(pUVar2,(MethodInfo *)0x0);
      separator = (Char__Array *)func_?();
      if (separator == (Char__Array *)0x0) goto code_?;
      if (separator->max_length == 0) {
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
      }
      else {
        separator->vector[0] = 0x3a;
        if (pSVar3 == (String *)0x0) goto code_?;
        pSVar4 = mscorlib.dll::System::String::String_Split(pSVar3,separator,(MethodInfo *)0x0);
        if (pSVar4 == (String__Array *)0x0) goto code_?;
        if (pSVar4->max_length == 0) goto code_?;
        pSVar3 = pSVar4->vector[0];
        (this->fields).publicKey = pSVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
        (this->fields).secretKey = (String *)0x0;
        if (1 < (int)pSVar4->max_length) {
          pSVar3 = (String *)func_?();
          (this->fields).secretKey = pSVar3;
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
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          this_00 = (UriBuilder *)func_?();
          System.dll::System::UriBuilder::UriBuilder__ctor(this_00,(MethodInfo *)0x0);
          pUVar2 = (this->fields)._uri;
          if (pUVar2 != (Uri *)0x0) {
            pSVar5 = System.dll::System::Uri::Uri_get_Scheme(pUVar2,(MethodInfo *)0x0);
            if (this_00 != (UriBuilder *)0x0) {
              System.dll::System::UriBuilder::UriBuilder_set_Scheme
                        (this_00,pSVar5,(MethodInfo *)0x0);
              pUVar2 = (this->fields)._uri;
              if (pUVar2 != (Uri *)0x0) {
                pSVar5 = System.dll::System::Uri::Uri_get_DnsSafeHost(pUVar2,(MethodInfo *)0x0);
                System.dll::System::UriBuilder::UriBuilder_set_Host
                          (this_00,pSVar5,(MethodInfo *)0x0);
                pUVar2 = (this->fields)._uri;
                if (pUVar2 != (Uri *)0x0) {
                  iVar6 = System.dll::System::Uri::Uri_get_Port(pUVar2,(MethodInfo *)0x0);
                  System.dll::System::UriBuilder::UriBuilder_set_Port
                            (this_00,iVar6,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pSVar3 = mscorlib.dll::System::String::String_Format_1
                                     (StringLiteral__0__api__1__store_,(Object *)0x0,
                                      (Object *)pSVar3,(MethodInfo *)0x0);
                  System.dll::System::UriBuilder::UriBuilder_set_Path
                            (this_00,pSVar3,(MethodInfo *)0x0);
                  pUVar2 = System.dll::System::UriBuilder::UriBuilder_get_Uri
                                     (this_00,(MethodInfo *)0x0);
                  (this->fields).callUri = pUVar2;
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      this_01 = (ArgumentException *)func_?();
      pSVar3 = StringLiteral_Invalid_DSN__A_Project_Id_is_req;
    }
    else {
code_?:
      this_01 = (ArgumentException *)func_?();
      pSVar3 = StringLiteral_Invalid_DSN__No_public_key_provi;
    }
  }
  else {
    this_01 = (ArgumentException *)func_?();
    pSVar3 = StringLiteral_invalid_argument___DSN_cannot_be;
  }
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_01,pSVar3,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

