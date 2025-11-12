
/* Void DumpNodes(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_DumpNodes
               (PluralFormsCalculator *this,String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).plural == (PluralFormsNode *)0x0) {
    return;
  }
  object = (Object *)
           FUN_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0);
  this_00 = (Object__Class *)FUN_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_00,(MethodInfo *)0x0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if ((object[1].klass != (Object__Class *)0x0) &&
       (pSVar6 = (StringBuilder *)((object[1].klass)->_0).namespaze, pSVar6 != (StringBuilder *)0x0)
       ) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar6,(this->fields).expression,(MethodInfo *)0x0);
      if ((object[1].klass != (Object__Class *)0x0) &&
         (pSVar6 = (StringBuilder *)((object[1].klass)->_0).namespaze,
         pSVar6 != (StringBuilder *)0x0)) {
        value = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar6,value,(MethodInfo *)0x0);
        pPVar7 = (this->fields).plural;
        doBefore = (PluralFormsNode_IterateNodesDelegate *)
                   FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doBefore,object,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        doAfter = (PluralFormsNode_IterateNodesDelegate *)
                  FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doAfter,object,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
          (*(doBefore->fields)._._.invoke_impl)
                    ((doBefore->fields)._._.method_code,pPVar7,(doBefore->fields)._._.method);
          uVar2 = 0;
          if (pPVar7 != (PluralFormsNode *)0x0) {
            lVar8 = 0x20;
            while (pPVar9 = (pPVar7->fields).nodes, pPVar9 != (PluralFormsNode__Array *)0x0) {
              if ((int)pPVar9->max_length <= (int)uVar2) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  (*(doAfter->fields)._._.invoke_impl)((doAfter->fields)._._.method_code,pPVar7);
                  if (object[1].klass != (Object__Class *)0x0) {
                    RecursiveTracer::RecursiveTracer_SaveToFile
                              ((RecursiveTracer *)object[1].klass,fileName,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              if ((uint)pPVar9->max_length <= uVar2) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(longlong *)((longlong)pPVar9->vector + lVar8 + -0x20) != 0) {
                PluralFormsNode::PluralFormsNode_IterateNodes
                          (*(PluralFormsNode **)((longlong)pPVar9->vector + lVar8 + -0x20),doBefore,
                           doAfter,(MethodInfo *)0x0);
              }
              uVar2 = uVar2 + 1;
              lVar8 = lVar8 + 8;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                  (PluralFormsCalculator *this,int64_t n,MethodInfo *method)

{
  if ((((this->fields).plural != (PluralFormsNode *)0x0) &&
      (iVar1 = PluralFormsNode::PluralFormsNode_Evaluate((this->fields).plural,n,(MethodInfo *)0x0),
      -1 < iVar1)) && (iVar1 <= (this->fields).nplurals)) {
    return iVar1;
  }
  return 0;
}


/* PluralFormsCalculator Make(String) */

PluralFormsCalculator *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Make
          (String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsCalculator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsParser);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsScanner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__n);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((str != (String *)0x0) && ((str->fields)._stringLength != 0)) {
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral_u000A,(MethodInfo *)0x0)
    ;
    if (((bVar1 == 0) ||
        (str = mscorlib.dll::System::String::String_Remove
                         (str,(str->fields)._stringLength + -1,1,(MethodInfo *)0x0),
        str != (String *)0x0)) &&
       ((bVar1 = mscorlib.dll::System::String::String_EndsWith
                           (str,StringLiteral__n,(MethodInfo *)0x0), bVar1 == 0 ||
        (str = mscorlib.dll::System::String::String_Remove
                         (str,(str->fields)._stringLength + -2,2,(MethodInfo *)0x0),
        str != (String *)0x0)))) {
      bVar1 = mscorlib.dll::System::String::String_EndsWith(str,::StringLiteral__,(MethodInfo *)0x0)
      ;
      if (bVar1 == 0) {
        str = mscorlib.dll::System::String::String_Concat_4(str,::StringLiteral__,(MethodInfo *)0x0)
        ;
      }
      pPVar2 = (PluralFormsCalculator *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsCalculator)
      ;
      iVar3 = iRam_?;
      (pPVar2->fields).nplurals = 0;
      (pPVar2->fields).plural = (PluralFormsNode *)0x0;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(pPVar2->fields).plural >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      (pPVar2->fields).expression = str;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(pPVar2->fields).expression >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      this = (PluralFormsScanner *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsScanner);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar8 = iRam_? != 0;
      (this->fields).str = str;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pPVar9 = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      bVar8 = iRam_? != 0;
      (this->fields).token = pPVar9;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(this->fields).token >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      PluralFormsScanner::PluralFormsScanner_NextToken(this,(MethodInfo *)0x0);
      this_00 = (PluralFormsParser *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsParser);
      bVar8 = iRam_? != 0;
      (this_00->fields).scanner = this;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&this_00->fields >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar1 = PluralFormsParser::PluralFormsParser_Parse(this_00,pPVar2,(MethodInfo *)0x0);
      pPVar10 = (PluralFormsCalculator *)0x0;
      if (bVar1 != 0) {
        pPVar10 = pPVar2;
      }
      return pPVar10;
    }
    FUN_?();
    pcVar11 = (code *)swi(3);
    pPVar2 = (PluralFormsCalculator *)(*pcVar11)();
    return pPVar2;
  }
  return (PluralFormsCalculator *)0x0;
}


/* PluralFormsCalculator(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator__ctor
               (PluralFormsCalculator *this,String *expression,MethodInfo *method)

{
  (this->fields).nplurals = 0;
  (this->fields).plural = (PluralFormsNode *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).plural >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).expression = expression;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).expression >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

