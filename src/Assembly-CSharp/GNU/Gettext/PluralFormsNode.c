
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  iVar2 = CONCAT44(unaff_EDI,unaff_ESI);
  uVar3 = (undefined2)unaff_EBP;
  uVar4 = (undefined2)((uint)unaff_EBP >> 0x10);
  pPVar5 = (this->fields).token;
  iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar7 = this;
  if (pPVar5 == (PluralFormsToken *)0x0) goto code_?;
  uVar8 = (undefined4)n;
  switch((pPVar5->fields).type) {
  case 2:
    return (int64_t)(((this->fields).token)->fields).number;
  case 3:
    return CONCAT26(n._2_2_,CONCAT24((undefined2)n,CONCAT22(in_stack_9,in_stack_10)));
  default:
    return 0;
  case 6:
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 == (PluralFormsNode__Array *)0x0) break;
    if (pPVar11->max_length != 0) {
      iVar6 = iVar2;
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)iVar6;
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            if (pPVar7 != (PluralFormsNode *)iVar6) {
              return 0;
            }
            if (CONCAT22(uVar14,uVar13) != (int)((ulonglong)iVar6 >> 0x20)) {
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
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            iVar15 = (int)((ulonglong)iVar6 >> 0x20);
            if ((int)pPVar7 < iVar15) {
              return 0;
            }
            if ((int)pPVar7 <= iVar15) {
              if (CONCAT22(uVar14,uVar13) <= (uint)iVar6) {
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
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            iVar15 = (int)((ulonglong)iVar6 >> 0x20);
            if ((int)pPVar7 < iVar15) {
              return 0;
            }
            if ((int)pPVar7 <= iVar15) {
              if (CONCAT22(uVar14,uVar13) < (uint)iVar6) {
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
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            iVar15 = (int)((ulonglong)iVar6 >> 0x20);
            if (iVar15 < (int)pPVar7) {
              return 0;
            }
            if (iVar15 <= (int)pPVar7) {
              if ((uint)iVar6 <= CONCAT22(uVar14,uVar13)) {
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
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            iVar15 = (int)((ulonglong)iVar6 >> 0x20);
            if (iVar15 < (int)pPVar7) {
              return 0;
            }
            if (iVar15 <= (int)pPVar7) {
              if ((uint)iVar6 < CONCAT22(uVar14,uVar13)) {
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
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length < 2) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[1],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
        if (iVar6 == 0) {
          return 0;
        }
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length == 0) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
            PluralFormsNode_Evaluate
                      (pPVar11->vector[0],n & 0xffffffff,(MethodInfo *)CONCAT22(uVar4,uVar3));
            iVar6 = func_?();
            return iVar6;
          }
        }
      }
    }
    break;
  case 0xd:
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)iVar6;
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            if ((pPVar7 == (PluralFormsNode *)iVar6) &&
               (CONCAT22(uVar14,uVar13) == (int)((ulonglong)iVar6 >> 0x20))) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        iVar16 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar16 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar2 = CONCAT44(uVar8,(int)iVar16);
        iVar6 = CONCAT44(uVar8,(int)iVar16);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            if (iVar16 == 0) {
              return 0;
            }
            if (iVar6 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xf:
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        iVar16 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)((ulonglong)iVar16 >> 0x20);
        pPVar11 = (this->fields).nodes;
        iVar2 = CONCAT44(uVar8,(int)iVar16);
        iVar6 = CONCAT44(uVar8,(int)iVar16);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            iVar6 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            if (iVar16 != 0) {
              return 1;
            }
            if (iVar6 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0x10:
    pPVar11 = (this->fields).nodes;
    iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar11 != (PluralFormsNode__Array *)0x0) {
      if (pPVar11->max_length == 0) goto code_?;
      iVar6 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar11->vector[0] != (PluralFormsNode *)0x0) {
        uVar12 = CONCAT22(in_stack_9,in_stack_10);
        iVar2 = CONCAT44(uVar12,uVar8);
        iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar7 = (PluralFormsNode *)iVar6;
        pPVar11 = (this->fields).nodes;
        iVar6 = CONCAT44(uVar12,uVar8);
        if (pPVar11 != (PluralFormsNode__Array *)0x0) {
          if (pPVar11->max_length < 2) goto code_?;
          iVar6 = iVar2;
          if (pPVar11->vector[1] != (PluralFormsNode *)0x0) {
            uVar13 = 0;
            uVar14 = 0;
            iVar2 = PluralFormsNode_Evaluate
                               (pPVar11->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT22(uVar4,uVar3));
            pPVar11 = (this->fields).nodes;
            iVar6 = iVar2;
            if (pPVar11 != (PluralFormsNode__Array *)0x0) {
              if (pPVar11->max_length < 3) goto code_?;
              if (pPVar11->vector[2] != (PluralFormsNode *)0x0) {
                iVar6 = PluralFormsNode_Evaluate(pPVar11->vector[2],0,n._4_4_);
                if (CONCAT22(uVar14,uVar13) == 0) {
                  return iVar6;
                }
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  iVar2 = iVar6;
code_?:
  this._0_2_ = SUB42(pPVar7,0);
  iVar17 = (int)((ulonglong)iVar2 >> 0x20);
  n._0_2_ = 0xe6f3;
  n._2_2_ = 0x104c;
  uVar18 = func_?();
  uVar19 = (uint)uVar18;
  iVar15 = uVar19 + 0xc0efb31f;
  if (extraout_ECX == 1 || iVar15 != 0) {
    bVar20 = (byte)((ulonglong)uVar18 >> 0x20);
    bVar21 = (byte)iVar15 + bVar20;
    bVar22 = CARRY1((byte)iVar15,bVar20) || CARRY1(bVar21,uVar19 < 0x3f104ce1);
    uVar23 = (undefined3)((uint)iVar15 >> 8);
    bVar21 = bVar21 + (uVar19 < 0x3f104ce1);
    out(0x4c,bVar21);
    bVar24 = CARRY1(bVar21,bVar20) || CARRY1(bVar21 + bVar20,bVar22);
    bVar21 = bVar21 + bVar20 + bVar22;
    out(0x4c,bVar21);
    pbVar25 = (byte *)(CONCAT31(uVar23,bVar21) + -0x1f);
    bVar22 = CARRY1(*pbVar25,bVar20) || CARRY1(*pbVar25 + bVar20,bVar24);
    *pbVar25 = *pbVar25 + bVar20 + bVar24;
    bVar24 = CARRY1(bVar21,bVar20) || CARRY1(bVar21 + bVar20,bVar22);
    cVar26 = bVar21 + bVar20 + bVar22;
    pPVar11 = (PluralFormsNode__Array *)CONCAT31(uVar23,cVar26);
    out(0x4c,cVar26);
    bVar21 = bVar20 + (byte)pPVar1;
    bVar22 = CARRY1(bVar20,(byte)pPVar1) || CARRY1(bVar21,bVar24);
    uVar23 = (undefined3)((ulonglong)uVar18 >> 0x28);
    bVar21 = bVar21 + bVar24;
    iVar27 = extraout_ECX + -2;
    if (iVar27 != 0 && bVar21 == 0) goto code_?;
    pbVar25 = (byte *)(CONCAT31(uVar23,bVar21) + -0x1e);
    bVar28 = (byte)((uint)iVar27 >> 8);
    bVar20 = *pbVar25 + bVar28;
    bVar24 = CARRY1(*pbVar25,bVar28) || CARRY1(bVar20,bVar22);
    *pbVar25 = bVar20 + bVar22;
    bVar28 = (byte)((uint)pPVar1 >> 8);
    bVar20 = bVar21 + bVar28;
    bVar22 = CARRY1(bVar21,bVar28) || CARRY1(bVar20,bVar24);
    iVar17 = CONCAT31(uVar23,bVar20 + bVar24);
    iVar27 = extraout_ECX + -3;
    if (iVar27 != 0) goto code_?;
    bVar21 = *(byte *)(iVar17 + 0x1a104ce3);
    bVar24 = CARRY1(bVar21,bVar22);
    *(byte *)(iVar17 + 0x1a104ce3) = bVar21 + bVar22;
    in(0x4c);
    pbVar25 = (byte *)(iVar17 + 0x28104ce4);
    bVar21 = *pbVar25;
    bVar28 = (byte)((uint)iVar15 >> 8);
    bVar20 = *pbVar25 + bVar28;
    *pbVar25 = bVar20 + bVar24;
    uVar8 = in(0x4c);
    *(char *)(extraout_ECX + 0x3a104ce2) =
         *(char *)(extraout_ECX + 0x3a104ce2) + (char)((ulonglong)uVar18 >> 0x28) +
         (CARRY1(bVar21,bVar28) || CARRY1(bVar20,bVar24));
    out(0x4c,(char)uVar8);
    in((short)iVar17);
    iVar15 = CONCAT22(in_stack_9,in_stack_10);
    if (iVar15 != 0) {
      (**(code **)(iVar15 + 0xc))((short)*(undefined4 *)(iVar15 + 0x20),this._0_2_);
      iVar17 = 0;
      pPVar1 = pPVar7;
      goto code_?;
    }
  }
  else {
    pPVar29 = &pPVar1[-0xa3f5d].fields;
    *(char *)&pPVar29->token = *(char *)&pPVar29->token << 1 | *(char *)&pPVar29->token < '\0';
code_?:
    iVar27 = 0;
    if (pPVar1 != (PluralFormsNode *)0x0) {
      n._0_2_ = (undefined2)iVar2;
      n._2_2_ = (undefined2)((ulonglong)iVar2 >> 0x10);
      iVar2 = CONCAT44(iVar17,iVar17 + 0x10);
code_?:
      while( true ) {
        pPVar11 = (pPVar1->fields).nodes;
code_?:
        uVar19 = (uint)((ulonglong)iVar2 >> 0x20);
        iVar15 = (int)iVar2;
        if (pPVar11 == (PluralFormsNode__Array *)0x0) goto code_?;
        if ((int)pPVar11->max_length <= iVar27) {
          if (CONCAT22(n._2_2_,(undefined2)n) != 0) {
            iVar6 = (**(code **)(CONCAT22(n._2_2_,(undefined2)n) + 0xc))();
            return iVar6;
          }
          goto code_?;
        }
        if (pPVar11->max_length <= uVar19) break;
        if (*(int *)((int)pPVar11->vector + iVar15 + -0x10) != 0) {
          n._0_2_ = 0;
          n._2_2_ = 0;
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar11->vector + iVar15 + -0x10),
                     (PluralFormsNode_IterateNodesDelegate *)0x0,
                     (PluralFormsNode_IterateNodesDelegate *)0x0,(MethodInfo *)0x0);
        }
        iVar27 = uVar19 + 1;
        iVar2 = CONCAT44(iVar27,iVar15 + 4);
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  iVar6 = (*pcVar30)();
  return iVar6;
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

