
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  iVar2 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar3 = (this->fields).token;
  cVar4 = (int)pPVar3 < 0;
  iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar6 = this;
  if (pPVar3 != (PluralFormsToken *)0x0) {
    uVar7 = (undefined4)n;
    switch((pPVar3->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT26(n._2_2_,CONCAT24((undefined2)n,in_stack_8));
    default:
      return 0;
    case 6:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = iVar2;
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar6 = (PluralFormsNode *)iVar13;
          pPVar9 = (this->fields).nodes;
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              if (pPVar6 != (PluralFormsNode *)iVar5) {
                return 0;
              }
              if ((int)(uVar15 >> 0x20) != (int)((ulonglong)iVar5 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              iVar16 = (int)((ulonglong)iVar5 >> 0x20);
              if ((int)pPVar6 < iVar16) {
                return 0;
              }
              if ((int)pPVar6 <= iVar16) {
                if ((uint)(uVar15 >> 0x20) <= (uint)iVar5) {
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
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              iVar16 = (int)((ulonglong)iVar5 >> 0x20);
              if ((int)pPVar6 < iVar16) {
                return 0;
              }
              if ((int)pPVar6 <= iVar16) {
                if ((uint)(uVar15 >> 0x20) < (uint)iVar5) {
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
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              iVar16 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar16 < (int)pPVar6) {
                return 0;
              }
              if (iVar16 <= (int)pPVar6) {
                if ((uint)iVar5 <= (uint)(uVar15 >> 0x20)) {
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
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              iVar16 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar16 < (int)pPVar6) {
                return 0;
              }
              if (iVar16 <= (int)pPVar6) {
                if ((uint)iVar5 < (uint)(uVar15 >> 0x20)) {
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
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        uVar14 = pPVar9->max_length;
        bVar10 = uVar14 == 0;
        cVar11 = SBORROW4(uVar14,1);
        cVar4 = (int)(uVar14 - 1) < 0;
        if (uVar14 < 2) goto code_?;
        pPVar12 = pPVar9->vector[1];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
          if (iVar13 == 0) {
            return 0;
          }
          pPVar9 = (this->fields).nodes;
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            bVar10 = 0;
            cVar11 = '\0';
            cVar4 = (int)pPVar9->max_length < 0;
            if (pPVar9->max_length == 0) goto code_?;
            pPVar12 = pPVar9->vector[0];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EBP);
              iVar5 = func_?();
              return iVar5;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar6 = (PluralFormsNode *)iVar13;
          pPVar9 = (this->fields).nodes;
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              if ((pPVar6 == (PluralFormsNode *)iVar5) &&
                 ((int)(uVar15 >> 0x20) == (int)((ulonglong)iVar5 >> 0x20))) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xe:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          iVar16 = (int)iVar5;
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar5 >> 0x20);
          iVar2 = CONCAT44(uVar7,iVar16);
          cVar4 = (int)pPVar9 < 0;
          iVar5 = CONCAT44(uVar7,iVar16);
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              iVar5 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EBP);
              if (iVar16 == 0 && pPVar6 == (PluralFormsNode *)0x0) {
                return 0;
              }
              if (iVar5 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xf:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          iVar16 = (int)iVar5;
          pPVar9 = (this->fields).nodes;
          pPVar6 = (PluralFormsNode *)((ulonglong)iVar5 >> 0x20);
          iVar2 = CONCAT44(uVar7,iVar16);
          cVar4 = (int)pPVar9 < 0;
          iVar5 = CONCAT44(uVar7,iVar16);
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              iVar5 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EBP);
              if (iVar16 != 0 || pPVar6 != (PluralFormsNode *)0x0) {
                return 1;
              }
              if (iVar5 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0x10:
      pPVar9 = (this->fields).nodes;
      cVar4 = (int)pPVar9 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar9 != (PluralFormsNode__Array *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar4 = (int)pPVar9->max_length < 0;
        if (pPVar9->max_length == 0) goto code_?;
        pPVar12 = pPVar9->vector[0];
        cVar4 = (int)pPVar12 < 0;
        iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar6 = this;
        if (pPVar12 != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_8,uVar7);
          iVar5 = CONCAT44(in_stack_8,uVar7);
          iVar13 = PluralFormsNode_Evaluate(pPVar12,n & 0xffffffff,unaff_EDI);
          pPVar6 = (PluralFormsNode *)iVar13;
          pPVar9 = (this->fields).nodes;
          cVar4 = (int)pPVar9 < 0;
          if (pPVar9 != (PluralFormsNode__Array *)0x0) {
            uVar14 = pPVar9->max_length;
            bVar10 = uVar14 == 0;
            cVar11 = SBORROW4(uVar14,1);
            cVar4 = (int)(uVar14 - 1) < 0;
            if (uVar14 < 2) goto code_?;
            pPVar12 = pPVar9->vector[1];
            cVar4 = (int)pPVar12 < 0;
            iVar5 = iVar2;
            if (pPVar12 != (PluralFormsNode *)0x0) {
              uVar15 = n & 0xffffffff;
              iVar2 = PluralFormsNode_Evaluate(pPVar12,uVar15,unaff_EBP);
              iVar16 = (int)(uVar15 >> 0x20);
              pPVar9 = (this->fields).nodes;
              cVar4 = (int)pPVar9 < 0;
              iVar5 = iVar2;
              if (pPVar9 != (PluralFormsNode__Array *)0x0) {
                uVar14 = pPVar9->max_length;
                bVar10 = uVar14 < 2;
                cVar11 = SBORROW4(uVar14,2);
                cVar4 = (int)(uVar14 - 2) < 0;
                if (uVar14 < 3) goto code_?;
                pPVar12 = pPVar9->vector[2];
                cVar4 = (int)pPVar12 < 0;
                if (pPVar12 != (PluralFormsNode *)0x0) {
                  iVar5 = PluralFormsNode_Evaluate(pPVar12,0,n._4_4_);
                  if (iVar16 == 0) {
                    return iVar5;
                  }
                  return iVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  this = pPVar6;
  cVar11 = '\0';
  bVar10 = 0;
  func_?();
  iVar2 = iVar5;
  pPVar6 = this;
code_?:
  this = pPVar6;
  iVar17 = (int)iVar2;
  uVar18 = func_?();
  pbVar19 = (byte *)((ulonglong)uVar18 >> 0x20);
  iVar20 = (int)uVar18;
  bVar21 = (byte)((ulonglong)uVar18 >> 0x20);
  bVar22 = (byte)extraout_ECX;
  iVar16 = iVar17;
  if (cVar11 != cVar4) {
    iVar16 = iVar17 + 1;
    pbVar23 = (byte *)((int)((ulonglong)iVar2 >> 0x20) + 0x2010460c);
    bVar24 = *pbVar23;
    bVar25 = *pbVar23;
    *pbVar23 = bVar25 + bVar22 + bVar10;
    iVar20 = CONCAT31((int3)((ulonglong)uVar18 >> 8),
                     (char)uVar18 + *(char *)(iVar17 + 0x11) +
                     (CARRY1(bVar24,bVar22) || CARRY1(bVar25 + bVar22,bVar10)));
    bVar10 = 0;
    *pbVar19 = *pbVar19 & bVar21;
  }
  pbVar23 = (byte *)(iVar20 + 0x2010460c);
  bVar25 = *pbVar23;
  bVar26 = (byte)((uint)iVar20 >> 8);
  bVar24 = *pbVar23 + bVar26;
  *pbVar23 = bVar24 + bVar10;
  bVar25 = (char)iVar20 + *(char *)(iVar16 + 0x11) + (CARRY1(bVar25,bVar26) || CARRY1(bVar24,bVar10));
  puVar27 = (undefined4 *)CONCAT31((int3)((uint)iVar20 >> 8),bVar25);
  bVar10 = bVar22 - bRam_?;
  pbVar23 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar10);
  pbVar19 = pbVar19 + 0xe;
  bVar28 = CARRY1(*pbVar19,bVar10) || CARRY1(*pbVar19 + bVar10,bVar22 < bRam_?);
  *pbVar19 = *pbVar19 + bVar10 + (bVar22 < bRam_?);
  bVar10 = bVar21 + (byte)pPVar1;
  bVar29 = CARRY1(bVar21,(byte)pPVar1) || CARRY1(bVar10,bVar28);
  uVar30 = (undefined3)((ulonglong)uVar18 >> 0x28);
  bVar10 = bVar10 + bVar28;
  pbVar19 = (byte *)(CONCAT31(uVar30,bVar10) + 0xf);
  bVar21 = (byte)((uint)extraout_ECX >> 8);
  bVar22 = *pbVar19 + bVar21;
  bVar31 = CARRY1(*pbVar19,bVar21) || CARRY1(bVar22,bVar29);
  *pbVar19 = bVar22 + bVar29;
  doAfter = (PluralFormsNode_IterateNodesDelegate *)(iVar16 + 5);
  bVar21 = (byte)((ulonglong)uVar18 >> 0x28);
  bVar22 = bVar10 + bVar21;
  bVar28 = CARRY1(bVar22,bVar31);
  bVar29 = CARRY1(bVar10,bVar21) || bVar28;
  cVar4 = bVar22 + bVar31;
  uVar7 = CONCAT31(uVar30,cVar4);
  if ((CARRY1(bVar10,bVar21) || bVar28) || cVar4 == '\0') {
    uVar7 = *puVar27;
  }
  if (-1 < cVar4) {
    bVar10 = *pbVar23;
    bVar22 = *pbVar23;
    *pbVar23 = bVar22 + bVar25 + bVar29;
    *(int *)(iVar16 + 0x16) =
         (int)puVar27 +
         (uint)(CARRY1(bVar10,bVar25) || CARRY1(bVar22 + bVar25,bVar29)) + *(int *)(iVar16 + 0x16);
    doAfter = (PluralFormsNode_IterateNodesDelegate *)(iVar16 + 7);
    in((short)CONCAT31((int3)((uint)uVar7 >> 8),*pbVar23));
    puVar27 = in_stack_8;
  }
  if (puVar27 != (undefined4 *)0x0) {
    (*(code *)puVar27[3])();
    uVar14 = 0;
    if (this != (PluralFormsNode *)0x0) {
      iVar16 = 0x10;
      while (pPVar9 = (this->fields).nodes, pPVar9 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar9->max_length <= (int)uVar14) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar5 = (*(doAfter->fields)._._.invoke_impl)();
            return iVar5;
          }
          break;
        }
        if (pPVar9->max_length <= uVar14) goto code_?;
        if (*(int *)((int)pPVar9->vector + iVar16 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar9->vector + iVar16 + -0x10),
                     (PluralFormsNode_IterateNodesDelegate *)0x0,doAfter,(MethodInfo *)0x0);
        }
        uVar14 = uVar14 + 1;
        iVar16 = iVar16 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  iVar5 = (*pcVar32)();
  return iVar5;
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
  if (this_00 != (RecursiveTracer *)0x0) {
    RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&(this->fields).tracer;
    (this->fields).tracer = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).token = token;
    func_?(&this->fields,token);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

