
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  lVar2 = ZEXT48(unaff_EDI) << 0x20;
  pPVar3 = (this->fields).token;
  lVar4 = ZEXT48(unaff_EDI) << 0x20;
  pPVar5 = this;
  if (pPVar3 != (PluralFormsToken *)0x0) {
    switch((pPVar3->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((undefined4)n,in_stack_6);
    default:
      return 0;
    case 6:
      pPVar7 = (this->fields).nodes;
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = lVar2;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar9;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              if (pPVar5 != (PluralFormsNode *)iVar9) {
                return 0;
              }
              if ((int)(uVar10 >> 0x20) != (int)((ulonglong)iVar9 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar7 = (this->fields).nodes;
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar9 >> 0x20);
              if ((int)pPVar5 < iVar11) {
                return 0;
              }
              if ((int)pPVar5 <= iVar11) {
                if ((uint)(uVar10 >> 0x20) <= (uint)iVar9) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar9 >> 0x20);
              if ((int)pPVar5 < iVar11) {
                return 0;
              }
              if ((int)pPVar5 <= iVar11) {
                if ((uint)(uVar10 >> 0x20) < (uint)iVar9) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar9 >> 0x20);
              if (iVar11 < (int)pPVar5) {
                return 0;
              }
              if (iVar11 <= (int)pPVar5) {
                if ((uint)iVar9 <= (uint)(uVar10 >> 0x20)) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar9 >> 0x20);
              if (iVar11 < (int)pPVar5) {
                return 0;
              }
              if (iVar11 <= (int)pPVar5) {
                if ((uint)iVar9 < (uint)(uVar10 >> 0x20)) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = pPVar7->max_length == 0;
        if (pPVar7->max_length < 2) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          if (iVar9 == 0) {
            return 0;
          }
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = 0;
            if (pPVar7->max_length == 0) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EBP);
              iVar9 = func_?();
              return iVar9;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar7 = (this->fields).nodes;
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar9;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              if ((pPVar5 == (PluralFormsNode *)iVar9) &&
                 ((int)(uVar10 >> 0x20) == (int)((ulonglong)iVar9 >> 0x20))) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar9;
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          lVar2 = CONCAT44((undefined4)n,iVar11);
          lVar4 = CONCAT44((undefined4)n,iVar11);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 == 0 && pPVar5 == (PluralFormsNode *)0x0) {
                return 0;
              }
              if (iVar9 == 0) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar9;
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar9 >> 0x20);
          lVar2 = CONCAT44((undefined4)n,iVar11);
          lVar4 = CONCAT44((undefined4)n,iVar11);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 != 0 || pPVar5 != (PluralFormsNode *)0x0) {
                return 1;
              }
              if (iVar9 == 0) {
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
      lVar4 = ZEXT48(unaff_EDI) << 0x20;
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        bVar8 = 0;
        if (pPVar7->max_length == 0) goto code_?;
        lVar4 = ZEXT48(unaff_EDI) << 0x20;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          lVar2 = CONCAT44(in_stack_6,(undefined4)n);
          lVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar9;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            bVar8 = pPVar7->max_length == 0;
            if (pPVar7->max_length < 2) goto code_?;
            lVar4 = lVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              lVar2 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)(uVar10 >> 0x20);
              pPVar7 = (this->fields).nodes;
              lVar4 = lVar2;
              if (pPVar7 != (PluralFormsNode__Array *)0x0) {
                bVar8 = pPVar7->max_length < 2;
                if (pPVar7->max_length < 3) goto code_?;
                if (pPVar7->vector[2] != (PluralFormsNode *)0x0) {
                  iVar9 = PluralFormsNode_Evaluate(pPVar7->vector[2],0,n._4_4_);
                  if (iVar11 == 0) {
                    return iVar9;
                  }
                  return lVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  this = pPVar5;
  bVar8 = 0;
  func_?();
  lVar2 = lVar4;
  pPVar5 = this;
code_?:
  this = pPVar5;
  doAfter = (PluralFormsNode_IterateNodesDelegate *)((ulonglong)lVar2 >> 0x20);
  func_?();
  pcVar12 = (code *)swi(0xb0);
  uVar13 = (*pcVar12)();
  pbVar14 = (byte *)((ulonglong)uVar13 >> 0x20);
  bVar15 = (byte)pPVar1;
  bVar16 = (byte)((uint)pPVar1 >> 8);
  bVar17 = bVar16 + bVar15;
  bVar18 = CARRY1(bVar16,bVar15) || CARRY1(bVar17,bVar8);
  bVar17 = bVar17 + bVar8;
  uVar19 = (undefined3)((ulonglong)uVar13 >> 8);
  iVar11 = CONCAT31(uVar19,0x4e);
  pbVar20 = (byte *)(iVar11 + -0x4a);
  bVar21 = (byte)((ulonglong)uVar13 >> 0x28);
  bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar18);
  *pbVar20 = *pbVar20 + bVar21 + bVar18;
  pbVar20 = (byte *)(iVar11 + -0x4a);
  bVar8 = *pbVar20;
  bVar16 = *pbVar20;
  *pbVar20 = bVar16 + bVar21 + bVar22;
  bVar18 = 0xb1 < bVar21 ||
           CARRY1(bVar21 + 0x4e,CARRY1(bVar8,bVar21) || CARRY1(bVar16 + bVar21,bVar22));
  pbVar20 = (byte *)(CONCAT31(uVar19,0x4e) + -0x4a);
  bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar18);
  *pbVar20 = *pbVar20 + bVar21 + bVar18;
  pbVar20 = pbVar14 + -0x4f;
  bVar18 = CARRY1(*pbVar20,bVar17) || CARRY1(*pbVar20 + bVar17,bVar22);
  *pbVar20 = *pbVar20 + bVar17 + bVar22;
  bVar21 = (byte)extraout_ECX;
  bVar22 = CARRY1(*pbVar14,bVar21) || CARRY1(*pbVar14 + bVar21,bVar18);
  *pbVar14 = *pbVar14 + bVar21 + bVar18;
  uVar19 = (undefined3)((ulonglong)uVar13 >> 0x28);
  iVar11 = CONCAT31(uVar19,0x4e);
  pbVar20 = (byte *)(iVar11 + 0x2a104eb2);
  bVar18 = CARRY1(*pbVar20,bVar15) || CARRY1(*pbVar20 + bVar15,bVar22);
  *pbVar20 = *pbVar20 + bVar15 + bVar22;
  pbVar20 = (byte *)(iVar11 + 0x42104eb3);
  bVar8 = *pbVar20;
  bVar16 = *pbVar20;
  *pbVar20 = bVar16 + bVar17 + bVar18;
  bVar18 = 0xb1 < bVar21 ||
           CARRY1(bVar21 + 0x4e,CARRY1(bVar8,bVar17) || CARRY1(bVar16 + bVar17,bVar18));
  pbVar20 = (byte *)(extraout_ECX + -0x4b);
  bVar8 = *pbVar20;
  bVar16 = *pbVar20;
  *pbVar20 = bVar16 + 0x4e + bVar18;
  in((short)CONCAT31(uVar19,(0xb1 < bVar8 || CARRY1(bVar16 + 0x4e,bVar18)) + -100));
  if (in_stack_6 != 0) {
    doBefore = *(PluralFormsNode_IterateNodesDelegate **)(in_stack_6 + 0x14);
    (**(code **)(in_stack_6 + 0xc))();
    uVar23 = 0;
    if (this != (PluralFormsNode *)0x0) {
      iVar11 = 0x10;
      while (pPVar7 = (this->fields).nodes, pPVar7 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar7->max_length <= (int)uVar23) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar9 = (*(doAfter->fields)._._.invoke_impl)();
            return iVar9;
          }
          break;
        }
        if (pPVar7->max_length <= uVar23) goto code_?;
        if (*(int *)((int)pPVar7->vector + iVar11 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar7->vector + iVar11 + -0x10),doBefore,doAfter,
                     (MethodInfo *)0x0);
        }
        uVar23 = uVar23 + 1;
        iVar11 = iVar11 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  iVar9 = (*pcVar12)();
  return iVar9;
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

