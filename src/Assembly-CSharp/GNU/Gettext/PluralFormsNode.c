
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  iVar1 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar2 = (this->fields).token;
  iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
  if (pPVar2 != (PluralFormsToken *)0x0) {
    switch((pPVar2->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((undefined4)n,in_stack_4);
    default:
      return 0;
    case 6:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = iVar1;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              if ((int)iVar6 != (int)iVar3) {
                return 0;
              }
              if ((int)(uVar7 >> 0x20) != (int)((ulonglong)iVar3 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar8 < iVar9) {
                return 0;
              }
              if (iVar8 <= iVar9) {
                if ((uint)(uVar7 >> 0x20) <= (uint)iVar3) {
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
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar8 < iVar9) {
                return 0;
              }
              if (iVar8 <= iVar9) {
                if ((uint)(uVar7 >> 0x20) < (uint)iVar3) {
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
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar9 < iVar8) {
                return 0;
              }
              if (iVar9 <= iVar8) {
                if ((uint)iVar3 <= (uint)(uVar7 >> 0x20)) {
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
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar9 < iVar8) {
                return 0;
              }
              if (iVar9 <= iVar8) {
                if ((uint)iVar3 < (uint)(uVar7 >> 0x20)) {
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
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length < 2) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar3 == 0) {
            return 0;
          }
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length == 0) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EBP);
              iVar3 = func_?();
              return iVar3;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              if (((int)iVar6 == (int)iVar3) &&
                 ((int)(uVar7 >> 0x20) == (int)((ulonglong)iVar3 >> 0x20))) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xe:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          iVar8 = (int)iVar6;
          pPVar5 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar8);
          iVar3 = CONCAT44((undefined4)n,iVar8);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar8 == 0 && (int)((ulonglong)iVar6 >> 0x20) == 0) {
                return 0;
              }
              if (iVar3 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xf:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          iVar8 = (int)iVar6;
          pPVar5 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar8);
          iVar3 = CONCAT44((undefined4)n,iVar8);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar8 != 0 || (int)((ulonglong)iVar6 >> 0x20) != 0) {
                return 1;
              }
              if (iVar3 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0x10:
      pPVar5 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar1 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)(uVar7 >> 0x20);
              pPVar5 = (this->fields).nodes;
              iVar3 = iVar1;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                if (pPVar5->max_length < 3) goto code_?;
                if (pPVar5->vector[2] != (PluralFormsNode *)0x0) {
                  iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[2],0,n._4_4_);
                  if (iVar8 == 0) {
                    return iVar3;
                  }
                  return iVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  iVar1 = iVar3;
code_?:
  iVar8 = (int)iVar1;
  uVar7 = func_?();
  uVar10 = (uint)uVar7;
  pbVar11 = (byte *)(iVar8 + 0x10);
  bVar12 = (byte)extraout_CX;
  *pbVar11 = *pbVar11 >> (bVar12 & 7) | *pbVar11 << 8 - (bVar12 & 7);
  uVar13 = *(uint *)((ulonglong)iVar1 >> 0x20);
  pbVar11 = (byte *)(iVar8 + 0x10);
  *pbVar11 = *pbVar11 >> (bVar12 & 7) | *pbVar11 << 8 - (bVar12 & 7);
  bVar14 = (extraout_CX & 0x1f) == 0;
  cVar15 = (char)(uVar7 >> 0x20);
  bVar16 = cVar15 << 5 |
           (byte)(CONCAT11(bVar14 * (uVar10 < uVar13) | !bVar14 * ((char)*pbVar11 < '\0'),cVar15) >> 4
                 );
  uVar17 = (undefined3)(uVar7 >> 0x28);
  bVar14 = (uVar7 & 0x800000000) != 0;
  pbVar11 = (byte *)(uVar10 - 0x26);
  bVar18 = (byte)(uVar10 + 2);
  bVar19 = CARRY1(*pbVar11,bVar18) || CARRY1(*pbVar11 + bVar18,bVar14);
  *pbVar11 = *pbVar11 + bVar18 + bVar14;
  pbVar11 = (byte *)(CONCAT31(uVar17,bVar16) + -0x2d);
  bVar20 = CARRY1(*pbVar11,bVar12) || CARRY1(*pbVar11 + bVar12,bVar19);
  *pbVar11 = *pbVar11 + bVar12 + bVar19;
  bVar21 = (byte)this;
  bVar22 = bVar16 + bVar21 + bVar20;
  puVar23 = (uint *)(iVar8 + 0xe);
  *puVar23 = *puVar23 >> (bVar12 & 0x1f) | *puVar23 << 0x20 - (bVar12 & 0x1f);
  bVar14 = (extraout_CX & 0x1f) == 0;
  bVar24 = bVar14 * (CARRY1(bVar16,bVar21) || CARRY1(bVar16 + bVar21,bVar20)) |
           !bVar14 * ((int)*puVar23 < 0);
  bVar25 = (byte)((uint)this >> 8);
  bVar16 = bVar22 + bVar25;
  bVar14 = CARRY1(bVar22,bVar25) || CARRY1(bVar16,bVar24);
  iVar8 = CONCAT31(uVar17,bVar16 + bVar24);
  pbVar11 = (byte *)(iVar8 + 0x12104ed5);
  bVar19 = CARRY1(*pbVar11,bVar12) || CARRY1(*pbVar11 + bVar12,bVar14);
  *pbVar11 = *pbVar11 + bVar12 + bVar14;
  pbVar11 = (byte *)(CONCAT31(CONCAT21((short)(uVar10 + 2 >> 0x10),bVar18 / 0x4e),-bVar19) + 0x21104ed6
                   );
  bVar16 = *pbVar11;
  bVar18 = *pbVar11;
  *pbVar11 = bVar18 + bVar21 + bVar19;
  pcVar26 = (char *)(iVar8 + 0x55104ed7);
  *pcVar26 = *pcVar26 + (char)(extraout_CX >> 8) +
            (CARRY1(bVar16,bVar21) || CARRY1(bVar18 + bVar21,bVar19));
  if (in_stack_27 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(in_stack_27->fields)._._.invoke_impl)((in_stack_27->fields)._._.method_code);
    uVar13 = 0;
    if (in_stack_28 != 0) {
      iVar8 = 0x10;
      while (iVar9 = *(int *)(in_stack_28 + 0xc), iVar9 != 0) {
        if (*(int *)(iVar9 + 0xc) <= (int)uVar13) {
          if (in_stack_29 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar3 = (*(in_stack_29->fields)._._.invoke_impl)();
            return iVar3;
          }
          break;
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar13) goto code_?;
        if (*(int *)(iVar8 + iVar9) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(iVar8 + iVar9),in_stack_27,in_stack_29,
                     (MethodInfo *)0x0);
        }
        uVar13 = uVar13 + 1;
        iVar8 = iVar8 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  iVar3 = (*pcVar30)();
  return iVar3;
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

