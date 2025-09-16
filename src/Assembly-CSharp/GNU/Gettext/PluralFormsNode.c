
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              if ((int)iVar4 != (int)iVar6) {
                return 0;
              }
              if ((int)(uVar5 >> 0x20) != (int)((ulonglong)iVar6 >> 0x20)) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar7 = (int)((ulonglong)iVar4 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar7 < iVar8) {
                return 0;
              }
              if (iVar7 <= iVar8) {
                if ((uint)(uVar5 >> 0x20) <= (uint)iVar4) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar7 = (int)((ulonglong)iVar4 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar7 < iVar8) {
                return 0;
              }
              if (iVar7 <= iVar8) {
                if ((uint)(uVar5 >> 0x20) < (uint)iVar4) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar7 = (int)((ulonglong)iVar4 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar8 < iVar7) {
                return 0;
              }
              if (iVar8 <= iVar7) {
                if ((uint)iVar4 <= (uint)(uVar5 >> 0x20)) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          iVar7 = (int)((ulonglong)iVar4 >> 0x20);
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              iVar8 = (int)((ulonglong)iVar4 >> 0x20);
              if (iVar8 < iVar7) {
                return 0;
              }
              if (iVar8 <= iVar7) {
                if ((uint)iVar4 < (uint)(uVar5 >> 0x20)) {
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
        if (pPVar3->max_length < 2) goto code_?;
        if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EDI);
          if (iVar4 == 0) {
            return 0;
          }
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length == 0) goto code_?;
            if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              PluralFormsNode_Evaluate(pPVar3->vector[0],uVar5,unaff_EBP);
              in_stack_2 = (undefined4)(uVar5 >> 0x20);
              iVar4 = func_?();
              return iVar4;
            }
          }
        }
      }
      break;
    case 0xd:
      pPVar3 = (this->fields).nodes;
      if (pPVar3 != (PluralFormsNode__Array *)0x0) {
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar6 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              if (((int)iVar4 == (int)iVar6) &&
                 ((int)(uVar5 >> 0x20) == (int)((ulonglong)iVar6 >> 0x20))) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              iVar6 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar4 == 0 && (int)((ulonglong)iVar4 >> 0x20) == 0) {
                return 0;
              }
              if (iVar6 == 0) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              iVar6 = PluralFormsNode_Evaluate(pPVar3->vector[1],n & 0xffffffff,unaff_EBP);
              if ((int)iVar4 != 0 || (int)((ulonglong)iVar4 >> 0x20) != 0) {
                return 1;
              }
              if (iVar6 == 0) {
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
        if (pPVar3->max_length == 0) goto code_?;
        if (pPVar3->vector[0] != (PluralFormsNode *)0x0) {
          PluralFormsNode_Evaluate(pPVar3->vector[0],n & 0xffffffff,unaff_EDI);
          pPVar3 = (this->fields).nodes;
          if (pPVar3 != (PluralFormsNode__Array *)0x0) {
            if (pPVar3->max_length < 2) goto code_?;
            if (pPVar3->vector[1] != (PluralFormsNode *)0x0) {
              uVar5 = n & 0xffffffff;
              iVar4 = PluralFormsNode_Evaluate(pPVar3->vector[1],uVar5,unaff_EBP);
              iVar7 = (int)(uVar5 >> 0x20);
              pPVar3 = (this->fields).nodes;
              if (pPVar3 != (PluralFormsNode__Array *)0x0) {
                if (pPVar3->max_length < 3) goto code_?;
                if (pPVar3->vector[2] != (PluralFormsNode *)0x0) {
                  in_stack_2 = 0;
                  iVar6 = PluralFormsNode_Evaluate(pPVar3->vector[2],0,n._4_4_);
                  if (iVar7 == 0) {
                    return iVar6;
                  }
                  return iVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar9 = func_?();
  uVar10 = (uint3)((ulonglong)uVar9 >> 8) | 0x1f1050;
  bVar11 = (byte)((ulonglong)uVar9 >> 0x28);
  iVar7 = CONCAT31(uVar10,0x8f);
  pbVar12 = (byte *)(iVar7 + 0x3010508f);
  bVar13 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar11;
  iVar8 = CONCAT31(uVar10,0x8f);
  pbVar12 = (byte *)(CONCAT31((int3)((ulonglong)uVar9 >> 0x28),*(undefined1 *)(iVar7 + 0x10)) +
                   0x4a10508a);
  bVar14 = *pbVar12;
  bVar15 = (byte)((uint)this >> 8);
  bVar16 = *pbVar12;
  *pbVar12 = bVar16 + bVar15 + CARRY1(bVar13,bVar11);
  uVar17 = *(undefined4 *)(iVar8 + 0x10);
  *(undefined2 *)(iVar8 + 0x10) = in_SS;
  *(char *)(extraout_ECX + 0x1a10508e) =
       *(char *)(extraout_ECX + 0x1a10508e) +
       (char)uVar17 + bVar15 + (CARRY1(bVar14,bVar15) || CARRY1(bVar16 + bVar15,CARRY1(bVar13,bVar11)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

