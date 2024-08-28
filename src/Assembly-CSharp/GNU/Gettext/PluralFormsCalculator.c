
/* Void DumpNodes(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_DumpNodes
               (PluralFormsCalculator *this,String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
    func_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    func_?(&
                    MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   );
    func_?(&
                    MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   );
    func_?(&TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  if ((this->fields).plural == (PluralFormsNode *)0x0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (Object__Class *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_00,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    pOVar1 = value + 1;
    pOVar1->klass = this_00;
    func_?(pOVar1,pOVar1);
    if ((value[1].klass != (Object__Class *)0x0) &&
       (pSVar2 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar2 != (StringBuilder *)0x0))
    {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar2,(this->fields).expression,(MethodInfo *)0x0);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar2 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar2 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                  (pSVar2,(MethodInfo *)0x0);
        pPVar3 = (this->fields).plural;
        this_01 = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        doBefore = this_01;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_01,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        doAfter = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doAfter,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        if (this_01 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
          (*(((UnityAction_1_System_Object___Fields *)&this_01->fields)->_)._.invoke_impl)
                    ((((UnityAction_1_System_Object___Fields *)&this_01->fields)->_)._.method_code,
                     pPVar3,(((UnityAction_1_System_Object___Fields *)&this_01->fields)->_)._.method
                    );
          uVar4 = 0;
          if (pPVar3 != (PluralFormsNode *)0x0) {
            iVar5 = 0x10;
            while (pPVar6 = (pPVar3->fields).nodes, pPVar6 != (PluralFormsNode__Array *)0x0) {
              if ((int)pPVar6->max_length <= (int)uVar4) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  puVar7 = (doAfter->fields)._._.method_code;
                  (*(doAfter->fields)._._.invoke_impl)(puVar7,pPVar3,(doAfter->fields)._._.method);
                  if ((RecursiveTracer *)*puVar7 != (RecursiveTracer *)0x0) {
                    RecursiveTracer::RecursiveTracer_SaveToFile
                              ((RecursiveTracer *)*puVar7,fileName,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              if (pPVar6->max_length <= uVar4) goto code_?;
              if (*(int *)((int)pPVar6->vector + iVar5 + -0x10) != 0) {
                PluralFormsNode::PluralFormsNode_IterateNodes
                          (*(PluralFormsNode **)((int)pPVar6->vector + iVar5 + -0x10),doBefore,
                           doAfter,(MethodInfo *)0x0);
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 4;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int64 Evaluate(Int64, Boolean) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate
                  (PluralFormsCalculator *this,int64_t n,bool traceToFile,MethodInfo *method)

{
  this_00 = (this->fields).plural;
  if (((this_00 != (PluralFormsNode *)0x0) &&
      (iVar1 = PluralFormsNode::PluralFormsNode_Evaluate(this_00,n & 0xffffffff,unaff_EDI),
      -1 < iVar1)) && (iVar1 <= (this->fields).nplurals)) {
    return iVar1;
  }
  return 0;
}


/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                  (PluralFormsCalculator *this,int64_t n,MethodInfo *method)

{
  this_00 = (this->fields).plural;
  if (this_00 == (PluralFormsNode *)0x0) {
    return 0;
  }
  iVar1 = PluralFormsNode::PluralFormsNode_Evaluate(this_00,n & 0xffffffff,unaff_EDI);
  if ((-1 < iVar1) && (iVar1 <= (this->fields).nplurals)) {
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsCalculator);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsParser);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsScanner);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral__n);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(str,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (str == (String *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pPVar3 = (PluralFormsCalculator *)(*pcVar2)();
      return pPVar3;
    }
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral_u000A,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      str = mscorlib.dll::System::String::String_Remove
                      (str,(str->fields)._stringLength + -1,1,(MethodInfo *)0x0);
      if (str == (String *)0x0) goto code_?;
    }
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral__n,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      str = mscorlib.dll::System::String::String_Remove
                      (str,(str->fields)._stringLength + -2,2,(MethodInfo *)0x0);
      if (str == (String *)0x0) goto code_?;
    }
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      str = mscorlib.dll::System::String::String_Concat_3(str,::StringLiteral__,(MethodInfo *)0x0);
    }
    method_01 = TypeInfo__GNU__Gettext__PluralFormsCalculator;
    pPVar3 = (PluralFormsCalculator *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pPVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pPVar3->fields).nplurals = 0;
    (pPVar3->fields).plural = (PluralFormsNode *)0x0;
    func_?();
    ppSVar4 = &(pPVar3->fields).expression;
    *ppSVar4 = str;
    func_?(ppSVar4);
    this = (PluralFormsScanner *)func_?(TypeInfo__GNU__Gettext__PluralFormsScanner);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_5);
    (this->fields).str = str;
    func_?();
    method_02 = TypeInfo__GNU__Gettext__PluralFormsToken;
    value = (PluralFormsToken *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    (this->fields).token = value;
    func_?();
    PluralFormsScanner::PluralFormsScanner_NextToken(this,(MethodInfo *)0x0);
    method_00 = TypeInfo__GNU__Gettext__PluralFormsParser;
    this_00 = (PluralFormsParser *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this_00->fields).scanner = this;
    func_?(&this_00->fields,this);
    bVar1 = PluralFormsParser::PluralFormsParser_Parse(this_00,pPVar3,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return pPVar3;
    }
  }
  return (PluralFormsCalculator *)0x0;
}


/* PluralFormsCalculator(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator__ctor
               (PluralFormsCalculator *this,String *expression,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppPVar1 = &(this->fields).plural;
  (this->fields).nplurals = 0;
  *ppPVar1 = (PluralFormsNode *)0x0;
  func_?(ppPVar1,0);
  ppSVar2 = &(this->fields).expression;
  *ppSVar2 = expression;
  func_?(ppSVar2,expression);
  return;
}

