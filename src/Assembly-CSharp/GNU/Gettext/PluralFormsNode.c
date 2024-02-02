
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = (this->fields).token;
  if (pPVar1 != (PluralFormsToken *)0x0) {
    switch((pPVar1->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((undefined4)n,in_stack_2);
    default:
      return 0;
    case 6:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              if ((int)iVar5 != (int)iVar7) {
                return 0;
              }
              if ((int)(uVar6 >> 0x20) != (int)((ulonglong)iVar7 >> 0x20)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 8:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar5 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar8 < iVar9) {
                return 0;
              }
              if (iVar8 <= iVar9) {
                if ((uint)(uVar6 >> 0x20) <= (uint)iVar5) {
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
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar5 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar8 < iVar9) {
                return 0;
              }
              if (iVar8 <= iVar9) {
                if ((uint)(uVar6 >> 0x20) < (uint)iVar5) {
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
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar5 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar9 < iVar8) {
                return 0;
              }
              if (iVar9 <= iVar8) {
                if ((uint)iVar5 <= (uint)(uVar6 >> 0x20)) {
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
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar8 = (int)((ulonglong)iVar5 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              iVar9 = (int)((ulonglong)iVar5 >> 0x20);
              if (iVar9 < iVar8) {
                return 0;
              }
              if (iVar9 <= iVar8) {
                if ((uint)iVar5 < (uint)(uVar6 >> 0x20)) {
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
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = pPVar3->max_length == 0;
        if (pPVar3->max_length < 2) goto code_?;
        if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar5 == 0) {
            return 0;
          }
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = 0;
            if (pPVar3->max_length == 0) goto code_?;
            if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EBP);
              iVar5 = func_?();
              return iVar5;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar7 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              if (((int)iVar5 == (int)iVar7) &&
                 ((int)(uVar6 >> 0x20) == (int)((ulonglong)iVar7 >> 0x20))) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xe:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              iVar7 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar5 == 0 && (int)((ulonglong)iVar5 >> 0x20) == 0) {
                return 0;
              }
              if (iVar7 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0xf:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              iVar7 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar5 != 0 || (int)((ulonglong)iVar5 >> 0x20) != 0) {
                return 1;
              }
              if (iVar7 == 0) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
      break;
    case 0x10:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        bVar4 = 0;
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            bVar4 = pPVar3->max_length == 0;
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar6 = n & 0xffffffff;
              iVar5 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar6,unaff_EBP);
              iVar8 = (int)(uVar6 >> 0x20);
              pPVar3 = (this->fields).nodes;
              if (pPVar3 != (PluralFormsNode__Array *)0x0) {
                bVar4 = pPVar3->max_length < 2;
                if (pPVar3->max_length < 3) goto code_?;
                if (pPVar3->vector[2] != (PluralFormsNode *)0x0) {
                  iVar7 = PluralFormsNode_Evaluate(pPVar3->vector[2],0,n._4_4_);
                  if (iVar8 == 0) {
                    return iVar7;
                  }
                  return iVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = 0;
  func_?();
code_?:
  uVar10 = func_?();
  pbVar11 = (byte *)((ulonglong)uVar10 >> 0x20);
  pbVar12 = (byte *)uVar10;
  bVar13 = (byte)((ulonglong)uVar10 >> 0x28);
  bVar14 = CARRY1(*pbVar12,bVar13) || CARRY1(*pbVar12 + bVar13,bVar4);
  *pbVar12 = *pbVar12 + bVar13 + bVar4;
  bVar15 = CARRY1(*pbVar12,bVar13) || CARRY1(*pbVar12 + bVar13,bVar14);
  *pbVar12 = *pbVar12 + bVar13 + bVar14;
  pbVar12 = pbVar12 + 0x30104eaf;
  bVar14 = CARRY1(*pbVar12,bVar13) || CARRY1(*pbVar12 + bVar13,bVar15);
  *pbVar12 = *pbVar12 + bVar13 + bVar15;
  bVar16 = (byte)((uint)this >> 8);
  bVar15 = CARRY1(*pbVar11,bVar16) || CARRY1(*pbVar11 + bVar16,bVar14);
  *pbVar11 = *pbVar11 + bVar16 + bVar14;
  bVar13 = (byte)((ulonglong)uVar10 >> 0x20);
  bVar4 = bVar13 + extraout_CL;
  bVar14 = CARRY1(bVar13,extraout_CL) || CARRY1(bVar4,bVar15);
  uVar17 = (undefined3)((ulonglong)uVar10 >> 0x28);
  bVar4 = bVar4 + bVar15;
  pbVar12 = (byte *)(CONCAT31(uVar17,bVar4) + -0x4f);
  bVar13 = *pbVar12 + (byte)this;
  bVar15 = CARRY1(*pbVar12,(byte)this) || CARRY1(bVar13,bVar14);
  *pbVar12 = bVar13 + bVar14;
  bVar14 = 0xb1 < bVar4 || CARRY1(bVar4 + 0x4e,bVar15);
  pbVar11 = (byte *)CONCAT31(uVar17,bVar4 + 0x4e + bVar15);
  pbVar12 = pbVar11 + -0x4e;
  bVar15 = CARRY1(*pbVar12,bVar16) || CARRY1(*pbVar12 + bVar16,bVar14);
  *pbVar12 = *pbVar12 + bVar16 + bVar14;
  bVar14 = 0xb1 < *pbVar11 || CARRY1(*pbVar11 + 0x4e,bVar15);
  *pbVar11 = *pbVar11 + 0x4e + bVar15;
  pbVar12 = &UNK_? + CONCAT31((int3)((ulonglong)uVar10 >> 8),0x4e);
  bVar4 = *pbVar12;
  bVar13 = *pbVar12;
  *pbVar12 = bVar13 + 0x4e + bVar14;
  pbVar11[0x55104eb4] = pbVar11[0x55104eb4] + 0x4e + (0xb1 < bVar4 || CARRY1(bVar13 + 0x4e,bVar14));
  if (in_stack_18 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(in_stack_18->fields)._._.invoke_impl)((in_stack_18->fields)._._.method_code);
    uVar19 = 0;
    if (in_stack_20 != 0) {
      iVar8 = 0x10;
      while (iVar9 = *(int *)(in_stack_20 + 0xc), iVar9 != 0) {
        if (*(int *)(iVar9 + 0xc) <= (int)uVar19) {
          if (in_stack_21 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            iVar5 = (*(in_stack_21->fields)._._.invoke_impl)();
            return iVar5;
          }
          break;
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar19) goto code_?;
        if (*(int *)(iVar8 + iVar9) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)(iVar8 + iVar9),in_stack_18,in_stack_21,
                     (MethodInfo *)0x0);
        }
        uVar19 = uVar19 + 1;
        iVar8 = iVar8 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  iVar5 = (*pcVar22)();
  return iVar5;
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

