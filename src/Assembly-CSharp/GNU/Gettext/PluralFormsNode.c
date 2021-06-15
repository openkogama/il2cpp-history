
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBX,unaff_ESI);
  pPVar2 = (this->fields).token;
  if (pPVar2 != (PluralFormsToken *)0x0) {
    switch((pPVar2->fields).type) {
    case 2:
      if (pPVar2 != (PluralFormsToken *)0x0) {
        return (int64_t)(pPVar2->fields).number;
      }
      break;
    case 3:
      return CONCAT44((MethodInfo *)n,in_stack_3);
    default:
      return 0;
    case 6:
      if (((((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
           pPVar5 != (PluralFormsNode *)0x0)) &&
          (iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4),
          unaff_EDI = (MethodInfo *)n, (this->fields).nodes != (PluralFormsNode__Array *)0x0)) &&
         (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
        iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        if (iVar6 != iVar7) {
          return 0;
        }
        return 1;
      }
      break;
    case 8:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        iVar8 = (int)((ulonglong)iVar6 >> 0x20);
        unaff_EDI = (MethodInfo *)n;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          iVar9 = (int)((ulonglong)iVar7 >> 0x20);
          if (iVar9 < iVar8) {
            return 1;
          }
          if (iVar8 < iVar9) {
            return 0;
          }
          if ((uint)iVar6 <= (uint)iVar7) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 9:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        iVar8 = (int)((ulonglong)iVar6 >> 0x20);
        unaff_EDI = (MethodInfo *)n;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          iVar9 = (int)((ulonglong)iVar7 >> 0x20);
          if (iVar9 < iVar8) {
            return 1;
          }
          if (iVar8 < iVar9) {
            return 0;
          }
          if ((uint)iVar6 < (uint)iVar7) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 10:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        iVar8 = (int)((ulonglong)iVar6 >> 0x20);
        unaff_EDI = (MethodInfo *)n;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          iVar9 = (int)((ulonglong)iVar7 >> 0x20);
          if (iVar8 < iVar9) {
            return 1;
          }
          if (iVar9 < iVar8) {
            return 0;
          }
          if ((uint)iVar7 <= (uint)iVar6) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 0xb:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        iVar8 = (int)((ulonglong)iVar6 >> 0x20);
        unaff_EDI = (MethodInfo *)n;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          iVar9 = (int)((ulonglong)iVar7 >> 0x20);
          if (iVar8 < iVar9) {
            return 1;
          }
          if (iVar9 < iVar8) {
            return 0;
          }
          if ((uint)iVar7 < (uint)iVar6) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 0xc:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(1),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        if (iVar6 == 0) {
          return 0;
        }
        unaff_EDI = (MethodInfo *)n;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          iVar6 = func_?(iVar7,iVar6);
          return iVar6;
        }
      }
      break;
    case 0xd:
      if (((((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
           pPVar5 != (PluralFormsNode *)0x0)) &&
          (iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4),
          unaff_EDI = (MethodInfo *)n, (this->fields).nodes != (PluralFormsNode__Array *)0x0)) &&
         (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
        iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        if (iVar6 == iVar7) {
          return 0;
        }
        return 1;
      }
      break;
    case 0xe:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        unaff_EDI = (MethodInfo *)iVar6;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          if (iVar6 == 0) {
            return 0;
          }
          if (iVar7 == 0) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 0xf:
      if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
         (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
         pPVar5 != (PluralFormsNode *)0x0)) {
        iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        unaff_EDI = (MethodInfo *)iVar6;
        if (((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
          iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
          if (iVar6 != 0) {
            return 1;
          }
          if (iVar7 == 0) {
            return 0;
          }
          return 1;
        }
      }
      break;
    case 0x10:
      if (((((this->fields).nodes != (PluralFormsNode__Array *)0x0) &&
           (pMVar4 = unaff_EDI, pPVar5 = (PluralFormsNode *)func_?(0),
           pPVar5 != (PluralFormsNode *)0x0)) &&
          (iVar6 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4),
          unaff_EDI = (MethodInfo *)n, (this->fields).nodes != (PluralFormsNode__Array *)0x0)) &&
         (pPVar5 = (PluralFormsNode *)func_?(), pPVar5 != (PluralFormsNode *)0x0)) {
        iVar7 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
        if ((this->fields).nodes != (PluralFormsNode__Array *)0x0) {
          uVar10 = 2;
          pPVar5 = (PluralFormsNode *)func_?();
          if (pPVar5 != (PluralFormsNode *)0x0) {
            iVar11 = PluralFormsNode_Evaluate(pPVar5,n & 0xffffffff,pMVar4);
            if (iVar6 != 0) {
              return CONCAT44(uVar10,(int)iVar7);
            }
            return iVar11;
          }
        }
      }
    }
  }
  bVar12 = 0;
  func_?(0);
  pcVar13 = (code *)swi(0xa5);
  uVar14 = (*pcVar13)();
  bVar15 = (byte)((ushort)uVar14 >> 8);
  bVar16 = (byte)uVar14 + bVar15;
  bVar17 = CARRY1((byte)uVar14,bVar15) || CARRY1(bVar16,bVar12);
  cVar18 = bVar16 + bVar12;
  unaff_EDI->methodPointer = (Il2CppMethodPointer)this->klass;
  bVar16 = (byte)extraout_CX + extraout_DL;
  bVar19 = CARRY1((byte)extraout_CX,extraout_DL) || CARRY1(bVar16,bVar17);
  bVar16 = bVar16 + bVar17;
  *(char *)&unaff_EDI->virtualMethodPointer = cVar18;
  bVar12 = bVar16 + extraout_DL;
  bVar20 = bVar12 + bVar19;
  *(char *)((int)&unaff_EDI->virtualMethodPointer + 1) = cVar18;
  bVar21 = (byte)((ushort)extraout_CX >> 8);
  *(MonitorData **)((int)&unaff_EDI->virtualMethodPointer + 2) = this->monitor;
  *(char *)((int)&unaff_EDI->invoker_method + 2) = cVar18;
  pcVar22 = (char *)((int)&unaff_EDI[-2].klass + 1);
  *pcVar22 = *pcVar22 + bVar15 +
            (CARRY1(bVar20,extraout_DL) ||
            CARRY1(bVar20 + extraout_DL,
                   CARRY1(bVar21,bVar21) ||
                   CARRY1(bVar21 * '\x02',CARRY1(bVar16,extraout_DL) || CARRY1(bVar12,bVar19))));
  pcVar22 = (char *)((int)&unaff_EDI[-2].klass + 3);
  *pcVar22 = *pcVar22 + bVar15 +
            (*(byte *)&(this->fields).token < *(byte *)((int)&unaff_EDI->invoker_method + 3));
  *(byte *)&unaff_EDI[-2].parameters =
       *(char *)&unaff_EDI[-2].parameters + bVar15 +
       (*(char **)((int)&(this->fields).token + 1) < unaff_EDI->name);
  pcVar13 = (code *)swi(3);
  iVar6 = (*pcVar13)(uVar1);
  return iVar6;
}


/* Void IterateNodes(PluralFormsNode, PluralFormsNode+IterateNodesDelegate,
   PluralFormsNode+IterateNodesDelegate) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
               (PluralFormsNode *node,PluralFormsNode_IterateNodesDelegate *doBefore,
               PluralFormsNode_IterateNodesDelegate *doAfter,MethodInfo *method)

{
  if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    PluralFormsNode+IterateNodesDelegate::PluralFormsNode_IterateNodesDelegate_Invoke
              (doBefore,node,(MethodInfo *)0x0);
    uVar1 = 0;
    if (node != (PluralFormsNode *)0x0) {
      iVar2 = 0x10;
      while (pPVar3 = (node->fields).nodes, pPVar3 != (PluralFormsNode__Array *)0x0) {
        if ((int)pPVar3->max_length <= (int)uVar1) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            PluralFormsNode+IterateNodesDelegate::PluralFormsNode_IterateNodesDelegate_Invoke
                      (doAfter,node,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        if (pPVar3 == (PluralFormsNode__Array *)0x0) break;
        if (pPVar3->max_length <= uVar1) goto code_?;
        if (*(int *)((int)pPVar3->vector + iVar2 + -0x10) != 0) {
          if (pPVar3 == (PluralFormsNode__Array *)0x0) break;
          node_00 = (PluralFormsNode *)func_?(uVar1);
          PluralFormsNode_IterateNodes(node_00,doBefore,doAfter,(MethodInfo *)0x0);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 4;
      }
    }
  }
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PluralFormsNode Node(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Node
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  if ((-1 < i) && (i < 3)) {
    pPVar1 = (this->fields).nodes;
    if (pPVar1 != (PluralFormsNode__Array *)0x0) {
      if ((uint)i < pPVar1->max_length) {
        return pPVar1->vector[i];
      }
      uVar2 = func_?(0,0);
      func_?(uVar2);
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    pPVar4 = (PluralFormsNode *)(*pcVar3)();
    return pPVar4;
  }
  return (PluralFormsNode *)0x0;
}


/* PluralFormsNode ReleaseNode(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ReleaseNode
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  pPVar1 = (this->fields).nodes;
  if (pPVar1 != (PluralFormsNode__Array *)0x0) {
    if (pPVar1->max_length <= (uint)i) goto code_?;
    pPVar2 = pPVar1->vector[i];
    if (pPVar1 != (PluralFormsNode__Array *)0x0) {
      pPVar1->vector[i] = (PluralFormsNode *)0x0;
      return pPVar2;
    }
  }
  func_?(0);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pPVar2 = (PluralFormsNode *)(*pcVar4)();
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
    func_?(0);
  }
  else if ((n == (PluralFormsNode *)0x0) ||
          (iVar2 = func_?(n,(pPVar1->klass->_0).element_class), iVar2 != 0)) {
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = n;
      return;
    }
    goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ToString
                   (PluralFormsNode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields).token;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__Node__Token__0__,(Object *)arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsNode(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode__ctor
               (PluralFormsNode *this,PluralFormsToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (PluralFormsNode__Array *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode,3);
  (this->fields).nodes = pPVar1;
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  method_00 = TypeInfo__System__Text__StringBuilder;
  this_01 = (StringBuilder *)func_?();
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_01,(MethodInfo *)0x0);
  (this_00->fields).state = (int32_t)this_01;
  (this_00->fields)._._._._.m_CachedPtr = (void *)0x0;
  (this->fields).tracer = (RecursiveTracer *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).token = token;
  return;
}

