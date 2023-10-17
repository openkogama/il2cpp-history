
/* Void ActionTextReaderLine(TextReader, TextWriter, StringUtils+ActionLine) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ActionTextReaderLine
               (TextReader *textReader,TextWriter *textWriter,StringUtils_ActionLine *lineAction,
               MethodInfo *method)

{
  bVar1 = true;
  if (textReader == (TextReader *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    iVar3 = (*(textReader->klass->vtable).ReadLine.methodPtr)
                      (textReader,(textReader->klass->vtable).ReadLine.method);
    if (iVar3 == 0) {
      return;
    }
    if (bVar1) {
      bVar1 = false;
    }
    else {
      if (textWriter == (TextWriter *)0x0) goto code_?;
      func_?(0x12,textWriter);
    }
    if (lineAction == (StringUtils_ActionLine *)0x0) goto code_?;
    (*(lineAction->fields)._._.invoke_impl)
              ((lineAction->fields)._._.method_code,textWriter,iVar3,(lineAction->fields)._._.method
              );
  } while( true );
}


/* Boolean ContainsWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ContainsWhiteSpace
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    index = 0;
    while( true ) {
      if ((s->fields)._stringLength <= index) {
        return 0;
      }
      c = mscorlib.dll::System::String::String_get_Chars(s,index,(MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar1 != 0) break;
      index = index + 1;
    }
    return 1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,method_00);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ContainsWhiteSpace_System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* StringWriter CreateStringWriter(Int32) */

StringWriter *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_CreateStringWriter
          (int32_t capacity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
              (this,capacity,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    formatProvider =
         mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                   ((MethodInfo *)0x0);
    pSVar1 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
    if (pSVar1 != (StringWriter *)0x0) {
      mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_2
                (pSVar1,this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (StringWriter *)(*pcVar2)();
  return pSVar1;
}


/* String EnsureEndsWith(String, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_EnsureEndsWith
                   (String *target,String *value,MethodInfo *method)

{
  if (target == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar2 = (ArgumentNullException *)func_?(uVar1);
    func_?(pAVar2);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_target);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar2,pSVar4,pMVar3)
    ;
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__StringUtils__EnsureEndsWith_System__String__System__String_
                           );
    func_?(pAVar2,uVar1);
  }
  else {
    if (value == (String *)0x0) goto code_?;
    iVar5 = (target->fields)._stringLength;
    if (iVar5 < (value->fields)._stringLength) {
code_?:
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(target,value,(MethodInfo *)0x0);
      return pSVar4;
    }
    iVar6 = mscorlib.dll::System::String::String_Compare_4
                      (target,iVar5 - (value->fields)._stringLength,value,0,
                       (value->fields)._stringLength,StringComparison__Enum_OrdinalIgnoreCase,
                       (MethodInfo *)0x0);
    if (iVar6 == 0) {
      return target;
    }
    pSVar4 = mscorlib.dll::System::String::String_TrimEnd_1
                       (target,(Char__Array *)0x0,(MethodInfo *)0x0);
    if (pSVar4 != (String *)0x0) {
      iVar6 = mscorlib.dll::System::String::String_Compare_4
                        (pSVar4,(pSVar4->fields)._stringLength - (value->fields)._stringLength,value
                         ,0,(value->fields)._stringLength,StringComparison__Enum_OrdinalIgnoreCase,
                         (MethodInfo *)0x0);
      if (iVar6 == 0) {
        return target;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar2 = (ArgumentNullException *)func_?(uVar1);
  func_?(pAVar2);
  pMVar3 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar2,pSVar4,pMVar3);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__EnsureEndsWith_System__String__System__String_
                         );
  func_?(pAVar2,uVar1);
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* KeyValuePair`2[System.Object,System.Object]
   ForgivingCaseSensitiveFind[KeyValuePair`2[System.Object,System.Object]](IEnumerable`1[KeyValuePair`2[System.Object,System.Object]],
   Func`2[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],String], String) */

KeyValuePair_2_System_Object_System_Object_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
StringUtils_ForgivingCaseSensitiveFind
          (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *source,
          Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_
          *valueSelector,String *testValue,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 == 0) {
code_?:
    func_?();
    func_?();
  }
  else {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ **)
     (iVar2 + 8) = valueSelector;
    func_?(iVar2 + 8,valueSelector);
    *(String **)(iVar2 + 0xc) = testValue;
    func_?(iVar2 + 0xc,testValue);
    if (source == (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0)
    goto code_?;
    if (*(int *)(iVar2 + 8) != 0) {
      pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      iVar3 = func_?(pvVar1);
      if (iVar3 != 0) {
        pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
        (*pMVar4->virtualMethodPointer)
                  (iVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
        uVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                          (source,iVar3,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
        iVar3 = (*((method->field7_0x1c).rgctx_data[6].method)->virtualMethodPointer)
                          (uVar5,(method->field7_0x1c).rgctx_data[6].rgctxDataDummy);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0xc) < 2) {
            if (*(int *)(iVar3 + 0xc) == 1) {
              return *(KeyValuePair_2_System_Object_System_Object_ *)(iVar3 + 0x10);
            }
            KVar6.key = (Object *)0x0;
            KVar6.value = (Object *)0x0;
            return KVar6;
          }
          pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
          if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
            pvVar1 = (void *)func_?(pvVar1);
          }
          iVar3 = func_?(pvVar1);
          if (iVar3 != 0) {
            pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
            (*pMVar4->virtualMethodPointer)
                      (iVar3,iVar2,(method->field7_0x1c).rgctx_data[7].rgctxDataDummy,pMVar4);
            uVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                              (source,iVar3,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
            KVar6 = (KeyValuePair_2_System_Object_System_Object_)
                    (*((method->field7_0x1c).rgctx_data[8].method)->virtualMethodPointer)
                              (uVar5,(method->field7_0x1c).rgctx_data[8].rgctxDataDummy);
            return KVar6;
          }
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar5);
  func_?(pAVar7);
  pMVar4 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_valueSelector);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar7,pSVar8,pMVar4);
  uVar5 = func_?(&
                          System__Collections__Generic__KeyValuePair<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_System::String>__System__String_
                         );
  func_?(pAVar7,uVar5);
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar5);
  func_?(pAVar7);
  pMVar4 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_source);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar7,pSVar8,pMVar4);
  uVar5 = func_?(&
                          System__Collections__Generic__KeyValuePair<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_System::String>__System__String_
                         );
  func_?(pAVar7,uVar5);
  pcVar9 = (code *)swi(3);
  KVar6 = (KeyValuePair_2_System_Object_System_Object_)(*pcVar9)();
  return KVar6;
}


/* Object ForgivingCaseSensitiveFind[Object](IEnumerable`1[System.Object], Func`2[Object,String],
   String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
         StringUtils_ForgivingCaseSensitiveFind_1
                   (IEnumerable_1_System_Object_ *source,Func_2_Object_String_ *valueSelector,
                   String *testValue,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 == 0) {
code_?:
    func_?();
    func_?();
  }
  else {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(Func_2_Object_String_ **)(iVar2 + 8) = valueSelector;
    func_?(iVar2 + 8,valueSelector);
    *(String **)(iVar2 + 0xc) = testValue;
    func_?(iVar2 + 0xc,testValue);
    if (source == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if (*(int *)(iVar2 + 8) != 0) {
      pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      iVar3 = func_?(pvVar1);
      if (iVar3 != 0) {
        pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
        (*pMVar4->virtualMethodPointer)
                  (iVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
        uVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                          (source,iVar3,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
        iVar3 = (*((method->field7_0x1c).rgctx_data[6].method)->virtualMethodPointer)
                          (uVar5,(method->field7_0x1c).rgctx_data[6].rgctxDataDummy);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0xc) < 2) {
            if (*(int *)(iVar3 + 0xc) == 1) {
              return *(Object **)(iVar3 + 0x10);
            }
            return (Object *)0x0;
          }
          pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
          if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
            pvVar1 = (void *)func_?(pvVar1);
          }
          iVar3 = func_?(pvVar1);
          if (iVar3 != 0) {
            pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
            (*pMVar4->virtualMethodPointer)
                      (iVar3,iVar2,(method->field7_0x1c).rgctx_data[7].rgctxDataDummy,pMVar4);
            uVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                              (source,iVar3,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
            pOVar6 = (Object *)
                     (*((method->field7_0x1c).rgctx_data[8].method)->virtualMethodPointer)
                               (uVar5,(method->field7_0x1c).rgctx_data[8].rgctxDataDummy);
            return pOVar6;
          }
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar5);
  func_?(pAVar7);
  pMVar4 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_valueSelector);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar7,pSVar8,pMVar4);
  uVar5 = func_?(&
                          System__Object_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_System::String>__System__String_
                         );
  func_?(pAVar7,uVar5);
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar7 = (ArgumentNullException *)func_?(uVar5);
  func_?(pAVar7);
  pMVar4 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_source);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar7,pSVar8,pMVar4);
  uVar5 = func_?(&
                          System__Object_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_System::String>__System__String_
                         );
  func_?(pAVar7,uVar5);
  pcVar9 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar9)();
  return pOVar6;
}


/* String FormatWith(String, IFormatProvider, Object[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_FormatWith
                   (String *format,IFormatProvider *provider,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_format);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_format;
  if (format != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Format_7(provider,format,args,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,pSVar1,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Nullable`1[Int32] GetLength(String) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_GetLength
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  if (value != (String *)0x0) {
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_1,(value->fields)._stringLength,
               MethodInfo__System__Nullable<int>__Nullable_int_);
  }
  NVar2.hasValue = NStack_1.hasValue;
  NVar2._1_3_ = NStack_1._1_3_;
  NVar2.value = NStack_1.value;
  return NVar2;
}


/* Void IfNotNullOrEmpty(String, Action`1[String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IfNotNullOrEmpty
               (String *value,Action_1_String_ *action,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar1 == 0) && (action != (Action_1_String_ *)0x0)) {
    (*(action->fields)._._.invoke_impl)((action->fields)._._.method_code,value);
  }
  return;
}


/* Void IfNotNullOrEmpty(String, Action`1[String], Action`1[String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IfNotNullOrEmpty_1
               (String *value,Action_1_String_ *trueAction,Action_1_String_ *falseAction,
               MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    falseAction = trueAction;
  }
  if (falseAction != (Action_1_String_ *)0x0) {
    (*(falseAction->fields)._._.invoke_impl)
              ((falseAction->fields)._._.method_code,value,(falseAction->fields)._._.method);
  }
  return;
}


/* String Indent(String, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Indent
                   (String *s,int32_t indentation,MethodInfo *method)

{
  pSVar1 = StringUtils_Indent_1(s,indentation,0x20,(MethodInfo *)0x0);
  return pSVar1;
}


/* String Indent(String, Int32, Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Indent_1
                   (String *s,int32_t indentation,uint16_t indentChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IO__StringReader);
    func_?(&TypeInfo__System__IO__StringWriter);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass13_0___Indent_b__0_System__IO__TextWriter__System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass13_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass13_0)
  ;
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    *(uint16_t *)&value[1].klass = indentChar;
    value[1].monitor = (MonitorData *)indentation;
    if (s == (String *)0x0) goto code_?;
    if (0 < indentation) {
      this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      if (this != (StringReader *)0x0) {
        mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,s,(MethodInfo *)0x0);
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        formatProvider =
             mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
        this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
        if (this_00 != (StringWriter *)0x0) {
          mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
                    (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,value,
                       MethodInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass13_0___Indent_b__0_System__IO__TextWriter__System__String_
                       ,(MethodInfo *)0x0);
            bVar1 = true;
            while( true ) {
              iVar2 = (*(this->klass->vtable).ReadLine.methodPtr)
                                (this,(this->klass->vtable).ReadLine.method);
              if (iVar2 == 0) break;
              if (bVar1) {
                bVar1 = false;
                (*(this_01->fields)._._.invoke_impl)
                          ((this_01->fields)._._.method_code,this_00,iVar2,
                           (this_01->fields)._._.method);
              }
              else {
                pSVar3 = this_00;
                func_?(0x12,this_00);
                (*(this_01->fields)._._.invoke_impl)
                          ((this_01->fields)._._.method_code,this_00,pSVar3,
                           (this_01->fields)._._.method);
              }
            }
            pSVar4 = (String *)
                     (*(this_00->klass->vtable).ToString.methodPtr)
                               (this_00,(this_00->klass->vtable).ToString.method);
            return pSVar4;
          }
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this_02 = (ArgumentException *)func_?(uVar5);
  func_?(this_02);
  pSVar4 = (String *)func_?(&StringLiteral_indentation);
  message = (String *)func_?(&StringLiteral_Must_be_greater_than_zero_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this_02,message,pSVar4,(MethodInfo *)0x0);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Indent_System__String__int__wchar_t_
                         );
  func_?(this_02,uVar5);
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_03 = (ArgumentNullException *)func_?(uVar5);
  func_?(this_03);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,pSVar4,method_00);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Indent_System__String__int__wchar_t_
                         );
  func_?(this_03,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* Boolean IsNullOrEmptyOrWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
     StringUtils_IsNullOrEmptyOrWhiteSpace(String *s,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = StringUtils_IsWhiteSpace(s,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* Boolean IsWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IsWhiteSpace
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    if ((s->fields)._stringLength != 0) {
      index = 0;
      while( true ) {
        if ((s->fields)._stringLength <= index) {
          return 1;
        }
        c = mscorlib.dll::System::String::String_get_Chars(s,index,(MethodInfo *)0x0);
        if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Char);
        }
        bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
        if (bVar1 == 0) break;
        index = index + 1;
      }
    }
    return 0;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,method_00);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__IsWhiteSpace_System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* String NullEmptyString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_NullEmptyString
                   (String *s,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    s = (String *)0x0;
  }
  return s;
}


/* String NumberLines(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_NumberLines
                   (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IO__StringReader);
    func_?(&TypeInfo__System__IO__StringWriter);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass16_0___NumberLines_b__0_System__IO__TextWriter__System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass16_0)
  ;
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if (s == (String *)0x0) goto code_?;
    this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
    if (this != (StringReader *)0x0) {
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,s,(MethodInfo *)0x0);
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      formatProvider =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
      if (this_00 != (StringWriter *)0x0) {
        mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
                  (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
        value[1].klass = (Object__Class *)0x1;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
        if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,value,
                     MethodInfo__Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass16_0___NumberLines_b__0_System__IO__TextWriter__System__String_
                     ,(MethodInfo *)0x0);
          bVar1 = true;
          while( true ) {
            iVar2 = (*(this->klass->vtable).ReadLine.methodPtr)
                              (this,(this->klass->vtable).ReadLine.method);
            if (iVar2 == 0) break;
            if (bVar1) {
              bVar1 = false;
              (*(this_01->fields)._._.invoke_impl)
                        ((this_01->fields)._._.method_code,this_00,iVar2,
                         (this_01->fields)._._.method);
            }
            else {
              pSVar3 = this_00;
              func_?(0x12,this_00);
              (*(this_01->fields)._._.invoke_impl)
                        ((this_01->fields)._._.method_code,this_00,pSVar3,
                         (this_01->fields)._._.method);
            }
          }
          pSVar4 = (String *)
                   (*(this_00->klass->vtable).ToString.methodPtr)
                             (this_00,(this_00->klass->vtable).ToString.method);
          return pSVar4;
        }
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_02 = (ArgumentNullException *)func_?(uVar5);
  func_?(this_02);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_02,pSVar4,method_00);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__NumberLines_System__String_
                         );
  func_?(this_02,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* String ReplaceNewLines(String, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ReplaceNewLines
                   (String *s,String *replacement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__IO__StringReader);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  if (this != (StringReader *)0x0) {
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,s,(MethodInfo *)0x0);
    this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    if (this_00 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
      bVar1 = true;
      while( true ) {
        pSVar2 = (String *)
                 (*(this->klass->vtable).ReadLine.methodPtr)
                           (this,(this->klass->vtable).ReadLine.method);
        if (pSVar2 == (String *)0x0) break;
        if (bVar1) {
          bVar1 = false;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_00,pSVar2,(MethodInfo *)0x0);
        }
        else {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_00,replacement,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_00,pSVar2,(MethodInfo *)0x0);
        }
      }
      pSVar2 = (String *)
               (*(this_00->klass->vtable).ToString.methodPtr)
                         (this_00,(this_00->klass->vtable).ToString.method);
      return pSVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String ToCamelCase(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ToCamelCase
                   (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (s == (String *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    uVar4 = mscorlib.dll::System::String::String_get_Chars(s,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsUpper(uVar4,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars(s,0,(MethodInfo *)0x0);
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar4 = mscorlib.dll::System::Char::Char_ToLower(uVar4,pCVar5,(MethodInfo *)0x0);
      puStack_6 = (undefined *)(uint)uVar4;
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Char::Char_ToString_1
                         ((Char *)&puStack_6,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
      if (1 < (s->fields)._stringLength) {
        str1 = mscorlib.dll::System::String::String_Substring(s,1,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
  }
  return s;
}


/* String ToCharAsUnicode(Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ToCharAsUnicode
                   (uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  uVar1 = (c & 0xf0) >> 4;
  val = (Char__Array *)func_?(TypeInfo__System__Char,6);
  if (val == (Char__Array *)0x0) {
    func_?();
  }
  else if ((((val->max_length != 0) && (val->vector[0] = 0x5c, 1 < val->max_length)) &&
           (val->vector[1] = 0x75, 2 < val->max_length)) &&
          (((val->vector[2] = (-(ushort)(9 < c >> 0xc) & 0x27) + 0x30 + (c >> 0xc),
            3 < val->max_length &&
            (val->vector[3] =
                  (-(ushort)(9 < (c & 0xf00) >> 8) & 0x27) + 0x30 + (short)((c & 0xf00) >> 8),
            4 < val->max_length)) &&
           (val->vector[4] = (-(ushort)(9 < uVar1) & 0x27) + 0x30 + (short)uVar1,
           5 < val->max_length)))) {
    val->vector[5] = (-(ushort)(9 < (c & 0xf)) & 0x27) + 0x30 + (c & 0xf);
    pSVar2 = mscorlib.dll::System::String::String_CreateString_4
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String Truncate(String, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Truncate
                   (String *s,int32_t maximumLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral____;
  if (::StringLiteral____ == (String *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    func_?(this);
    pMVar3 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_suffix);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(this,pSVar1,pMVar3);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                           );
    func_?(this,uVar2);
code_?:
    func_?();
  }
  else {
    if (maximumLength < 1) goto code_?;
    length = maximumLength - (::StringLiteral____->fields)._stringLength;
    if (0 < length) {
      if ((s == (String *)0x0) || ((s->fields)._stringLength <= maximumLength)) {
        return s;
      }
      pSVar4 = mscorlib.dll::System::String::String_Substring_1(s,0,length,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  pAVar5 = (ArgumentException *)func_?(uVar2);
  func_?(pAVar5);
  pMVar3 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral_Length_of_suffix_string_is_great);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar5,pSVar1,pMVar3);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                         );
  func_?(pAVar5,uVar2);
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  pAVar5 = (ArgumentException *)func_?(uVar2);
  func_?(pAVar5);
  pSVar1 = (String *)func_?(&StringLiteral_maximumLength);
  pSVar4 = (String *)func_?(&StringLiteral_Maximum_length_must_be_greater_t);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (pAVar5,pSVar4,pSVar1,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                 );
  func_?(pAVar5);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* String Truncate(String, Int32, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Truncate_1
                   (String *s,int32_t maximumLength,String *suffix,MethodInfo *method)

{
  if (suffix == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_suffix);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(this,pSVar3,pMVar2);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                           );
    func_?(this,uVar1);
code_?:
    func_?();
  }
  else {
    if (maximumLength < 1) goto code_?;
    length = maximumLength - (suffix->fields)._stringLength;
    if (0 < length) {
      if ((s == (String *)0x0) || ((s->fields)._stringLength <= maximumLength)) {
        return s;
      }
      pSVar3 = mscorlib.dll::System::String::String_Substring_1(s,0,length,(MethodInfo *)0x0);
      if (pSVar3 != (String *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_Trim(pSVar3,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,suffix,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentException);
  pAVar4 = (ArgumentException *)func_?(uVar1);
  func_?(pAVar4);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Length_of_suffix_string_is_great);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar4,pSVar3,pMVar2);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                         );
  func_?(pAVar4,uVar1);
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentException);
  pAVar4 = (ArgumentException *)func_?(uVar1);
  func_?(pAVar4);
  pSVar3 = (String *)func_?(&StringLiteral_maximumLength);
  message = (String *)func_?(&StringLiteral_Maximum_length_must_be_greater_t);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (pAVar4,message,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                 );
  func_?(pAVar4);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void WriteCharAsUnicode(TextWriter, Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_WriteCharAsUnicode
               (TextWriter *writer,uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_writer);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_writer;
  if (writer != (TextWriter *)0x0) {
    uVar1 = (c & 0xf0) >> 4;
    (*(writer->klass->vtable).Write.methodPtr)(writer,0x5c,(writer->klass->vtable).Write.method);
    (*(writer->klass->vtable).Write.methodPtr)(writer,0x75,(writer->klass->vtable).Write.method);
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,(uint)(ushort)((-(ushort)(9 < c >> 0xc) & 0x27) + 0x30 + (c >> 0xc)),
               (writer->klass->vtable).Write.method);
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,(uint)(ushort)((-(ushort)(9 < (c & 0xf00) >> 8) & 0x27) + 0x30 +
                                    (short)((c & 0xf00) >> 8)),(writer->klass->vtable).Write.method)
    ;
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,(uint)(ushort)((-(ushort)(9 < uVar1) & 0x27) + 0x30 + (short)uVar1),
               (writer->klass->vtable).Write.method);
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,(uint)(ushort)((-(ushort)(9 < (c & 0xf)) & 0x27) + 0x30 + (c & 0xf)),
               (writer->klass->vtable).Write.method);
    return;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

