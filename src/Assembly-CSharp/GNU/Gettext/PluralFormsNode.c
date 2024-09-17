
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  iVar2 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar3 = (this->fields).token;
  iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = iVar2;
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar8;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              if (pPVar5 != (PluralFormsNode *)iVar4) {
                return 0;
              }
              if ((int)(uVar9 >> 0x20) != (int)((ulonglong)iVar4 >> 0x20)) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar8 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar4 >> 0x20);
              if ((int)pPVar5 < iVar10) {
                return 0;
              }
              if ((int)pPVar5 <= iVar10) {
                if ((uint)(uVar9 >> 0x20) <= (uint)iVar4) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar8 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar4 >> 0x20);
              if ((int)pPVar5 < iVar10) {
                return 0;
              }
              if ((int)pPVar5 <= iVar10) {
                if ((uint)(uVar9 >> 0x20) < (uint)iVar4) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar8 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar10 < (int)pPVar5) {
                return 0;
              }
              if (iVar10 <= (int)pPVar5) {
                if ((uint)iVar4 <= (uint)(uVar9 >> 0x20)) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar8 >> 0x20);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              iVar10 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar10 < (int)pPVar5) {
                return 0;
              }
              if (iVar10 <= (int)pPVar5) {
                if ((uint)iVar4 < (uint)(uVar9 >> 0x20)) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length < 2) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar8 >> 0x20);
          if (iVar8 == 0) {
            return 0;
          }
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length == 0) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EBP);
              iVar4 = func_?();
              return iVar4;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar7 = (this->fields).nodes;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar8;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              if ((pPVar5 == (PluralFormsNode *)iVar4) &&
                 ((int)(uVar9 >> 0x20) == (int)((ulonglong)iVar4 >> 0x20))) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          iVar10 = (int)iVar4;
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar4 >> 0x20);
          iVar2 = CONCAT44((undefined4)n,iVar10);
          iVar4 = CONCAT44((undefined4)n,iVar10);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar10 == 0 && pPVar5 == (PluralFormsNode *)0x0) {
                return 0;
              }
              if (iVar4 == 0) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          iVar10 = (int)iVar4;
          pPVar7 = (this->fields).nodes;
          pPVar5 = (PluralFormsNode *)((ulonglong)iVar4 >> 0x20);
          iVar2 = CONCAT44((undefined4)n,iVar10);
          iVar4 = CONCAT44((undefined4)n,iVar10);
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar10 != 0 || pPVar5 != (PluralFormsNode *)0x0) {
                return 1;
              }
              if (iVar4 == 0) {
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
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar7 != (PluralFormsNode__Array *)0x0) {
        if (pPVar7->max_length == 0) goto code_?;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        pPVar5 = this;
        if (pPVar7->vector[0] != (PluralFormsNode *)0x0) {
          iVar2 = CONCAT44(in_stack_6,(undefined4)n);
          iVar4 = CONCAT44(in_stack_6,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar7->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (PluralFormsNode *)iVar8;
          pPVar7 = (this->fields).nodes;
          if (pPVar7 != (PluralFormsNode__Array *)0x0) {
            if (pPVar7->max_length < 2) goto code_?;
            iVar4 = iVar2;
            if (pPVar7->vector[1] != (PluralFormsNode *)0x0) {
              uVar9 = n & 0xffffffff;
              iVar2 = PluralFormsNode_Evaluate(pPVar7->vector[1],uVar9,unaff_EBP);
              iVar10 = (int)(uVar9 >> 0x20);
              pPVar7 = (this->fields).nodes;
              iVar4 = iVar2;
              if (pPVar7 != (PluralFormsNode__Array *)0x0) {
                if (pPVar7->max_length < 3) goto code_?;
                if (pPVar7->vector[2] != (PluralFormsNode *)0x0) {
                  iVar4 = PluralFormsNode_Evaluate(pPVar7->vector[2],0,n._4_4_);
                  if (iVar10 == 0) {
                    return iVar4;
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
  this = pPVar5;
  func_?();
  iVar2 = iVar4;
  pPVar5 = this;
code_?:
  this = pPVar5;
  puVar11 = (undefined1 *)((ulonglong)iVar2 >> 0x20);
  puVar12 = (undefined1 *)iVar2;
  uVar13 = func_?();
  bVar14 = (n & 0x40000000000U) != 0;
  bVar15 = (n & 0x100000000U) != 0;
  pbVar16 = puVar11 + (uint)bVar14 * -2 + 1;
  *puVar11 = *puVar12;
  pbVar17 = pbVar16 + 0x40104ea4;
  bVar18 = (byte)((ushort)extraout_CX >> 8);
  bVar19 = CARRY1(*pbVar17,bVar18) || CARRY1(*pbVar17 + bVar18,bVar15);
  *pbVar17 = *pbVar17 + bVar18 + bVar15;
  pbVar20 = pbVar16 + (uint)bVar14 * -2 + 1;
  bVar21 = (byte)uVar13;
  *pbVar16 = bVar21;
  pbVar17 = (byte *)((int)uVar13 + -0x56);
  bVar15 = CARRY1(*pbVar17,bVar21) || CARRY1(*pbVar17 + bVar21,bVar19);
  *pbVar17 = *pbVar17 + bVar21 + bVar19;
  bVar19 = CARRY1(bVar21,bVar21) || CARRY1(bVar21 * '\x02',bVar15);
  bVar21 = bVar21 * '\x02' + bVar15;
  iVar22 = CONCAT31((int3)((ulonglong)uVar13 >> 8),bVar21);
  pbVar16 = pbVar20 + (uint)bVar14 * -2 + 1;
  iVar10 = (uint)bVar14 * -2 + (uint)bVar14 * -2 + -1;
  *pbVar20 = puVar12[(uint)bVar14 * -2 + -2];
  pbVar17 = (byte *)(iVar22 + -0x56);
  bVar15 = CARRY1(*pbVar17,bVar21) || CARRY1(*pbVar17 + bVar21,bVar19);
  *pbVar17 = *pbVar17 + bVar21 + bVar19;
  pbVar17 = (byte *)((int)((ulonglong)uVar13 >> 0x20) + -0x5b);
  bVar23 = (byte)extraout_CX;
  bVar19 = CARRY1(*pbVar17,bVar23) || CARRY1(*pbVar17 + bVar23,bVar15);
  *pbVar17 = *pbVar17 + bVar23 + bVar15;
  bVar24 = (byte)((ulonglong)uVar13 >> 0x20);
  bVar25 = (byte)pPVar1;
  bVar21 = bVar24 + bVar25;
  bVar15 = CARRY1(bVar24,bVar25) || CARRY1(bVar21,bVar19);
  uVar26 = (undefined3)((ulonglong)uVar13 >> 0x28);
  cVar27 = bVar21 + bVar19;
  *(undefined4 *)pbVar16 = *(undefined4 *)(puVar12 + iVar10 + -3);
  pbVar17 = (byte *)(CONCAT31(uVar26,cVar27) + -0x5a);
  bVar21 = *pbVar17;
  bVar24 = *pbVar17;
  *pbVar17 = bVar24 + bVar18 + bVar15;
  iVar28 = CONCAT31(uVar26,cVar27 + (char)((uint)pPVar1 >> 8) +
                           (CARRY1(bVar21,bVar18) || CARRY1(bVar24 + bVar18,bVar15)));
  doAfter = (PluralFormsNode_IterateNodesDelegate *)
            (pbVar16 + (uint)bVar14 * -8 + 4 + (uint)bVar14 * -2 + 1);
  pcVar29 = (char *)(iVar28 + 0x12104ea7);
  *pcVar29 = *pcVar29 + bVar23 +
            ((byte)puVar12[(uint)bVar14 * -8 + iVar10 + -1] < pbVar16[(uint)bVar14 * -8 + 4]);
  pcVar29 = (char *)(iVar22 + 0x21104ea8);
  *pcVar29 = *pcVar29 + bVar25;
  in((short)iVar28);
  if (in_stack_6 != 0) {
    doBefore = *(PluralFormsNode_IterateNodesDelegate **)(in_stack_6 + 0x14);
    (**(code **)(in_stack_6 + 0xc))();
    uVar30 = 0;
    if (this != (PluralFormsNode *)0x0) {
      iVar10 = 0x10;
      while (pPVar7 = (this->fields).nodes, pPVar7 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar7->max_length <= (int)uVar30) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar4 = (*(doAfter->fields)._._.invoke_impl)();
            return iVar4;
          }
          break;
        }
        if (pPVar7->max_length <= uVar30) goto code_?;
        if (*(int *)((int)pPVar7->vector + iVar10 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar7->vector + iVar10 + -0x10),doBefore,doAfter,
                     (MethodInfo *)0x0);
        }
        uVar30 = uVar30 + 1;
        iVar10 = iVar10 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  iVar4 = (*pcVar31)();
  return iVar4;
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

