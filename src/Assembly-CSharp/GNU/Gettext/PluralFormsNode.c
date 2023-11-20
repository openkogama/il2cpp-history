
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = (this->fields).token;
  cVar2 = (int)pPVar1 < 0;
  if (pPVar1 != (PluralFormsToken *)0x0) {
    switch((pPVar1->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((MethodInfo *)n,in_stack_3);
    default:
      return 0;
    case 6:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar11 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              if ((int)iVar8 != (int)iVar11) {
                return 0;
              }
              if ((int)(uVar10 >> 0x20) != (int)((ulonglong)iVar11 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          iVar12 = (int)((ulonglong)iVar8 >> 0x20);
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar8 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              iVar13 = (int)((ulonglong)iVar8 >> 0x20);
              if (iVar12 < iVar13) {
                return 0;
              }
              if (iVar12 <= iVar13) {
                if ((uint)(uVar10 >> 0x20) <= (uint)iVar8) {
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
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          iVar12 = (int)((ulonglong)iVar8 >> 0x20);
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar8 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              iVar13 = (int)((ulonglong)iVar8 >> 0x20);
              if (iVar12 < iVar13) {
                return 0;
              }
              if (iVar12 <= iVar13) {
                if ((uint)(uVar10 >> 0x20) < (uint)iVar8) {
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
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          iVar12 = (int)((ulonglong)iVar8 >> 0x20);
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar8 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              iVar13 = (int)((ulonglong)iVar8 >> 0x20);
              if (iVar13 < iVar12) {
                return 0;
              }
              if (iVar13 <= iVar12) {
                if ((uint)iVar8 <= (uint)(uVar10 >> 0x20)) {
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
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          iVar12 = (int)((ulonglong)iVar8 >> 0x20);
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar8 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              iVar13 = (int)((ulonglong)iVar8 >> 0x20);
              if (iVar13 < iVar12) {
                return 0;
              }
              if (iVar13 <= iVar12) {
                if ((uint)iVar8 < (uint)(uVar10 >> 0x20)) {
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
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        uVar9 = pPVar4->max_length;
        bVar5 = uVar9 == 0;
        cVar6 = SBORROW4(uVar9,1);
        cVar2 = (int)(uVar9 - 1) < 0;
        if (uVar9 < 2) goto code_?;
        pPVar7 = pPVar4->vector[1];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          if (iVar8 == 0) {
            return 0;
          }
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            bVar5 = 0;
            cVar6 = '\0';
            cVar2 = (int)pPVar4->max_length < 0;
            if (pPVar4->max_length == 0) goto code_?;
            pPVar7 = pPVar4->vector[0];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              in_stack_3 = (MethodInfo *)(uVar10 >> 0x20);
              iVar8 = func_?();
              return iVar8;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar11 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              if (((int)iVar8 == (int)iVar11) &&
                 ((int)(uVar10 >> 0x20) == (int)((ulonglong)iVar11 >> 0x20))) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xe:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = (MethodInfo *)n;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              iVar11 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EBP);
              if ((int)iVar8 == 0 && (int)((ulonglong)iVar8 >> 0x20) == 0) {
                return 0;
              }
              if (iVar11 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xf:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          iVar8 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = (MethodInfo *)n;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              iVar11 = PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EBP);
              if ((int)iVar8 != 0 || (int)((ulonglong)iVar8 >> 0x20) != 0) {
                return 1;
              }
              if (iVar11 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0x10:
      pPVar4 = (this->fields).nodes;
      cVar2 = (int)pPVar4 < 0;
      if (pPVar4 != (PluralFormsNode__Array *)0x0) {
        bVar5 = 0;
        cVar6 = '\0';
        cVar2 = (int)pPVar4->max_length < 0;
        if (pPVar4->max_length == 0) goto code_?;
        pPVar7 = pPVar4->vector[0];
        cVar2 = (int)pPVar7 < 0;
        if (pPVar7 != (PluralFormsNode *)0x0) {
          PluralFormsNode_Evaluate(pPVar7,n & 0xffffffff,unaff_EDI);
          pPVar4 = (this->fields).nodes;
          cVar2 = (int)pPVar4 < 0;
          unaff_EDI = in_stack_3;
          if (pPVar4 != (PluralFormsNode__Array *)0x0) {
            uVar9 = pPVar4->max_length;
            bVar5 = uVar9 == 0;
            cVar6 = SBORROW4(uVar9,1);
            cVar2 = (int)(uVar9 - 1) < 0;
            if (uVar9 < 2) goto code_?;
            pPVar7 = pPVar4->vector[1];
            cVar2 = (int)pPVar7 < 0;
            if (pPVar7 != (PluralFormsNode *)0x0) {
              uVar10 = n & 0xffffffff;
              iVar8 = PluralFormsNode_Evaluate(pPVar7,uVar10,unaff_EBP);
              iVar12 = (int)(uVar10 >> 0x20);
              unaff_EDI = (MethodInfo *)((ulonglong)iVar8 >> 0x20);
              pPVar4 = (this->fields).nodes;
              cVar2 = (int)pPVar4 < 0;
              if (pPVar4 != (PluralFormsNode__Array *)0x0) {
                uVar9 = pPVar4->max_length;
                bVar5 = uVar9 < 2;
                cVar6 = SBORROW4(uVar9,2);
                cVar2 = (int)(uVar9 - 2) < 0;
                if (uVar9 < 3) goto code_?;
                pPVar7 = pPVar4->vector[2];
                cVar2 = (int)pPVar7 < 0;
                if (pPVar7 != (PluralFormsNode *)0x0) {
                  in_stack_3 = (MethodInfo *)0x0;
                  iVar11 = PluralFormsNode_Evaluate(pPVar7,0,n._4_4_);
                  if (iVar12 == 0) {
                    return iVar11;
                  }
                  return iVar8;
                }
              }
            }
          }
        }
      }
    }
  }
  cVar6 = '\0';
  bVar5 = 0;
  func_?();
code_?:
  iVar8 = func_?();
  if (cVar6 != cVar2) {
    pbVar14 = (byte *)((int)&unaff_EDI[0xab0199].token + 2);
    bVar15 = CARRY1(*pbVar14,extraout_CL) || CARRY1(*pbVar14 + extraout_CL,bVar5);
    *pbVar14 = *pbVar14 + extraout_CL + bVar5;
    pbVar14 = (byte *)CONCAT31((int3)((ulonglong)iVar8 >> 8),-bVar15);
    bVar5 = *pbVar14;
    bVar16 = (byte)((ulonglong)iVar8 >> 8);
    bVar17 = *pbVar14 + bVar16;
    *pbVar14 = bVar17 + bVar15;
    pcVar18 = (char *)((int)((ulonglong)iVar8 >> 0x20) + 0x4a104cd7);
    *pcVar18 = *pcVar18 + (char)((uint)this >> 8) + (CARRY1(bVar5,bVar16) || CARRY1(bVar17,bVar15));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return iVar8;
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

