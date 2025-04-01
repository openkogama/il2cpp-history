
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
      return (int64_t)(pPVar2->fields).number;
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
              uVar7 = n & 0xffffffff;
              PluralFormsNode_Evaluate(pPVar5->vector[0],uVar7,unaff_EBP);
              in_stack_4 = (undefined4)(uVar7 >> 0x20);
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
                  in_stack_4 = 0;
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
  iVar8 = (int)iVar1;
  func_?();
  LOCK();
  *(undefined1 *)(iVar8 + 0x10) = extraout_CL;
  UNLOCK();
  pcVar10 = (code *)swi(0x8b);
  (*pcVar10)();
  LOCK();
  *(char *)(iVar8 + 0xf) = (char)*(undefined4 *)(iVar8 + 0xf);
  UNLOCK();
  pcVar10 = (code *)swi(0x8b);
  (*pcVar10)();
  LOCK();
  uVar11 = *(undefined1 *)(iVar8 + 0xe);
  *(undefined1 *)(iVar8 + 0xe) = (char)extraout_ECX;
  UNLOCK();
  LOCK();
  puVar12 = (undefined4 *)segment(in_SS,(short)&stack0xfffffffb + 0x10);
  *puVar12 = CONCAT31((int3)((uint)extraout_ECX >> 8),uVar11);
  UNLOCK();
  pcVar13 = (char *)((int)((ulonglong)iVar1 >> 0x20) + 0x25104e89);
  *pcVar13 = *pcVar13 + (char)this;
  pcVar10 = (code *)swi(3);
  iVar3 = (*pcVar10)();
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
    pPVar1->vector[i] = (PluralFormsNode *)0x0;
    func_?(pPVar1->vector + i,0);
    return pPVar2;
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
  ppPVar2 = &(this->fields).nodes;
  *ppPVar2 = pPVar1;
  func_?(ppPVar2,pPVar1);
  this_00 = (RecursiveTracer *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).tracer;
  *(RecursiveTracer **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

