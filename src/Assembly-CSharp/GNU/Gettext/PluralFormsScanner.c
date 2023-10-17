
/* Boolean NextToken() */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner_NextToken
               (PluralFormsScanner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&StringLiteral_nplurals);
    func_?(&StringLiteral_plural);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  iVar2 = (this->fields).pos;
  pSVar3 = (this->fields).str;
  while (pSVar3 != (String *)0x0) {
    if ((pSVar3->fields)._stringLength <= iVar2) {
code_?:
      pSVar3 = (this->fields).str;
      if (pSVar3 == (String *)0x0) break;
      iVar2 = (this->fields).pos;
      if (((pSVar3->fields)._stringLength <= iVar2) ||
         (uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar3,iVar2,(MethodInfo *)0x0),
         uVar4 == 0)) {
        iVar1 = 1;
        goto code_?;
      }
      pSVar3 = (this->fields).str;
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = mscorlib.dll::System::Char::Char_IsDigit(uVar4,(MethodInfo *)0x0);
      pSVar3 = (this->fields).str;
      if (bVar5 != 0) {
        iVar2 = (this->fields).pos;
        (this->fields).pos = iVar2 + 1;
        if (pSVar3 != (String *)0x0) {
          uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar3,iVar2,(MethodInfo *)0x0);
          iVar1 = (this->fields).pos;
          pSVar3 = (this->fields).str;
          iVar2 = uVar4 - 0x30;
          if (pSVar3 != (String *)0x0) goto code_?;
        }
        break;
      }
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar5 = mscorlib.dll::System::Char::Char_IsLetter(uVar4,(MethodInfo *)0x0);
      pSVar3 = (this->fields).str;
      if (bVar5 != 0) {
        startIndex = (this->fields).pos;
        iVar2 = startIndex + 1;
        (this->fields).pos = iVar2;
        if (pSVar3 != (String *)0x0) goto code_?;
        break;
      }
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      pSVar3 = (this->fields).str;
      if (uVar4 == 0x3d) {
        iVar2 = (this->fields).pos + 1;
        (this->fields).pos = iVar2;
        if (pSVar3 != (String *)0x0) {
          if ((iVar2 < (pSVar3->fields)._stringLength) &&
             (uVar4 = mscorlib.dll::System::String::String_get_Chars
                                ((this->fields).str,iVar2,(MethodInfo *)0x0), uVar4 == 0x3d)) {
            piVar6 = &(this->fields).pos;
            *piVar6 = *piVar6 + 1;
            iVar1 = 6;
          }
          else {
            iVar1 = 7;
          }
          goto code_?;
        }
        break;
      }
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      pSVar3 = (this->fields).str;
      if (uVar4 == 0x3e) {
        iVar2 = (this->fields).pos + 1;
        (this->fields).pos = iVar2;
        if (pSVar3 != (String *)0x0) {
          if ((iVar2 < (pSVar3->fields)._stringLength) &&
             (uVar4 = mscorlib.dll::System::String::String_get_Chars
                                ((this->fields).str,iVar2,(MethodInfo *)0x0), uVar4 == 0x3d)) {
            piVar6 = &(this->fields).pos;
            *piVar6 = *piVar6 + 1;
            iVar1 = 9;
          }
          else {
            iVar1 = 8;
          }
          goto code_?;
        }
        break;
      }
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      pSVar3 = (this->fields).str;
      if (uVar4 == 0x3c) {
        iVar2 = (this->fields).pos + 1;
        (this->fields).pos = iVar2;
        if (pSVar3 != (String *)0x0) {
          if ((iVar2 < (pSVar3->fields)._stringLength) &&
             (uVar4 = mscorlib.dll::System::String::String_get_Chars
                                ((this->fields).str,iVar2,(MethodInfo *)0x0), uVar4 == 0x3d)) {
            piVar6 = &(this->fields).pos;
            *piVar6 = *piVar6 + 1;
            iVar1 = 0xb;
          }
          else {
            iVar1 = 10;
          }
          goto code_?;
        }
        break;
      }
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      if (uVar4 == 0x25) {
        piVar6 = &(this->fields).pos;
        *piVar6 = *piVar6 + 1;
        iVar1 = 0xc;
        goto code_?;
      }
      pSVar3 = (this->fields).str;
      if (pSVar3 == (String *)0x0) break;
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
      if (uVar4 == 0x21) {
        pSVar3 = (this->fields).str;
        if (pSVar3 == (String *)0x0) break;
        uVar4 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar3,(this->fields).pos + 1,(MethodInfo *)0x0);
        if (uVar4 == 0x3d) {
          piVar6 = &(this->fields).pos;
          *piVar6 = *piVar6 + 2;
          iVar1 = 0xd;
          goto code_?;
        }
      }
      pSVar3 = (this->fields).str;
      if (pSVar3 == (String *)0x0) break;
      if (((this->fields).pos + 1 < (pSVar3->fields)._stringLength) &&
         (uVar4 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar3,(this->fields).pos,(MethodInfo *)0x0), uVar4 == 0x26)) {
        pSVar3 = (this->fields).str;
        if (pSVar3 == (String *)0x0) break;
        uVar4 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar3,(this->fields).pos + 1,(MethodInfo *)0x0);
        if (uVar4 == 0x26) {
          piVar6 = &(this->fields).pos;
          *piVar6 = *piVar6 + 2;
          iVar1 = 0xe;
          goto code_?;
        }
      }
      pSVar3 = (this->fields).str;
      if (pSVar3 == (String *)0x0) break;
      if (((this->fields).pos + 1 < (pSVar3->fields)._stringLength) &&
         (uVar4 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar3,(this->fields).pos,(MethodInfo *)0x0), uVar4 == 0x7c)) {
        pSVar3 = (this->fields).str;
        if (pSVar3 == (String *)0x0) break;
        uVar4 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar3,(this->fields).pos + 1,(MethodInfo *)0x0);
        if (uVar4 == 0x7c) {
          piVar6 = &(this->fields).pos;
          *piVar6 = *piVar6 + 2;
          iVar1 = 0xf;
          goto code_?;
        }
      }
      pSVar3 = (this->fields).str;
      if (pSVar3 != (String *)0x0) {
        uVar4 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
        if (uVar4 == 0x3f) {
          piVar6 = &(this->fields).pos;
          *piVar6 = *piVar6 + 1;
          iVar1 = 0x10;
          goto code_?;
        }
        pSVar3 = (this->fields).str;
        if (pSVar3 != (String *)0x0) {
          uVar4 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
          if (uVar4 == 0x3a) {
            piVar6 = &(this->fields).pos;
            *piVar6 = *piVar6 + 1;
            iVar1 = 0x11;
            goto code_?;
          }
          pSVar3 = (this->fields).str;
          if (pSVar3 != (String *)0x0) {
            uVar4 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
            if (uVar4 == 0x3b) {
              piVar6 = &(this->fields).pos;
              *piVar6 = *piVar6 + 1;
              iVar1 = 0x12;
              goto code_?;
            }
            pSVar3 = (this->fields).str;
            if (pSVar3 != (String *)0x0) {
              uVar4 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
              if (uVar4 == 0x28) {
                piVar6 = &(this->fields).pos;
                *piVar6 = *piVar6 + 1;
                iVar1 = 0x13;
                goto code_?;
              }
              pSVar3 = (this->fields).str;
              if (pSVar3 != (String *)0x0) {
                uVar4 = mscorlib.dll::System::String::String_get_Chars
                                  (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
                if (uVar4 == 0x29) {
                  piVar6 = &(this->fields).pos;
                  *piVar6 = *piVar6 + 1;
                  iVar1 = 0x14;
                }
                goto code_?;
              }
            }
          }
        }
      }
      break;
    }
    pSVar3 = (this->fields).str;
    if (pSVar3 == (String *)0x0) break;
    uVar4 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
    if (uVar4 != 0x20) goto code_?;
    piVar6 = &(this->fields).pos;
    *piVar6 = *piVar6 + 1;
    iVar2 = (this->fields).pos;
    pSVar3 = (this->fields).str;
  }
  goto code_?;
  while( true ) {
    pSVar3 = (this->fields).str;
    if (pSVar3 == (String *)0x0) break;
    uVar4 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Char);
    }
    bVar5 = mscorlib.dll::System::Char::Char_IsDigit(uVar4,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    iVar1 = (this->fields).pos;
    pSVar3 = (this->fields).str;
    (this->fields).pos = iVar1 + 1;
    if (pSVar3 == (String *)0x0) break;
    uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar3,iVar1,(MethodInfo *)0x0);
    iVar2 = (uint)uVar4 + iVar2 * 10 + -0x30;
    pSVar3 = (this->fields).str;
    iVar1 = (this->fields).pos;
    if (pSVar3 == (String *)0x0) break;
code_?:
    if ((pSVar3->fields)._stringLength <= iVar1) {
code_?:
      pPVar7 = (this->fields).token;
      if (pPVar7 != (PluralFormsToken *)0x0) {
        (pPVar7->fields).number = iVar2;
        iVar1 = 2;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
  while( true ) {
    pSVar3 = (this->fields).str;
    if (pSVar3 == (String *)0x0) break;
    uVar4 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar3,(this->fields).pos,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Char);
    }
    bVar5 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar4,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    piVar6 = &(this->fields).pos;
    *piVar6 = *piVar6 + 1;
    pSVar3 = (this->fields).str;
    iVar2 = (this->fields).pos;
    if (pSVar3 == (String *)0x0) break;
code_?:
    if ((pSVar3->fields)._stringLength <= iVar2) {
code_?:
      iVar2 = (this->fields).pos - startIndex;
      if (iVar2 == 1) {
        pSVar3 = (this->fields).str;
        if (pSVar3 != (String *)0x0) {
          uVar4 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar3,startIndex,(MethodInfo *)0x0);
          if (uVar4 == 0x6e) {
            iVar1 = 3;
          }
          goto code_?;
        }
      }
      else if (iVar2 == 6) {
        pSVar3 = (this->fields).str;
        if (pSVar3 != (String *)0x0) {
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar3,startIndex,6,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar3,StringLiteral_plural,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            iVar1 = 4;
          }
          goto code_?;
        }
      }
      else {
        if (iVar2 != 8) goto code_?;
        pSVar3 = (this->fields).str;
        if (pSVar3 != (String *)0x0) {
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar3,startIndex,8,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar3,StringLiteral_nplurals,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            iVar1 = 5;
          }
code_?:
          pPVar7 = (this->fields).token;
          if (pPVar7 != (PluralFormsToken *)0x0) {
            (pPVar7->fields).type = iVar1;
            return iVar1 != 0;
          }
        }
      }
      break;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* PluralFormsScanner(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner__ctor
               (PluralFormsScanner *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).str = str;
  func_?(&this->fields,str);
  value = (PluralFormsToken *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
  if (value != (PluralFormsToken *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBP);
    (this->fields).token = value;
    func_?(&(this->fields).token,value);
    PluralFormsScanner_NextToken(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

