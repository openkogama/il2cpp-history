
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = iVar1;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              if ((int)iVar7 != (int)iVar3) {
                return 0;
              }
              if ((int)(uVar8 >> 0x20) != (int)((ulonglong)iVar3 >> 0x20)) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar9 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar9 < iVar10) {
                return 0;
              }
              if (iVar9 <= iVar10) {
                if ((uint)(uVar8 >> 0x20) <= (uint)iVar3) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar9 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar9 < iVar10) {
                return 0;
              }
              if (iVar9 <= iVar10) {
                if ((uint)(uVar8 >> 0x20) < (uint)iVar3) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar9 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar10 < iVar9) {
                return 0;
              }
              if (iVar10 <= iVar9) {
                if ((uint)iVar3 <= (uint)(uVar8 >> 0x20)) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar9 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar10 < iVar9) {
                return 0;
              }
              if (iVar10 <= iVar9) {
                if ((uint)iVar3 < (uint)(uVar8 >> 0x20)) {
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
        cVar6 = pPVar5->max_length == 0;
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
            cVar6 = '\0';
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              if (((int)iVar7 == (int)iVar3) &&
                 ((int)(uVar8 >> 0x20) == (int)((ulonglong)iVar3 >> 0x20))) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          iVar9 = (int)iVar7;
          pPVar5 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar9);
          iVar3 = CONCAT44((undefined4)n,iVar9);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar9 == 0 && (int)((ulonglong)iVar7 >> 0x20) == 0) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          iVar9 = (int)iVar7;
          pPVar5 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar9);
          iVar3 = CONCAT44((undefined4)n,iVar9);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar9 != 0 || (int)((ulonglong)iVar7 >> 0x20) != 0) {
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
        cVar6 = '\0';
        if (pPVar5->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar1 = CONCAT44(in_stack_4,(undefined4)n);
          PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar3 = CONCAT44(in_stack_4,(undefined4)n);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            cVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar1 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar9 = (int)(uVar8 >> 0x20);
              pPVar5 = (this->fields).nodes;
              iVar3 = iVar1;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                cVar6 = pPVar5->max_length < 2;
                if (pPVar5->max_length < 3) goto code_?;
                if (pPVar5->vector[2] != (PluralFormsNode *)0x0) {
                  iVar3 = PluralFormsNode_Evaluate(pPVar5->vector[2],0,n._4_4_);
                  if (iVar9 == 0) {
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
  cVar6 = '\0';
  func_?();
  iVar1 = iVar3;
code_?:
  pbVar11 = (byte *)((ulonglong)iVar1 >> 0x20);
  uVar12 = func_?();
  pcVar13 = (char *)((ulonglong)uVar12 >> 0x20);
  pcVar14 = (char *)uVar12;
  cVar15 = (char)((ulonglong)uVar12 >> 0x28);
  *pcVar14 = *pcVar14 + cVar15 + cVar6;
  bVar16 = (byte)uVar12;
  *pcVar14 = *pcVar14 + cVar15 + (bVar16 < *pbVar11);
  pcVar14[0x30104ea8] = pcVar14[0x30104ea8] + cVar15 + (bVar16 < pbVar11[1]);
  bVar17 = (byte)((uint)this >> 8);
  *pcVar13 = *pcVar13 + bVar17 + (bVar16 < pbVar11[2]);
  pbVar18 = (byte *)(pcVar13 + -0x56);
  bVar19 = *pbVar18;
  bVar20 = (byte)this;
  *pbVar18 = *pbVar18 + bVar20;
  bVar21 = (byte)((ushort)extraout_CX >> 8);
  bVar22 = (byte)((ulonglong)uVar12 >> 0x20);
  bVar23 = bVar22 + bVar21;
  bVar24 = CARRY1(bVar22,bVar21) || CARRY1(bVar23,CARRY1(bVar19,bVar20));
  pbVar25 = (byte *)CONCAT31((int3)((ulonglong)uVar12 >> 0x28),bVar23 + CARRY1(bVar19,bVar20));
  pbVar11[3] = bVar16;
  pbVar18 = pbVar25 + -0x55;
  bVar26 = CARRY1(*pbVar18,bVar17) || CARRY1(*pbVar18 + bVar17,bVar24);
  *pbVar18 = *pbVar18 + bVar17 + bVar24;
  bVar24 = CARRY1(*pbVar25,bVar16) || CARRY1(*pbVar25 + bVar16,bVar26);
  *pbVar25 = *pbVar25 + bVar16 + bVar26;
  pbVar18 = &UNK_? +
           CONCAT31((int3)((ulonglong)uVar12 >> 8),*(undefined1 *)((int)iVar1 + -8));
  bVar19 = *pbVar18;
  bVar23 = *pbVar18 + (byte)extraout_CX;
  *pbVar18 = bVar23 + bVar24;
  pbVar25[0x55104ead] =
       pbVar25[0x55104ead] + bVar20 + (CARRY1(bVar19,(byte)extraout_CX) || CARRY1(bVar23,bVar24));
  if (in_stack_27 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(in_stack_27->fields)._._.invoke_impl)((in_stack_27->fields)._._.method_code);
    uVar28 = 0;
    if (in_stack_29 != 0) {
      iVar9 = 0x10;
      while (iVar10 = *(int *)(in_stack_29 + 0xc), iVar10 != 0) {
        if (*(int *)(iVar10 + 0xc) <= (int)uVar28) {
          if (in_stack_30 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar3 = (*(in_stack_30->fields)._._.invoke_impl)();
            return iVar3;
          }
          break;
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar28) goto code_?;
        if (*(int *)(iVar9 + iVar10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(iVar9 + iVar10),in_stack_27,in_stack_30,
                     (MethodInfo *)0x0);
        }
        uVar28 = uVar28 + 1;
        iVar9 = iVar9 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  iVar3 = (*pcVar31)();
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

