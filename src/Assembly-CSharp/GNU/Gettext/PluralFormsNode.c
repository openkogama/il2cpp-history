
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
      return CONCAT44((undefined4)n,CONCAT22(in_stack_4,in_stack_5));
    default:
      return 0;
    case 6:
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = iVar1;
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              if ((int)iVar9 != (int)iVar3) {
                return 0;
              }
              if ((int)(uVar10 >> 0x20) != (int)((ulonglong)iVar3 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar11 < iVar12) {
                return 0;
              }
              if (iVar11 <= iVar12) {
                if ((uint)(uVar10 >> 0x20) <= (uint)iVar3) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar11 < iVar12) {
                return 0;
              }
              if (iVar11 <= iVar12) {
                if ((uint)(uVar10 >> 0x20) < (uint)iVar3) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar12 < iVar11) {
                return 0;
              }
              if (iVar12 <= iVar11) {
                if ((uint)iVar3 <= (uint)(uVar10 >> 0x20)) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar3 >> 0x20);
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar3 >> 0x20);
              if (iVar12 < iVar11) {
                return 0;
              }
              if (iVar12 <= iVar11) {
                if ((uint)iVar3 < (uint)(uVar10 >> 0x20)) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = pPVar6->max_length == 0;
        if (pPVar6->max_length < 2) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar3 == 0) {
            return 0;
          }
          pPVar6 = (this->fields).nodes;
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = 0;
            if (pPVar6->max_length == 0) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              PluralFormsNode_Evaluate(pPVar6->vector[0],uVar10,unaff_EBP);
              in_stack_4 = (ushort)(uVar10 >> 0x30);
              iVar3 = func_?();
              return iVar3;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          iVar9 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              if (((int)iVar9 == (int)iVar3) &&
                 ((int)(uVar10 >> 0x20) == (int)((ulonglong)iVar3 >> 0x20))) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xe:
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          iVar9 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar9;
          pPVar6 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar11);
          iVar3 = CONCAT44((undefined4)n,iVar11);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 == 0 && (int)((ulonglong)iVar9 >> 0x20) == 0) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          iVar9 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar9;
          pPVar6 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar11);
          iVar3 = CONCAT44((undefined4)n,iVar11);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 != 0 || (int)((ulonglong)iVar9 >> 0x20) != 0) {
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
      pPVar6 = (this->fields).nodes;
      iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar6 != (PluralFormsNode__Array *)0x0) {
        bVar7 = 0;
        if (pPVar6->max_length == 0) goto code_?;
        iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
        if (pPVar6->vector[0] != (PluralFormsNode *)0x0) {
          uVar8 = CONCAT22(in_stack_4,in_stack_5);
          iVar1 = CONCAT44(uVar8,(undefined4)n);
          PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar3 = CONCAT44(uVar8,(undefined4)n);
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            bVar7 = pPVar6->max_length == 0;
            if (pPVar6->max_length < 2) goto code_?;
            iVar3 = iVar1;
            if (pPVar6->vector[1] != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar1 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)(uVar10 >> 0x20);
              pPVar6 = (this->fields).nodes;
              iVar3 = iVar1;
              if (pPVar6 != (PluralFormsNode__Array *)0x0) {
                bVar7 = pPVar6->max_length < 2;
                if (pPVar6->max_length < 3) goto code_?;
                if (pPVar6->vector[2] != (PluralFormsNode *)0x0) {
                  in_stack_4 = 0;
                  iVar3 = PluralFormsNode_Evaluate(pPVar6->vector[2],0,n._4_4_);
                  if (iVar11 == 0) {
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
  bVar7 = 0;
  func_?();
  iVar1 = iVar3;
code_?:
  puVar13 = (undefined4 *)iVar1;
  fVar14 = (float10)func_?();
  uVar8 = *puVar13;
  pbVar15 = (byte *)((int)((ulonglong)iVar1 >> 0x20) + 0x50104ed5);
  bVar16 = *pbVar15;
  bVar17 = (byte)((uint)this >> 8);
  bVar18 = *pbVar15;
  *pbVar15 = bVar18 + bVar17 + bVar7;
  puVar13[5] = (int)fVar14;
  puVar13[5] = (int)extraout_ST1;
  bVar16 = (char)(extraout_CX >> 8) << 1 | (CARRY1(bVar16,bVar17) || CARRY1(bVar18 + bVar17,bVar7));
  bVar19 = (extraout_CX & 0x8000) != 0;
  pbVar15 = (byte *)(CONCAT22((short)((uint)uVar8 >> 0x10),
                             (ushort)(byte)((char)uVar8 + (char)((uint)uVar8 >> 8) * 'N')) + -0x25);
  bVar18 = (byte)extraout_EDX;
  bVar20 = CARRY1(*pbVar15,bVar18) || CARRY1(*pbVar15 + bVar18,bVar19);
  *pbVar15 = *pbVar15 + bVar18 + bVar19;
  pbVar15 = (byte *)(extraout_EDX + -0x2a);
  bVar7 = *pbVar15 + (byte)this;
  bVar19 = CARRY1(*pbVar15,(byte)this) || CARRY1(bVar7,bVar20);
  *pbVar15 = bVar7 + bVar20;
  bVar7 = bVar18 + bVar16;
  bVar20 = CARRY1(bVar18,bVar16) || CARRY1(bVar7,bVar19);
  pbVar21 = (byte *)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar7 + bVar19);
  pbVar15 = pbVar21 + -0x29;
  bVar19 = CARRY1(*pbVar15,bVar17) || CARRY1(*pbVar15 + bVar17,bVar20);
  *pbVar15 = *pbVar15 + bVar17 + bVar20;
  iVar11 = (int)puVar13 + -1;
  bVar7 = *pbVar21 + (byte)extraout_CX;
  cVar22 = CARRY1(*pbVar21,(byte)extraout_CX) || CARRY1(bVar7,bVar19);
  *pbVar21 = bVar7 + bVar19;
  iVar12 = func_?();
  *(char *)(iVar12 + 0x31104ed9) = *(char *)(iVar12 + 0x31104ed9) + extraout_CH + cVar22;
  iVar12 = (uint)in_stack_4 << 0x10;
  if (method != (MethodInfo *)0x0) {
    (*(code *)method->name)((method->field8_0x20).genericMethod,n._4_4_,method->return_type);
    uVar23 = 0;
    iVar12 = (uint)in_stack_4 << 0x10;
    if (n._4_4_ != (MethodInfo *)0x0) {
      iVar24 = 0x10;
      while( true ) {
        in_stack_4 = (ushort)((uint)iVar11 >> 0x10);
        pcVar25 = (n._4_4_)->name;
        iVar12 = iVar11;
        if (pcVar25 == (char *)0x0) break;
        if (*(int *)(pcVar25 + 0xc) <= (int)uVar23) {
          if (in_stack_26 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            in_stack_4 = (ushort)((uint)(in_stack_26->fields)._._.method >> 0x10);
            iVar3 = (*(in_stack_26->fields)._._.invoke_impl)();
            return iVar3;
          }
          break;
        }
        if (*(uint *)(pcVar25 + 0xc) <= uVar23) goto code_?;
        if (*(int *)(pcVar25 + iVar24) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(pcVar25 + iVar24),
                     (PluralFormsNode_IterateNodesDelegate *)method,in_stack_26,
                     (MethodInfo *)0x0);
        }
        iVar11 = (uint)in_stack_4 << 0x10;
        uVar23 = uVar23 + 1;
        iVar24 = iVar24 + 4;
      }
    }
  }
  in_stack_4 = (ushort)((uint)iVar12 >> 0x10);
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  iVar3 = (*pcVar27)();
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

