
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (MethodInfo *)&stack0xfffffffc;
  pPVar3 = (this->fields).token;
  if (pPVar3 != (PluralFormsToken *)0x0) {
    switch((pPVar3->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((uint *)n,in_stack_4);
    default:
      return 0;
    case 6:
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              if ((int)iVar7 != (int)iVar9) {
                return 0;
              }
              if ((int)(uVar8 >> 0x20) != (int)((ulonglong)iVar9 >> 0x20)) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar10 = (int)((ulonglong)iVar7 >> 0x20);
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar7 >> 0x20);
              if (iVar10 < iVar11) {
                return 0;
              }
              if (iVar10 <= iVar11) {
                if ((uint)(uVar8 >> 0x20) <= (uint)iVar7) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar10 = (int)((ulonglong)iVar7 >> 0x20);
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar7 >> 0x20);
              if (iVar10 < iVar11) {
                return 0;
              }
              if (iVar10 <= iVar11) {
                if ((uint)(uVar8 >> 0x20) < (uint)iVar7) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar10 = (int)((ulonglong)iVar7 >> 0x20);
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar7 >> 0x20);
              if (iVar11 < iVar10) {
                return 0;
              }
              if (iVar11 <= iVar10) {
                if ((uint)iVar7 <= (uint)(uVar8 >> 0x20)) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          iVar10 = (int)((ulonglong)iVar7 >> 0x20);
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar11 = (int)((ulonglong)iVar7 >> 0x20);
              if (iVar11 < iVar10) {
                return 0;
              }
              if (iVar11 <= iVar10) {
                if ((uint)iVar7 < (uint)(uVar8 >> 0x20)) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = pPVar5->max_length == 0;
        if (pPVar5->max_length < 2) goto code_?;
        if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar7 == 0) {
            return 0;
          }
          pPVar5 = (this->fields).nodes;
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = 0;
            if (pPVar5->max_length == 0) goto code_?;
            if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              PluralFormsNode_Evaluate(pPVar5->vector[0],uVar8,unaff_EBP);
              in_stack_4 = (undefined4)(uVar8 >> 0x20);
              iVar7 = func_?();
              return iVar7;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              if (((int)iVar7 == (int)iVar9) &&
                 ((int)(uVar8 >> 0x20) == (int)((ulonglong)iVar9 >> 0x20))) {
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
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          unaff_ESI = (uint *)iVar7;
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (unaff_ESI == (uint *)0x0 && (int)((ulonglong)iVar7 >> 0x20) == 0) {
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
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          unaff_ESI = (uint *)iVar7;
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if (unaff_ESI != (uint *)0x0 || (int)((ulonglong)iVar7 >> 0x20) != 0) {
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
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        bVar6 = 0;
        if (pPVar5->max_length == 0) goto code_?;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          unaff_ESI = (uint *)n;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            bVar6 = pPVar5->max_length == 0;
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar8 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar8,unaff_EBP);
              iVar10 = (int)(uVar8 >> 0x20);
              unaff_ESI = (uint *)iVar7;
              pPVar5 = (this->fields).nodes;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                bVar6 = pPVar5->max_length < 2;
                if (pPVar5->max_length < 3) goto code_?;
                if (pPVar5->vector[2] != (PluralFormsNode *)0x0) {
                  in_stack_4 = 0;
                  iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[2],0,n._4_4_);
                  if (iVar10 == 0) {
                    return iVar9;
                  }
                  return iVar7;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar6 = 0;
  func_?();
code_?:
  fVar12 = (float10)func_?();
  pPVar5 = (PluralFormsNode__Array *)*unaff_ESI;
  pbVar13 = extraout_EDX;
  puVar14 = unaff_ESI + 1;
  fVar15 = extraout_ST1;
  do {
    puVar16 = puVar14;
    *(longlong *)(puVar16 + 4) = (longlong)fVar12;
    pcVar17 = (char *)0x50104edd;
    uVar18 = (undefined3)((uint)pPVar5 >> 8);
    if (extraout_ECX == 0) {
      puVar19 = (undefined *)((uint)pPVar5 | 0x33);
      goto code_?;
    }
    pbVar20 = (byte *)((int)pPVar5[-1].vector + 99);
    bVar21 = (byte)pbVar13;
    bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar6);
    *pbVar20 = *pbVar20 + bVar21 + bVar6;
    iVar10 = (int)puVar16 + -1;
    bVar6 = (byte)pPVar5 + bVar21;
    bVar23 = CARRY1((byte)pPVar5,bVar21) || CARRY1(bVar6,bVar22);
    cVar24 = bVar6 + bVar22;
    pPVar25 = (PluralFormsNode__Array *)CONCAT31(uVar18,cVar24);
    *(longlong *)((int)puVar16 + 0xf) = (longlong)fVar15;
    if (extraout_ECX == 0) {
      *(char *)((int)puVar16 + 0xe) =
           *(char *)((int)puVar16 + 0xe) + (char)((uint)pPVar5 >> 8) + bVar23;
      *(char *)&pPVar25->klass = *(char *)&pPVar25->klass + cVar24;
      pcVar26 = (char *)0x0;
      goto code_?;
    }
    pbVar20 = pbVar13 + -0x22;
    bVar27 = (byte)this;
    bVar22 = CARRY1(*pbVar20,bVar27) || CARRY1(*pbVar20 + bVar27,bVar23);
    *pbVar20 = *pbVar20 + bVar27 + bVar23;
    bVar6 = (byte)((uint)extraout_ECX >> 8);
    bVar28 = bVar21 + bVar6;
    bVar6 = CARRY1(bVar21,bVar6) || CARRY1(bVar28,bVar22);
    cVar29 = bVar28 + bVar22;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
    fVar12 = in_ST2 * (float10)*(short *)((int)puVar16 + 0xe);
    pPVar5 = pPVar25;
    puVar14 = (uint *)((int)puVar16 + -2);
    fVar15 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST7;
    in_ST6 = in_ST7;
  } while ((POPCOUNT(cVar29) & 1U) == 0);
  iVar10 = (int)puVar16 + -3;
  bVar21 = *pbVar13 + (byte)extraout_ECX;
  bVar22 = CARRY1(*pbVar13,(byte)extraout_ECX) || CARRY1(bVar21,bVar6);
  *pbVar13 = bVar21 + bVar6;
  if (extraout_ECX != 1 && *pbVar13 != 0) {
    pPVar25 = (PluralFormsNode__Array *)(CONCAT31(uVar18,cVar24) | 0x7d);
    bVar22 = (char *)0x50104edd < (char *)pPVar25->max_length;
    goto code_?;
  }
  pbVar20 = pbVar13 + 0x22104ee0;
  bVar23 = CARRY1(*pbVar20,bVar27) || CARRY1(*pbVar20 + bVar27,bVar22);
  *pbVar20 = *pbVar20 + bVar27 + bVar22;
  iVar11 = extraout_ECX + -2;
  pMVar2 = (MethodInfo *)&stack0xfffffffc;
  if (iVar11 != 0 && *pbVar20 == 0) goto code_?;
  pbVar20 = (byte *)((int)pPVar25[0x57396f].vector + 0x61);
  bVar6 = *pbVar20;
  bVar28 = (byte)((uint)iVar11 >> 8);
  bVar21 = *pbVar20 + bVar28;
  *pbVar20 = bVar21 + bVar23;
  pMVar1 = (MethodInfo *)&stack0xfffffffc;
  if (iVar11 != 1) goto code_?;
  pbVar13[0x55104ee2] =
       pbVar13[0x55104ee2] + (char)((uint)this >> 8) +
       (CARRY1(bVar6,bVar28) || CARRY1(bVar21,bVar23));
  puVar19 = &UNK_?;
  unaff_EBP = (MethodInfo *)register0x00000010;
code_?:
  this = (PluralFormsNode *)unaff_EBP->invoker_method;
  (**(code **)(puVar19 + 0xc))(*(undefined4 *)(puVar19 + 0x20),this,*(undefined4 *)(puVar19 + 0x14));
  pcVar26 = (char *)0x0;
  if (this == (PluralFormsNode *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar30 = (code *)swi(3);
    iVar7 = (*pcVar30)();
    return iVar7;
  }
  iVar10 = 0x10;
  pMVar1 = unaff_EBP;
  pcVar17 = (char *)0x0;
code_?:
  do {
    pPVar25 = (this->fields).nodes;
    if (pPVar25 == (PluralFormsNode__Array *)0x0) goto code_?;
    if ((int)pPVar25->max_length <= (int)pcVar26) {
      if (pMVar1->klass != (Il2CppClass *)0x0) {
        iVar7 = (*(code *)pMVar1->klass->namespaze)();
        return iVar7;
      }
      goto code_?;
    }
    bVar22 = pcVar17 < (char *)pPVar25->max_length;
    pMVar2 = pMVar1;
code_?:
    if (!bVar22) goto code_?;
code_?:
    pMVar1 = pMVar2;
    if (*(int *)((int)pPVar25->vector + iVar10 + -0x10) != 0) {
      pPVar5 = (PluralFormsNode__Array *)0x0;
code_?:
      PluralFormsNode_IterateNodes
                (*(PluralFormsNode **)((int)pPVar25->vector + iVar10 + -0x10),
                 (PluralFormsNode_IterateNodesDelegate *)pMVar1->name,
                 (PluralFormsNode_IterateNodesDelegate *)pMVar1->klass,(MethodInfo *)pPVar5);
    }
    pcVar26 = pcVar17 + 1;
    iVar10 = iVar10 + 4;
    pcVar17 = pcVar26;
  } while( true );
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

