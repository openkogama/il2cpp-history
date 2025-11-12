
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::SentrySdk_GetStackTraces_d_20_MoveNext
               (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__StackTraceSpec);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnityEngine_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___at_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_failed_parsing_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Assets_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    goto code_?;
  }
  (this->fields).__1__state = -1;
  pSVar2 = (this->fields).stackTrace;
  if (pSVar2 != (String *)0x0) {
    pSVar3 = mscorlib.dll::System::String::String_Split
                        (pSVar2,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    (this->fields)._stackList_5__2 = pSVar3;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields)._stackList_5__2 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pSVar3 = (this->fields)._stackList_5__2;
    if (pSVar3 != (String__Array *)0x0) {
      (this->fields)._i_5__3 = (int)pSVar3->max_length + -1;
      do {
        lineNo = -1;
        if ((this->fields)._i_5__3 < 0) {
          return 0;
        }
        pSVar3 = (this->fields)._stackList_5__2;
        uVar4 = (this->fields)._i_5__3;
        if (pSVar3 == (String__Array *)0x0) break;
        if ((uint)pSVar3->max_length <= uVar4) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pSVar2 = pSVar3->vector[uVar4];
        pSVar10 = (String *)**(undefined8 **)(lRam_? + 0xb8);
        if (pSVar2 != pSVar10) {
          if (pSVar2 == (String *)0x0) break;
          if ((pSVar10 != (String *)0x0) &&
             ((pSVar2->fields)._stringLength == (pSVar10->fields)._stringLength)) {
            bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar2->fields)._firstChar,
                               (uint8_t *)&(pSVar10->fields)._firstChar,
                               (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
            if (bVar9 != 0) goto code_?;
            if (pSVar2 == (String *)0x0) break;
          }
          iVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                            (&(pSVar2->fields)._firstChar,0x29,(pSVar2->fields)._stringLength,
                             (MethodInfo *)0x0);
          if (iVar11 != -1) {
            pSVar10 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar2,0,iVar11 + 1,(MethodInfo *)0x0);
            if ((pSVar2->fields)._stringLength < iVar11 + 6) {
code_?:
              pSVar12 = (String *)**(undefined8 **)(lRam_? + 0xb8);
            }
            else {
              pSVar12 = mscorlib.dll::System::String::String_Substring_1
                                  (pSVar2,iVar11 + 1,5,(MethodInfo *)0x0);
              if ((pSVar12 != StringLiteral___at_) &&
                 ((((pSVar12 == (String *)0x0 || (StringLiteral___at_ == (String *)0x0)) ||
                   ((pSVar12->fields)._stringLength != (StringLiteral___at_->fields)._stringLength))
                  || (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(pSVar12->fields)._firstChar,
                                         (uint8_t *)&(StringLiteral___at_->fields)._firstChar,
                                         (longlong)(pSVar12->fields)._stringLength * 2,
                                         (MethodInfo *)0x0), bVar9 == 0)))) {
                pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_failed_parsing_,pSVar2,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar10,(MethodInfo *)0x0);
                pSVar10 = pSVar2;
                goto code_?;
              }
              iVar1 = (pSVar2->fields)._stringLength;
              iVar13 = mscorlib.dll::System::String::String_LastIndexOf_2
                                 (pSVar2,0x3a,iVar1 + -1,iVar1 - iVar11,(MethodInfo *)0x0);
              if (iVar11 == (pSVar2->fields)._stringLength + -1) goto code_?;
              if (iVar13 == -1) {
                pSVar12 = mscorlib.dll::System::String::String_Substring_1
                                    (pSVar2,iVar11 + 6,
                                     ((pSVar2->fields)._stringLength - iVar11) + -7,
                                     (MethodInfo *)0x0);
              }
              else {
                pSVar12 = mscorlib.dll::System::String::String_Substring_1
                                    (pSVar2,iVar11 + 6,(iVar13 - iVar11) + -6,(MethodInfo *)0x0);
                pSVar2 = mscorlib.dll::System::String::String_Substring_1
                                    (pSVar2,iVar13 + 1,
                                     ((pSVar2->fields)._stringLength - iVar13) + -2,
                                     (MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                  FUN_?();
                }
                lineNo = mscorlib.dll::System::Convert::Convert_ToInt32_14
                                   (pSVar2,(MethodInfo *)0x0);
              }
            }
            pSVar2 = (String *)**(longlong **)(lRam_? + 0xb8);
            if (pSVar12 == pSVar2) {
code_?:
              pSVar12 = (String *)**(undefined8 **)(lRam_? + 0xb8);
              if (pSVar10 == (String *)0x0) break;
              bVar14 = mscorlib.dll::System::String::String_Contains
                                (pSVar10,StringLiteral_UnityEngine_,(MethodInfo *)0x0);
              bVar9 = 1;
              if (bVar14 != 0) {
                bVar9 = 0;
              }
            }
            else {
              if (pSVar12 == (String *)0x0) break;
              if ((pSVar2 != (String *)0x0) &&
                 ((pSVar12->fields)._stringLength == (pSVar2->fields)._stringLength)) {
                bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar12->fields)._firstChar,
                                   (uint8_t *)&(pSVar2->fields)._firstChar,
                                   (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0);
                if (bVar9 != 0) goto code_?;
                if (pSVar12 == (String *)0x0) break;
              }
              if ((pSVar12->fields)._stringLength < 1) {
code_?:
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                          ((MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                bVar9 = (*pcVar8)();
                return bVar9;
              }
              if ((pSVar12->fields)._firstChar == 0x3c) {
                uVar4 = (pSVar12->fields)._stringLength;
                if ((uint)(pSVar12->fields)._stringLength <= uVar4 - 1) goto code_?;
                if (*(short *)((longlong)&(pSVar12->fields)._stringLength +
                              (ulonglong)uVar4 * 2 + 2) == 0x3e) goto code_?;
              }
              bVar9 = mscorlib.dll::System::String::String_Contains
                                (pSVar12,StringLiteral_Assets_,(MethodInfo *)0x0);
            }
            this_00 = (StackTraceSpec *)FUN_?(TypeInfo__Sentry__StackTraceSpec);
            Sentry::StackTraceSpec::StackTraceSpec__ctor
                      (this_00,pSVar12,pSVar10,lineNo,bVar9,(MethodInfo *)0x0);
            (this->fields).__2__current = this_00;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 1;
            return 1;
          }
        }
code_?:
        piVar15 = &(this->fields)._i_5__3;
        *piVar15 = *piVar15 + -1;
      } while( true );
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::SentrySdk+<GetStackTraces>d__20::
SentrySdk_GetStackTraces_d_20_System_Collections_IEnumerable_GetEnumerator
          (SentrySdk_GetStackTraces_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).__1__state == -2) &&
     (iVar1 = (this->fields).__l__initialThreadId,
     iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0), iVar1 == iVar2)) {
    (this->fields).__1__state = 0;
    pSVar3 = this;
  }
  else {
    pSVar3 = (SentrySdk_GetStackTraces_d_20 *)FUN_?();
    (pSVar3->fields).__1__state = 0;
    iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                      ((MethodInfo *)0x0);
    (pSVar3->fields).__l__initialThreadId = iVar2;
  }
  if (pSVar3 == (SentrySdk_GetStackTraces_d_20 *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pIVar5 = (IEnumerator *)(*pcVar4)();
    return pIVar5;
  }
  bVar6 = iRam_? != 0;
  (pSVar3->fields).stackTrace = (this->fields).__3__stackTrace;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(pSVar3->fields).stackTrace >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return (IEnumerator *)pSVar3;
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
  uVar1 = func_?(&
                              MethodInfo__SentrySdk___GetStackTraces_d__20__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

