
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  iVar1 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar2 = (this->fields).token;
  uVar3 = true;
  iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
  if (pPVar2 != (PluralFormsToken *)0x0) {
    switch((pPVar2->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((undefined4)n,in_stack_5);
    default:
      return 0;
    case 6:
      pPVar6 = (this->fields).nodes;
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = iVar1;
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              if ((int)iVar8 != (int)iVar4) {
                return 0;
              }
              if ((int)(uVar10 >> 0x20) != (int)((ulonglong)iVar4 >> 0x20)) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar4 >> 0x20);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar11 < iVar12) {
                return 0;
              }
              if (iVar11 <= iVar12) {
                if ((uint)(uVar10 >> 0x20) <= (uint)iVar4) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar4 >> 0x20);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar11 < iVar12) {
                return 0;
              }
              if (iVar11 <= iVar12) {
                if ((uint)(uVar10 >> 0x20) < (uint)iVar4) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar4 >> 0x20);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar12 < iVar11) {
                return 0;
              }
              if (iVar12 <= iVar11) {
                if ((uint)iVar4 <= (uint)(uVar10 >> 0x20)) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          iVar11 = (int)((ulonglong)iVar4 >> 0x20);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar12 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar12 < iVar11) {
                return 0;
              }
              if (iVar12 <= iVar11) {
                if ((uint)iVar4 < (uint)(uVar10 >> 0x20)) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar9 = pPVar6->max_length;
        uVar7 = uVar9 == 0;
        uVar3 = uVar9 == 1;
        if (uVar9 < 2) goto code_?;
        uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar4 == 0) {
            return 0;
          }
          pPVar6 = (this->fields).nodes;
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar7 = 0;
            uVar3 = 1;
            if (pPVar6->max_length == 0) goto code_?;
            uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EBP);
              iVar4 = func_?();
              return iVar4;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar6 = (this->fields).nodes;
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          iVar8 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              if (((int)iVar8 == (int)iVar4) &&
                 ((int)(uVar10 >> 0x20) == (int)((ulonglong)iVar4 >> 0x20))) {
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
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar8 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar8;
          pPVar6 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar11);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44((undefined4)n,iVar11);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 == 0 && (int)((ulonglong)iVar8 >> 0x20) == 0) {
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
      pPVar6 = (this->fields).nodes;
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar8 = PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          iVar11 = (int)iVar8;
          pPVar6 = (this->fields).nodes;
          iVar1 = CONCAT44((undefined4)n,iVar11);
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44((undefined4)n,iVar11);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[1],n & 0xffffffff,unaff_EBP);
              if (iVar11 != 0 || (int)((ulonglong)iVar8 >> 0x20) != 0) {
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
      pPVar6 = (this->fields).nodes;
      uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
      iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
      if (!(bool)uVar3) {
        uVar7 = 0;
        uVar3 = 1;
        if (pPVar6->max_length == 0) goto code_?;
        uVar3 = pPVar6->vector[0] == (PluralFormsNode *)0x0;
        iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
        if (!(bool)uVar3) {
          iVar1 = CONCAT44(in_stack_5,(undefined4)n);
          PluralFormsNode_Evaluate(pPVar6->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar6 = (this->fields).nodes;
          uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
          iVar4 = CONCAT44(in_stack_5,(undefined4)n);
          if (!(bool)uVar3) {
            uVar9 = pPVar6->max_length;
            uVar7 = uVar9 == 0;
            uVar3 = uVar9 == 1;
            if (uVar9 < 2) goto code_?;
            uVar3 = pPVar6->vector[1] == (PluralFormsNode *)0x0;
            iVar4 = iVar1;
            if (!(bool)uVar3) {
              uVar10 = n & 0xffffffff;
              iVar1 = PluralFormsNode_Evaluate(pPVar6->vector[1],uVar10,unaff_EBP);
              iVar11 = (int)(uVar10 >> 0x20);
              pPVar6 = (this->fields).nodes;
              uVar3 = pPVar6 == (PluralFormsNode__Array *)0x0;
              iVar4 = iVar1;
              if (!(bool)uVar3) {
                uVar9 = pPVar6->max_length;
                uVar7 = uVar9 < 2;
                uVar3 = uVar9 == 2;
                if (uVar9 < 3) goto code_?;
                uVar3 = pPVar6->vector[2] == (PluralFormsNode *)0x0;
                if (!(bool)uVar3) {
                  iVar4 = PluralFormsNode_Evaluate(pPVar6->vector[2],0,n._4_4_);
                  if (iVar11 == 0) {
                    return iVar4;
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
  uVar7 = 0;
  func_?();
  iVar1 = iVar4;
code_?:
  puVar13 = (undefined4 *)iVar1;
  uVar14 = func_?();
  piVar15 = (int *)uVar14;
  iVar11 = (int)((ulonglong)uVar14 >> 0x20);
  if ((bool)uVar7 || (bool)uVar3) {
    iVar11 = *piVar15;
  }
  out(*puVar13,(short)iVar11);
  if ((bool)uVar7 || (bool)uVar3) {
    iVar11 = *piVar15;
  }
  bVar16 = (byte)iVar11;
  bVar17 = CARRY1(bRam_?,bVar16);
  bRam_? = bRam_? + bVar16;
  pbVar18 = (byte *)((int)piVar15 + 0x10460f);
  bVar16 = *pbVar18;
  bVar19 = *pbVar18 + (byte)uVar14;
  *pbVar18 = bVar19 + bVar17;
  uVar9 = (uint)(CARRY1(bVar16,(byte)uVar14) || CARRY1(bVar19,bVar17));
  bVar17 = (int *)0xeff5efb9 < piVar15 || CARRY4((uint)(&UNK_? + (int)piVar15),uVar9);
  puVar20 = &UNK_? + (int)piVar15 + uVar9;
  pbVar18 = (byte *)(iVar11 + 0x2a104610);
  bVar16 = *pbVar18;
  bVar21 = (byte)this;
  bVar19 = *pbVar18;
  *pbVar18 = bVar19 + bVar21 + bVar17;
  puVar22 = (uint *)((int)puVar13 + 0x16);
  uVar9 = (uint)(CARRY1(bVar16,bVar21) || CARRY1(bVar19 + bVar21,bVar17));
  bVar17 = CARRY4(*puVar22,(uint)puVar20) || CARRY4((uint)(puVar20 + *puVar22),uVar9);
  *puVar22 = (uint)(puVar20 + *puVar22 + uVar9);
  bVar16 = (byte)puVar20 + *(byte *)((int)puVar13 + 0x16);
  bVar23 = CARRY1((byte)puVar20,*(byte *)((int)puVar13 + 0x16)) || CARRY1(bVar16,bVar17);
  uVar9 = CONCAT31((int3)((uint)puVar20 >> 8),bVar16 + bVar17);
  bVar16 = (extraout_CL & 0x1f) % 9;
  uVar24 = CONCAT11(bVar23,uRam_?);
  uVar24 = uVar24 << bVar16 | uVar24 >> 9 - bVar16;
  uRam_? = (undefined1)uVar24;
  bVar25 = (bVar16 == 0) * bVar23 | (bVar16 != 0) * ((uVar24 & 0x100) != 0);
  pbVar18 = (byte *)(uVar9 + 0x13);
  bVar16 = *pbVar18;
  bVar19 = *pbVar18;
  *pbVar18 = bVar19 + bVar21 + bVar25;
  bVar26 = (byte)((uint)puVar20 >> 8);
  pcVar27 = (char *)((int)&n._4_4_[-3].parameters + 3);
  *pcVar27 = *pcVar27 + '\x11' +
            (CARRY4(uVar9,puVar13[6]) ||
            CARRY4(uVar9 + puVar13[6],
                   (uint)(CARRY1(extraout_CL,bVar26) ||
                         CARRY1(extraout_CL + bVar26,
                                CARRY1(bVar16,bVar21) || CARRY1(bVar19 + bVar21,bVar25)))));
  in(0x4611);
  pcVar27 = (n._4_4_)->name;
  if (pcVar27 != (char *)0x0) {
    pIVar28 = (n._4_4_)->invoker_method;
    (**(code **)(pcVar27 + 0xc))(*(undefined4 *)(pcVar27 + 0x20));
    uVar9 = 0;
    if (pIVar28 != (InvokerMethod)0x0) {
      iVar11 = 0x10;
      while (iVar12 = *(int *)(pIVar28 + 0xc), iVar12 != 0) {
        if (*(int *)(iVar12 + 0xc) <= (int)uVar9) {
          if ((n._4_4_)->klass != (Il2CppClass *)0x0) {
            iVar4 = (*(code *)(n._4_4_)->klass->namespaze)();
            return iVar4;
          }
          break;
        }
        if (*(uint *)(iVar12 + 0xc) <= uVar9) goto code_?;
        if (*(int *)(iVar11 + iVar12) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(iVar11 + iVar12),
                     (PluralFormsNode_IterateNodesDelegate *)(n._4_4_)->name,
                     (PluralFormsNode_IterateNodesDelegate *)(n._4_4_)->klass,(MethodInfo *)0x0);
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  iVar4 = (*pcVar29)();
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
  if (this_00 != (RecursiveTracer *)0x0) {
    RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&(this->fields).tracer;
    (this->fields).tracer = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).token = token;
    func_?(&this->fields,token);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

