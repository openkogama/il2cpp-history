
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = (this->fields).token;
  if (pPVar1 == (PluralFormsToken *)0x0) goto code_?;
  switch((pPVar1->fields).type) {
  case 2:
    return (longlong)(((this->fields).token)->fields).number;
  case 3:
    goto code_?;
  default:
    goto code_?;
  case 6:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar4 == iVar5);
          }
        }
      }
    }
    break;
  case 8:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar5 < iVar4);
          }
        }
      }
    }
    break;
  case 9:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar5 <= iVar4);
          }
        }
      }
    }
    break;
  case 10:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar4 < iVar5);
          }
        }
      }
    }
    break;
  case 0xb:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar4 <= iVar5);
          }
        }
      }
    }
    break;
  case 0xc:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 == (PluralFormsNode__Array *)0x0) break;
    if ((uint)pPVar2->max_length < 2) goto code_?;
    if (pPVar2->vector[1] == (PluralFormsNode *)0x0) break;
    iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      pPVar2 = (this->fields).nodes;
      if (pPVar2 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar2->max_length == 0) goto code_?;
        if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
          iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
          return iVar5 % iVar4;
        }
      }
      break;
    }
    goto code_?;
  case 0xd:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            return (ulonglong)(iVar4 != iVar5);
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 == (PluralFormsNode__Array *)0x0) break;
    if ((int)pPVar2->max_length == 0) goto code_?;
    if (pPVar2->vector[0] == (PluralFormsNode *)0x0) break;
    iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
    pPVar2 = (this->fields).nodes;
    if (pPVar2 == (PluralFormsNode__Array *)0x0) break;
    if ((uint)pPVar2->max_length < 2) goto code_?;
    if (pPVar2->vector[1] == (PluralFormsNode *)0x0) break;
    lVar6 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
    if (iVar4 != 0) goto code_?;
    goto code_?;
  case 0xf:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 == (PluralFormsNode__Array *)0x0) break;
    if ((int)pPVar2->max_length == 0) goto code_?;
    if (pPVar2->vector[0] == (PluralFormsNode *)0x0) break;
    iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
    pPVar2 = (this->fields).nodes;
    if (pPVar2 == (PluralFormsNode__Array *)0x0) break;
    if ((uint)pPVar2->max_length < 2) goto code_?;
    if (pPVar2->vector[1] == (PluralFormsNode *)0x0) break;
    lVar6 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      return 1;
    }
code_?:
    if (lVar6 != 0) {
      return 1;
    }
code_?:
    n = 0;
code_?:
    return n;
  case 0x10:
    pPVar2 = (this->fields).nodes;
    if (pPVar2 != (PluralFormsNode__Array *)0x0) {
      if ((int)pPVar2->max_length == 0) goto code_?;
      if (pPVar2->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = PluralFormsNode_Evaluate(pPVar2->vector[0],n,(MethodInfo *)0x0);
        pPVar2 = (this->fields).nodes;
        if (pPVar2 != (PluralFormsNode__Array *)0x0) {
          if ((uint)pPVar2->max_length < 2) goto code_?;
          if (pPVar2->vector[1] != (PluralFormsNode *)0x0) {
            iVar5 = PluralFormsNode_Evaluate(pPVar2->vector[1],n,(MethodInfo *)0x0);
            pPVar2 = (this->fields).nodes;
            if (pPVar2 != (PluralFormsNode__Array *)0x0) {
              if ((uint)pPVar2->max_length < 3) goto code_?;
              if (pPVar2->vector[2] != (PluralFormsNode *)0x0) {
                iVar7 = PluralFormsNode_Evaluate(pPVar2->vector[2],n,(MethodInfo *)0x0);
                if (iVar4 != 0) {
                  return iVar5;
                }
                return iVar7;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
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
      lVar2 = 0x20;
      while (pPVar3 = (node->fields).nodes, pPVar3 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar3->max_length <= (int)uVar1) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(doAfter->fields)._._.invoke_impl)
                      ((doAfter->fields)._._.method_code,node,(doAfter->fields)._._.method);
            return;
          }
          break;
        }
        if ((uint)pPVar3->max_length <= uVar1) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((longlong)pPVar3->vector + lVar2 + -0x20) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((longlong)pPVar3->vector + lVar2 + -0x20),doBefore,
                     doAfter,(MethodInfo *)0x0);
        }
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 8;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PluralFormsNode Node(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Node
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  if (2 < (uint)i) {
    return (PluralFormsNode *)0x0;
  }
  pPVar1 = (this->fields).nodes;
  if (pPVar1 != (PluralFormsNode__Array *)0x0) {
    if ((uint)i < (uint)pPVar1->max_length) {
      return pPVar1->vector[i];
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (PluralFormsNode *)(*pcVar2)();
    return pPVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (PluralFormsNode *)(*pcVar2)();
  return pPVar3;
}


/* PluralFormsNode ReleaseNode(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ReleaseNode
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  pPVar1 = (this->fields).nodes;
  if (pPVar1 != (PluralFormsNode__Array *)0x0) {
    if ((uint)pPVar1->max_length <= (uint)i) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pPVar3 = (PluralFormsNode *)(*pcVar2)();
      return pPVar3;
    }
    pPVar3 = pPVar1->vector[i];
    this = (PluralFormsNode *)0x0;
    if (pPVar1 != (PluralFormsNode__Array *)0x0) {
      FUN_?(pPVar1,(longlong)i,0);
      return pPVar3;
    }
  }
  FUN_?(this);
  pcVar2 = (code *)swi(3);
  pPVar3 = (PluralFormsNode *)(*pcVar2)();
  return pPVar3;
}


/* Void SetNode(Int32, PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_SetNode
               (PluralFormsNode *this,int32_t i,PluralFormsNode *n,MethodInfo *method)

{
  if ((uint)i < 3) {
    pPVar1 = (this->fields).nodes;
    if (pPVar1 == (PluralFormsNode__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (n != (PluralFormsNode *)0x0) {
      lVar3 = FUN_?(n,(pPVar1->klass->_0).element_class);
      if (lVar3 == 0) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FUN_?(pPVar1,(longlong)i,n);
  }
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ToString
                   (PluralFormsNode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Node__Token__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__Node__Token__0__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_2,(Object *)(this->fields).token,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsNode(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode__ctor
               (PluralFormsNode *this,PluralFormsToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PluralFormsNode__Array *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  bVar2 = iRam_? != 0;
  (this->fields).nodes = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).nodes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (RecursiveTracer *)FUN_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  iVar7 = iRam_?;
  (this->fields).tracer = this_00;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).tracer >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).token = token;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

