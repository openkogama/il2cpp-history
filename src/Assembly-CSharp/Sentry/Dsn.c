
/* Dsn(String) */

void Assembly-CSharp.dll::Sentry::Dsn::Dsn__ctor(Dsn *this,String *dsn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__UriBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__api__1__store_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((dsn == ::StringLiteral__) ||
     ((((dsn != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
       ((dsn->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(dsn->fields)._firstChar,
                          (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                          (longlong)(dsn->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0))
     )) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    pIVar3 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_invalid_argument___DSN_cannot_be);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(pIVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&MethodInfo__Sentry__Dsn__Dsn_System__String_);
    FUN_?(pIVar3,uVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar6 = (Uri *)FUN_?(TypeInfo__System__Uri);
  System.dll::System::Uri::Uri__ctor(pUVar6,dsn,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  (this->fields)._uri = pUVar6;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pUVar6 = (this->fields)._uri;
  if (pUVar6 != (Uri *)0x0) {
    pSVar4 = System.dll::System::Uri::Uri_get_UserInfo(pUVar6,(MethodInfo *)0x0);
    if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      pIVar3 = (InvalidEnumArgumentException *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_Invalid_DSN__No_public_key_provi);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__Sentry__Dsn__Dsn_System__String_);
      FUN_?(pIVar3,uVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar6 = (this->fields)._uri;
    if (((pUVar6 != (Uri *)0x0) &&
        (pSVar4 = System.dll::System::Uri::Uri_get_UserInfo(pUVar6,(MethodInfo *)0x0),
        pSVar4 != (String *)0x0)) &&
       (pSVar12 = mscorlib.dll::System::String::String_Split
                           (pSVar4,0x3a,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar12 != (String__Array *)0x0)) {
      if ((int)pSVar12->max_length == 0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = iRam_? != 0;
      (this->fields).publicKey = pSVar12->vector[0];
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).publicKey >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pSVar4 = (this->fields).publicKey;
      if ((pSVar4 != (String *)0x0) && ((pSVar4->fields)._stringLength != 0)) {
        (this->fields).secretKey = (String *)0x0;
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(this->fields).secretKey >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar11;
            LOCK();
            uVar10 = *puVar11;
            if (uVar13 == uVar10) {
              *puVar11 = uVar13 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar10);
        }
        return;
      }
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      pIVar3 = (InvalidEnumArgumentException *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_Invalid_DSN__No_public_key_provi);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__Sentry__Dsn__Dsn_System__String_);
      FUN_?(pIVar3,uVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

