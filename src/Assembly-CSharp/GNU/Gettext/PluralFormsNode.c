
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  lVar2 = ZEXT48(unaff_EDI) << 0x20;
  pPVar3 = (this->fields).token;
  cVar4 = (int)pPVar3 < 0;
  lVar5 = ZEXT48(unaff_EDI) << 0x20;
  pPVar6 = this;
  if (pPVar3 == (PluralFormsToken *)0x0) goto code_?;
  switch((pPVar3->fields).type) {
  case 2:
    return (int64_t)(((this->fields).token)->fields).number;
  case 3:
    return CONCAT44((PluralFormsNode *)n,in_stack_7);
  default:
    return 0;
  case 6:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 == (PluralFormsNode__Array *)0x0) break;
    bVar9 = 0;
    cVar10 = '\0';
    cVar4 = (int)pPVar8->max_length < 0;
    if (pPVar8->max_length != 0) {
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = lVar2;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar6 = (PluralFormsNode *)iVar12;
        pPVar8 = (this->fields).nodes;
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            if (pPVar6 != (PluralFormsNode *)iVar12) {
              return 0;
            }
            if ((int)(uVar14 >> 0x20) != (int)((ulonglong)iVar12 >> 0x20)) {
              return 0;
            }
            return 1;
          }
        }
      }
      break;
    }
    goto code_?;
  case 8:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            iVar15 = (int)((ulonglong)iVar12 >> 0x20);
            if ((int)pPVar6 < iVar15) {
              return 0;
            }
            if ((int)pPVar6 <= iVar15) {
              if ((uint)(uVar14 >> 0x20) <= (uint)iVar12) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 9:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            iVar15 = (int)((ulonglong)iVar12 >> 0x20);
            if ((int)pPVar6 < iVar15) {
              return 0;
            }
            if ((int)pPVar6 <= iVar15) {
              if ((uint)(uVar14 >> 0x20) < (uint)iVar12) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 10:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            iVar15 = (int)((ulonglong)iVar12 >> 0x20);
            if (iVar15 < (int)pPVar6) {
              return 0;
            }
            if (iVar15 <= (int)pPVar6) {
              if ((uint)iVar12 <= (uint)(uVar14 >> 0x20)) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xb:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            iVar15 = (int)((ulonglong)iVar12 >> 0x20);
            if (iVar15 < (int)pPVar6) {
              return 0;
            }
            if (iVar15 <= (int)pPVar6) {
              if ((uint)iVar12 < (uint)(uVar14 >> 0x20)) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xc:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      uVar13 = pPVar8->max_length;
      bVar9 = uVar13 == 0;
      cVar10 = SBORROW4(uVar13,1);
      cVar4 = (int)(uVar13 - 1) < 0;
      if (uVar13 < 2) goto code_?;
      pPVar11 = pPVar8->vector[1];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        if (iVar12 == 0) {
          return 0;
        }
        pPVar8 = (this->fields).nodes;
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          bVar9 = 0;
          cVar10 = '\0';
          cVar4 = (int)pPVar8->max_length < 0;
          if (pPVar8->max_length == 0) goto code_?;
          pPVar11 = pPVar8->vector[0];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EBP);
            iVar12 = func_?();
            return iVar12;
          }
        }
      }
    }
    break;
  case 0xd:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar6 = (PluralFormsNode *)iVar12;
        pPVar8 = (this->fields).nodes;
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            iVar12 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            if ((pPVar6 == (PluralFormsNode *)iVar12) &&
               ((int)(uVar14 >> 0x20) == (int)((ulonglong)iVar12 >> 0x20))) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        iVar15 = (int)iVar12;
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        lVar2 = CONCAT44((PluralFormsNode *)n,iVar15);
        cVar4 = (int)pPVar8 < 0;
        lVar5 = CONCAT44((PluralFormsNode *)n,iVar15);
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EBP);
            if (iVar15 == 0 && pPVar6 == (PluralFormsNode *)0x0) {
              return 0;
            }
            if (iVar12 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xf:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        iVar15 = (int)iVar12;
        pPVar8 = (this->fields).nodes;
        pPVar6 = (PluralFormsNode *)((ulonglong)iVar12 >> 0x20);
        lVar2 = CONCAT44((PluralFormsNode *)n,iVar15);
        cVar4 = (int)pPVar8 < 0;
        lVar5 = CONCAT44((PluralFormsNode *)n,iVar15);
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EBP);
            if (iVar15 != 0 || pPVar6 != (PluralFormsNode *)0x0) {
              return 1;
            }
            if (iVar12 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0x10:
    pPVar8 = (this->fields).nodes;
    cVar4 = (int)pPVar8 < 0;
    lVar5 = ZEXT48(unaff_EDI) << 0x20;
    if (pPVar8 != (PluralFormsNode__Array *)0x0) {
      bVar9 = 0;
      cVar10 = '\0';
      cVar4 = (int)pPVar8->max_length < 0;
      if (pPVar8->max_length == 0) goto code_?;
      pPVar11 = pPVar8->vector[0];
      cVar4 = (int)pPVar11 < 0;
      lVar5 = ZEXT48(unaff_EDI) << 0x20;
      pPVar6 = this;
      if (pPVar11 != (PluralFormsNode *)0x0) {
        lVar2 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        lVar5 = CONCAT44(in_stack_7,(PluralFormsNode *)n);
        iVar12 = PluralFormsNode_Evaluate(pPVar11,n & 0xffffffff,unaff_EDI);
        pPVar6 = (PluralFormsNode *)iVar12;
        pPVar8 = (this->fields).nodes;
        cVar4 = (int)pPVar8 < 0;
        if (pPVar8 != (PluralFormsNode__Array *)0x0) {
          uVar13 = pPVar8->max_length;
          bVar9 = uVar13 == 0;
          cVar10 = SBORROW4(uVar13,1);
          cVar4 = (int)(uVar13 - 1) < 0;
          if (uVar13 < 2) goto code_?;
          pPVar11 = pPVar8->vector[1];
          cVar4 = (int)pPVar11 < 0;
          lVar5 = lVar2;
          if (pPVar11 != (PluralFormsNode *)0x0) {
            uVar14 = n & 0xffffffff;
            lVar2 = PluralFormsNode_Evaluate(pPVar11,uVar14,unaff_EBP);
            iVar15 = (int)(uVar14 >> 0x20);
            pPVar8 = (this->fields).nodes;
            cVar4 = (int)pPVar8 < 0;
            lVar5 = lVar2;
            if (pPVar8 != (PluralFormsNode__Array *)0x0) {
              uVar13 = pPVar8->max_length;
              bVar9 = uVar13 < 2;
              cVar10 = SBORROW4(uVar13,2);
              cVar4 = (int)(uVar13 - 2) < 0;
              if (uVar13 < 3) goto code_?;
              pPVar11 = pPVar8->vector[2];
              cVar4 = (int)pPVar11 < 0;
              if (pPVar11 != (PluralFormsNode *)0x0) {
                iVar12 = PluralFormsNode_Evaluate(pPVar11,0,n._4_4_);
                if (iVar15 == 0) {
                  return iVar12;
                }
                return lVar2;
              }
            }
          }
        }
      }
    }
  }
code_?:
  this = pPVar6;
  cVar10 = '\0';
  bVar9 = 0;
  func_?();
  lVar2 = lVar5;
  pPVar6 = this;
code_?:
  this = pPVar6;
  iVar16 = (int)((ulonglong)lVar2 >> 0x20);
  n._0_4_ = (PluralFormsNode *)&UNK_?;
  uVar17 = func_?();
  pcVar18 = (char *)((ulonglong)uVar17 >> 0x20);
  pbVar19 = (byte *)uVar17;
  uVar13 = extraout_ECX;
  iVar15 = iVar16;
  if (cVar10 == cVar4) {
    iVar15 = iVar16 + -1;
    pcVar18 = (char *)CONCAT31((int3)((ulonglong)uVar17 >> 0x28),
                               (char)((ulonglong)uVar17 >> 0x20) + (char)pPVar1 + bVar9);
    bVar9 = 0;
    uVar13 = CONCAT31((int3)(extraout_ECX >> 8),(byte)extraout_ECX & *(byte *)(iVar16 + 0xf));
    n._0_4_ = (PluralFormsNode *)0x23;
  }
  pbVar20 = (byte *)(iVar15 + 0x20104f1f);
  bVar21 = (byte)uVar13;
  bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar9);
  *pbVar20 = *pbVar20 + bVar21 + bVar9;
  bVar23 = (byte)((ulonglong)uVar17 >> 8);
  bVar24 = CARRY1(*pbVar19,bVar23) || CARRY1(*pbVar19 + bVar23,bVar22);
  *pbVar19 = *pbVar19 + bVar23 + bVar22;
  pbVar19 = pbVar19 + 0x20104f20;
  bVar9 = *pbVar19;
  bVar25 = *pbVar19;
  *pbVar19 = bVar25 + bVar23 + bVar24;
  bVar26 = (byte)(uVar13 >> 8);
  *pcVar18 = *pcVar18 + bVar26 + (CARRY1(bVar9,bVar23) || CARRY1(bVar25 + bVar23,bVar24));
  *(uint *)(iVar15 + 0xc) = *(uint *)(iVar15 + 0xc) & uVar13;
  bVar22 = CARRY1(bRam_?,bVar26);
  bRam_? = bRam_? + bVar26;
  uVar27 = iVar15 - 6;
  pcVar18 = (char *)(CONCAT31((int3)(uVar13 >> 8),bVar21 & *(byte *)(iVar15 + 0xc)) &
                    *(uint *)(iVar15 + 10));
  if ((int)pcVar18 < 0) {
    pPVar28 = &pPVar1[-0xa3f5d].fields;
    *(char *)&pPVar28->token = *(char *)&pPVar28->token << 1 | *(char *)&pPVar28->token < '\0';
  }
  else {
    *pcVar18 = *pcVar18 + (char)uVar17;
    in((short)CONCAT31(0x4a104f,bVar22 + 'p'));
    if (in_stack_7 == 0) goto code_?;
    n._0_4_ = pPVar1;
    (**(code **)(in_stack_7 + 0xc))(*(undefined4 *)(in_stack_7 + 0x20));
    uVar27 = 0;
    pPVar1 = this;
  }
  uVar13 = 0;
  if (pPVar1 != (PluralFormsNode *)0x0) {
    iVar15 = uVar27 + 0x10;
    while (pPVar8 = (pPVar1->fields).nodes, pPVar8 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar8->max_length <= (int)uVar13) {
        if ((PluralFormsNode *)n != (PluralFormsNode *)0x0) {
          iVar12 = (*(code *)(((PluralFormsNode *)n)->fields).nodes)();
          return iVar12;
        }
        break;
      }
      if (pPVar8->max_length <= uVar27) goto code_?;
      if (*(int *)((int)pPVar8->vector + iVar15 + -0x10) != 0) {
        n._0_4_ = (PluralFormsNode *)0x0;
        PluralFormsNode_IterateNodes
                  (*(PluralFormsNode **)((int)pPVar8->vector + iVar15 + -0x10),
                   (PluralFormsNode_IterateNodesDelegate *)0x0,
                   (PluralFormsNode_IterateNodesDelegate *)0x0,(MethodInfo *)0x0);
      }
      uVar13 = uVar27 + 1;
      iVar15 = iVar15 + 4;
      uVar27 = uVar13;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  iVar12 = (*pcVar29)();
  return iVar12;
}


/* Void IterateNodes(PluralFormsNode, PluralFormsNode+IterateNodesDelegate,
   PluralFormsNode+IterateNodesDelegate) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
               (PluralFormsNode *node,PluralFormsNode_IterateNodesDelegate *doBefore,
               PluralFormsNode_IterateNodesDelegate *doAfter,MethodInfo *method)

{
  if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(doBefore->fields)._._.invoke_impl)
              ((doBefore->fields)._._.method_code,node,(doBefore->fields)._._.method);
    uVar1 = 0;
    if (node != (PluralFormsNode *)0x0) {
      iVar2 = 0x10;
      while( true ) {
        pPVar3 = (node->fields).nodes;
        if (pPVar3 == (PluralFormsNode__Array *)0x0) break;
        if ((int)pPVar3->max_length <= (int)uVar1) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            (*(doAfter->fields)._._.invoke_impl)
                      ((doAfter->fields)._._.method_code,node,(doAfter->fields)._._.method);
            return;
          }
          break;
        }
        if (pPVar3->max_length <= uVar1) goto code_?;
        if (*(int *)((int)pPVar3->vector + iVar2 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar3->vector + iVar2 + -0x10),doBefore,doAfter,
                     (MethodInfo *)0x0);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PluralFormsNode Node(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Node
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((i < 0) || (2 < i)) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).nodes;
  if (pPVar2 == (PluralFormsNode__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (PluralFormsNode *)(*pcVar5)();
    return pPVar6;
  }
  if ((uint)i < pPVar2->max_length) {
    return pPVar2->vector[i];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (PluralFormsNode *)(*pcVar5)();
  return pPVar6;
}


/* PluralFormsNode ReleaseNode(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ReleaseNode
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((uint)i < pPVar1->max_length) {
    pPVar2 = pPVar1->vector[i];
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = (PluralFormsNode *)0x0;
      func_?(pPVar1->vector + i,0);
      return pPVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar2 = (PluralFormsNode *)(*pcVar3)();
  return pPVar2;
}


/* Void SetNode(Int32, PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_SetNode
               (PluralFormsNode *this,int32_t i,PluralFormsNode *n,MethodInfo *method)

{
  if (2 < (uint)i) {
    return;
  }
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((n == (PluralFormsNode *)0x0) ||
          (iVar2 = func_?(n,(pPVar1->klass->_0).element_class), iVar2 != 0)) {
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = n;
      func_?(pPVar1->vector + i,n);
      return;
    }
    goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ToString
                   (PluralFormsNode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__Node__Token__0__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__Node__Token__0__,(Object *)(this->fields).token,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsNode(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode__ctor
               (PluralFormsNode *this,PluralFormsToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    cRam_? = '\x01';
  }
  pPVar1 = (PluralFormsNode__Array *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode,3);
  (this->fields).nodes = pPVar1;
  func_?(&(this->fields).nodes,pPVar1);
  this_00 = (RecursiveTracer *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).tracer;
  (this->fields).tracer = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

