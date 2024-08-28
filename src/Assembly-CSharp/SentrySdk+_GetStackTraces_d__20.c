
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::SentrySdk_GetStackTraces_d_20_MoveNext
               (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
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
      ppSVar5 = &(this->fields)._stackList_5__2;
      *ppSVar5 = pSVar4;
      func_?(ppSVar5,pSVar4);
      if (*ppSVar5 != (String__Array *)0x0) {
        (this->fields)._i_5__3 = (*ppSVar5)->max_length - 1;
        goto code_?;
      }
    }
    goto code_?;
  }
  if (iVar2 != 1) {
code_?:
    *unaff_FS_OFFSET = puStack_1;
    return 0;
  }
  (this->fields).__1__state = -1;
  do {
    do {
      piVar6 = &(this->fields)._i_5__3;
      *piVar6 = *piVar6 + -1;
code_?:
      uVar7 = (this->fields)._i_5__3;
      if ((int)uVar7 < 0) goto code_?;
      pSVar4 = (this->fields)._stackList_5__2;
      if (pSVar4 == (String__Array *)0x0) goto code_?;
      if (pSVar4->max_length <= uVar7) {
        func_?();
        func_?(&stack0xffffffe0,&UNK_?);
        goto code_?;
      }
      pSVar3 = pSVar4->vector[uVar7];
      bVar8 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar3,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    } while (bVar8 != 0);
    if (pSVar3 == (String *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::String::String_IndexOf(pSVar3,0x29,(MethodInfo *)0x0);
  } while (iVar9 == -1);
  pSVar10 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar9 + 1,(MethodInfo *)0x0);
  if ((pSVar3->fields)._stringLength < iVar9 + 6) {
code_?:
    pSVar11 = TypeInfo__System__String->static_fields->Empty;
code_?:
    iVar9 = -1;
  }
  else {
    pSVar10 = (String *)0x5;
    pSVar11 = mscorlib.dll::System::String::String_Substring_1
                        (pSVar3,iVar9 + 1,5,(MethodInfo *)0x0);
    bVar8 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar11,StringLiteral___at_,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      iVar2 = (pSVar3->fields)._stringLength;
      iVar12 = mscorlib.dll::System::String::String_LastIndexOf_2
                         (pSVar3,0x3a,iVar2 + -1,iVar2 - iVar9,(MethodInfo *)0x0);
      iVar2 = (pSVar3->fields)._stringLength;
      if (iVar9 == iVar2 + -1) goto code_?;
      if (iVar12 != -1) {
        pSVar11 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,iVar9 + 6,(iVar12 - iVar9) + -6,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,iVar12 + 1,((pSVar3->fields)._stringLength - iVar12) + -2,
                             (MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar9 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar3,(MethodInfo *)0x0);
        goto code_?;
      }
      pSVar11 = mscorlib.dll::System::String::String_Substring_1
                          (pSVar3,iVar9 + 6,(iVar2 - iVar9) + -7,(MethodInfo *)0x0);
      goto code_?;
    }
    pSVar10 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_failed_parsing_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar10,(MethodInfo *)0x0)
    ;
    iVar9 = -1;
    pSVar11 = TypeInfo__System__String->static_fields->Empty;
    pSVar10 = pSVar3;
  }
code_?:
  pSVar3 = pSVar10;
  bVar8 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar11,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    if (pSVar11 == (String *)0x0) goto code_?;
    uVar13 = mscorlib.dll::System::String::String_get_Chars(pSVar11,0,(MethodInfo *)0x0);
    if ((uVar13 != 0x3c) ||
       (uVar13 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar11,(pSVar11->fields)._stringLength + -1,(MethodInfo *)0x0),
       uVar13 != 0x3e)) {
      bVar8 = mscorlib.dll::System::String::String_Contains
                        (pSVar11,StringLiteral_Assets_,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  pSVar11 = TypeInfo__System__String->static_fields->Empty;
  if (pSVar10 != (String *)0x0) {
    bVar8 = mscorlib.dll::System::String::String_Contains
                      (pSVar10,StringLiteral_UnityEngine_,(MethodInfo *)0x0);
    bVar8 = bVar8 == 0;
code_?:
    this_00 = (StackTraceSpec *)func_?();
    Sentry::StackTraceSpec::StackTraceSpec__ctor
              (this_00,pSVar11,pSVar3,iVar9,bVar8,(MethodInfo *)0x0);
    (this->fields).__2__current = this_00;
    func_?();
    (this->fields).__1__state = 1;
    *unaff_FS_OFFSET = puStack_1;
    return 1;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  bVar8 = (*pcVar14)();
  return bVar8;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,in_stack_3);
  (value->fields).__1__state = 0;
  iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                    ((MethodInfo *)0x0);
  (value->fields).__l__initialThreadId = iVar2;
code_?:
  pSVar4 = (this->fields).__3__stackTrace;
  if (value != (SentrySdk_GetStackTraces_d_20 *)0x0) {
    ppSVar5 = &(value->fields).stackTrace;
    *ppSVar5 = pSVar4;
    func_?(ppSVar5,pSVar4);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar6)();
  return pIVar7;
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

