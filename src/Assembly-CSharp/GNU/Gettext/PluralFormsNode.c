
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  pPVar2 = (this->fields).token;
  pPVar3 = this;
  if (pPVar2 != (PluralFormsToken *)0x0) {
    switch((pPVar2->fields).type) {
    case 2:
      return (int64_t)(((this->fields).token)->fields).number;
    case 3:
      return CONCAT44((int)n,in_stack_4);
    default:
      return 0;
    case 6:
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (PluralFormsNode *)iVar6;
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              if (pPVar3 != (PluralFormsNode *)iVar6) {
                return 0;
              }
              if ((int)(uVar7 >> 0x20) != (int)((ulonglong)iVar6 >> 0x20)) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar6 >> 0x20);
              if ((int)pPVar3 < iVar8) {
                return 0;
              }
              if ((int)pPVar3 <= iVar8) {
                if ((uint)(uVar7 >> 0x20) <= (uint)iVar6) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar6 >> 0x20);
              if ((int)pPVar3 < iVar8) {
                return 0;
              }
              if ((int)pPVar3 <= iVar8) {
                if ((uint)(uVar7 >> 0x20) < (uint)iVar6) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar6 >> 0x20);
              if (iVar8 < (int)pPVar3) {
                return 0;
              }
              if (iVar8 <= (int)pPVar3) {
                if ((uint)iVar6 <= (uint)(uVar7 >> 0x20)) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar6 >> 0x20);
              if (iVar8 < (int)pPVar3) {
                return 0;
              }
              if (iVar8 <= (int)pPVar3) {
                if ((uint)iVar6 < (uint)(uVar7 >> 0x20)) {
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
        if (pPVar5->max_length < 2) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EDI);
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (iVar6 == 0) {
            return 0;
          }
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length == 0) goto code_?;
            if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
              PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EBP);
              iVar6 = func_?();
              return iVar6;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar5 = (this->fields).nodes;
      if (pPVar5 != (PluralFormsNode__Array *)0x0) {
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (PluralFormsNode *)iVar6;
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              if ((pPVar3 == (PluralFormsNode *)iVar6) &&
                 ((int)(uVar7 >> 0x20) == (int)((ulonglong)iVar6 >> 0x20))) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar6 == 0 && pPVar3 == (PluralFormsNode *)0x0) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar5 = (this->fields).nodes;
          pPVar3 = (PluralFormsNode *)((ulonglong)iVar6 >> 0x20);
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar6 != 0 || pPVar3 != (PluralFormsNode *)0x0) {
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
        if (pPVar5->max_length == 0) goto code_?;
        pPVar3 = this;
        if (pPVar5->vector[0] != (PluralFormsNode *)0x0) {
          iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (PluralFormsNode *)iVar6;
          pPVar5 = (this->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            if (pPVar5->max_length < 2) goto code_?;
            if (pPVar5->vector[1] != (PluralFormsNode *)0x0) {
              uVar7 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar5->vector[1],uVar7,unaff_EBP);
              iVar8 = (int)(uVar7 >> 0x20);
              pPVar5 = (this->fields).nodes;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                if (pPVar5->max_length < 3) goto code_?;
                if (pPVar5->vector[2] != (PluralFormsNode *)0x0) {
                  iVar9 = PluralFormsNode_Evaluate(pPVar5->vector[2],0,n._4_4_);
                  if (iVar8 == 0) {
                    return iVar9;
                  }
                  return iVar6;
                }
              }
            }
          }
        }
      }
    }
  }
  this = pPVar3;
  func_?();
  pPVar3 = this;
code_?:
  this = pPVar3;
  uVar10 = func_?();
  uVar11 = (uint)uVar10;
  bVar12 = (byte)((ulonglong)uVar10 >> 0x20);
  bVar13 = 0xb1 < bVar12 || CARRY1(bVar12 + 0x4e,uVar11 < 0x3f104eb0);
  bVar14 = bVar12 + 0x4e + (uVar11 < 0x3f104eb0);
  bVar15 = bVar14 + bVar12;
  bVar16 = CARRY1(bVar14,bVar12) || CARRY1(bVar15,bVar13);
  bVar15 = bVar15 + bVar13;
  pbVar17 = (byte *)(CONCAT31((int3)(uVar11 + 0xc0efb150 >> 8),bVar15) + -0x50);
  bVar14 = *pbVar17;
  bVar18 = *pbVar17;
  *pbVar17 = bVar18 + bVar12 + bVar16;
  bVar13 = CARRY1(bVar15,bVar12) ||
           CARRY1(bVar15 + bVar12,CARRY1(bVar14,bVar12) || CARRY1(bVar18 + bVar12,bVar16));
  bVar14 = bVar12 + (byte)pPVar1;
  bVar16 = CARRY1(bVar12,(byte)pPVar1) || CARRY1(bVar14,bVar13);
  uVar19 = (undefined3)((ulonglong)uVar10 >> 0x28);
  bVar14 = bVar14 + bVar13;
  bVar15 = (byte)(uVar11 + 0xc0efb150 >> 8);
  pbVar17 = (byte *)(CONCAT31(uVar19,bVar14) + -0x4f);
  bVar13 = 0xb1 < *pbVar17 || CARRY1(*pbVar17 + 0x4e,bVar16);
  *pbVar17 = *pbVar17 + 0x4e + bVar16;
  bVar12 = (byte)((uint)pPVar1 >> 8);
  bVar18 = bVar14 + bVar12;
  bVar16 = CARRY1(bVar14,bVar12) || CARRY1(bVar18,bVar13);
  iVar8 = CONCAT31(uVar19,bVar18 + bVar13);
  pbVar17 = (byte *)(iVar8 + 0x1a104eb2);
  bVar13 = 0xb1 < *pbVar17 || CARRY1(*pbVar17 + 0x4e,bVar16);
  *pbVar17 = *pbVar17 + 0x4e + bVar16;
  n._0_4_ = CONCAT31((int3)((uint)pPVar1 >> 8),0x4e);
  pbVar17 = (byte *)(iVar8 + 0x28104eb3);
  bVar14 = *pbVar17;
  bVar18 = *pbVar17 + bVar15;
  *pbVar17 = bVar18 + bVar13;
  pcVar20 = (char *)(CONCAT31((int3)(CONCAT22(extraout_var,0x4e00) >> 8),0x4e) + 0x3a104eb4);
  *pcVar20 = *pcVar20 + (char)((ulonglong)uVar10 >> 0x28) +
            (CARRY1(bVar14,bVar15) || CARRY1(bVar18,bVar13));
  in((short)iVar8);
  if (in_stack_4 != 0) {
    (**(code **)(in_stack_4 + 0xc))(*(undefined4 *)(in_stack_4 + 0x20));
    uVar11 = 0;
    if (this != (PluralFormsNode *)0x0) {
      iVar8 = 0x10;
      while (pPVar5 = (this->fields).nodes, pPVar5 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar5->max_length <= (int)uVar11) {
          if ((int)n != 0) {
            iVar6 = (**(code **)((int)n + 0xc))();
            return iVar6;
          }
          break;
        }
        if (pPVar5->max_length <= uVar11) goto code_?;
        if (*(int *)((int)pPVar5->vector + iVar8 + -0x10) != 0) {
          n._0_4_ = 0;
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar5->vector + iVar8 + -0x10),
                     (PluralFormsNode_IterateNodesDelegate *)0x0,
                     (PluralFormsNode_IterateNodesDelegate *)0x0,(MethodInfo *)0x0);
        }
        uVar11 = uVar11 + 1;
        iVar8 = iVar8 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  iVar6 = (*pcVar21)();
  return iVar6;
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

