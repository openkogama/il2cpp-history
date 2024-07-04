
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  iVar1 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar2 = (PluralFormsNode__Class *)&stack0xfffffffc;
  pPVar3 = (this->fields).token;
  cVar4 = (int)pPVar3 < 0;
  iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
  if (pPVar3 == (PluralFormsToken *)0x0) goto code_?;
  switch((pPVar3->fields).type) {
  case 2:
    return (int64_t)(((this->fields).token)->fields).number;
  case 3:
    return CONCAT44((undefined4)n,in_stack_6);
  default:
    goto code_?;
  case 6:
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 == (PluralFormsNode__Array *)0x0) break;
    bVar8 = 0;
    cVar9 = '\0';
    cVar4 = (int)pPVar7->max_length < 0;
    if (pPVar7->max_length != 0) {
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = iVar1;
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            if ((int)iVar11 != (int)iVar5) {
              return 0;
            }
            if ((int)(uVar13 >> 0x20) != (int)((ulonglong)iVar5 >> 0x20)) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        iVar14 = (int)((ulonglong)iVar11 >> 0x20);
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            iVar15 = (int)((ulonglong)iVar5 >> 0x20);
            if (iVar14 < iVar15) {
              return 0;
            }
            if (iVar14 <= iVar15) {
              if ((uint)(uVar13 >> 0x20) <= (uint)iVar5) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        iVar14 = (int)((ulonglong)iVar11 >> 0x20);
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            iVar15 = (int)((ulonglong)iVar5 >> 0x20);
            if (iVar14 < iVar15) {
              return 0;
            }
            if (iVar14 <= iVar15) {
              if ((uint)(uVar13 >> 0x20) < (uint)iVar5) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        iVar14 = (int)((ulonglong)iVar11 >> 0x20);
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            iVar15 = (int)((ulonglong)iVar5 >> 0x20);
            if (iVar15 < iVar14) {
              return 0;
            }
            if (iVar15 <= iVar14) {
              if ((uint)iVar5 <= (uint)(uVar13 >> 0x20)) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        iVar14 = (int)((ulonglong)iVar11 >> 0x20);
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            iVar15 = (int)((ulonglong)iVar5 >> 0x20);
            if (iVar15 < iVar14) {
              return 0;
            }
            if (iVar15 <= iVar14) {
              if ((uint)iVar5 < (uint)(uVar13 >> 0x20)) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      uVar12 = pPVar7->max_length;
      bVar8 = uVar12 == 0;
      cVar9 = SBORROW4(uVar12,1);
      cVar4 = (int)(uVar12 - 1) < 0;
      if (uVar12 < 2) goto code_?;
      pPVar10 = pPVar7->vector[1];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        if (iVar11 == 0) {
          return 0;
        }
        pPVar7 = (this->fields).nodes;
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          bVar8 = 0;
          cVar9 = '\0';
          cVar4 = (int)pPVar7->max_length < 0;
          if (pPVar7->max_length == 0) goto code_?;
          pPVar10 = pPVar7->vector[0];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            in_stack_6 = (byte *)(uVar13 >> 0x20);
            iVar5 = func_?();
            return iVar5;
          }
        }
      }
    }
    break;
  case 0xd:
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar5 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            if (((int)iVar11 == (int)iVar5) &&
               ((int)(uVar13 >> 0x20) == (int)((ulonglong)iVar5 >> 0x20))) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        iVar14 = (int)iVar11;
        pPVar7 = (this->fields).nodes;
        iVar1 = CONCAT44((undefined4)n,iVar14);
        cVar4 = (int)pPVar7 < 0;
        iVar5 = CONCAT44((undefined4)n,iVar14);
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,(MethodInfo *)unaff_EBP);
            if (iVar14 == 0 && (int)((ulonglong)iVar11 >> 0x20) == 0) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar11 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        iVar14 = (int)iVar11;
        pPVar7 = (this->fields).nodes;
        iVar1 = CONCAT44((undefined4)n,iVar14);
        cVar4 = (int)pPVar7 < 0;
        iVar5 = CONCAT44((undefined4)n,iVar14);
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,(MethodInfo *)unaff_EBP);
            if (iVar14 != 0 || (int)((ulonglong)iVar11 >> 0x20) != 0) {
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
    pPVar7 = (this->fields).nodes;
    cVar4 = (int)pPVar7 < 0;
    iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar7 != (PluralFormsNode__Array *)0x0) {
      bVar8 = 0;
      cVar9 = '\0';
      cVar4 = (int)pPVar7->max_length < 0;
      if (pPVar7->max_length == 0) goto code_?;
      pPVar10 = pPVar7->vector[0];
      cVar4 = (int)pPVar10 < 0;
      iVar5 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar10 != (PluralFormsNode *)0x0) {
        iVar1 = CONCAT44(in_stack_6,(undefined4)n);
        iVar5 = CONCAT44(in_stack_6,(undefined4)n);
        PluralFormsNode_Evaluate(pPVar10,n & 0xffffffff,unaff_EDI);
        pPVar7 = (this->fields).nodes;
        cVar4 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode__Array *)0x0) {
          uVar12 = pPVar7->max_length;
          bVar8 = uVar12 == 0;
          cVar9 = SBORROW4(uVar12,1);
          cVar4 = (int)(uVar12 - 1) < 0;
          if (uVar12 < 2) goto code_?;
          pPVar10 = pPVar7->vector[1];
          cVar4 = (int)pPVar10 < 0;
          iVar5 = iVar1;
          if (pPVar10 != (PluralFormsNode *)0x0) {
            uVar13 = n & 0xffffffff;
            iVar1 = PluralFormsNode_Evaluate(pPVar10,uVar13,(MethodInfo *)unaff_EBP);
            iVar14 = (int)(uVar13 >> 0x20);
            pPVar7 = (this->fields).nodes;
            cVar4 = (int)pPVar7 < 0;
            iVar5 = iVar1;
            if (pPVar7 != (PluralFormsNode__Array *)0x0) {
              uVar12 = pPVar7->max_length;
              bVar8 = uVar12 < 2;
              cVar9 = SBORROW4(uVar12,2);
              cVar4 = (int)(uVar12 - 2) < 0;
              if (uVar12 < 3) goto code_?;
              pPVar10 = pPVar7->vector[2];
              cVar4 = (int)pPVar10 < 0;
              if (pPVar10 != (PluralFormsNode *)0x0) {
                in_stack_6 = (byte *)0x0;
                iVar5 = PluralFormsNode_Evaluate(pPVar10,0,n._4_4_);
                if (iVar14 == 0) {
                  return iVar5;
                }
                return iVar1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  cVar9 = '\0';
  bVar8 = 0;
  func_?();
  iVar1 = iVar5;
code_?:
  pcVar16 = (char *)((ulonglong)iVar1 >> 0x20);
  iVar14 = (int)iVar1;
  uVar17 = func_?();
  pbVar18 = (byte *)((ulonglong)uVar17 >> 0x20);
  pbVar19 = (byte *)uVar17;
  if (cVar9 == cVar4) {
code_?:
    return 0;
  }
  iVar15 = iVar14 + -1;
  pbVar20 = (byte *)(pcVar16 + 0x20104eda);
  bVar21 = *pbVar20 + (byte)extraout_ECX;
  bVar22 = CARRY1(*pbVar20,(byte)extraout_ECX) || CARRY1(bVar21,bVar8);
  *pbVar20 = bVar21 + bVar8;
  if (extraout_ECX == 1 || *pbVar20 == 0) {
    bVar8 = (byte)((ulonglong)uVar17 >> 8);
    bVar23 = CARRY1(*pbVar19,bVar8) || CARRY1(*pbVar19 + bVar8,bVar22);
    *pbVar19 = *pbVar19 + bVar8 + bVar22;
    if (extraout_ECX != 2 && *pbVar19 != 0) goto code_?;
    pbVar20 = pbVar19 + 0x20104eda;
    bVar22 = CARRY1(*pbVar20,bVar8) || CARRY1(*pbVar20 + bVar8,bVar23);
    *pbVar20 = *pbVar20 + bVar8 + bVar23;
    pcVar24 = (char *)(extraout_ECX + -3);
    if (pcVar24 == (char *)0x0 || *pbVar20 == 0) {
      bVar21 = (byte)((uint)pcVar24 >> 8);
      bVar23 = CARRY1(*pbVar18,bVar21) || CARRY1(*pbVar18 + bVar21,bVar22);
      *pbVar18 = *pbVar18 + bVar21 + bVar22;
      bVar8 = *pbVar18;
      *(int *)(iVar14 + 0xf) = (int)extraout_ST0;
      fVar25 = extraout_ST1 * (float10)*(double *)(iVar14 + 0xf);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        fVar25 = in_ST5;
      }
      bVar22 = CARRY1(bRam_?,bVar21);
      bVar21 = bRam_? + bVar21;
      bRam_? = bVar21 + bVar23;
      *(longlong *)(iVar14 + 0xd) = (longlong)fVar25;
      *pcVar24 = *pcVar24 + (char)uVar17 + '\x01';
      *(short *)(iVar14 + 0xc) = (short)in_ST2;
      in((short)CONCAT31(0x4a104e,(bVar22 || CARRY1(bVar21,bVar23)) + ')'));
      pbVar19 = in_stack_6;
      unaff_EBP = (PluralFormsNode__Class *)&stack0xfffffffc;
      if (in_stack_6 == (byte *)0x0) goto code_?;
      goto code_?;
    }
    *(char *)(iVar14 + 0xe) = *(char *)(iVar14 + 0xe) + bVar8 + bVar22;
    *pbVar19 = *pbVar19 + (char)uVar17;
  }
  else {
    pbVar19 = (byte *)((uint)pbVar19 | 0x33);
    unaff_EBP = this->klass;
code_?:
    this = (PluralFormsNode *)(unaff_EBP->_0).name;
    (**(code **)(pbVar19 + 0xc))(*(undefined4 *)(pbVar19 + 0x20),this,*(undefined4 *)(pbVar19 + 0x14));
    pcVar24 = (char *)0x0;
    if (this == (PluralFormsNode *)0x0) goto code_?;
    iVar15 = 0x10;
    pPVar2 = unaff_EBP;
    pcVar16 = (char *)0x0;
  }
  while (pPVar7 = (this->fields).nodes, pPVar7 != (PluralFormsNode__Array *)0x0) {
    if ((int)pPVar7->max_length <= (int)pcVar24) {
      pIVar26 = (pPVar2->_0).byval_arg.data.array;
      if (pIVar26 != (Il2CppArrayType *)0x0) {
        iVar5 = (*(code *)pIVar26->lobounds)();
        return iVar5;
      }
      break;
    }
    if ((char *)pPVar7->max_length <= pcVar16) goto code_?;
    if (*(int *)((int)pPVar7->vector + iVar15 + -0x10) != 0) {
      PluralFormsNode_IterateNodes
                (*(PluralFormsNode **)((int)pPVar7->vector + iVar15 + -0x10),
                 (PluralFormsNode_IterateNodesDelegate *)(pPVar2->_0).namespaze,
                 (PluralFormsNode_IterateNodesDelegate *)(pPVar2->_0).byval_arg.data.typeHandle,
                 (MethodInfo *)0x0);
    }
    pcVar24 = pcVar16 + 1;
    iVar15 = iVar15 + 4;
    pcVar16 = pcVar24;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  iVar5 = (*pcVar27)();
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
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).tracer;
  (this->fields).tracer = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

