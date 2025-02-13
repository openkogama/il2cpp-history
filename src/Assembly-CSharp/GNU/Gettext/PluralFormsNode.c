
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
  iVar9 = (int)((ulonglong)iVar1 >> 0x20);
  uVar10 = func_?();
  bVar11 = (byte)((uint)extraout_ECX >> 8);
  *(char *)(iVar9 + 0x40104efc) =
       *(char *)(iVar9 + 0x40104efc) + bVar11 + ((n & 0x100000000U) != 0);
  iVar8 = (int)uVar10 + 1;
  bVar12 = (char)extraout_ECX + *(char *)(iVar9 + 0x10) + *(char *)(iVar9 + 0x10);
  puVar13 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar12);
  cVar14 = (char)((uint)iVar8 >> 8);
  bVar15 = (byte)iVar8;
  sVar16 = CONCAT11(cVar14 >> 0xe,bVar15);
  bVar17 = (cVar14 >> 0xd & 1U) != 0;
  pbVar18 = (byte *)(CONCAT22((short)((uint)iVar8 >> 0x10),sVar16) + 2);
  bVar19 = CARRY1(*pbVar18,bVar15) || CARRY1(*pbVar18 + bVar15,bVar17);
  *pbVar18 = *pbVar18 + bVar15 + bVar17;
  pbVar18 = (byte *)((int)((ulonglong)uVar10 >> 0x20) + -3);
  bVar17 = CARRY1(*pbVar18,bVar12) || CARRY1(*pbVar18 + bVar12,bVar19);
  *pbVar18 = *pbVar18 + bVar12 + bVar19;
  bVar20 = (byte)((ulonglong)uVar10 >> 0x20);
  bVar15 = bVar20 + (byte)this;
  bVar19 = CARRY1(bVar20,(byte)this) || CARRY1(bVar15,bVar17);
  uVar21 = (undefined3)((ulonglong)uVar10 >> 0x28);
  bVar15 = bVar15 + bVar17;
  pbVar18 = (byte *)(CONCAT31(uVar21,bVar15) + -2);
  bVar17 = CARRY1(*pbVar18,bVar11) || CARRY1(*pbVar18 + bVar11,bVar19);
  *pbVar18 = *pbVar18 + bVar11 + bVar19;
  bVar22 = (byte)((uint)this >> 8);
  bVar20 = bVar15 + bVar22;
  cVar14 = bVar20 + bVar17;
  pcVar23 = (char *)CONCAT31(uVar21,cVar14);
  pcVar24 = (char *)((int)iVar1 + 0xc);
  *pcVar24 = *pcVar24 + -1;
  *pcVar23 = *pcVar23 + cVar14 + (CARRY1(bVar15,bVar22) || CARRY1(bVar20,bVar17));
  *(char *)(iVar9 + 0xf) = *(char *)(iVar9 + 0xf) + bVar12;
  *(char *)(iVar9 + 0xf) = *(char *)(iVar9 + 0xf) + bVar12;
  *puVar13 = *puVar13 & (int)sVar16;
  pcVar23[0x55104f01] = pcVar23[0x55104f01] + bVar11;
  if (in_stack_25 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(in_stack_25->fields)._._.invoke_impl)();
    uVar26 = 0;
    if (in_stack_27 != 0) {
      iVar8 = 0x10;
      while (iVar9 = *(int *)(in_stack_27 + 0xc), iVar9 != 0) {
        if (*(int *)(iVar9 + 0xc) <= (int)uVar26) {
          if (in_stack_28 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar3 = (*(in_stack_28->fields)._._.invoke_impl)();
            return iVar3;
          }
          break;
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar26) goto code_?;
        if (*(int *)(iVar8 + iVar9) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(iVar8 + iVar9),in_stack_25,in_stack_28,
                     (MethodInfo *)0x0);
        }
        uVar26 = uVar26 + 1;
        iVar8 = iVar8 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  iVar3 = (*pcVar29)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

