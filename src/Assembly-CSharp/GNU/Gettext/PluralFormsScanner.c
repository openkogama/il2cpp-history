
/* Boolean NextToken() */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner_NextToken
               (PluralFormsScanner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_nplurals);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_plural);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).str;
  iVar2 = 0;
  iVar3 = (this->fields).pos;
  if (pSVar1 == (String *)0x0) goto code_?;
  while (iVar3 < (pSVar1->fields)._stringLength) {
    pSVar4 = (this->fields).str;
    if (pSVar4 == (String *)0x0) goto code_?;
    uVar5 = (this->fields).pos;
    if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar5)
    goto code_?;
    if ((&(pSVar4->fields)._firstChar)[(int)uVar5] != 0x20) break;
    piVar6 = &(this->fields).pos;
    *piVar6 = *piVar6 + 1;
    iVar3 = (this->fields).pos;
  }
  pSVar1 = (this->fields).str;
  if (pSVar1 == (String *)0x0) goto code_?;
  if ((pSVar1->fields)._stringLength <= (this->fields).pos) {
code_?:
    iVar2 = 1;
    goto code_?;
  }
  pSVar1 = (this->fields).str;
  uVar5 = (this->fields).pos;
  if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
  goto code_?;
  if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0) goto code_?;
  uVar7 = (&(((this->fields).str)->fields)._firstChar)[(this->fields).pos];
  uVar5 = (uint)uVar7;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (uVar7 < 0x100) {
    if (0x2f < uVar5) {
      bVar8 = uVar5 < 0x3a;
      goto code_?;
    }
    pSVar1 = (this->fields).str;
  }
  else {
    UVar9 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
            CharUnicodeInfo_GetUnicodeCategory_2(uVar5,(MethodInfo *)0x0);
    bVar8 = UVar9 == UnicodeCategory__Enum_DecimalDigitNumber;
code_?:
    pSVar1 = (this->fields).str;
    if (bVar8) {
      uVar5 = (this->fields).pos;
      uVar10 = uVar5 + 1;
      (this->fields).pos = uVar10;
      if (pSVar1 != (String *)0x0) {
        if ((longlong)(ulonglong)uVar5 < (longlong)(pSVar1->fields)._stringLength) {
          pSVar4 = (this->fields).str;
          iVar3 = (&(pSVar1->fields)._firstChar)[(int)uVar5] - 0x30;
          while (pSVar4 != (String *)0x0) {
            if ((pSVar4->fields)._stringLength <= (int)uVar10) {
code_?:
              pPVar11 = (this->fields).token;
              if (pPVar11 != (PluralFormsToken *)0x0) {
                (pPVar11->fields).number = iVar3;
                iVar2 = 2;
                goto code_?;
              }
              break;
            }
            pSVar1 = (this->fields).str;
            if (pSVar1 == (String *)0x0) break;
            if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar10)
            goto code_?;
            uVar7 = (&(pSVar1->fields)._firstChar)[(int)uVar10];
            uVar5 = (uint)uVar7;
            if ((*(int *)(lRam_? + 0xe4) == 0) &&
               (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
              FUN_?();
            }
            if (uVar7 < 0x100) {
              if (uVar5 < 0x30) goto code_?;
              bVar8 = uVar5 < 0x3a;
            }
            else {
              UVar9 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
                      CharUnicodeInfo_GetUnicodeCategory_2(uVar5,(MethodInfo *)0x0);
              bVar8 = UVar9 == UnicodeCategory__Enum_DecimalDigitNumber;
            }
            if (!bVar8) goto code_?;
            uVar5 = (this->fields).pos;
            pSVar4 = (this->fields).str;
            uVar10 = uVar5 + 1;
            (this->fields).pos = uVar10;
            if (pSVar4 == (String *)0x0) break;
            if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar5)
            goto code_?;
            iVar3 = (uint)(&(pSVar4->fields)._firstChar)[(int)uVar5] + iVar3 * 10 + -0x30;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  if (pSVar1 == (String *)0x0) goto code_?;
  uVar5 = (this->fields).pos;
  if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
  goto code_?;
  uVar12 = (&(pSVar1->fields)._firstChar)[(int)uVar5];
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  bVar13 = mscorlib.dll::System::Char::Char_IsLetter(uVar12,(MethodInfo *)0x0);
  pSVar1 = (this->fields).str;
  if (bVar13 != 0) {
    uVar5 = (this->fields).pos;
    (this->fields).pos = uVar5 + 1;
    iVar3 = uVar5 + 1;
    while (pSVar1 != (String *)0x0) {
      if ((pSVar1->fields)._stringLength <= iVar3) {
code_?:
        iVar3 = (this->fields).pos - uVar5;
        if (iVar3 == 1) {
          pSVar1 = (this->fields).str;
          if (pSVar1 != (String *)0x0) {
            if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
            goto code_?;
            if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0x6e) {
              iVar2 = 3;
            }
            goto code_?;
          }
        }
        else if (iVar3 == 6) {
          pSVar1 = (this->fields).str;
          if (pSVar1 != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar1,uVar5,6,(MethodInfo *)0x0);
            if ((pSVar1 == StringLiteral_plural) ||
               (((pSVar1 != (String *)0x0 && (StringLiteral_plural != (String *)0x0)) &&
                (((pSVar1->fields)._stringLength == (StringLiteral_plural->fields)._stringLength &&
                 (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar1->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral_plural->fields)._firstChar,
                                     (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0
                                    ), bVar13 != 0)))))) {
              iVar2 = 4;
            }
            goto code_?;
          }
        }
        else {
          if (iVar3 != 8) goto code_?;
          pSVar1 = (this->fields).str;
          if (pSVar1 != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar1,uVar5,8,(MethodInfo *)0x0);
            if ((pSVar1 == StringLiteral_nplurals) ||
               ((((pSVar1 != (String *)0x0 && (StringLiteral_nplurals != (String *)0x0)) &&
                 ((pSVar1->fields)._stringLength == (StringLiteral_nplurals->fields)._stringLength)
                 ) && (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                                          (uint8_t *)&(StringLiteral_nplurals->fields)._firstChar,
                                          (longlong)(pSVar1->fields)._stringLength * 2,
                                          (MethodInfo *)0x0), bVar13 != 0)))) {
              iVar2 = 5;
            }
            goto code_?;
          }
        }
        break;
      }
      pSVar1 = (this->fields).str;
      if (pSVar1 == (String *)0x0) break;
      uVar10 = (this->fields).pos;
      if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar10)
      goto code_?;
      uVar12 = (&(pSVar1->fields)._firstChar)[(int)uVar10];
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      bVar13 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar12,(MethodInfo *)0x0);
      if (bVar13 == 0) goto code_?;
      piVar6 = &(this->fields).pos;
      *piVar6 = *piVar6 + 1;
      iVar3 = (this->fields).pos;
      pSVar1 = (this->fields).str;
    }
    goto code_?;
  }
  if (pSVar1 == (String *)0x0) goto code_?;
  uVar5 = (this->fields).pos;
  if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
  goto code_?;
  iVar3 = (this->fields).pos;
  if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0x3d) {
    uVar5 = iVar3 + 1;
    (this->fields).pos = uVar5;
    if ((int)uVar5 < (pSVar1->fields)._stringLength) {
      pSVar1 = (this->fields).str;
      if (pSVar1 == (String *)0x0) goto code_?;
      if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
      goto code_?;
      if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar3 * 2) == 0x3d) {
        iVar2 = 6;
        (this->fields).pos = iVar3 + 2;
        goto code_?;
      }
    }
    iVar2 = 7;
  }
  else {
    iVar14 = (this->fields).pos;
    if ((&(pSVar1->fields)._firstChar)[iVar3] == 0x3e) {
      uVar5 = iVar14 + 1;
      (this->fields).pos = uVar5;
      if ((int)uVar5 < (pSVar1->fields)._stringLength) {
        pSVar1 = (this->fields).str;
        if (pSVar1 == (String *)0x0) goto code_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
        goto code_?;
        if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar14 * 2) == 0x3d) {
          iVar2 = 9;
          (this->fields).pos = iVar14 + 2;
          goto code_?;
        }
      }
      iVar2 = 8;
    }
    else {
      iVar3 = (this->fields).pos;
      if ((&(pSVar1->fields)._firstChar)[iVar14] == 0x3c) {
        uVar5 = iVar3 + 1;
        (this->fields).pos = uVar5;
        if ((int)uVar5 < (pSVar1->fields)._stringLength) {
          pSVar1 = (this->fields).str;
          if (pSVar1 == (String *)0x0) goto code_?;
          if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
          goto code_?;
          if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar3 * 2) == 0x3d) {
            iVar2 = 0xb;
            (this->fields).pos = iVar3 + 2;
            goto code_?;
          }
        }
        iVar2 = 10;
      }
      else {
        iVar14 = (this->fields).pos;
        if ((&(pSVar1->fields)._firstChar)[iVar3] == 0x25) {
          iVar2 = 0xc;
          (this->fields).pos = iVar14 + 1;
        }
        else {
          if ((&(pSVar1->fields)._firstChar)[iVar14] == 0x21) {
            iVar3 = (this->fields).pos;
            if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)(iVar3 + 1))
            goto code_?;
            if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar3 * 2) == 0x3d) {
              piVar6 = &(this->fields).pos;
              *piVar6 = *piVar6 + 2;
              iVar2 = 0xd;
              goto code_?;
            }
          }
          pSVar1 = (this->fields).str;
          if (pSVar1 == (String *)0x0) goto code_?;
          if ((this->fields).pos + 1 < (pSVar1->fields)._stringLength) {
            uVar5 = (this->fields).pos;
            if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
            goto code_?;
            if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0x26) {
              iVar3 = (this->fields).pos;
              if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)(iVar3 + 1))
              goto code_?;
              if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar3 * 2) == 0x26) {
                piVar6 = &(this->fields).pos;
                *piVar6 = *piVar6 + 2;
                iVar2 = 0xe;
                goto code_?;
              }
            }
          }
          pSVar1 = (this->fields).str;
          if (pSVar1 == (String *)0x0) goto code_?;
          if ((this->fields).pos + 1 < (pSVar1->fields)._stringLength) {
            uVar5 = (this->fields).pos;
            if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5)
            goto code_?;
            if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0x7c) {
              iVar3 = (this->fields).pos;
              if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)(iVar3 + 1))
              goto code_?;
              if (*(short *)(&(pSVar1->fields).field_0x6 + (longlong)iVar3 * 2) == 0x7c) {
                piVar6 = &(this->fields).pos;
                *piVar6 = *piVar6 + 2;
                iVar2 = 0xf;
                goto code_?;
              }
            }
          }
          pSVar1 = (this->fields).str;
          if (pSVar1 == (String *)0x0) goto code_?;
          uVar5 = (this->fields).pos;
          if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                      ((MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            bVar13 = (*pcVar15)();
            return bVar13;
          }
          iVar3 = (this->fields).pos;
          if ((&(pSVar1->fields)._firstChar)[(int)uVar5] == 0x3f) {
            iVar2 = 0x10;
            (this->fields).pos = iVar3 + 1;
          }
          else {
            iVar14 = (this->fields).pos;
            if ((&(pSVar1->fields)._firstChar)[iVar3] == 0x3a) {
              iVar2 = 0x11;
              (this->fields).pos = iVar14 + 1;
            }
            else {
              iVar3 = (this->fields).pos;
              if ((&(pSVar1->fields)._firstChar)[iVar14] == 0x3b) {
                iVar2 = 0x12;
                (this->fields).pos = iVar3 + 1;
              }
              else {
                iVar14 = (this->fields).pos;
                if ((&(pSVar1->fields)._firstChar)[iVar3] == 0x28) {
                  iVar2 = 0x13;
                  (this->fields).pos = iVar14 + 1;
                }
                else {
                  iVar2 = 0;
                  if ((&(pSVar1->fields)._firstChar)[iVar14] == 0x29) {
                    piVar6 = &(this->fields).pos;
                    *piVar6 = *piVar6 + 1;
                    iVar2 = 0x14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  pPVar11 = (this->fields).token;
  if (pPVar11 != (PluralFormsToken *)0x0) {
    (pPVar11->fields).type = iVar2;
    return iVar2 != 0;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar13 = (*pcVar15)();
  return bVar13;
}


/* PluralFormsScanner(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner__ctor
               (PluralFormsScanner *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).str = str;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pPVar6 = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
  bVar1 = iRam_? != 0;
  (this->fields).token = pPVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).token >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_nplurals,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_plural);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar7 = (this->fields).str;
  iVar8 = 0;
  iVar9 = (this->fields).pos;
  if (pSVar7 == (String *)0x0) goto code_?;
  while (iVar9 < (pSVar7->fields)._stringLength) {
    pSVar10 = (this->fields).str;
    if (pSVar10 == (String *)0x0) goto code_?;
    uVar2 = (this->fields).pos;
    if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar2)
    goto code_?;
    if ((&(pSVar10->fields)._firstChar)[(int)uVar2] != 0x20) break;
    piVar11 = &(this->fields).pos;
    *piVar11 = *piVar11 + 1;
    iVar9 = (this->fields).pos;
  }
  pSVar7 = (this->fields).str;
  if (pSVar7 == (String *)0x0) goto code_?;
  if ((pSVar7->fields)._stringLength <= (this->fields).pos) {
code_?:
    iVar8 = 1;
    goto code_?;
  }
  pSVar7 = (this->fields).str;
  uVar2 = (this->fields).pos;
  if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
  goto code_?;
  if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0) goto code_?;
  uVar12 = (&(((this->fields).str)->fields)._firstChar)[(this->fields).pos];
  uVar2 = (uint)uVar12;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (uVar12 < 0x100) {
    if (0x2f < uVar2) {
      bVar1 = uVar2 < 0x3a;
      goto code_?;
    }
    pSVar7 = (this->fields).str;
  }
  else {
    UVar13 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
             CharUnicodeInfo_GetUnicodeCategory_2(uVar2,(MethodInfo *)0x0);
    bVar1 = UVar13 == UnicodeCategory__Enum_DecimalDigitNumber;
code_?:
    pSVar7 = (this->fields).str;
    if (bVar1) {
      uVar2 = (this->fields).pos;
      uVar14 = uVar2 + 1;
      (this->fields).pos = uVar14;
      if (pSVar7 != (String *)0x0) {
        if ((longlong)(ulonglong)uVar2 < (longlong)(pSVar7->fields)._stringLength) {
          pSVar10 = (this->fields).str;
          iVar9 = (&(pSVar7->fields)._firstChar)[(int)uVar2] - 0x30;
          while (pSVar10 != (String *)0x0) {
            if ((pSVar10->fields)._stringLength <= (int)uVar14) {
code_?:
              pPVar6 = (this->fields).token;
              if (pPVar6 != (PluralFormsToken *)0x0) {
                (pPVar6->fields).number = iVar9;
                iVar8 = 2;
                goto code_?;
              }
              break;
            }
            pSVar7 = (this->fields).str;
            if (pSVar7 == (String *)0x0) break;
            if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar14)
            goto code_?;
            uVar12 = (&(pSVar7->fields)._firstChar)[(int)uVar14];
            uVar2 = (uint)uVar12;
            if ((*(int *)(lRam_? + 0xe4) == 0) &&
               (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
              FUN_?();
            }
            if (uVar12 < 0x100) {
              if (uVar2 < 0x30) goto code_?;
              bVar1 = uVar2 < 0x3a;
            }
            else {
              UVar13 = mscorlib.dll::System::Globalization::CharUnicodeInfo::
                       CharUnicodeInfo_GetUnicodeCategory_2(uVar2,(MethodInfo *)0x0);
              bVar1 = UVar13 == UnicodeCategory__Enum_DecimalDigitNumber;
            }
            if (!bVar1) goto code_?;
            uVar2 = (this->fields).pos;
            pSVar10 = (this->fields).str;
            uVar14 = uVar2 + 1;
            (this->fields).pos = uVar14;
            if (pSVar10 == (String *)0x0) break;
            if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar2)
            goto code_?;
            iVar9 = (uint)(&(pSVar10->fields)._firstChar)[(int)uVar2] + iVar9 * 10 + -0x30;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  if (pSVar7 == (String *)0x0) goto code_?;
  uVar2 = (this->fields).pos;
  if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
  goto code_?;
  uVar15 = (&(pSVar7->fields)._firstChar)[(int)uVar2];
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  bVar16 = mscorlib.dll::System::Char::Char_IsLetter(uVar15,(MethodInfo *)0x0);
  pSVar7 = (this->fields).str;
  if (bVar16 != 0) {
    uVar2 = (this->fields).pos;
    (this->fields).pos = uVar2 + 1;
    iVar9 = uVar2 + 1;
    while (pSVar7 != (String *)0x0) {
      if ((pSVar7->fields)._stringLength <= iVar9) {
code_?:
        iVar9 = (this->fields).pos - uVar2;
        if (iVar9 == 1) {
          pSVar7 = (this->fields).str;
          if (pSVar7 != (String *)0x0) {
            if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
            goto code_?;
            if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0x6e) {
              iVar8 = 3;
            }
            goto code_?;
          }
        }
        else if (iVar9 == 6) {
          pSVar7 = (this->fields).str;
          if (pSVar7 != (String *)0x0) {
            pSVar7 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar7,uVar2,6,(MethodInfo *)0x0);
            if ((pSVar7 == StringLiteral_plural) ||
               (((pSVar7 != (String *)0x0 && (StringLiteral_plural != (String *)0x0)) &&
                (((pSVar7->fields)._stringLength == (StringLiteral_plural->fields)._stringLength &&
                 (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)&(pSVar7->fields)._firstChar,
                                      (uint8_t *)&(StringLiteral_plural->fields)._firstChar,
                                      (longlong)(pSVar7->fields)._stringLength * 2,
                                      (MethodInfo *)0x0), bVar16 != 0)))))) {
              iVar8 = 4;
            }
            goto code_?;
          }
        }
        else {
          if (iVar9 != 8) goto code_?;
          pSVar7 = (this->fields).str;
          if (pSVar7 != (String *)0x0) {
            pSVar7 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar7,uVar2,8,(MethodInfo *)0x0);
            if ((pSVar7 == StringLiteral_nplurals) ||
               ((((pSVar7 != (String *)0x0 && (StringLiteral_nplurals != (String *)0x0)) &&
                 ((pSVar7->fields)._stringLength == (StringLiteral_nplurals->fields)._stringLength)
                 ) && (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                          ((uint8_t *)&(pSVar7->fields)._firstChar,
                                           (uint8_t *)&(StringLiteral_nplurals->fields)._firstChar,
                                           (longlong)(pSVar7->fields)._stringLength * 2,
                                           (MethodInfo *)0x0), bVar16 != 0)))) {
              iVar8 = 5;
            }
            goto code_?;
          }
        }
        break;
      }
      pSVar7 = (this->fields).str;
      if (pSVar7 == (String *)0x0) break;
      uVar14 = (this->fields).pos;
      if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar14)
      goto code_?;
      uVar15 = (&(pSVar7->fields)._firstChar)[(int)uVar14];
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      bVar16 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar15,(MethodInfo *)0x0);
      if (bVar16 == 0) goto code_?;
      piVar11 = &(this->fields).pos;
      *piVar11 = *piVar11 + 1;
      iVar9 = (this->fields).pos;
      pSVar7 = (this->fields).str;
    }
    goto code_?;
  }
  if (pSVar7 == (String *)0x0) goto code_?;
  uVar2 = (this->fields).pos;
  if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
  goto code_?;
  iVar9 = (this->fields).pos;
  if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0x3d) {
    uVar2 = iVar9 + 1;
    (this->fields).pos = uVar2;
    if ((int)uVar2 < (pSVar7->fields)._stringLength) {
      pSVar7 = (this->fields).str;
      if (pSVar7 == (String *)0x0) goto code_?;
      if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
      goto code_?;
      if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar9 * 2) == 0x3d) {
        iVar8 = 6;
        (this->fields).pos = iVar9 + 2;
        goto code_?;
      }
    }
    iVar8 = 7;
  }
  else {
    iVar17 = (this->fields).pos;
    if ((&(pSVar7->fields)._firstChar)[iVar9] == 0x3e) {
      uVar2 = iVar17 + 1;
      (this->fields).pos = uVar2;
      if ((int)uVar2 < (pSVar7->fields)._stringLength) {
        pSVar7 = (this->fields).str;
        if (pSVar7 == (String *)0x0) goto code_?;
        if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
        goto code_?;
        if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar17 * 2) == 0x3d) {
          iVar8 = 9;
          (this->fields).pos = iVar17 + 2;
          goto code_?;
        }
      }
      iVar8 = 8;
    }
    else {
      iVar9 = (this->fields).pos;
      if ((&(pSVar7->fields)._firstChar)[iVar17] == 0x3c) {
        uVar2 = iVar9 + 1;
        (this->fields).pos = uVar2;
        if ((int)uVar2 < (pSVar7->fields)._stringLength) {
          pSVar7 = (this->fields).str;
          if (pSVar7 == (String *)0x0) goto code_?;
          if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
          goto code_?;
          if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar9 * 2) == 0x3d) {
            iVar8 = 0xb;
            (this->fields).pos = iVar9 + 2;
            goto code_?;
          }
        }
        iVar8 = 10;
      }
      else {
        iVar17 = (this->fields).pos;
        if ((&(pSVar7->fields)._firstChar)[iVar9] == 0x25) {
          iVar8 = 0xc;
          (this->fields).pos = iVar17 + 1;
        }
        else {
          if ((&(pSVar7->fields)._firstChar)[iVar17] == 0x21) {
            iVar9 = (this->fields).pos;
            if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)(iVar9 + 1))
            goto code_?;
            if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar9 * 2) == 0x3d) {
              piVar11 = &(this->fields).pos;
              *piVar11 = *piVar11 + 2;
              iVar8 = 0xd;
              goto code_?;
            }
          }
          pSVar7 = (this->fields).str;
          if (pSVar7 == (String *)0x0) goto code_?;
          if ((this->fields).pos + 1 < (pSVar7->fields)._stringLength) {
            uVar2 = (this->fields).pos;
            if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
            goto code_?;
            if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0x26) {
              iVar9 = (this->fields).pos;
              if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)(iVar9 + 1))
              goto code_?;
              if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar9 * 2) == 0x26) {
                piVar11 = &(this->fields).pos;
                *piVar11 = *piVar11 + 2;
                iVar8 = 0xe;
                goto code_?;
              }
            }
          }
          pSVar7 = (this->fields).str;
          if (pSVar7 == (String *)0x0) goto code_?;
          if ((this->fields).pos + 1 < (pSVar7->fields)._stringLength) {
            uVar2 = (this->fields).pos;
            if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2)
            goto code_?;
            if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0x7c) {
              iVar9 = (this->fields).pos;
              if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)(iVar9 + 1))
              goto code_?;
              if (*(short *)(&(pSVar7->fields).field_0x6 + (longlong)iVar9 * 2) == 0x7c) {
                piVar11 = &(this->fields).pos;
                *piVar11 = *piVar11 + 2;
                iVar8 = 0xf;
                goto code_?;
              }
            }
          }
          pSVar7 = (this->fields).str;
          if (pSVar7 == (String *)0x0) goto code_?;
          uVar2 = (this->fields).pos;
          if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                      ((MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          iVar9 = (this->fields).pos;
          if ((&(pSVar7->fields)._firstChar)[(int)uVar2] == 0x3f) {
            iVar8 = 0x10;
            (this->fields).pos = iVar9 + 1;
          }
          else {
            iVar17 = (this->fields).pos;
            if ((&(pSVar7->fields)._firstChar)[iVar9] == 0x3a) {
              iVar8 = 0x11;
              (this->fields).pos = iVar17 + 1;
            }
            else {
              iVar9 = (this->fields).pos;
              if ((&(pSVar7->fields)._firstChar)[iVar17] == 0x3b) {
                iVar8 = 0x12;
                (this->fields).pos = iVar9 + 1;
              }
              else {
                iVar17 = (this->fields).pos;
                if ((&(pSVar7->fields)._firstChar)[iVar9] == 0x28) {
                  iVar8 = 0x13;
                  (this->fields).pos = iVar17 + 1;
                }
                else {
                  iVar8 = 0;
                  if ((&(pSVar7->fields)._firstChar)[iVar17] == 0x29) {
                    piVar11 = &(this->fields).pos;
                    *piVar11 = *piVar11 + 1;
                    iVar8 = 0x14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  pPVar6 = (this->fields).token;
  if (pPVar6 != (PluralFormsToken *)0x0) {
    (pPVar6->fields).type = iVar8;
    return;
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

