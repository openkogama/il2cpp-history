
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
  value = (Object *)
          func_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this_00 = (Object__Class *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
    if (this_00 != (Object__Class *)0x0) {
      RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_00,(MethodInfo *)0x0);
      value[1].klass = this_00;
      func_?(value + 1,this_00);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar1 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar1 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar1,(this->fields).expression,(MethodInfo *)0x0);
        if ((value[1].klass != (Object__Class *)0x0) &&
           (pSVar1 = (StringBuilder *)((value[1].klass)->_0).namespaze,
           pSVar1 != (StringBuilder *)0x0)) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                    (pSVar1,(MethodInfo *)0x0);
          pPVar2 = (this->fields).plural;
          doBefore = (PluralFormsNode_IterateNodesDelegate *)
                     func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
          if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                      ((Action_1_Object_ *)doBefore,value,
                       MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                       ,(MethodInfo *)0x0);
            doAfter = (PluralFormsNode_IterateNodesDelegate *)
                      func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate)
            ;
            if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        ((Action_1_Object_ *)doAfter,value,
                         MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                         ,(MethodInfo *)0x0);
              (*(doBefore->fields)._._.invoke_impl)
                        ((doBefore->fields)._._.method_code,pPVar2,(doBefore->fields)._._.method);
              uVar3 = 0;
              if (pPVar2 != (PluralFormsNode *)0x0) {
                iVar4 = 0x10;
                while (pPVar5 = (pPVar2->fields).nodes, pPVar5 != (PluralFormsNode__Array *)0x0) {
                  if ((int)pPVar5->max_length <= (int)uVar3) {
                    (*(doAfter->fields)._._.invoke_impl)
                              ((doAfter->fields)._._.method_code,pPVar2,(doAfter->fields)._._.method
                              );
                    if (value[1].klass != (Object__Class *)0x0) {
                      RecursiveTracer::RecursiveTracer_SaveToFile
                                ((RecursiveTracer *)value[1].klass,fileName,(MethodInfo *)0x0);
                      return;
                    }
                    break;
                  }
                  if (pPVar5->max_length <= uVar3) goto code_?;
                  if (*(int *)((int)pPVar5->vector + iVar4 + -0x10) != 0) {
                    PluralFormsNode::PluralFormsNode_IterateNodes
                              (*(PluralFormsNode **)((int)pPVar5->vector + iVar4 + -0x10),doBefore,
                               doAfter,(MethodInfo *)0x0);
                  }
                  uVar3 = uVar3 + 1;
                  iVar4 = iVar4 + 4;
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Int64 Evaluate(Int64, Boolean) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate
                  (PluralFormsCalculator *this,int64_t n,bool traceToFile,MethodInfo *method)

{
  if ((((this->fields).plural != (PluralFormsNode *)0x0) &&
      (iVar1 = PluralFormsNode::PluralFormsNode_Evaluate
                         ((this->fields).plural,n & 0xffffffff,unaff_EDI), -1 < iVar1)) &&
     (iVar1 <= (this->fields).nplurals)) {
    return iVar1;
  }
  return 0;
}


/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                  (PluralFormsCalculator *this,int64_t n,MethodInfo *method)

{
  if ((this->fields).plural == (PluralFormsNode *)0x0) {
    return 0;
  }
  iVar1 = PluralFormsNode::PluralFormsNode_Evaluate((this->fields).plural,n & 0xffffffff,unaff_EDI);
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
  if (bVar1 != 0) {
    return (PluralFormsCalculator *)0x0;
  }
  if (str != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral_u000A,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      unaff_EBP = (MethodInfo *)((str->fields)._stringLength + -1);
      str = mscorlib.dll::System::String::String_Remove(str,(int32_t)unaff_EBP,1,(MethodInfo *)0x0);
      if ((MethodInfo *)str == (MethodInfo *)0x0) goto code_?;
    }
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral__n,(MethodInfo *)0x0);
    if ((bVar1 == 0) ||
       (str = mscorlib.dll::System::String::String_Remove
                        (str,((String__Fields *)&((MethodInfo *)str)->invoker_method)->_stringLength
                             + -2,2,(MethodInfo *)0x0), (MethodInfo *)str != (MethodInfo *)0x0)) {
      bVar1 = mscorlib.dll::System::String::String_EndsWith(str,::StringLiteral__,(MethodInfo *)0x0)
      ;
      if (bVar1 == 0) {
        unaff_EBP = (MethodInfo *)str;
        str = mscorlib.dll::System::String::String_Concat_3(str,::StringLiteral__,(MethodInfo *)0x0)
        ;
      }
      pPVar2 = (PluralFormsCalculator *)func_?();
      if (pPVar2 != (PluralFormsCalculator *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pPVar2,ExceptionArgument__Enum_obj,unaff_EBX);
        (pPVar2->fields).nplurals = 0;
        (pPVar2->fields).plural = (PluralFormsNode *)0x0;
        func_?(&(pPVar2->fields).plural,0);
        (pPVar2->fields).expression = str;
        func_?(&(pPVar2->fields).expression,str);
        this = (PluralFormsScanner *)func_?(TypeInfo__GNU__Gettext__PluralFormsScanner);
        if (this != (PluralFormsScanner *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
            cRam_? = '\x01';
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
          (this->fields).str = str;
          func_?(&this->fields,str);
          value = (PluralFormsToken *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
          if (value != (PluralFormsToken *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBP);
            (this->fields).token = value;
            func_?(&(this->fields).token,value);
            PluralFormsScanner::PluralFormsScanner_NextToken(this,(MethodInfo *)0x0);
            this_00 = (PluralFormsParser *)
                      func_?(TypeInfo__GNU__Gettext__PluralFormsParser);
            if (this_00 != (PluralFormsParser *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EBP);
              (this_00->fields).scanner = this;
              func_?(&this_00->fields,this);
              bVar1 = PluralFormsParser::PluralFormsParser_Parse(this_00,pPVar2,(MethodInfo *)0x0);
              if (bVar1 == 0) {
                return (PluralFormsCalculator *)0x0;
              }
              return pPVar2;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar2 = (PluralFormsCalculator *)(*pcVar3)();
  return pPVar2;
}


/* PluralFormsCalculator(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator__ctor
               (PluralFormsCalculator *this,String *expression,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).nplurals = 0;
  (this->fields).plural = (PluralFormsNode *)0x0;
  func_?(&(this->fields).plural,0);
  (this->fields).expression = expression;
  func_?(&(this->fields).expression,expression);
  return;
}

