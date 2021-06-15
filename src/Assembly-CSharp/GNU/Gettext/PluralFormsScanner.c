
/* Boolean NextToken() */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner_NextToken
               (PluralFormsScanner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  iVar2 = (this->fields).pos;
  pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
  while (pCVar3 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
    if ((int)pIVar4 <= iVar2) {
code_?:
      pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
      iVar2 = (this->fields).pos;
      if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
      if (iVar2 < (int)pIVar4) {
        pSVar5 = (this->fields).str;
        if (pSVar5 == (String *)0x0) break;
        uVar6 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
        if (uVar6 != 0) {
          pSVar5 = (this->fields).str;
          if (pSVar5 == (String *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Char->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = mscorlib.dll::System::Char::Char_IsDigit(uVar6,(MethodInfo *)0x0);
          pSVar5 = (this->fields).str;
          iVar2 = (this->fields).pos;
          if (bVar7 != 0) {
            (this->fields).pos = iVar2 + 1;
            if (pSVar5 != (String *)0x0) {
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,iVar2,(MethodInfo *)0x0);
              iVar1 = (this->fields).pos;
              pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
              iVar2 = uVar6 - 0x30;
              if (pCVar3 != (Collection_1_VoxelHit_ *)0x0) goto code_?;
            }
            break;
          }
          if (pSVar5 == (String *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar5,iVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Char->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Char);
          }
          bVar7 = mscorlib.dll::System::Char::Char_IsLetter(uVar6,(MethodInfo *)0x0);
          iVar2 = (this->fields).pos;
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          if (bVar7 != 0) {
            iVar8 = iVar2 + 1;
            (this->fields).pos = iVar8;
            if (pCVar3 != (Collection_1_VoxelHit_ *)0x0) goto code_?;
            break;
          }
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pCVar3,iVar2,(MethodInfo *)0x0);
          iVar2 = (this->fields).pos;
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          if (uVar6 == 0x3d) {
            iVar2 = iVar2 + 1;
            (this->fields).pos = iVar2;
            if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
            pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
            if (iVar2 < (int)pIVar4) {
              pSVar5 = (this->fields).str;
              if (pSVar5 == (String *)0x0) break;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
              if (uVar6 == 0x3d) {
                piVar9 = &(this->fields).pos;
                *piVar9 = *piVar9 + 1;
                iVar1 = 6;
                goto code_?;
              }
            }
            iVar1 = 7;
            goto code_?;
          }
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pCVar3,iVar2,(MethodInfo *)0x0);
          iVar2 = (this->fields).pos;
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          if (uVar6 == 0x3e) {
            iVar2 = iVar2 + 1;
            (this->fields).pos = iVar2;
            if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
            pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
            if (iVar2 < (int)pIVar4) {
              pSVar5 = (this->fields).str;
              if (pSVar5 == (String *)0x0) break;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
              if (uVar6 == 0x3d) {
                piVar9 = &(this->fields).pos;
                *piVar9 = *piVar9 + 1;
                iVar1 = 9;
                goto code_?;
              }
            }
            iVar1 = 8;
            goto code_?;
          }
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pCVar3,iVar2,(MethodInfo *)0x0);
          iVar2 = (this->fields).pos;
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          if (uVar6 == 0x3c) {
            iVar2 = iVar2 + 1;
            (this->fields).pos = iVar2;
            if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
            pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
            if (iVar2 < (int)pIVar4) {
              pSVar5 = (this->fields).str;
              if (pSVar5 == (String *)0x0) break;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
              if (uVar6 == 0x3d) {
                piVar9 = &(this->fields).pos;
                *piVar9 = *piVar9 + 1;
                iVar1 = 0xb;
                goto code_?;
              }
            }
            iVar1 = 10;
            goto code_?;
          }
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pCVar3,iVar2,(MethodInfo *)0x0);
          iVar2 = (this->fields).pos;
          if (uVar6 == 0x25) {
            iVar1 = 0xc;
            (this->fields).pos = iVar2 + 1;
            goto code_?;
          }
          pSVar5 = (this->fields).str;
          if (pSVar5 == (String *)0x0) break;
          uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar5,iVar2,(MethodInfo *)0x0);
          if (uVar6 == 0x21) {
            pSVar5 = (this->fields).str;
            if (pSVar5 == (String *)0x0) break;
            uVar6 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar5,(this->fields).pos + 1,(MethodInfo *)0x0);
            if (uVar6 == 0x3d) {
              piVar9 = &(this->fields).pos;
              *piVar9 = *piVar9 + 2;
              iVar1 = 0xd;
              goto code_?;
            }
          }
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          iVar2 = (this->fields).pos;
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
          if (iVar2 + 1 < (int)pIVar4) {
            pSVar5 = (this->fields).str;
            if (pSVar5 == (String *)0x0) break;
            uVar6 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
            if (uVar6 == 0x26) {
              pSVar5 = (this->fields).str;
              if (pSVar5 == (String *)0x0) break;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,(this->fields).pos + 1,(MethodInfo *)0x0);
              if (uVar6 == 0x26) {
                piVar9 = &(this->fields).pos;
                *piVar9 = *piVar9 + 2;
                iVar1 = 0xe;
                goto code_?;
              }
            }
          }
          pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
          iVar2 = (this->fields).pos;
          if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
          if (iVar2 + 1 < (int)pIVar4) {
            pSVar5 = (this->fields).str;
            if (pSVar5 == (String *)0x0) break;
            uVar6 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
            if (uVar6 == 0x7c) {
              pSVar5 = (this->fields).str;
              if (pSVar5 == (String *)0x0) break;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,(this->fields).pos + 1,(MethodInfo *)0x0);
              if (uVar6 == 0x7c) {
                piVar9 = &(this->fields).pos;
                *piVar9 = *piVar9 + 2;
                iVar1 = 0xf;
                goto code_?;
              }
            }
          }
          pSVar5 = (this->fields).str;
          if (pSVar5 != (String *)0x0) {
            uVar6 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
            iVar2 = (this->fields).pos;
            if (uVar6 == 0x3f) {
              iVar1 = 0x10;
              (this->fields).pos = iVar2 + 1;
              goto code_?;
            }
            pSVar5 = (this->fields).str;
            if (pSVar5 != (String *)0x0) {
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (pSVar5,iVar2,(MethodInfo *)0x0);
              iVar2 = (this->fields).pos;
              if (uVar6 == 0x3a) {
                iVar1 = 0x11;
                (this->fields).pos = iVar2 + 1;
                goto code_?;
              }
              pSVar5 = (this->fields).str;
              if (pSVar5 != (String *)0x0) {
                uVar6 = mscorlib.dll::System::String::String_get_Chars
                                  (pSVar5,iVar2,(MethodInfo *)0x0);
                iVar2 = (this->fields).pos;
                if (uVar6 == 0x3b) {
                  iVar1 = 0x12;
                  (this->fields).pos = iVar2 + 1;
                  goto code_?;
                }
                pSVar5 = (this->fields).str;
                if (pSVar5 != (String *)0x0) {
                  uVar6 = mscorlib.dll::System::String::String_get_Chars
                                    (pSVar5,iVar2,(MethodInfo *)0x0);
                  iVar2 = (this->fields).pos;
                  if (uVar6 == 0x28) {
                    iVar1 = 0x13;
                    (this->fields).pos = iVar2 + 1;
                    goto code_?;
                  }
                  pSVar5 = (this->fields).str;
                  if (pSVar5 != (String *)0x0) {
                    uVar6 = mscorlib.dll::System::String::String_get_Chars
                                      (pSVar5,iVar2,(MethodInfo *)0x0);
                    if (uVar6 == 0x29) {
                      piVar9 = &(this->fields).pos;
                      *piVar9 = *piVar9 + 1;
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
      }
      iVar1 = 1;
      goto code_?;
    }
    pSVar5 = (this->fields).str;
    if (pSVar5 == (String *)0x0) break;
    uVar6 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
    if (uVar6 != 0x20) goto code_?;
    piVar9 = &(this->fields).pos;
    *piVar9 = *piVar9 + 1;
    iVar2 = (this->fields).pos;
    pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
  }
  goto code_?;
  while( true ) {
    pSVar5 = (this->fields).str;
    if (pSVar5 == (String *)0x0) break;
    uVar6 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Char->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::Char::Char_IsDigit(uVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
    iVar1 = (this->fields).pos;
    pSVar5 = (this->fields).str;
    (this->fields).pos = iVar1 + 1;
    if (pSVar5 == (String *)0x0) break;
    uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar5,iVar1,(MethodInfo *)0x0);
    iVar1 = (this->fields).pos;
    iVar2 = (uint)uVar6 + iVar2 * 10 + -0x30;
    pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
    if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
code_?:
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
    if ((int)pIVar4 <= iVar1) {
code_?:
      pPVar10 = (this->fields).token;
      if (pPVar10 != (PluralFormsToken *)0x0) {
        (pPVar10->fields).number = iVar2;
        iVar1 = 2;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
  while( true ) {
    pSVar5 = (this->fields).str;
    if (pSVar5 == (String *)0x0) break;
    uVar6 = mscorlib.dll::System::String::String_get_Chars
                      (pSVar5,(this->fields).pos,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Char->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
    piVar9 = &(this->fields).pos;
    *piVar9 = *piVar9 + 1;
    pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).str;
    iVar8 = (this->fields).pos;
    if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) break;
code_?:
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
    if ((int)pIVar4 <= iVar8) {
code_?:
      iVar8 = (this->fields).pos - iVar2;
      if (iVar8 == 1) {
        pSVar5 = (this->fields).str;
        if (pSVar5 != (String *)0x0) {
          uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar5,iVar2,(MethodInfo *)0x0);
          if (uVar6 == 0x6e) {
            iVar1 = 3;
          }
          goto code_?;
        }
      }
      else if (iVar8 == 6) {
        pSVar5 = (this->fields).str;
        if (pSVar5 != (String *)0x0) {
          pSVar5 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar5,iVar2,6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar7 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar5,StringLiteral_plural,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            iVar1 = 4;
          }
          goto code_?;
        }
      }
      else {
        if (iVar8 != 8) goto code_?;
        pSVar5 = (this->fields).str;
        if (pSVar5 != (String *)0x0) {
          pSVar5 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar5,iVar2,8,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar7 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar5,StringLiteral_nplurals,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            iVar1 = 5;
          }
code_?:
          pPVar10 = (this->fields).token;
          if (pPVar10 != (PluralFormsToken *)0x0) {
            (pPVar10->fields).type = iVar1;
            return iVar1 != 0;
          }
        }
      }
      break;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar7 = (*pcVar11)();
  return bVar7;
}


/* PluralFormsScanner(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsScanner::PluralFormsScanner__ctor
               (PluralFormsScanner *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).str = str;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).token = (PluralFormsToken *)this_00;
  PluralFormsScanner_NextToken(this,(MethodInfo *)0x0);
  return;
}

