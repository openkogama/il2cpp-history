
/* Void SetCounter(Int32) */

void Assembly-CSharp.dll::RollingNumberCounterAndroid::RollingNumberCounterAndroid_SetCounter
               (RollingNumberCounterAndroid *this,int32_t value,MethodInfo *method)

{
  aIStackX_10[0].m_value = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).digits;
  if (pRVar1 != (RollingNumberDigitAndroid__Array *)0x0) {
    iVar2 = (int)pRVar1->max_length;
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    if (str1 != (String *)0x0) {
      uVar3 = 0;
      iVar4 = (str1->fields)._stringLength;
      if (iVar2 < iVar4) {
        if (0 < iVar2) {
          lVar5 = 0x20;
          uVar6 = uVar3;
          do {
            pRVar1 = (this->fields).digits;
            if (pRVar1 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
            if ((uint)pRVar1->max_length <= (uint)uVar6) goto code_?;
            pRVar7 = *(RollingNumberDigitAndroid **)((longlong)pRVar1->vector + lVar5 + -0x20);
            if (pRVar7 == (RollingNumberDigitAndroid *)0x0) goto code_?;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      (pRVar7,9,(MethodInfo *)0x0);
            uVar6 = (ulonglong)((uint)uVar6 + 1);
            uVar3 = uVar3 + 1;
            lVar5 = lVar5 + 8;
          } while ((longlong)uVar3 < (longlong)iVar2);
        }
      }
      else {
        pSVar8 = ::StringLiteral__;
        uVar6 = uVar3;
        if (iVar4 < iVar2) {
          for (; (int)uVar6 < iVar2 - (str1->fields)._stringLength;
              uVar6 = (ulonglong)((int)uVar6 + 1)) {
            pSVar8 = mscorlib.dll::System::String::String_Concat_4
                               (pSVar8,StringLiteral__0,(MethodInfo *)0x0);
          }
          str1 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
        }
        if (0 < iVar2) {
          lVar5 = 0x20;
          do {
            pRVar1 = (this->fields).digits;
            if (pRVar1 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
            startIndex = (uint)uVar3;
            if ((uint)pRVar1->max_length <= startIndex) {
code_?:
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pRVar7 = *(RollingNumberDigitAndroid **)((longlong)pRVar1->vector + lVar5 + -0x20);
            if (str1 == (String *)0x0) goto code_?;
            pSVar8 = mscorlib.dll::System::String::String_Substring_1
                               (str1,startIndex,1,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Globalization__CultureInfo);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            value_00 = 0;
            if (pSVar8 != (String *)0x0) {
              if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_00 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread
                                  ((MethodInfo *)0x0);
              if (this_00 == (Thread *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Globalization__CultureInfo);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              provider = mscorlib.dll::System::Threading::Thread::Thread_GetCurrentCultureNoAppX
                                   (this_00,(MethodInfo *)0x0);
              value_00 = mscorlib.dll::System::Int32::Int32_Parse_2
                                   (pSVar8,(IFormatProvider *)provider,(MethodInfo *)0x0);
            }
            if (pRVar7 == (RollingNumberDigitAndroid *)0x0) goto code_?;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      (pRVar7,value_00,(MethodInfo *)0x0);
            uVar3 = (ulonglong)(startIndex + 1);
            lVar5 = lVar5 + 8;
          } while ((int)(startIndex + 1) < iVar2);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

