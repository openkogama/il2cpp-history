
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::SentrySdk_GetStackTraces_d_20_MoveNext
               (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Sentry__StackTraceSpec);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_UnityEngine_);
    func_?(&StringLiteral___at_);
    func_?(&StringLiteral_failed_parsing_);
    func_?(&StringLiteral_Assets_);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    pSVar3 = (this->fields).stackTrace;
    (this->fields).__1__state = -1;
    if (pSVar3 != (String *)0x0) {
      pSVar4 = mscorlib.dll::System::String::String_Split
                         (pSVar3,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      (this->fields)._stackList_5__2 = pSVar4;
      func_?(&(this->fields)._stackList_5__2,pSVar4);
      pSVar4 = (this->fields)._stackList_5__2;
      if (pSVar4 != (String__Array *)0x0) {
        iVar5 = pSVar4->max_length;
        goto code_?;
      }
    }
    goto code_?;
  }
  if (iVar2 != 1) {
code_?:
    *unaff_FS_OFFSET = uVar1;
    return 0;
  }
  (this->fields).__1__state = -1;
  do {
    do {
      iVar5 = (this->fields)._i_5__3;
code_?:
      uVar6 = iVar5 - 1;
      (this->fields)._i_5__3 = uVar6;
      if ((int)uVar6 < 0) goto code_?;
      pSVar4 = (this->fields)._stackList_5__2;
      if (pSVar4 == (String__Array *)0x0) goto code_?;
      if (pSVar4->max_length <= uVar6) {
        func_?();
        func_?(&stack0xffffffe0,&UNK_?);
        goto code_?;
      }
      pSVar3 = pSVar4->vector[iVar5 - 1];
      bVar7 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar3,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    } while (bVar7 != 0);
    if (pSVar3 == (String *)0x0) goto code_?;
    iVar8 = mscorlib.dll::System::String::String_IndexOf(pSVar3,0x29,(MethodInfo *)0x0);
  } while (iVar8 == -1);
  pSVar9 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar8 + 1,(MethodInfo *)0x0);
  if ((pSVar3->fields)._stringLength < iVar8 + 6) {
code_?:
    pSVar10 = TypeInfo__System__String->static_fields->Empty;
code_?:
    iVar8 = -1;
  }
  else {
    uVar1 = 5;
    pSVar9 = pSVar3;
    pSVar10 = mscorlib.dll::System::String::String_Substring_1
                        (pSVar3,iVar8 + 1,5,(MethodInfo *)0x0);
    bVar7 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar10,StringLiteral___at_,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      iVar2 = (pSVar3->fields)._stringLength;
      iVar11 = mscorlib.dll::System::String::String_LastIndexOf_2
                         (pSVar3,0x3a,iVar2 + -1,iVar2 - iVar8,(MethodInfo *)0x0);
      if (iVar8 == (pSVar3->fields)._stringLength + -1) goto code_?;
      if (iVar11 != -1) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,iVar8 + 6,(iVar11 - iVar8) + -6,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,iVar11 + 1,((pSVar3->fields)._stringLength - iVar11) + -2,
                             (MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar3,(MethodInfo *)0x0);
        goto code_?;
      }
      pSVar10 = mscorlib.dll::System::String::String_Substring_1
                          (pSVar3,iVar8 + 6,((pSVar3->fields)._stringLength - iVar8) + -7,
                           (MethodInfo *)0x0);
      goto code_?;
    }
    pSVar9 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_failed_parsing_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar9,(MethodInfo *)0x0);
    iVar8 = -1;
    pSVar10 = TypeInfo__System__String->static_fields->Empty;
    pSVar9 = pSVar3;
  }
code_?:
  pSVar3 = pSVar9;
  bVar7 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar10,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    if (pSVar10 == (String *)0x0) goto code_?;
    uVar12 = mscorlib.dll::System::String::String_get_Chars(pSVar10,0,(MethodInfo *)0x0);
    if ((uVar12 != 0x3c) ||
       (uVar12 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar10,(pSVar10->fields)._stringLength + -1,(MethodInfo *)0x0),
       uVar12 != 0x3e)) {
      bVar7 = mscorlib.dll::System::String::String_Contains
                        (pSVar10,StringLiteral_Assets_,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  pSVar10 = TypeInfo__System__String->static_fields->Empty;
  if (pSVar9 != (String *)0x0) {
    bVar7 = mscorlib.dll::System::String::String_Contains
                      (pSVar9,StringLiteral_UnityEngine_,(MethodInfo *)0x0);
    bVar7 = bVar7 == 0;
code_?:
    this_00 = (StackTraceSpec *)func_?();
    Sentry::StackTraceSpec::StackTraceSpec__ctor
              (this_00,pSVar10,pSVar3,iVar8,bVar7,(MethodInfo *)0x0);
    (this->fields).__2__current = this_00;
    func_?();
    (this->fields).__1__state = 1;
    *unaff_FS_OFFSET = uVar1;
    return 1;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar7 = (*pcVar13)();
  return bVar7;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::
SentrySdk_GetStackTraces_d_20_System_Collections_IEnumerable_GetEnumerator
          (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SentrySdk___GetStackTraces_d__20);
    cRam_? = '\x01';
  }
  if ((this->fields).__1__state == -2) {
    iVar1 = (this->fields).__l__initialThreadId;
    iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                      ((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (this->fields).__1__state = 0;
      value = this;
      goto code_?;
    }
  }
  value = (SentrySdk_GetStackTraces_d_20 *)
          func_?(TypeInfo__SentrySdk___GetStackTraces_d__20);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,in_stack_3);
  (value->fields).__1__state = 0;
  iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                    ((MethodInfo *)0x0);
  (value->fields).__l__initialThreadId = iVar2;
code_?:
  pSVar4 = (this->fields).__3__stackTrace;
  if (value != (SentrySdk_GetStackTraces_d_20 *)0x0) {
    (value->fields).stackTrace = pSVar4;
    func_?(&(value->fields).stackTrace,pSVar4);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IEnumerator *)(*pcVar5)();
  return pIVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::
     SentrySdk_GetStackTraces_d_20_System_Collections_IEnumerator_Reset
               (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__SentrySdk___GetStackTraces_d__20__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

