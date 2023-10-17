
/* Void AutoComplete(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_AutoComplete
               (JsonWriter *this,JsonToken__Enum tokenBeingWritten,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  JVar1 = tokenBeingWritten;
  if ((tokenBeingWritten - JsonToken__Enum_Integer < 6) ||
     (JVar2 = tokenBeingWritten, tokenBeingWritten - JsonToken__Enum_Date < 2)) {
    JVar2 = JsonToken__Enum_Integer;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar3->max_length <= JVar2) goto code_?;
    pJVar4 = pJVar3->vector[JVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar5) goto code_?;
    JVar6 = pJVar4->vector[uVar5];
    piStack_7 = &(this->fields)._currentState;
    if (JVar6 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_7 == 3) || (uVar5 == 5)) || (uVar5 == 7)) &&
         (JVar1 != JsonToken__Enum_Comment)) {
        pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar9 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar9 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar9)(this,pMVar8);
code_?:
      WVar10 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((JVar1 == JsonToken__Enum_PropertyName) && (WVar10 != WriteState__Enum_Start)) ||
         ((WVar10 == WriteState__Enum_Array || (WVar10 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar6;
      return;
    }
  }
  uVar11 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar11);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar11 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar11);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&tokenBeingWritten);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(0,pSVar12);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_7);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_14,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(1,pSVar12);
  pMVar8 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar12,(IFormatProvider *)provider,args,pMVar8);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar11);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar12,(MethodInfo *)0x0);
  EStack_14.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void AutoCompleteAll() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_AutoCompleteAll
               (JsonWriter *this,MethodInfo *method)

{
  iVar1 = (this->fields)._top;
  while (0 < iVar1) {
    (*(this->klass->vtable).WriteEnd.methodPtr)(this,(this->klass->vtable).WriteEnd.method);
    iVar1 = (this->fields)._top;
  }
  return;
}


/* Void AutoCompleteClose(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_AutoCompleteClose
               (JsonWriter *this,JsonToken__Enum tokenBeingClosed,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = 0;
  if (0 < (this->fields)._top) {
    do {
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields)._stack;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar3,(this->fields)._top - iVar2,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                        );
      if (tokenBeingClosed == JsonToken__Enum_EndObject) {
        RVar5.First = 1;
        RVar5.Last = 0;
      }
      else if (tokenBeingClosed == JsonToken__Enum_EndArray) {
        RVar5.First = 2;
        RVar5.Last = 0;
      }
      else {
        if (tokenBeingClosed != JsonToken__Enum_EndConstructor) goto code_?;
        RVar5.First = 3;
        RVar5.Last = 0;
      }
      iVar2 = iVar2 + 1;
      if (RVar4 == RVar5) {
        if (iVar2 != 0) {
          this = (JsonWriter *)0x0;
          if (iVar2 < 1) goto code_?;
          goto code_?;
        }
        break;
      }
    } while (iVar2 < (this->fields)._top);
  }
  goto code_?;
  while( true ) {
    RStack_6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar3,(pJVar1->fields)._top,
                          MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                         );
    (pJVar1->fields)._top = (pJVar1->fields)._top + -1;
    if (((RStack_6 != (RegexCharClass_SingleRange)0x1) &&
        (RStack_6 != (RegexCharClass_SingleRange)0x2)) &&
       (RStack_6 != (RegexCharClass_SingleRange)0x3)) goto code_?;
    if (((pJVar1->fields)._currentState != 2) && ((pJVar1->fields)._currentState != 4)) {
      func_?();
    }
    func_?();
    this = (JsonWriter *)((int)&this->klass + 1);
    if (iVar2 <= (int)this) break;
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (pJVar1->fields)._stack;
    if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
  }
code_?:
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pJVar1->fields)._stack;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar3,(pJVar1->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    switch(RVar4) {
    case (RegexCharClass_SingleRange)0x0:
      (pJVar1->fields)._currentState = 0;
      return;
    case (RegexCharClass_SingleRange)0x1:
      (pJVar1->fields)._currentState = 3;
      return;
    case (RegexCharClass_SingleRange)0x2:
    case (RegexCharClass_SingleRange)0x3:
      (pJVar1->fields)._currentState = 5;
      return;
    }
    goto code_?;
  }
code_?:
  func_?();
code_?:
  uVar7 = func_?();
  pJVar8 = (JsonWriterException *)func_?(uVar7);
  func_?(pJVar8);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_No_token_to_close_);
  JsonWriterException::JsonWriterException__ctor_1(pJVar8,pSVar10,pMVar9);
  func_?();
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken);
  func_?(uVar7);
  pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
  pMVar9 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?(&StringLiteral_No_type_for_token__);
  pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar12,pSVar10,pMVar9);
  uVar7 = func_?();
  pJVar8 = (JsonWriterException *)func_?(uVar7);
  func_?(pJVar8);
  JsonWriterException::JsonWriterException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  uStack_13 = func_?(&
                             MethodInfo__Newtonsoft__Json__JsonWriter__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
                            );
  EStack_11.klass = (Enum__Class *)&UNK_?;
  EStack_11.monitor = (MonitorData *)pJVar8;
  func_?();
code_?:
  func_?();
  func_?();
  pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
  pMVar9 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?();
  pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar12,pSVar10,pMVar9);
  func_?();
  pJVar8 = (JsonWriterException *)func_?();
  func_?();
  JsonWriterException::JsonWriterException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
  pMVar9 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?();
  pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar12,pSVar10,pMVar9);
  func_?();
  pJVar8 = (JsonWriterException *)func_?();
  func_?();
  JsonWriterException::JsonWriterException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  func_?();
  bVar14 = (undefined1 *)0xffffffd7 < &stack0xffffffdc;
  func_?();
  iVar15 = CONCAT31((int3)((uint)extraout_ECX >> 8),0x11);
  pbVar16 = (byte *)((int)&pJVar8[-0xb51b6e].klass + 1);
  bVar17 = *pbVar16;
  bVar18 = (byte)((uint)iVar2 >> 8);
  bVar19 = *pbVar16 + bVar18;
  *pbVar16 = bVar19 + bVar14;
  piVar20 = (int *)(iVar15 + 0xf);
  *piVar20 = *piVar20 + iVar15 + -1 + (uint)(CARRY1(bVar17,bVar18) || CARRY1(bVar19,bVar14));
  pcVar21 = (code *)swi(0x11);
  (*pcVar21)();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Dispose
               (JsonWriter *this,bool disposing,MethodInfo *method)

{
  WVar1 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
  if (WVar1 != WriteState__Enum_Closed) {
    (*(this->klass->vtable).Close.methodPtr)(this,(this->klass->vtable).Close.method);
  }
  return;
}


/* JsonToken GetCloseTokenForType(JTokenType) */

JsonToken__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_GetCloseTokenForType
          (JsonWriter *this,JTokenType__Enum type,MethodInfo *method)

{
  if (type == JTokenType__Enum_Object) {
    return JsonToken__Enum_EndObject;
  }
  if (type != JTokenType__Enum_Array) {
    if (type == JTokenType__Enum_Constructor) {
      return JsonToken__Enum_EndConstructor;
    }
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&type);
    func_?(uVar1);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    str0 = (String *)func_?(&StringLiteral_No_close_token_for_type__);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,method_00);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
    this_00 = (JsonWriterException *)func_?(uVar1);
    func_?(this_00);
    JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonWriter__GetCloseTokenForType_Newtonsoft__Json__Linq__JTokenType_
                   );
    EStack_3.monitor = (MonitorData *)&UNK_?;
    pJStack_4 = this_00;
    func_?();
    pcVar5 = (code *)swi(3);
    JVar6 = (*pcVar5)();
    return JVar6;
  }
  return JsonToken__Enum_EndArray;
}


/* JTokenType GetTypeForCloseToken(JsonToken) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_GetTypeForCloseToken
          (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  if (token == JsonToken__Enum_EndObject) {
    return JTokenType__Enum_Object;
  }
  if (token != JsonToken__Enum_EndArray) {
    if (token == JsonToken__Enum_EndConstructor) {
      return JTokenType__Enum_Constructor;
    }
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&token);
    func_?(uVar1);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    str0 = (String *)func_?(&StringLiteral_No_type_for_token__);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,method_00);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
    this_00 = (JsonWriterException *)func_?(uVar1);
    func_?(this_00);
    JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonWriter__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
                   );
    EStack_3.monitor = (MonitorData *)&UNK_?;
    pJStack_4 = this_00;
    func_?();
    pcVar5 = (code *)swi(3);
    JVar6 = (*pcVar5)();
    return JVar6;
  }
  return JTokenType__Enum_Array;
}


/* Boolean IsEndToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_IsEndToken
               (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  return token - JsonToken__Enum_EndObject < 3;
}


/* Boolean IsStartToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_IsStartToken
               (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  return token - JsonToken__Enum_StartObject < 3;
}


/* JTokenType Peek() */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Peek
          (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._stack;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    return (JTokenType__Enum)RVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  JVar4 = (*pcVar3)();
  return JVar4;
}


/* JTokenType Pop() */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Pop
          (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._stack;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    (this->fields)._top = (this->fields)._top + -1;
    return (JTokenType__Enum)RVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  JVar3 = (*pcVar2)();
  return JVar3;
}


/* Void Push(JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Push
               (JsonWriter *this,JTokenType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._stack;
  index = (this->fields)._top + 1;
  (this->fields)._top = index;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if (index < (this_00->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__set_Item
                (this_00,index,(RegexCharClass_SingleRange)value,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__set_Item_int__Newtonsoft__Json__Linq__JTokenType_
                );
      return;
    }
    func_?();
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteComment
               (JsonWriter *this,String *text,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  text = (String *)0x5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  pSVar1 = text;
  if (((undefined1 *)((int)&text[-1].fields._stringLength + 1U) < (undefined1 *)0x6) ||
     (pSVar2 = text, text + -1 < (String *)0x2)) {
    pSVar2 = (String *)0x7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((String *)pJVar3->max_length <= pSVar2) goto code_?;
    pJVar4 = pJVar3->vector[(int)pSVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar5) goto code_?;
    JVar6 = pJVar4->vector[uVar5];
    piStack_7 = &(this->fields)._currentState;
    if (JVar6 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_7 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (pSVar1 != (String *)0x5)) {
        pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar9 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar9 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar9)(this,pMVar8);
code_?:
      WVar10 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((pSVar1 == (String *)0x4) && (WVar10 != WriteState__Enum_Start)) ||
         ((WVar10 == WriteState__Enum_Array || (WVar10 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar6;
      return;
    }
  }
  uVar11 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar11);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar11 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar11);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&text);
  func_?(uVar11);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar1);
  func_?(0,pSVar1);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_7);
  func_?(uVar11);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar1);
  func_?(1,pSVar1);
  pMVar8 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar1,(IFormatProvider *)provider,args,pMVar8);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar11);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  EStack_13.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteConstructorDate(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteConstructorDate
               (JsonWriter *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  pJVar1 = reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?(pJVar1);
    reader = (JsonReader *)func_?(7,pJVar1);
    uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&reader);
    func_?(uVar2);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
    ppSVar5 = &StringLiteral_Unexpected_token_while_reading_d;
code_?:
    pMVar6 = (MethodInfo *)0x0;
    str0 = (String *)func_?(ppSVar5);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar3,pMVar6);
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar7 = (Exception *)func_?(uVar2);
    func_?(pEVar7);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_
                           );
code_?:
    func_?(pEVar7,uVar2);
  }
  else {
    cVar8 = (*(reader->klass->vtable).__unknown.methodPtr)
                      (reader,(reader->klass->vtable).__unknown.method);
    if (cVar8 == '\0') {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar7 = (Exception *)func_?(uVar2);
      func_?(pEVar7);
      pMVar6 = (MethodInfo *)0x0;
      pSVar3 = (String *)func_?(&StringLiteral_Unexpected_end_while_reading_dat);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar3,pMVar6);
      uVar2 = func_?(&
                              MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_
                             );
      goto code_?;
    }
    iVar9 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
    if (iVar9 != 7) {
      func_?(pJVar1);
      reader = (JsonReader *)func_?(7,pJVar1);
      uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&reader);
      func_?(uVar2);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
      ppSVar5 = &StringLiteral_Unexpected_token_while_reading_d;
      goto code_?;
    }
    pEVar7 = (Exception *)
             (*(pJVar1->klass->vtable).get_Value.methodPtr)
                       (pJVar1,(pJVar1->klass->vtable).get_Value.method);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    if (pEVar7 == (Exception *)0x0) goto code_?;
    pIVar10 = TypeInfo__System__Int64;
    if ((pEVar7->klass->_0).element_class != (TypeInfo__System__Int64->_0).element_class)
    goto code_?;
    piVar11 = (int64_t *)func_?(pEVar7);
    DVar12 = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime(*piVar11,(MethodInfo *)0x0);
    reader = (JsonReader *)(DVar12._dateData >> 0x20);
    cVar8 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).__unknown.method);
    if (cVar8 != '\0') {
      iVar9 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
      if (iVar9 == 0xf) {
        func_?(0x25,this,(int)DVar12._dateData,reader);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar7 = (Exception *)func_?(uVar2);
  func_?(pEVar7);
  pMVar6 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Unexpected_end_while_reading_dat);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar3,pMVar6);
  uStack_13 = func_?(&
                             MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_
                            );
  EStack_4.klass = (Enum__Class *)&UNK_?;
  EStack_4.monitor = (MonitorData *)pEVar7;
  func_?();
  pIVar10 = extraout_ECX;
code_?:
  func_?(pEVar7,pIVar10);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteEnd() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEnd
               (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._stack;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    func_?();
  }
  else {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    if (RVar1 == (RegexCharClass_SingleRange)0x1) {
      (*(this->klass->vtable).WriteEndObject.methodPtr)(this);
      return;
    }
    if (RVar1 == (RegexCharClass_SingleRange)0x2) {
      (*(this->klass->vtable).WriteEndArray.methodPtr)(this);
      return;
    }
    if (RVar1 == (RegexCharClass_SingleRange)0x3) {
      (*(this->klass->vtable).WriteEndConstructor.methodPtr)(this);
      return;
    }
  }
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType);
  func_?(uVar2);
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  method_00 = (Enum__Class *)0x0;
  str0 = (String *)func_?(&StringLiteral_Unexpected_type_when_writing_end);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar3,(MethodInfo *)method_00);
  uVar2 = func_?();
  this_01 = (JsonWriterException *)func_?(uVar2);
  func_?(this_01);
  JsonWriterException::JsonWriterException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonWriter__WriteEnd_Newtonsoft__Json__Linq__JTokenType_
                 );
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteEndArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEndArray
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoCompleteClose(this,JsonToken__Enum_EndArray,(MethodInfo *)0x0);
  return;
}


/* Void WriteEndConstructor() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEndConstructor
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoCompleteClose(this,JsonToken__Enum_EndConstructor,(MethodInfo *)0x0);
  return;
}


/* Void WriteEndObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEndObject
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoCompleteClose(this,JsonToken__Enum_EndObject,(MethodInfo *)0x0);
  return;
}


/* Void WriteEnd(JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEnd_1
               (JsonWriter *this,JTokenType__Enum type,MethodInfo *method)

{
  if (type == JTokenType__Enum_Object) {
    (*(this->klass->vtable).WriteEndObject.methodPtr)
              (this,(this->klass->vtable).WriteEndObject.method);
    return;
  }
  if (type != JTokenType__Enum_Array) {
    if (type == JTokenType__Enum_Constructor) {
      (*(this->klass->vtable).WriteEndConstructor.methodPtr)
                (this,(this->klass->vtable).WriteEndConstructor.method);
      return;
    }
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&type);
    func_?(uVar1);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    str0 = (String *)func_?(&StringLiteral_Unexpected_type_when_writing_end);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,method_00);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
    this_00 = (JsonWriterException *)func_?(uVar1);
    func_?(this_00);
    JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonWriter__WriteEnd_Newtonsoft__Json__Linq__JTokenType_
                   );
    EStack_3.monitor = (MonitorData *)&UNK_?;
    pJStack_4 = this_00;
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(this->klass->vtable).WriteEndArray.methodPtr)(this,(this->klass->vtable).WriteEndArray.method);
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteNull
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Null,(MethodInfo *)0x0);
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WritePropertyName
               (JsonWriter *this,String *name,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  name = (String *)0x4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  pSVar1 = name;
  if (((undefined1 *)((int)&name[-1].fields._stringLength + 1U) < (undefined1 *)0x6) ||
     (pSVar2 = name, name + -1 < (String *)0x2)) {
    pSVar2 = (String *)0x7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((String *)pJVar3->max_length <= pSVar2) goto code_?;
    pJVar4 = pJVar3->vector[(int)pSVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar5) goto code_?;
    JVar6 = pJVar4->vector[uVar5];
    piStack_7 = &(this->fields)._currentState;
    if (JVar6 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_7 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (pSVar1 != (String *)0x5)) {
        pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar9 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar9 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar9)(this,pMVar8);
code_?:
      WVar10 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((pSVar1 == (String *)0x4) && (WVar10 != WriteState__Enum_Start)) ||
         ((WVar10 == WriteState__Enum_Array || (WVar10 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar6;
      return;
    }
  }
  uVar11 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar11);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar11 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar11);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&name);
  func_?(uVar11);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar1);
  func_?(0,pSVar1);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_7);
  func_?(uVar11);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar1);
  func_?(1,pSVar1);
  pMVar8 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar1,(IFormatProvider *)provider,args,pMVar8);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar11);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  EStack_13.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteRawValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteRawValue
               (JsonWriter *this,String *json,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  (*(this->klass->vtable).WriteRaw.methodPtr)(this,json,(this->klass->vtable).WriteRaw.method);
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteStartArray
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_StartArray,(MethodInfo *)0x0);
  JsonWriter_Push(this,JTokenType__Enum_Array,(MethodInfo *)0x0);
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteStartConstructor
               (JsonWriter *this,String *name,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_StartConstructor,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
             (in_stack_1 + 0xc);
  index = *(int *)(in_stack_1 + 8) + 1;
  *(int *)(in_stack_1 + 8) = index;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if (index < (this_00->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__set_Item
                (this_00,index,in_stack_2,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__set_Item_int__Newtonsoft__Json__Linq__JTokenType_
                );
      return;
    }
    func_?();
    return;
  }
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteStartObject
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
  JsonWriter_Push(this,JTokenType__Enum_Object,(MethodInfo *)0x0);
  return;
}


/* Void WriteToken(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteToken
               (JsonWriter *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_reader;
  if (reader == (JsonReader *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                    (reader,(reader->klass->vtable).get_TokenType.method);
  if (iVar3 == 0) {
    JsonWriter_WriteToken_1(this,reader,-1,(MethodInfo *)0x0);
    return;
  }
  iVar3 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                    (reader,(reader->klass->vtable).get_TokenType.method);
  pMVar4 = (reader->klass->vtable).get_Depth.method;
  pIVar5 = (reader->klass->vtable).get_Depth.methodPtr;
  if (iVar3 - 1U < 3) {
    initialDepth = (*pIVar5)(reader,pMVar4);
    JsonWriter_WriteToken_1(this,reader,initialDepth,(MethodInfo *)0x0);
    return;
  }
  iVar3 = (*pIVar5)(reader,pMVar4);
  JsonWriter_WriteToken_1(this,reader,iVar3 + 1,(MethodInfo *)0x0);
  return;
}


/* Void WriteToken(JsonReader, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteToken_1
               (JsonWriter *this,JsonReader *reader,int32_t initialDepth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    func_?();
    pOVar1 = (Object *)func_?();
    pSVar2 = (String *)func_?();
    paramName = (String *)func_?();
    Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
              (paramName,pOVar1,pSVar2,(MethodInfo *)0x0);
    func_?();
    bVar3 = (undefined1 *)0xffffffdb < &stack0xffffffd0;
    uVar4 = func_?();
    pbVar5 = (byte *)((int)((ulonglong)uVar4 >> 0x20) + 0x1f);
    bVar6 = *pbVar5 + (byte)unaff_EBX;
    bVar7 = CARRY1(*pbVar5,(byte)unaff_EBX) || CARRY1(bVar6,bVar3);
    *pbVar5 = bVar6 + bVar3;
    pbVar5 = (byte *)(unaff_EBX + 0x1f);
    bVar8 = (byte)((ulonglong)uVar4 >> 0x28);
    bVar9 = CARRY1(*pbVar5,bVar8) || CARRY1(*pbVar5 + bVar8,bVar7);
    *pbVar5 = *pbVar5 + bVar8 + bVar7;
    bVar3 = (char)extraout_ECX - 3;
    pbVar5 = (byte *)((int)&pOVar1[0x404a209].klass + unaff_EBX + 1);
    bVar6 = *pbVar5 + bVar3;
    bVar7 = CARRY1(*pbVar5,bVar3) || CARRY1(bVar6,bVar9);
    *pbVar5 = bVar6 + bVar9;
    iVar10 = extraout_ECX + -4;
    pbVar5 = (byte *)((int)uVar4 + 0x49);
    bVar6 = *pbVar5;
    bVar11 = (byte)((uint)iVar10 >> 8);
    bVar3 = *pbVar5 + bVar11;
    *pbVar5 = bVar3 + bVar7;
    *(char *)(unaff_EBX + -0xcefb6e0) =
         *(char *)(unaff_EBX + -0xcefb6e0) + bVar8 +
         (CARRY1(bVar6,bVar11) || CARRY1(bVar3,bVar7));
    *(byte *)(extraout_ECX + 0xc) = *(byte *)(extraout_ECX + 0xc) & (byte)iVar10;
    *(ushort *)(extraout_ECX + 0xc) = *(ushort *)(extraout_ECX + 0xc) & (ushort)iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    uVar12 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
    switch(uVar12) {
    case 0:
      break;
    case 1:
      (*(this->klass->vtable).WriteStartObject.methodPtr)();
      break;
    case 2:
      (*(this->klass->vtable).WriteStartArray.methodPtr)();
      break;
    case 3:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 == (int *)0x0) goto code_?;
      pSVar2 = (String *)(**(code **)(*piVar13 + 0xd4))();
      iVar14 = mscorlib.dll::System::String::String_Compare_1
                        (pSVar2,StringLiteral_Date,StringComparison__Enum_Ordinal,(MethodInfo *)0x0
                        );
      if (iVar14 == 0) {
        JsonWriter_WriteConstructorDate(this,reader,(MethodInfo *)0x0);
      }
      else {
        piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
        if (piVar13 == (int *)0x0) goto code_?;
        (**(code **)(*piVar13 + 0xd4))();
        (*(this->klass->vtable).WriteStartConstructor.methodPtr)();
      }
      break;
    case 4:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 == (int *)0x0) goto code_?;
      (**(code **)(*piVar13 + 0xd4))();
      (*(this->klass->vtable).WritePropertyName.methodPtr)();
      break;
    case 5:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 == (int *)0x0) goto code_?;
      (**(code **)(*piVar13 + 0xd4))();
      (*(this->klass->vtable).WriteComment.methodPtr)();
      break;
    case 6:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 != (int *)0x0) {
        piVar15 = (int *)0x0;
        if ((String__Class *)*piVar13 == TypeInfo__System__String) {
          piVar15 = piVar13;
        }
        if (piVar15 == (int *)0x0) goto code_?;
      }
      pIVar16 = (this->klass->vtable).WriteRawValue.methodPtr;
      goto code_?;
    case 7:
      pOVar1 = (Object *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt64
                (pOVar1,(IFormatProvider *)pCVar17,(MethodInfo *)0x0);
      (*(this->klass->vtable).WriteValue_3.methodPtr)();
      break;
    case 8:
      pOVar1 = (Object *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDouble
                (pOVar1,(IFormatProvider *)pCVar17,(MethodInfo *)0x0);
      (*(this->klass->vtable).WriteValue_6.methodPtr)();
      break;
    case 9:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 == (int *)0x0) goto code_?;
      (**(code **)(*piVar13 + 0xd4))();
      (*(this->klass->vtable).WriteValue.methodPtr)();
      break;
    case 10:
      pOVar1 = (Object *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToBoolean
                (pOVar1,(IFormatProvider *)pCVar17,(MethodInfo *)0x0);
      (*(this->klass->vtable).WriteValue_7.methodPtr)();
      break;
    case 0xb:
      (*(this->klass->vtable).WriteNull.methodPtr)();
      break;
    case 0xc:
      (*(this->klass->vtable).WriteUndefined.methodPtr)();
      break;
    case 0xd:
      (*(this->klass->vtable).WriteEndObject.methodPtr)();
      break;
    case 0xe:
      (*(this->klass->vtable).WriteEndArray.methodPtr)();
      break;
    case 0xf:
      (*(this->klass->vtable).WriteEndConstructor.methodPtr)();
      break;
    case 0x10:
      piVar13 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
      if (piVar13 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar13 + 0x20) != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      func_?();
      (*(this->klass->vtable).WriteValue_14.methodPtr)();
      break;
    case 0x11:
      unaff_EBX = (*(reader->klass->vtable).get_Value.methodPtr)();
      if ((unaff_EBX != 0) && (iVar10 = func_?(), iVar10 == 0)) goto code_?;
      pIVar16 = (this->klass->vtable).WriteValue_35.methodPtr;
code_?:
      (*pIVar16)();
      break;
    default:
      goto code_?;
    }
    iVar10 = (*(reader->klass->vtable).get_Depth.methodPtr)();
    iVar18 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
    unaff_EBX = iVar10 - (uint)(iVar18 - 0xdU < 3);
    if ((unaff_EBX <= initialDepth + -1) ||
       (cVar19 = (*(reader->klass->vtable).__unknown.methodPtr)(), cVar19 == '\0')) {
      return;
    }
  } while( true );
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteUndefined
               (JsonWriter *this,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_10
               (JsonWriter *this,uint16_t value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  _value = 9;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  if ((_value - 7 < 6) || (uVar2 = _value, _value - 0x10 < 2)) {
    uVar2 = 7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar3->max_length <= uVar2) goto code_?;
    pJVar4 = pJVar3->vector[uVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar2 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar2) goto code_?;
    JVar5 = pJVar4->vector[uVar2];
    piStack_6 = &(this->fields)._currentState;
    if (JVar5 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_6 == 3) || (uVar2 == 5)) || (uVar2 == 7)) && (uVar1 != 5)) {
        pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar8 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar2 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar8 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar8)(this,pMVar7);
code_?:
      WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((uVar1 == 4) && (WVar9 != WriteState__Enum_Start)) ||
         ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar5;
      return;
    }
  }
  uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar10);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar10 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar10);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(0,pSVar11);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_6);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(1,pSVar11);
  pMVar7 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar11,(IFormatProvider *)provider,args,pMVar7);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar10);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar11,(MethodInfo *)0x0);
  EStack_13.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_12
               (JsonWriter *this,int8_t value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  _value = 7;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  if ((_value - 7 < 6) || (uVar2 = _value, _value - 0x10 < 2)) {
    uVar2 = 7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar3->max_length <= uVar2) goto code_?;
    pJVar4 = pJVar3->vector[uVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar2 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar2) goto code_?;
    JVar5 = pJVar4->vector[uVar2];
    piStack_6 = &(this->fields)._currentState;
    if (JVar5 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_6 == 3) || (uVar2 == 5)) || (uVar2 == 7)) && (uVar1 != 5)) {
        pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar8 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar2 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar8 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar8)(this,pMVar7);
code_?:
      WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((uVar1 == 4) && (WVar9 != WriteState__Enum_Start)) ||
         ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar5;
      return;
    }
  }
  uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar10);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar10 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar10);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(0,pSVar11);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_6);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(1,pSVar11);
  pMVar7 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar11,(IFormatProvider *)provider,args,pMVar7);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar10);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar11,(MethodInfo *)0x0);
  EStack_13.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_13
               (JsonWriter *this,Decimal value,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_15
               (JsonWriter *this,DateTimeOffset value,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_17
               (JsonWriter *this,TimeSpan value,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_18
               (JsonWriter *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<int>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                      ((Nullable_1_UInt32_ *)&value,MethodInfo__System__Nullable<int>__get_Value__);
    (*(this->klass->vtable).WriteValue_1.methodPtr)
              (this,uVar1,(this->klass->vtable).WriteValue_1.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[UInt32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_19
               (JsonWriter *this,Nullable_1_UInt32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<unsigned_int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<unsigned_int>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                      (&value,MethodInfo__System__Nullable<unsigned_int>__get_Value__);
    (*(this->klass->vtable).WriteValue_2.methodPtr)
              (this,uVar1,(this->klass->vtable).WriteValue_2.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Int64]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_20
               (JsonWriter *this,Nullable_1_Int64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<long>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<long>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    uVar2 = mscorlib.dll::System::Nullable`1[UInt64]::Nullable_1_UInt64__get_Value
                      ((Nullable_1_UInt64_ *)&stack0x00000008,
                       MethodInfo__System__Nullable<long>__get_Value__);
    (*(this->klass->vtable).WriteValue_3.methodPtr)
              (this,uVar2,(this->klass->vtable).WriteValue_3.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[UInt64]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_21
               (JsonWriter *this,Nullable_1_UInt64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<unsigned_long>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<unsigned_long>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    uVar2 = mscorlib.dll::System::Nullable`1[UInt64]::Nullable_1_UInt64__get_Value
                      ((Nullable_1_UInt64_ *)&stack0x00000008,
                       MethodInfo__System__Nullable<unsigned_long>__get_Value__);
    (*(this->klass->vtable).WriteValue_4.methodPtr)
              (this,uVar2,(this->klass->vtable).WriteValue_4.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Single]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_22
               (JsonWriter *this,Nullable_1_Single_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<float>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    fVar1 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
                      (&value,MethodInfo__System__Nullable<float>__get_Value__);
    (*(this->klass->vtable).WriteValue_5.methodPtr)
              (this,fVar1,(this->klass->vtable).WriteValue_5.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_23
               (JsonWriter *this,Nullable_1_Double_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<double>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<double>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    dVar2 = mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
                      ((Nullable_1_Double_ *)&stack0x00000008,
                       MethodInfo__System__Nullable<double>__get_Value__);
    (*(this->klass->vtable).WriteValue_6.methodPtr)
              (this,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
               (this->klass->vtable).WriteValue_6.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_24
               (JsonWriter *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<bool>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    iVar1 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                      ((Nullable_1_SByte_ *)&value,MethodInfo__System__Nullable<bool>__get_Value__);
    uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),iVar1);
    (*(this->klass->vtable).WriteValue_7.methodPtr)
              (this,uStack_2,(this->klass->vtable).WriteValue_7.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Int16]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_25
               (JsonWriter *this,Nullable_1_Int16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<short>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<short>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16__get_Value
                      ((Nullable_1_UInt16_ *)&value,MethodInfo__System__Nullable<short>__get_Value__
                      );
    (*(this->klass->vtable).WriteValue_8.methodPtr)
              (this,(uint)uVar1,(this->klass->vtable).WriteValue_8.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[UInt16]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_26
               (JsonWriter *this,Nullable_1_UInt16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<unsigned_short>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<unsigned_short>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16__get_Value
                      (&value,MethodInfo__System__Nullable<unsigned_short>__get_Value__);
    (*(this->klass->vtable).WriteValue_9.methodPtr)
              (this,(uint)uVar1,(this->klass->vtable).WriteValue_9.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Char]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_27
               (JsonWriter *this,Nullable_1_Char_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<wchar_t>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<wchar_t>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16__get_Value
                      ((Nullable_1_UInt16_ *)&value,
                       MethodInfo__System__Nullable<wchar_t>__get_Value__);
    (*(this->klass->vtable).WriteValue_10.methodPtr)
              (this,(uint)uVar1,(this->klass->vtable).WriteValue_10.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Byte]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_28
               (JsonWriter *this,Nullable_1_Byte_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<unsigned_char>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<unsigned_char>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    iVar1 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                      ((Nullable_1_SByte_ *)&value,
                       MethodInfo__System__Nullable<unsigned_char>__get_Value__);
    uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),iVar1);
    (*(this->klass->vtable).WriteValue_11.methodPtr)
              (this,uStack_2,(this->klass->vtable).WriteValue_11.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[SByte]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_29
               (JsonWriter *this,Nullable_1_SByte_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<signed_char>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<signed_char>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    iVar1 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                      (&value,MethodInfo__System__Nullable<signed_char>__get_Value__);
    uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),iVar1);
    (*(this->klass->vtable).WriteValue_12.methodPtr)
              (this,uStack_2,(this->klass->vtable).WriteValue_12.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Decimal]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_30
               (JsonWriter *this,Nullable_1_Decimal_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<System::Decimal>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::Decimal>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    pDVar2 = mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal__get_Value
                       ((Decimal *)&iStack_3,(Nullable_1_Decimal_ *)&stack0x00000008,
                        MethodInfo__System__Nullable<System::Decimal>__get_Value__);
    iStack_3 = pDVar2->mid;
    pMStack_4 = (this->klass->vtable).WriteValue_13.method;
    (*(this->klass->vtable).WriteValue_13.methodPtr)(this,pDVar2->flags,pDVar2->hi,pDVar2->lo);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[DateTime]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_31
               (JsonWriter *this,Nullable_1_DateTime_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    TVar2 = mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__get_Value
                      ((Nullable_1_TimeSpan_ *)&stack0x00000008,
                       MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    (*(this->klass->vtable).WriteValue_14.methodPtr)
              (this,TVar2._ticks,(this->klass->vtable).WriteValue_14.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[DateTimeOffset]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_32
               (JsonWriter *this,Nullable_1_DateTimeOffset_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<System::DateTimeOffset>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::DateTimeOffset>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    pDVar2 = mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal__get_Value
                       ((Decimal *)&iStack_3,(Nullable_1_Decimal_ *)&stack0x00000008,
                        MethodInfo__System__Nullable<System::DateTimeOffset>__get_Value__);
    iStack_3 = pDVar2->mid;
    pMStack_4 = (this->klass->vtable).WriteValue_15.method;
    (*(this->klass->vtable).WriteValue_15.methodPtr)(this,pDVar2->flags,pDVar2->hi,pDVar2->lo);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[Guid]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_33
               (JsonWriter *this,Nullable_1_Guid_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<System::Guid>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::Guid>__get_Value__);
    cRam_? = '\x01';
  }
  if (value.hasValue != 0) {
    pRVar1 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
             Nullable_1_UnityEngine_Rect__get_Value
                       (&RStack_2,(Nullable_1_UnityEngine_Rect_ *)&value,
                        MethodInfo__System__Nullable<System::Guid>__get_Value__);
    RStack_2.m_XMin = pRVar1->m_Height;
    RStack_2.m_YMin = (float)(this->klass->vtable).WriteValue_16.method;
    (*(this->klass->vtable).WriteValue_16.methodPtr)
              (this,pRVar1->m_XMin,pRVar1->m_YMin,pRVar1->m_Width);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Nullable`1[TimeSpan]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_34
               (JsonWriter *this,Nullable_1_TimeSpan_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<System::TimeSpan>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::TimeSpan>__get_Value__);
    cRam_? = '\x01';
  }
  if (in_stack_1 != 0) {
    TVar2 = mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__get_Value
                      ((Nullable_1_TimeSpan_ *)&stack0x00000008,
                       MethodInfo__System__Nullable<System::TimeSpan>__get_Value__);
    (*(this->klass->vtable).WriteValue_17.methodPtr)
              (this,TVar2._ticks,(this->klass->vtable).WriteValue_17.method);
    return;
  }
  (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_35
               (JsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  if (value == (Byte__Array *)0x0) {
    pMStack_1 = (this->klass->vtable).WriteNull.method;
    pJStack_2 = this;
    EStack_3.monitor = (MonitorData *)&UNK_?;
    (*(this->klass->vtable).WriteNull.methodPtr)();
    return;
  }
  method = (MethodInfo *)0x0;
  value = (Byte__Array *)0x11;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  pBVar4 = value;
  if ((value[-1].vector + 0x19 < (uint8_t *)0x6) ||
     (pBVar5 = value, value[-1].vector + 0x10 < (uint8_t *)0x2)) {
    pBVar5 = (Byte__Array *)0x7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar6 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar6 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((Byte__Array *)pJVar6->max_length <= pBVar5) goto code_?;
    pJVar7 = pJVar6->vector[(int)pBVar5];
    if (pJVar7 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar8 = (this->fields)._currentState;
    if (pJVar7->max_length <= uVar8) goto code_?;
    JVar9 = pJVar7->vector[uVar8];
    pMStack_1 = (MethodInfo *)&(this->fields)._currentState;
    if (JVar9 != JsonWriter_State__Enum_Error) {
      if ((((*(int *)pMStack_1 == 3) || (uVar8 == 5)) || (uVar8 == 7)) &&
         (pBVar4 != (Byte__Array *)0x5)) {
        pMVar10 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar11 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar8 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar10 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar11 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar11)(this,pMVar10);
code_?:
      WVar12 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((pBVar4 == (Byte__Array *)0x4) && (WVar12 != WriteState__Enum_Start)) ||
         ((WVar12 == WriteState__Enum_Array || (WVar12 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar9;
      return;
    }
  }
  uVar13 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar13);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar13 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar13);
  uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar13);
  pSVar14 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar14);
  func_?(0,pSVar14);
  uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,pMStack_1);
  func_?(uVar13);
  pSVar14 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_15,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar14);
  func_?(1,pSVar14);
  pMVar10 = (MethodInfo *)0x0;
  pSVar14 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar14 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar14,(IFormatProvider *)provider,args,pMVar10);
  uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar13);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar14,(MethodInfo *)0x0);
  EStack_15.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_36
               (JsonWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Uri->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = System.dll::System::Uri::Uri_op_Equality(value,(Uri *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (*(this->klass->vtable).WriteNull.methodPtr)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  if ((in_stack_2 - 7 < 6) || (uVar3 = in_stack_2, in_stack_2 - 0x10 < 2)) {
    uVar3 = 7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar4 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar4 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar4->max_length <= uVar3) goto code_?;
    pJVar5 = pJVar4->vector[uVar3];
    if (pJVar5 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar3 = (in_stack_6->fields)._currentState;
    if (pJVar5->max_length <= uVar3) goto code_?;
    JVar7 = pJVar5->vector[uVar3];
    this = (JsonWriter *)&(in_stack_6->fields)._currentState;
    if (JVar7 != JsonWriter_State__Enum_Error) {
      if ((((*(int *)this == 3) || (uVar3 == 5)) || (uVar3 == 7)) && (in_stack_2 != 5)) {
        pMVar8 = (in_stack_6->klass->vtable).WriteValueDelimiter.method;
        pIVar9 = (in_stack_6->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar3 != 1) || ((in_stack_6->fields)._formatting != 1)) goto code_?;
        pMVar8 = (in_stack_6->klass->vtable).WriteIndentSpace.method;
        pIVar9 = (in_stack_6->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar9)(in_stack_6,pMVar8);
code_?:
      WVar10 = JsonWriter_get_WriteState(in_stack_6,(MethodInfo *)0x0);
      if (((in_stack_2 == 4) && (WVar10 != WriteState__Enum_Start)) ||
         ((WVar10 == WriteState__Enum_Array || (WVar10 == WriteState__Enum_Constructor)))) {
        (*(in_stack_6->klass->vtable).WriteIndent.methodPtr)
                  (in_stack_6,(in_stack_6->klass->vtable).WriteIndent.method);
      }
      (in_stack_6->fields)._currentState = JVar7;
      return;
    }
  }
  uVar11 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar11);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar11 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar11);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&stack0x00000014);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(0,pSVar12);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,this);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pEStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(1,pSVar12);
  pMVar8 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar12,(IFormatProvider *)provider,args,pMVar8);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar11);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar12,(MethodInfo *)0x0);
  pEStack_13 = (Enum__Class *)
               func_?(&
                               MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                              );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteValue(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_37
               (JsonWriter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__Guid);
    func_?(&TypeInfo__System__IConvertible);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    (*(this->klass->vtable).WriteNull.methodPtr)(this,(this->klass->vtable).WriteNull.method);
    return;
  }
  iVar1 = func_?(value,TypeInfo__System__IConvertible);
  if (iVar1 == 0) {
    pOVar2 = (Object *)0x0;
    if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
      pOVar2 = value;
    }
    if (pOVar2 == (Object *)0x0) {
      iVar1 = func_?(value,TypeInfo__System__Byte);
      pUVar3 = (Uri__Class *)TypeInfo__System__Byte;
      pUVar4 = TypeInfo__System__Uri;
      if (iVar1 == 0) {
        pOVar2 = (Object *)0x0;
        if ((Guid__Class *)value->klass == TypeInfo__System__Guid) {
          pOVar2 = value;
        }
        if (pOVar2 == (Object *)0x0) {
          iVar1 = func_?(value,TypeInfo__System__Uri);
          if (iVar1 != 0) {
            pUVar3 = pUVar4;
            if (((pUVar4->_1).typeHierarchyDepth <= (value->klass->_1).typeHierarchyDepth) &&
               ((value->klass->_1).typeHierarchy[(pUVar4->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)pUVar4)) {
              (*(this->klass->vtable).WriteValue_36.methodPtr)
                        (this,value,(this->klass->vtable).WriteValue_36.method);
              return;
            }
            goto code_?;
          }
          pOVar2 = (Object *)0x0;
          if ((TimeSpan__Class *)value->klass == TypeInfo__System__TimeSpan) {
            pOVar2 = value;
          }
          if (pOVar2 == (Object *)0x0) goto code_?;
          pDVar5 = (DateTimeOffset__Class *)TypeInfo__System__TimeSpan;
          unaff_ESI = pUVar4;
          if ((value->klass->_0).element_class == (TypeInfo__System__TimeSpan->_0).element_class) {
            puVar6 = (undefined4 *)func_?(value);
            func_?(0x28,this,*puVar6,puVar6[1]);
            return;
          }
        }
        else {
          pDVar5 = (DateTimeOffset__Class *)TypeInfo__System__Guid;
          if ((value->klass->_0).element_class == (TypeInfo__System__Guid->_0).element_class) {
            puVar6 = (undefined4 *)func_?(value);
            func_?(0x27,this,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
            return;
          }
        }
        goto code_?;
      }
      iVar1 = func_?(value,TypeInfo__System__Byte);
      if (iVar1 != 0) {
        (*(this->klass->vtable).WriteValue_35.methodPtr)
                  (this,iVar1,(this->klass->vtable).WriteValue_35.method);
        return;
      }
    }
    else {
      pDVar5 = TypeInfo__System__DateTimeOffset;
      if ((value->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class)
      {
        puVar6 = (undefined4 *)func_?(value);
        (*(this->klass->vtable).WriteValue_15.methodPtr)
                  (this,*puVar6,puVar6[1],puVar6[2],puVar6[3],
                   (this->klass->vtable).WriteValue_15.method);
        return;
      }
code_?:
      func_?(value,pDVar5);
      pUVar3 = unaff_ESI;
    }
code_?:
    func_?(value,pUVar3);
  }
  else {
    piVar7 = (int *)func_?(value,TypeInfo__System__IConvertible);
    pSVar8 = (String *)0x0;
    if (piVar7 == (int *)0x0) goto code_?;
    uVar9 = func_?(0,TypeInfo__System__IConvertible,piVar7);
    switch(uVar9) {
    case 2:
      func_?(0x13,this);
      return;
    case 3:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xc4 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,1);
code_?:
      bVar13 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      value = (Object *)(uint)bVar13;
      func_?(0x1e,this,value);
      return;
    case 4:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xcc +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,2);
code_?:
      uVar14 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x21,this,uVar14);
      return;
    case 5:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xd4 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,3);
code_?:
      bVar13 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      value = (Object *)(uint)bVar13;
      func_?(0x23,this,value);
      return;
    case 6:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xdc +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,4);
code_?:
      bVar13 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      value = (Object *)(uint)bVar13;
      func_?(0x22,this,value);
      return;
    case 7:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xe4 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,5);
code_?:
      uVar14 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x1f,this,uVar14);
      return;
    case 8:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xec +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,6);
code_?:
      uVar14 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x20,this,uVar14);
      return;
    case 9:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xf4 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,7);
code_?:
      uVar9 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x18,this,uVar9);
      return;
    case 10:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xfc +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,8);
code_?:
      uVar9 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x19,this,uVar9);
      return;
    case 0xb:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x104 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,9);
code_?:
      uVar15 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x1a,this,uVar15);
      return;
    case 0xc:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x10c +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,10);
code_?:
      uVar15 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x1b,this,uVar15);
      return;
    case 0xd:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x114 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,0xb);
code_?:
      uStack_16 = (double)CONCAT44((code *)*puVar6,(undefined4)uStack_16);
      fVar17 = (float10)(*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x1c,this,(float)fVar17);
      return;
    case 0xe:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x11c +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,0xc);
code_?:
      uStack_16 = (double)CONCAT44((code *)*puVar6,(undefined4)uStack_16);
      fVar17 = (float10)(*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      uStack_16 = (double)fVar17;
      func_?(0x1d,this,uStack_16);
      return;
    case 0xf:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x124 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,0xd);
code_?:
      puVar6 = (undefined4 *)(*(code *)*puVar6)(auStack_18,piVar7,pCVar10,puVar6[1]);
      func_?(0x24,this,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
      return;
    case 0x10:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 300 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,0xe);
code_?:
      uVar15 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x25,this,uVar15);
      return;
    case 0x12:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar12 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar6 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0x134 +
                      *piVar7);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar6 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible,0xf);
code_?:
      uVar9 = (*(code *)*puVar6)(piVar7,pCVar10,puVar6[1]);
      func_?(0x17,this,uVar9);
      return;
    }
  }
code_?:
  uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar9);
  pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  uVar9 = func_?(&TypeInfo__System__Object);
  args = (Object__Array *)func_?(uVar9);
  func_?(value);
  pTVar20 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar20);
  func_?(0,pTVar20);
  method_00 = (MethodInfo *)0x0;
  pCVar10 = pCVar19;
  pSVar8 = (String *)func_?(&StringLiteral_Unsupported_type___0___Use_the_J);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar8,(IFormatProvider *)pCVar10,args,method_00);
  uVar9 = func_?();
  this_00 = (ArgumentException *)func_?(uVar9);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,pSVar8,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__JsonWriter__WriteValue_System__Object_);
  uStack_16 = (double)CONCAT44(this_00,&UNK_?);
  func_?();
  value = (Object *)pCVar19;
code_?:
  uVar15 = func_?();
  uVar21 = (uint)uVar15 & 0x3910492c;
  bVar13 = (byte)uVar21;
  bVar22 = (char)value + (char)extraout_ECX + (bVar13 < 0x49);
  iVar23 = CONCAT31((int3)((uint)value >> 8),bVar22);
  bVar24 = (byte)(bVar13 + 0xb7) < 0x49;
  uVar21 = CONCAT31((int3)(uVar21 >> 8),bVar13 + 0x6e);
  pbVar25 = (byte *)(iVar23 + 0x2d);
  bVar13 = *pbVar25;
  bVar26 = *pbVar25;
  *pbVar25 = bVar26 + bVar22 + bVar24;
  iVar27 = extraout_ECX + -1;
  iVar28 = CONCAT22((short)((uint)iVar27 >> 0x10),
                    CONCAT11((char)((uint)iVar27 >> 8) * '\x02' +
                             (CARRY1(bVar13,bVar22) || CARRY1(bVar26 + bVar22,bVar24)),(char)iVar27))
  ;
  iVar1 = uVar21 + 0xd179efb7;
  bVar13 = *(byte *)&pSVar8->klass;
  bVar29 = (byte)((ulonglong)uVar15 >> 0x20);
  bVar26 = *(char *)&pSVar8->klass + bVar29;
  *(byte *)&pSVar8->klass = bVar26 + (uVar21 < 0x2e861049);
  bVar22 = (byte)iVar1;
  bVar24 = 0x99 < bVar22 || (CARRY1(bVar13,bVar29) || CARRY1(bVar26,uVar21 < 0x2e861049));
  piVar7 = (int *)CONCAT31((int3)((uint)iVar1 >> 8),
                            bVar22 + (9 < (bVar22 & 0xf) | in_AF) * -6 + bVar24 * -0x60);
  puVar30 = &pSVar8[0x3310492].fields.field_0x7;
  bVar31 = (byte)((uint)iVar1 >> 8);
  *puVar30 = *puVar30 + bVar31 + bVar24;
  *(byte *)(iVar28 + 0xe) = *(byte *)(iVar28 + 0xe) ^ (char)iVar27 - 2U;
  iVar1 = *piVar7;
  *piVar7 = *piVar7 << 9;
  bVar24 = iVar1 << 8 < 0;
  pbVar25 = (byte *)((int)((ulonglong)uVar15 >> 0x20) + 0x31);
  bVar26 = *pbVar25;
  bVar13 = *pbVar25;
  *pbVar25 = bVar13 + bVar29 + bVar24;
  *(uint *)(iVar28 + 0xd) = *(uint *)(iVar28 + 0xd) ^ iVar28 - 3U;
  pbVar25 = (byte *)((int)&pSVar8->klass + iVar23);
  bVar22 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar31;
  pbVar25 = (byte *)((int)&pSVar8[0x3503104].fields._stringLength + iVar23 + 1);
  bVar32 = *pbVar25;
  bVar33 = (byte)((uint)value >> 8);
  bVar34 = *pbVar25 + bVar33;
  *pbVar25 = bVar34 + CARRY1(bVar22,bVar31);
  pcVar35 = (char *)(CONCAT31((int3)((ulonglong)uVar15 >> 0x28),
                             bVar29 + bVar31 +
                             (CARRY1(bVar26,bVar29) || CARRY1(bVar13 + bVar29,bVar24))) + 0x34);
  *pcVar35 = *pcVar35 + (char)(iVar28 - 3U) + -3 +
            (CARRY1(bVar32,bVar33) || CARRY1(bVar34,CARRY1(bVar22,bVar31)));
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_4
               (JsonWriter *this,uint64_t value,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_5
               (JsonWriter *this,float value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  value = 1.12104e-44;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  fVar1 = value;
  if (((int)value - 7U < 6) || (fVar2 = value, (int)value - 0x10U < 2)) {
    fVar2 = 9.80909e-45;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar3->max_length <= (uint)fVar2) goto code_?;
    pJVar4 = pJVar3->vector[(int)fVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar5) goto code_?;
    JVar6 = pJVar4->vector[uVar5];
    piStack_7 = &(this->fields)._currentState;
    if (JVar6 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_7 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (fVar1 != 7.00649e-45)) {
        pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar9 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar9 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar9)(this,pMVar8);
code_?:
      WVar10 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((fVar1 == 5.60519e-45) && (WVar10 != WriteState__Enum_Start)) ||
         ((WVar10 == WriteState__Enum_Array || (WVar10 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar6;
      return;
    }
  }
  uVar11 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar11);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar11 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar11);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(0,pSVar12);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_7);
  func_?(uVar11);
  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_14,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar12);
  func_?(1,pSVar12);
  pMVar8 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar12,(IFormatProvider *)provider,args,pMVar8);
  uVar11 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar11);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar12,(MethodInfo *)0x0);
  EStack_14.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_7
               (JsonWriter *this,bool value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  _value = 10;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  if ((_value - 7 < 6) || (uVar2 = _value, _value - 0x10 < 2)) {
    uVar2 = 7;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar3 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar3 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pJVar3->max_length <= uVar2) goto code_?;
    pJVar4 = pJVar3->vector[uVar2];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar2 = (this->fields)._currentState;
    if (pJVar4->max_length <= uVar2) goto code_?;
    JVar5 = pJVar4->vector[uVar2];
    piStack_6 = &(this->fields)._currentState;
    if (JVar5 != JsonWriter_State__Enum_Error) {
      if ((((*piStack_6 == 3) || (uVar2 == 5)) || (uVar2 == 7)) && (uVar1 != 5)) {
        pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        pIVar8 = (this->klass->vtable).WriteValueDelimiter.methodPtr;
      }
      else {
        if ((uVar2 != 1) || ((this->fields)._formatting != 1)) goto code_?;
        pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        pIVar8 = (this->klass->vtable).WriteIndentSpace.methodPtr;
      }
      (*pIVar8)(this,pMVar7);
code_?:
      WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
      if (((uVar1 == 4) && (WVar9 != WriteState__Enum_Start)) ||
         ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
        (*(this->klass->vtable).WriteIndent.methodPtr)
                  (this,(this->klass->vtable).WriteIndent.method);
      }
      (this->fields)._currentState = JVar5;
      return;
    }
  }
  uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar10);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar10 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar10);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(0,pSVar11);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State,piStack_6);
  func_?(uVar10);
  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar11);
  func_?(1,pSVar11);
  pMVar7 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Token__0__in_state__1__would_res);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar11,(IFormatProvider *)provider,args,pMVar7);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar10);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar11,(MethodInfo *)0x0);
  EStack_13.klass =
       (Enum__Class *)
       func_?(&
                       MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                      );
  func_?(this_00);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteWhitespace(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteWhitespace
               (JsonWriter *this,String *ws,MethodInfo *method)

{
  if (ws != (String *)0x0) {
    bVar1 = Json::Utilities::StringUtils::StringUtils_IsWhiteSpace(ws,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
      this_00 = (JsonWriterException *)func_?(uVar2);
      func_?(this_00);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Only_white_space_characters_shou);
      JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
      func_?(&MethodInfo__Newtonsoft__Json__JsonWriter__WriteWhitespace_System__String_);
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* JsonWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter_State);
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter__State);
    func_?(&_500BC8012F14DB59363F5E3E3D335855E3930E9CB2A8C099208DDA412343B74C_Field);
    func_?(&_621772E970F68144C113FF85430E9419433D6FC95A8697E93B462818430DE67D_Field);
    func_?(&_8CACA7897261DCBD9989CFB6CC76639A877FC18198CCE0346BCF3E04E2F24846_Field);
    func_?(&AE12043E64531100568614A62FEB4A5E2494928804704E78FDAB015240F5D976_Field);
    func_?(&BA4918AD0FB646D7D70E74C81D75582EA4CA90B77CBA9A3BB6C785E27B72CD59_Field);
    func_?(&E5FCA2DE6F1F5CA7A7AE38BEFCB8ECB431C80BD69AC37780CA3A1025F416C484_Field);
    func_?(&FB3FC0BF5680059D0A1B61BC161F53830DF9F36268D447C60C9BCFDC6BDC7CDF_Field);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonWriter_State__Enum__Array__Array *)
           func_?(TypeInfo__Newtonsoft__Json__JsonWriter_State,8);
  pJVar2 = (JsonWriter_State__Enum__Array *)
           func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pJVar2,_BA4918AD0FB646D7D70E74C81D75582EA4CA90B77CBA9A3BB6C785E27B72CD59_Field
             ,(MethodInfo *)0x0);
  if (pJVar1 == (JsonWriter_State__Enum__Array__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
  }
  else {
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length == 0) goto code_?;
    pJVar1->vector[0] = pJVar2;
    func_?(pJVar1->vector);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               _AE12043E64531100568614A62FEB4A5E2494928804704E78FDAB015240F5D976_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 2) goto code_?;
    pJVar1->vector[1] = pJVar2;
    func_?(pJVar1->vector + 1);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               __621772E970F68144C113FF85430E9419433D6FC95A8697E93B462818430DE67D_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 3) goto code_?;
    pJVar1->vector[2] = pJVar2;
    func_?(pJVar1->vector + 2);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               __500BC8012F14DB59363F5E3E3D335855E3930E9CB2A8C099208DDA412343B74C_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 4) goto code_?;
    pJVar1->vector[3] = pJVar2;
    func_?(pJVar1->vector + 3);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               _FB3FC0BF5680059D0A1B61BC161F53830DF9F36268D447C60C9BCFDC6BDC7CDF_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 5) goto code_?;
    pJVar1->vector[4] = pJVar2;
    func_?(pJVar1->vector + 4);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               _E5FCA2DE6F1F5CA7A7AE38BEFCB8ECB431C80BD69AC37780CA3A1025F416C484_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 6) goto code_?;
    pJVar1->vector[5] = pJVar2;
    func_?(pJVar1->vector + 5);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               _E5FCA2DE6F1F5CA7A7AE38BEFCB8ECB431C80BD69AC37780CA3A1025F416C484_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (pJVar1->max_length < 7) goto code_?;
    pJVar1->vector[6] = pJVar2;
    func_?(pJVar1->vector + 6);
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,
               __8CACA7897261DCBD9989CFB6CC76639A877FC18198CCE0346BCF3E04E2F24846_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar4 = func_?(pJVar2);
      if (iVar4 == 0) goto code_?;
    }
    if (7 < pJVar1->max_length) {
      pJVar1->vector[7] = pJVar2;
      func_?(pJVar1->vector + 7);
      TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray = pJVar1;
      func_?(TypeInfo__Newtonsoft__Json__JsonWriter->static_fields,pJVar1);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter__ctor
               (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                           );
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
              (this_00,8,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List_int_
              );
    (this->fields)._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00;
    func_?(&(this->fields)._stack,this_00);
    pLVar1 = (this->fields)._stack;
    if (pLVar1 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
      func_?(pLVar1,0,
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                     );
      (this->fields)._currentState = 0;
      (this->fields)._formatting = 0;
      (this->fields)._CloseOutput_k__BackingField = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WriteState get_WriteState() */

WriteState__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_get_WriteState
          (JsonWriter *this,MethodInfo *method)

{
  switch((this->fields)._currentState) {
  case 0:
    return WriteState__Enum_Start;
  case 1:
    return WriteState__Enum_Property;
  case 2:
  case 3:
    return WriteState__Enum_Object;
  case 4:
  case 5:
    return WriteState__Enum_Array;
  case 6:
  case 7:
    return WriteState__Enum_Constructor;
  default:
    func_?();
    func_?();
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    str0 = (String *)func_?();
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar1,method_00);
    func_?();
    this_00 = (JsonWriterException *)func_?();
    func_?();
    JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
    func_?();
    EStack_2.monitor = (MonitorData *)&UNK_?;
    pJStack_3 = this_00;
    uVar4 = func_?();
    *(undefined1 *)&this_00->klass = uVar4;
    pcVar5 = (code *)swi(3);
    WVar6 = (*pcVar5)();
    return WVar6;
  case 9:
    return WriteState__Enum_Closed;
  case 10:
    return WriteState__Enum_Error;
  }
}

