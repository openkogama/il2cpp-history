
/* Void AutoComplete(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_AutoComplete
               (JsonWriter *this,JsonToken__Enum tokenBeingWritten,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(tokenBeingWritten) {
  case JsonToken__Enum_Integer:
  case JsonToken__Enum_Float:
  case JsonToken__Enum_String:
  case JsonToken__Enum_Boolean:
  case JsonToken__Enum_Null:
  case JsonToken__Enum_Undefined:
  case JsonToken__Enum_Date:
  case JsonToken__Enum_Bytes:
    JVar1 = JsonToken__Enum_Integer;
    break;
  default:
    JVar1 = tokenBeingWritten;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pJVar2->max_length <= JVar1) goto code_?;
    pJVar4 = pJVar2->vector[JVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (uVar5 < pJVar4->max_length) {
      JVar6 = pJVar4->vector[uVar5];
      if (JVar6 != JsonWriter_State__Enum_Error) {
        if ((((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) &&
           (tokenBeingWritten != JsonToken__Enum_Comment)) {
          pIVar7 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar7 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar8)(this,pIVar7);
code_?:
        WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((tokenBeingWritten == JsonToken__Enum_PropertyName) &&
            (WVar9 != WriteState__Enum_Start)) ||
           ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar6;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&tokenBeingWritten);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  pJVar11 = (JsonToken__Enum *)func_?(uVar3);
  tokenBeingWritten = *pJVar11;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(0,uVar10);
  puVar12 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar12);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar13 = (undefined4 *)func_?(uVar3);
  *puVar12 = *puVar13;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(1,uVar10);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar14 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar15 = (int *)(iVar14 + 1);
  cVar16 = (char)piVar15;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar15);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void AutoCompleteClose(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_AutoCompleteClose
               (JsonWriter *this,JsonToken__Enum tokenBeingClosed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pJVar2 = (JsonWriter *)0x0;
  iVar3 = (this->fields)._top;
  if (0 < iVar3) {
    do {
      pLVar4 = (pJVar1->fields)._stack;
      if (pLVar4 == (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) goto code_?;
      JVar5 = mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]
              ::List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                        (pLVar4,iVar3 - (int)pJVar2,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                        );
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (tokenBeingClosed == JsonToken__Enum_EndObject) {
        JVar6 = JTokenType__Enum_Object;
      }
      else if (tokenBeingClosed == JsonToken__Enum_EndArray) {
        JVar6 = JTokenType__Enum_Array;
      }
      else {
        pJVar7 = (JsonWriter *)tokenBeingClosed;
        if (tokenBeingClosed != JsonToken__Enum_EndConstructor) goto code_?;
        JVar6 = JTokenType__Enum_Constructor;
      }
      pJVar2 = (JsonWriter *)((int)&pJVar2->klass + 1);
      if (JVar5 == JVar6) {
        if (pJVar2 != (JsonWriter *)0x0) {
          this = (JsonWriter *)0x0;
          if (0 < (int)pJVar2) goto code_?;
          goto code_?;
        }
        break;
      }
      iVar3 = (pJVar1->fields)._top;
    } while ((int)pJVar2 < iVar3);
  }
code_?:
  pJVar8 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (pJVar8,StringLiteral_No_token_to_close_,(MethodInfo *)0x0);
  func_?(pJVar8,0,
                  MethodInfo__Newtonsoft__Json__JsonWriter__AutoCompleteClose_Newtonsoft__Json__JsonToken_
                 );
  pJVar7 = extraout_ECX;
code_?:
  this = pJVar7;
  pOVar9 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar10 = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_No_type_for_token__,pOVar9,(MethodInfo *)0x0);
  pJVar8 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  this = (JsonWriter *)
         MethodInfo__Newtonsoft__Json__JsonWriter__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
  ;
  func_?(pJVar8);
code_?:
  this = (JsonWriter *)pJVar8;
  pOVar9 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar10 = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_No_close_token_for_type__,pOVar9,(MethodInfo *)0x0);
  pJVar8 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  in_stack_11 =
       MethodInfo__Newtonsoft__Json__JsonWriter__GetCloseTokenForType_Newtonsoft__Json__Linq__JTokenType_
  ;
  method = (MethodInfo *)0x0;
  this = (JsonWriter *)&UNK_?;
  tokenBeingClosed = (JsonToken__Enum)pJVar8;
  this = (JsonWriter *)func_?();
  goto code_?;
  while( true ) {
    pJVar8 = (JsonSchemaException *)
              mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]
              ::List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                        (pLVar4,(pJVar1->fields)._top,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                        );
    (pJVar1->fields)._top = (pJVar1->fields)._top + -1;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (pJVar8 == (JsonSchemaException *)0x1) {
      uVar12 = 0xd;
    }
    else if (pJVar8 == (JsonSchemaException *)0x2) {
      uVar12 = 0xe;
    }
    else {
      if (pJVar8 != (JsonSchemaException *)0x3) goto code_?;
      uVar12 = 0xf;
    }
    iVar3 = (pJVar1->fields)._currentState;
    if ((iVar3 != 2) && (iVar3 != 4)) {
      func_?(0x10,pJVar1);
    }
    func_?(0xf,pJVar1,uVar12);
    this = (JsonWriter *)((int)&this->klass + 1);
    if ((int)pJVar2 <= (int)this) break;
code_?:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar4 = (pJVar1->fields)._stack;
    if (pLVar4 == (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) goto code_?;
  }
code_?:
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar4 = (pJVar1->fields)._stack;
  if (pLVar4 == (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
code_?:
    func_?(0);
    goto code_?;
  }
  this = (JsonWriter *)
         mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
         List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                   (pLVar4,(pJVar1->fields)._top,
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                   );
  switch(this) {
  case (JsonWriter *)0x0:
    (pJVar1->fields)._currentState = 0;
    return;
  case (JsonWriter *)0x1:
    (pJVar1->fields)._currentState = 3;
    return;
  case (JsonWriter *)0x2:
  case (JsonWriter *)0x3:
    (pJVar1->fields)._currentState = 5;
    return;
  }
code_?:
  pOVar9 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar10 = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unknown_JsonType__,pOVar9,(MethodInfo *)0x0);
  pJVar8 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  in_stack_11 =
       MethodInfo__Newtonsoft__Json__JsonWriter__AutoCompleteClose_Newtonsoft__Json__JsonToken_;
  method = (MethodInfo *)0x0;
  this = (JsonWriter *)&UNK_?;
  tokenBeingClosed = (JsonToken__Enum)pJVar8;
  iVar3 = func_?();
  *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) ^ 0x5f;
  *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) ^ 0x6b;
  *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) ^ 0x6b;
  *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) ^ 0x55;
  this = pJVar2;
  if (cRam_? == '\0') {
    func_?(_UNK_?,pJVar8);
    cRam_? = '\x01';
  }
  switch(in_stack_11) {
  case (MethodInfo *)0x7:
  case (MethodInfo *)0x8:
  case (MethodInfo *)0x9:
  case (MethodInfo *)0xa:
  case (MethodInfo *)0xb:
  case (MethodInfo *)0xc:
  case (MethodInfo *)0x10:
  case (MethodInfo *)0x11:
    pMVar13 = (MethodInfo *)0x7;
    break;
  default:
    pMVar13 = in_stack_11;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter,pSVar10,pJVar2);
  }
  this_00 = method;
  pJVar14 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar14 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
  }
  else {
    if ((MethodInfo *)pJVar14->max_length <= pMVar13) goto code_?;
    pJVar15 = pJVar14->vector[(int)pMVar13];
    if (pJVar15 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    pIVar16 = method->klass;
    if (pIVar16 < (Il2CppClass *)pJVar15->max_length) {
      pIVar17 = (Il2CppClass *)pJVar15->vector[(int)pIVar16];
      if (pIVar17 != (Il2CppClass *)0xa) {
        if ((((pIVar16 == (Il2CppClass *)0x3) || (pIVar16 == (Il2CppClass *)0x5)) ||
            (pIVar16 == (Il2CppClass *)0x7)) && (in_stack_11 != (MethodInfo *)0x5)) {
          uVar12 = *(undefined4 *)(method->methodPointer + 0x14c);
          pcVar18 = *(code **)(method->methodPointer + 0x148);
        }
        else {
          if ((pIVar16 != (Il2CppClass *)0x1) || (method->return_type != (Il2CppType *)0x1))
          goto code_?;
          uVar12 = *(undefined4 *)(method->methodPointer + 0x154);
          pcVar18 = *(code **)(method->methodPointer + 0x150);
        }
        (*pcVar18)(method,uVar12);
code_?:
        WVar19 = JsonWriter_get_WriteState((JsonWriter *)this_00,(MethodInfo *)0x0);
        if (((in_stack_11 == (MethodInfo *)0x4) && (WVar19 != WriteState__Enum_Start)) ||
           ((WVar19 == WriteState__Enum_Array || (WVar19 == WriteState__Enum_Constructor)))) {
          (**(code **)(this_00->methodPointer + 0x140))
                    (this_00,*(undefined4 *)(this_00->methodPointer + 0x144));
        }
        this_00->klass = pIVar17;
        return;
      }
      goto code_?;
    }
  }
  uVar12 = func_?(0,0);
  func_?(uVar12);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo,pSVar10,pJVar2);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar12 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&stack0x00000010);
  func_?(uVar12,0);
  uVar20 = func_?(3,uVar12);
  puVar21 = (undefined4 *)func_?(uVar12);
  in_stack_11 = (MethodInfo *)*puVar21;
  func_?(args,0);
  func_?(args,uVar20);
  func_?(0,uVar20);
  puVar21 = (undefined4 *)func_?();
  uVar12 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar21);
  func_?(uVar12,0);
  uVar20 = func_?(3,uVar12);
  puVar22 = (undefined4 *)func_?(uVar12);
  *puVar21 = *puVar22;
  func_?(args,0);
  func_?(args,uVar20);
  func_?(1,uVar20);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  pJVar8 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar8,pSVar10,(MethodInfo *)0x0);
  iVar3 = func_?(pJVar8,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar23 = (int *)(iVar3 + 1);
  cVar24 = (char)piVar23;
  *(char *)piVar23 = *(char *)piVar23 + cVar24;
  *(char *)piVar23 = *(char *)piVar23 + cVar24;
  *(char *)piVar23 = *(char *)piVar23 + cVar24;
  *extraout_ECX_00 = (int)(*extraout_ECX_00 + (int)piVar23);
  *piVar23 = (int)(*piVar23 + (int)piVar23);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Dispose
               (JsonWriter *this,bool disposing,MethodInfo *method)

{
  WVar1 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
  if (WVar1 != WriteState__Enum_Closed) {
    (*(code *)(this->klass->vtable).Close.method)
              (this,(this->klass->vtable).WriteStartObject.methodPtr);
  }
  return;
}


/* JsonToken GetCloseTokenForType(JTokenType) */

JsonToken__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_GetCloseTokenForType
          (JsonWriter *this,JTokenType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == JTokenType__Enum_Object) {
    return JsonToken__Enum_EndObject;
  }
  if (type == JTokenType__Enum_Array) {
    return JsonToken__Enum_EndArray;
  }
  if (type == JTokenType__Enum_Constructor) {
    return JsonToken__Enum_EndConstructor;
  }
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&type);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_No_close_token_for_type__,arg1,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  type = (JTokenType__Enum)
         MethodInfo__Newtonsoft__Json__JsonWriter__GetCloseTokenForType_Newtonsoft__Json__Linq__JTokenType_
  ;
  func_?();
  pcVar1 = (code *)swi(3);
  JVar2 = (*pcVar1)();
  return JVar2;
}


/* JTokenType GetTypeForCloseToken(JsonToken) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_GetTypeForCloseToken
          (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (token == JsonToken__Enum_EndObject) {
    return JTokenType__Enum_Object;
  }
  if (token == JsonToken__Enum_EndArray) {
    return JTokenType__Enum_Array;
  }
  if (token == JsonToken__Enum_EndConstructor) {
    return JTokenType__Enum_Constructor;
  }
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&token);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_No_type_for_token__,arg1,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  token = (JsonToken__Enum)
          MethodInfo__Newtonsoft__Json__JsonWriter__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
  ;
  func_?();
  pcVar1 = (code *)swi(3);
  JVar2 = (*pcVar1)();
  return JVar2;
}


/* Boolean IsEndToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_IsEndToken
               (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  if (((token != JsonToken__Enum_EndObject) && (token != JsonToken__Enum_EndArray)) &&
     (token != JsonToken__Enum_EndConstructor)) {
    return 0;
  }
  return 1;
}


/* Boolean IsStartToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_IsStartToken
               (JsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  if (((token != JsonToken__Enum_StartObject) && (token != JsonToken__Enum_StartArray)) &&
     (token != JsonToken__Enum_StartConstructor)) {
    return 0;
  }
  return 1;
}


/* JTokenType Peek() */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Peek
          (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    JVar1 = mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
            List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                      (this_00,(this->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    return JVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  JVar1 = (*pcVar2)();
  return JVar1;
}


/* JTokenType Pop() */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Pop
          (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    JVar1 = mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
            List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                      (this_00,(this->fields)._top,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                      );
    (this->fields)._top = (this->fields)._top + -1;
    return JVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  JVar1 = (*pcVar2)();
  return JVar1;
}


/* Void Push(JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_Push
               (JsonWriter *this,JTokenType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._top = (this->fields)._top + 1;
  this_00 = (this->fields)._stack;
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Count__
                       );
    index = (this->fields)._top;
    this_01 = (List_1_UIPushOption_ *)(this->fields)._stack;
    if (index < (int)pOVar1) {
      if (this_01 != (List_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
        List_1_Newtonsoft_Json_Linq_JTokenType__set_Item
                  ((List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_01,index,value,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__set_Item_int__Newtonsoft__Json__Linq__JTokenType_
                  );
        return;
      }
    }
    else if (this_01 != (List_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_01,value,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                );
      return;
    }
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(text) {
  case (String *)0x7:
  case (String *)0x8:
  case (String *)0x9:
  case (String *)0xa:
  case (String *)0xb:
  case (String *)0xc:
  case (String *)0x10:
  case (String *)0x11:
    pSVar1 = (String *)0x7;
    break;
  default:
    pSVar1 = text;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((String *)pJVar2->max_length <= pSVar1) goto code_?;
    pJVar4 = pJVar2->vector[(int)pSVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (uVar5 < pJVar4->max_length) {
      JVar6 = pJVar4->vector[uVar5];
      if (JVar6 != JsonWriter_State__Enum_Error) {
        if ((((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (text != (String *)0x5)) {
          pIVar7 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar7 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar8)(this,pIVar7);
code_?:
        WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((text == (String *)0x4) && (WVar9 != WriteState__Enum_Start)) ||
           ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar6;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&text);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar11 = (undefined4 *)func_?(uVar3);
  text = (String *)*puVar11;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(0,uVar10);
  puVar11 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar11);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar12 = (undefined4 *)func_?(uVar3);
  *puVar11 = *puVar12;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(1,uVar10);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  iVar13 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar14 = (int *)(iVar13 + 1);
  cVar15 = (char)piVar14;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar14);
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WriteConstructorDate(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteConstructorDate
               (JsonWriter *this,JsonReader *reader,MethodInfo *method)

{
  pIVar1 = (IsolatedStorageException *)reader;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pIVar1 == (IsolatedStorageException *)0x0) {
code_?:
    func_?(0);
code_?:
    reader = (JsonReader *)
             (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                       (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    pOVar2 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Unexpected_token_while_reading_d,pOVar2,
                        (MethodInfo *)0x0);
    pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar1,pSVar3,(MethodInfo *)0x0);
    pMStack_4 = 
    MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_;
    uStack_5 = 0;
    pIStack_6 = pIVar1;
    func_?();
code_?:
    pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (pIVar1,StringLiteral_Unexpected_end_while_reading_dat,(MethodInfo *)0x0);
    uVar7 = func_?(pIVar1,0,
                             MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_
                            );
  }
  else {
    cVar8 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
    if (cVar8 == '\0') goto code_?;
    iVar9 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    pJVar10 = ((JsonReader *)pIVar1)->klass;
    if (iVar9 != 7) goto code_?;
    piVar11 = (int *)(*(code *)(pJVar10->vtable).get_Value.method)
                              (pIVar1,(pJVar10->vtable).get_ValueType.methodPtr);
    uVar7 = CONCAT44(TypeInfo__System__Int64,piVar11);
    if (piVar11 == (int *)0x0) goto code_?;
    if (*(Il2CppClass **)(*piVar11 + 0x20) == (TypeInfo__System__Int64->_0).element_class) {
      iVar9 = func_?(piVar11);
      uVar12 = *(uint *)(iVar9 + 4);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pDVar13 = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
                         ((DateTime *)&pIStack_6,(ulonglong)uVar12,unaff_EDI);
      pIStack_6 = *(IsolatedStorageException **)&(pDVar13->ticks)._ticks;
      uStack_5 = *(undefined4 *)((int)&(pDVar13->ticks)._ticks + 4);
      pMStack_4 = (MethodInfo *)pDVar13->kind;
      uStack_14 = *(undefined4 *)&pDVar13->field_0xc;
      cVar8 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
      if (cVar8 == '\0') goto code_?;
      iVar9 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
      if (iVar9 == 0xf) {
        func_?(0x25,this,pIStack_6,uStack_5,pMStack_4,uStack_14);
        return;
      }
      goto code_?;
    }
  }
  func_?(uVar7);
  pJVar10 = extraout_ECX;
code_?:
  reader = (JsonReader *)
           (*(code *)(pJVar10->vtable).get_TokenType.method)
                     (pIVar1,(pJVar10->vtable).get_Value.methodPtr);
  pOVar2 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Unexpected_token_while_reading_d,pOVar2,
                      (MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,pSVar3,(MethodInfo *)0x0);
  pMStack_4 = 
  MethodInfo__Newtonsoft__Json__JsonWriter__WriteConstructorDate_Newtonsoft__Json__JsonReader_;
  uStack_5 = 0;
  pIStack_6 = pIVar1;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WriteEnd() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteEnd
               (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  this_00 = (this->fields)._stack;
  if (this_00 == (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    func_?(0);
  }
  else {
    unaff_EDI = (JsonWriter *)
                mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::
                JTokenType]::List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                          (this_00,(this->fields)._top,
                           MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                          );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (unaff_EDI == (JsonWriter *)0x1) {
      (*(code *)(pJVar1->klass->vtable).WriteEndObject.method)
                (pJVar1,(pJVar1->klass->vtable).WriteStartArray.methodPtr);
      return;
    }
    if (unaff_EDI == (JsonWriter *)0x2) {
      (*(code *)(pJVar1->klass->vtable).WriteEndArray.method)
                (pJVar1,(pJVar1->klass->vtable).WriteStartConstructor.methodPtr);
      return;
    }
    if (unaff_EDI == (JsonWriter *)0x3) {
      (*(code *)(pJVar1->klass->vtable).WriteEndConstructor.method)
                (pJVar1,(pJVar1->klass->vtable).WritePropertyName.methodPtr);
      return;
    }
  }
  this = unaff_EDI;
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unexpected_type_when_writing_end,arg1,
                       (MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,message,(MethodInfo *)0x0);
  pMStack2 =
       MethodInfo__Newtonsoft__Json__JsonWriter__WriteEnd_Newtonsoft__Json__Linq__JTokenType_;
  uStack3 = 0;
  method = (MethodInfo *)&UNK_?;
  pJStack4 = this_01;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == JTokenType__Enum_Object) {
    (*(code *)(this->klass->vtable).WriteEndObject.method)
              (this,(this->klass->vtable).WriteStartArray.methodPtr);
    return;
  }
  if (type == JTokenType__Enum_Array) {
    (*(code *)(this->klass->vtable).WriteEndArray.method)
              (this,(this->klass->vtable).WriteStartConstructor.methodPtr);
    return;
  }
  if (type == JTokenType__Enum_Constructor) {
    (*(code *)(this->klass->vtable).WriteEndConstructor.method)
              (this,(this->klass->vtable).WritePropertyName.methodPtr);
    return;
  }
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&type);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unexpected_type_when_writing_end,arg1,
                       (MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  type = (JTokenType__Enum)
         MethodInfo__Newtonsoft__Json__JsonWriter__WriteEnd_Newtonsoft__Json__Linq__JTokenType_;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(name) {
  case (String *)0x7:
  case (String *)0x8:
  case (String *)0x9:
  case (String *)0xa:
  case (String *)0xb:
  case (String *)0xc:
  case (String *)0x10:
  case (String *)0x11:
    pSVar1 = (String *)0x7;
    break;
  default:
    pSVar1 = name;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((String *)pJVar2->max_length <= pSVar1) goto code_?;
    pJVar4 = pJVar2->vector[(int)pSVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (uVar5 < pJVar4->max_length) {
      JVar6 = pJVar4->vector[uVar5];
      if (JVar6 != JsonWriter_State__Enum_Error) {
        if ((((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (name != (String *)0x5)) {
          pIVar7 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar7 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar8)(this,pIVar7);
code_?:
        WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((name == (String *)0x4) && (WVar9 != WriteState__Enum_Start)) ||
           ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar6;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&name);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar11 = (undefined4 *)func_?(uVar3);
  name = (String *)*puVar11;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(0,uVar10);
  puVar11 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar11);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar12 = (undefined4 *)func_?(uVar3);
  *puVar11 = *puVar12;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(1,uVar10);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  iVar13 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar14 = (int *)(iVar13 + 1);
  cVar15 = (char)piVar14;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *(char *)piVar14 = *(char *)piVar14 + cVar15;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar14);
  *piVar14 = (int)(*piVar14 + (int)piVar14);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WriteRawValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteRawValue
               (JsonWriter *this,String *json,MethodInfo *method)

{
  JsonWriter_AutoComplete(this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).WriteRaw.method)
            (this,json,(this->klass->vtable).WriteRawValue.methodPtr);
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
    cRam_? = '\x01';
  }
  *(int *)(in_stack_1 + 8) = *(int *)(in_stack_1 + 8) + 1;
  if (*(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)(in_stack_1 + 0xc) !=
      (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (*(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
                         (in_stack_1 + 0xc),
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Count__
                       );
    this_00 = *(List_1_UIPushOption_ **)(in_stack_1 + 0xc);
    if (*(int *)(in_stack_1 + 8) < (int)pOVar2) {
      if (this_00 != (List_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
        List_1_Newtonsoft_Json_Linq_JTokenType__set_Item
                  ((List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00,
                   *(int *)(in_stack_1 + 8),in_stack_3,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__set_Item_int__Newtonsoft__Json__Linq__JTokenType_
                  );
        return;
      }
    }
    else if (this_00 != (List_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_00,in_stack_3,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                );
      return;
    }
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  if (reader == (JsonReader *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
  if (iVar2 == 0) {
    JsonWriter_WriteToken_1(this,reader,-1,(MethodInfo *)0x0);
    return;
  }
  iVar2 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    iVar2 = (*(code *)(reader->klass->vtable).get_Depth.method)(reader);
    JsonWriter_WriteToken_1(this,reader,iVar2 + 1,(MethodInfo *)0x0);
    return;
  }
  initialDepth = (*(code *)(reader->klass->vtable).get_Depth.method)(reader);
  JsonWriter_WriteToken_1(this,reader,initialDepth,(MethodInfo *)0x0);
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void WriteToken(JsonReader, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteToken_1
               (JsonWriter *this,JsonReader *reader,int32_t initialDepth,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  do {
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
      pOVar2 = (Object *)func_?();
      Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
                (StringLiteral_TokenType,pOVar2,StringLiteral_Unexpected_token_type_,
                 (MethodInfo *)0x0);
      bVar3 = (undefined1 *)0xffffffd7 < &stack0xffffffcc;
      bVar4 = SCARRY4((int)&stack0xffffffcc,0x28);
      uVar5 = func_?();
      pbVar6 = (byte *)((ulonglong)uVar5 >> 0x20);
      pSVar7 = (String *)uVar5;
      if (extraout_ECX == (String *)0x0) {
        return;
      }
      pSVar8 = extraout_ECX;
      if (!bVar4) {
        bVar3 = 0;
        pSVar8 = (String *)((uint)pSVar7 & 0x3e107090 | 0x90);
        pSVar7 = extraout_ECX;
      }
      pSVar9 = pSVar8 + -0x6eb8ef9;
      cVar10 = *(char *)&pSVar9->klass;
      *(char *)&pSVar9->klass = *(char *)&pSVar9->klass + '\x01';
      if (SCARRY1(cVar10,'\x01')) {
        pSVar8 = (String *)((uint)pSVar8 ^ 0x93);
        bVar4 = false;
        puVar1 = (undefined1 *)0xd6107093;
        pSVar7 = unaff_EBX;
      }
      else {
        pSVar8 = pSVar8 + -0x6daaef9;
        bVar11 = *(byte *)&pSVar8->klass;
        *(byte *)&pSVar8->klass = bVar11 << 1 | bVar3;
        bVar4 = ((bVar11 & 0x80) != 0) != *(char *)&pSVar8->klass < '\0';
        pSVar8 = unaff_EBX;
        if (!bVar4) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)pbVar6)();
          return;
        }
      }
      out((short)((ulonglong)uVar5 >> 0x20),pSVar7);
      if (bVar4) {
code_?:
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pbVar13 = (byte *)((int)&pSVar8[0x7094211].klass + (int)reader * 2);
      *pbVar13 = *pbVar13 | (byte)((ulonglong)uVar5 >> 0x20);
      bVar3 = *pbVar6;
      bVar14 = (byte)((uint)pSVar7 >> 8);
      bVar11 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar14;
      if (SCARRY1(bVar11,bVar14)) {
        puVar1[0x15] = puVar1[0x15] + (char)((ulonglong)uVar5 >> 0x28);
      }
      else {
        if (!SCARRY1(bVar11,bVar14)) goto code_?;
        if ((char)(in_stack_15 + (char)&stack0xffffffe8 + CARRY1(bVar3,bVar14)) != '\0')
        goto code_?;
      }
      func_?();
      uRam_? = 1;
code_?:
      reader_00 = *(JsonReader **)(puVar1 + 0xc);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)reader_00,StringLiteral_reader,(MethodInfo *)0x0);
      if (reader_00 == (JsonReader *)0x0) {
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar16 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)();
      if (iVar16 == 0) {
        JsonWriter_WriteToken_1(*(JsonWriter **)(puVar1 + 8),reader_00,-1,(MethodInfo *)0x0);
        return;
      }
      iVar16 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)();
      if (((iVar16 != 1) && (iVar16 != 2)) && (iVar16 != 3)) {
        iVar16 = (*(code *)(reader_00->klass->vtable).get_Depth.method)();
        JsonWriter_WriteToken_1
                  (*(JsonWriter **)(puVar1 + 8),reader_00,iVar16 + 1,(MethodInfo *)0x0);
        return;
      }
      iVar17 = (*(code *)(reader_00->klass->vtable).get_Depth.method)();
      JsonWriter_WriteToken_1(*(JsonWriter **)(puVar1 + 8),reader_00,iVar17,(MethodInfo *)0x0);
      return;
    }
    uVar18 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
    switch(uVar18) {
    case 0:
      break;
    case 1:
      (*(code *)(this->klass->vtable).WriteStartObject.method)();
      break;
    case 2:
      (*(code *)(this->klass->vtable).WriteStartArray.method)();
      break;
    case 3:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 == (int *)0x0) goto code_?;
      unaff_EBX = (String *)(**(code **)(*piVar19 + 0xd8))();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      iVar17 = mscorlib.dll::System::String::String_Compare_5
                         (unaff_EBX,StringLiteral_Date,StringComparison__Enum_Ordinal,
                          (MethodInfo *)0x0);
      if (iVar17 == 0) {
        JsonWriter_WriteConstructorDate(this,reader,(MethodInfo *)0x0);
      }
      else {
        piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
        if (piVar19 == (int *)0x0) goto code_?;
        (**(code **)(*piVar19 + 0xd8))();
        (*(code *)(this->klass->vtable).WriteStartConstructor.method)();
      }
      break;
    case 4:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 == (int *)0x0) goto code_?;
      (**(code **)(*piVar19 + 0xd8))();
      (*(code *)(this->klass->vtable).WritePropertyName.method)();
      break;
    case 5:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 == (int *)0x0) goto code_?;
      (**(code **)(*piVar19 + 0xd8))();
      (*(code *)(this->klass->vtable).WriteComment.method)();
      break;
    case 6:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 != (int *)0x0) {
        piVar20 = (int *)0x0;
        if ((String__Class *)*piVar19 == TypeInfo__System__String) {
          piVar20 = piVar19;
        }
        if (piVar20 == (int *)0x0) goto code_?;
      }
      pMVar21 = (this->klass->vtable).WriteRawValue.method;
      goto code_?;
    case 7:
      pOVar2 = (Object *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar22 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt64_17
                (pOVar2,(IFormatProvider *)pCVar22,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).WriteValue_3.method)();
      break;
    case 8:
      pOVar2 = (Object *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar22 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDouble_13
                (pOVar2,(IFormatProvider *)pCVar22,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).WriteValue_6.method)();
      break;
    case 9:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 == (int *)0x0) goto code_?;
      (**(code **)(*piVar19 + 0xd8))();
      (*(code *)(this->klass->vtable).WriteValue.method)();
      break;
    case 10:
      pOVar2 = (Object *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar22 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToBoolean_13
                (pOVar2,(IFormatProvider *)pCVar22,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).WriteValue_7.method)();
      break;
    case 0xb:
      (*(code *)(this->klass->vtable).WriteNull.method)();
      break;
    case 0xc:
      (*(code *)(this->klass->vtable).WriteUndefined.method)();
      break;
    case 0xd:
      (*(code *)(this->klass->vtable).WriteEndObject.method)();
      break;
    case 0xe:
      (*(code *)(this->klass->vtable).WriteEndArray.method)();
      break;
    case 0xf:
      (*(code *)(this->klass->vtable).WriteEndConstructor.method)();
      break;
    case 0x10:
      piVar19 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if (piVar19 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar19 + 0x20) != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      func_?();
      (*(code *)(this->klass->vtable).WriteValue_14.method)();
      break;
    case 0x11:
      unaff_EBX = (String *)(*(code *)(reader->klass->vtable).get_Value.method)();
      if ((unaff_EBX != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
      goto code_?;
      pMVar21 = (this->klass->vtable).WriteValue_35.method;
code_?:
      (*(code *)pMVar21)();
      break;
    default:
      goto code_?;
    }
    iVar16 = (*(code *)(reader->klass->vtable).get_Depth.method)();
    iVar23 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
    if (((iVar23 == 0xd) || (iVar23 == 0xe)) || (iVar23 == 0xf)) {
      iVar23 = 1;
    }
    else {
      iVar23 = 0;
    }
    unaff_EBX = (String *)(iVar16 - iVar23);
    if ((int)unaff_EBX <= initialDepth + -1) {
      return;
    }
    cVar10 = (*(code *)(reader->klass->vtable).__unknown.method)();
    if (cVar10 == '\0') {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(_value) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar1 = 7;
    break;
  default:
    uVar1 = _value;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pJVar2->max_length <= uVar1) goto code_?;
    pJVar4 = pJVar2->vector[uVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar1 = (this->fields)._currentState;
    if (uVar1 < pJVar4->max_length) {
      JVar5 = pJVar4->vector[uVar1];
      if (JVar5 != JsonWriter_State__Enum_Error) {
        if ((((uVar1 == 3) || (uVar1 == 5)) || (uVar1 == 7)) && (_value != 5)) {
          pIVar6 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar1 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar6 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar7)(this,pIVar6);
code_?:
        WVar8 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((_value == 4) && (WVar8 != WriteState__Enum_Start)) ||
           ((WVar8 == WriteState__Enum_Array || (WVar8 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar5;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar10 = (undefined4 *)func_?(uVar3);
  _value = *puVar10;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(0,uVar9);
  puVar10 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar10);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar11 = (undefined4 *)func_?(uVar3);
  *puVar10 = *puVar11;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(1,uVar9);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar12 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar13 = (int *)(iVar12 + 1);
  cVar14 = (char)piVar13;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar13);
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_12
               (JsonWriter *this,int8_t value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  _value = 7;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(_value) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar1 = 7;
    break;
  default:
    uVar1 = _value;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pJVar2->max_length <= uVar1) goto code_?;
    pJVar4 = pJVar2->vector[uVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar1 = (this->fields)._currentState;
    if (uVar1 < pJVar4->max_length) {
      JVar5 = pJVar4->vector[uVar1];
      if (JVar5 != JsonWriter_State__Enum_Error) {
        if ((((uVar1 == 3) || (uVar1 == 5)) || (uVar1 == 7)) && (_value != 5)) {
          pIVar6 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar1 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar6 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar7)(this,pIVar6);
code_?:
        WVar8 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((_value == 4) && (WVar8 != WriteState__Enum_Start)) ||
           ((WVar8 == WriteState__Enum_Array || (WVar8 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar5;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar10 = (undefined4 *)func_?(uVar3);
  _value = *puVar10;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(0,uVar9);
  puVar10 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar10);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar11 = (undefined4 *)func_?(uVar3);
  *puVar10 = *puVar11;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(1,uVar9);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar12 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar13 = (int *)(iVar12 + 1);
  cVar14 = (char)piVar13;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar13);
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<int>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_1.method)
              (this,uVar2,(this->klass->vtable).WriteValue_2.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[UInt32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_19
               (JsonWriter *this,Nullable_1_UInt32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<unsigned_int>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<unsigned_int>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_2.method)
              (this,uVar2,(this->klass->vtable).WriteValue_3.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Int64]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_20
               (JsonWriter *this,Nullable_1_Int64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<long>__get_HasValue__);
  if (bVar1 != 0) {
    uVar2 = func_?(&stack0x00000008,MethodInfo__System__Nullable<long>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_3.method)
              (this,uVar2,(this->klass->vtable).WriteValue_4.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Nullable`1[UInt64]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_21
               (JsonWriter *this,Nullable_1_UInt64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<unsigned_long>__get_HasValue__);
  if (bVar1 != 0) {
    uVar2 = func_?(&stack0x00000008,
                            MethodInfo__System__Nullable<unsigned_long>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_4.method)
              (this,uVar2,(this->klass->vtable).WriteValue_5.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Nullable`1[Single]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_22
               (JsonWriter *this,Nullable_1_Single_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<float>__get_HasValue__);
  if (cVar1 != '\0') {
    fVar2 = (float10)func_?(&value,MethodInfo__System__Nullable<float>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_5.method)
              (this,(float)fVar2,(this->klass->vtable).WriteValue_6.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_23
               (JsonWriter *this,Nullable_1_Double_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<double>__get_HasValue__);
  if (bVar1 != 0) {
    fVar2 = (float10)func_?(&stack0x00000008,
                                     MethodInfo__System__Nullable<double>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_6.method)
              (this,(double)fVar2,(this->klass->vtable).WriteValue_7.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_24
               (JsonWriter *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<bool>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<bool>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_7.method)
              (this,uVar2,(this->klass->vtable).WriteValue_8.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Int16]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_25
               (JsonWriter *this,Nullable_1_Int16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<short>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<short>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_8.method)
              (this,uVar2,(this->klass->vtable).WriteValue_9.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[UInt16]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_26
               (JsonWriter *this,Nullable_1_UInt16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<unsigned_short>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<unsigned_short>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_9.method)
              (this,uVar2,(this->klass->vtable).WriteValue_10.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Char]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_27
               (JsonWriter *this,Nullable_1_Char_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<wchar_t>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<wchar_t>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_10.method)
              (this,uVar2,(this->klass->vtable).WriteValue_11.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Byte]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_28
               (JsonWriter *this,Nullable_1_Byte_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<unsigned_char>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<unsigned_char>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_11.method)
              (this,uVar2,(this->klass->vtable).WriteValue_12.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[SByte]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_29
               (JsonWriter *this,Nullable_1_SByte_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,MethodInfo__System__Nullable<signed_char>__get_HasValue__);
  if (cVar1 != '\0') {
    uVar2 = func_?(&value,MethodInfo__System__Nullable<signed_char>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_12.method)
              (this,uVar2,(this->klass->vtable).WriteValue_13.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  return;
}


/* Void WriteValue(Nullable`1[Decimal]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_30
               (JsonWriter *this,Nullable_1_Decimal_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                    ((CrossPlatformInputManager_VirtualAxis *)&value,
                     MethodInfo__System__Nullable<System::Decimal>__get_HasValue__);
  if (bVar1 != 0) {
    apMStack_2[0] = MethodInfo__System__Nullable<System::Decimal>__get_Value__;
    puVar3 = (undefined4 *)func_?(apMStack_2,&value);
    apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteValue_14.methodPtr;
    (*(code *)(this->klass->vtable).WriteValue_13.method)
              (this,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    return;
  }
  apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteUndefined.methodPtr;
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Nullable`1[DateTime]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_31
               (JsonWriter *this,Nullable_1_DateTime_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                    ((CrossPlatformInputManager_VirtualAxis *)&stack0x00000008,
                     MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
  if (bVar1 != 0) {
    apMStack_2[0] = MethodInfo__System__Nullable<System::DateTime>__get_Value__;
    puVar3 = (undefined4 *)func_?(apMStack_2,&stack0x00000008);
    apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteValue_15.methodPtr;
    (*(code *)(this->klass->vtable).WriteValue_14.method)
              (this,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    return;
  }
  apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteUndefined.methodPtr;
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Nullable`1[DateTimeOffset]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_32
               (JsonWriter *this,Nullable_1_DateTimeOffset_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<System::DateTimeOffset>__get_HasValue__);
  if (uVar1 != 0) {
    apMStack_2[0] = MethodInfo__System__Nullable<System::DateTimeOffset>__get_Value__;
    puVar3 = (undefined4 *)func_?(apMStack_2,&stack0x00000008);
    apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteValue_16.methodPtr;
    (*(code *)(this->klass->vtable).WriteValue_15.method)
              (this,*puVar3,puVar3[1],puVar3[2],puVar3[3],*(undefined8 *)(puVar3 + 4));
    return;
  }
  apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteUndefined.methodPtr;
  (*(code *)(this->klass->vtable).WriteNull.method)();
  return;
}


/* Void WriteValue(Nullable`1[Guid]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_33
               (JsonWriter *this,Nullable_1_Guid_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                    ((CrossPlatformInputManager_VirtualAxis *)&value,
                     MethodInfo__System__Nullable<System::Guid>__get_HasValue__);
  if (bVar1 != 0) {
    apMStack_2[0] = MethodInfo__System__Nullable<System::Guid>__get_Value__;
    puVar3 = (undefined4 *)func_?(apMStack_2,&value);
    apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteValue_17.methodPtr;
    (*(code *)(this->klass->vtable).WriteValue_16.method)
              (this,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    return;
  }
  apMStack_2[0] = (MethodInfo *)(this->klass->vtable).WriteUndefined.methodPtr;
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Nullable`1[TimeSpan]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_34
               (JsonWriter *this,Nullable_1_TimeSpan_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<System::TimeSpan>__get_HasValue__);
  if (bVar1 != 0) {
    uVar2 = func_?(&stack0x00000008,
                            MethodInfo__System__Nullable<System::TimeSpan>__get_Value__);
    (*(code *)(this->klass->vtable).WriteValue_17.method)
              (this,uVar2,(this->klass->vtable).WriteValue_18.methodPtr);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_35
               (JsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  if (value == (Byte__Array *)0x0) {
    (*(code *)(this->klass->vtable).WriteNull.method)
              (this,(this->klass->vtable).WriteUndefined.methodPtr);
    return;
  }
  method = (MethodInfo *)0x0;
  value = (Byte__Array *)0x11;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(value) {
  case (Byte__Array *)0x7:
  case (Byte__Array *)0x8:
  case (Byte__Array *)0x9:
  case (Byte__Array *)0xa:
  case (Byte__Array *)0xb:
  case (Byte__Array *)0xc:
  case (Byte__Array *)0x10:
  case (Byte__Array *)0x11:
    pBVar1 = (Byte__Array *)0x7;
    break;
  default:
    pBVar1 = value;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((Byte__Array *)pJVar2->max_length <= pBVar1) goto code_?;
    pJVar4 = pJVar2->vector[(int)pBVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (uVar5 < pJVar4->max_length) {
      JVar6 = pJVar4->vector[uVar5];
      if (JVar6 != JsonWriter_State__Enum_Error) {
        if ((((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (value != (Byte__Array *)0x5)) {
          pIVar7 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar7 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar8)(this,pIVar7);
code_?:
        WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((value == (Byte__Array *)0x4) && (WVar9 != WriteState__Enum_Start)) ||
           ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar6;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pOVar10 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  args = pOVar10;
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar3,0);
  uVar11 = func_?(3,uVar3);
  puVar12 = (undefined4 *)func_?(uVar3);
  value = (Byte__Array *)*puVar12;
  func_?(pOVar10,0);
  func_?(pOVar10,uVar11);
  func_?(0,uVar11);
  puVar12 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar12);
  func_?(uVar3,0);
  uVar11 = func_?(3,uVar3);
  puVar13 = (undefined4 *)func_?(uVar3);
  *puVar12 = *puVar13;
  func_?(args,0);
  func_?(args,uVar11);
  func_?(1,uVar11);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar14 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar15 = (int *)(iVar14 + 1);
  cVar16 = (char)piVar15;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar15);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_36
               (JsonWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Uri->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Uri->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Uri);
  }
  bVar1 = System.dll::System::Uri::Uri_op_Equality(value,(Uri *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (*(code *)(this->klass->vtable).WriteNull.method)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(in_stack_2) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar3 = 7;
    break;
  default:
    uVar3 = in_stack_2;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar4 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar4 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  else {
    if (pJVar4->max_length <= uVar3) goto code_?;
    pJVar6 = pJVar4->vector[uVar3];
    if (pJVar6 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar3 = (in_stack_7->fields)._currentState;
    if (uVar3 < pJVar6->max_length) {
      JVar8 = pJVar6->vector[uVar3];
      if (JVar8 != JsonWriter_State__Enum_Error) {
        if ((((uVar3 == 3) || (uVar3 == 5)) || (uVar3 == 7)) && (in_stack_2 != 5)) {
          pIVar9 = (in_stack_7->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar10 = (in_stack_7->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar3 != 1) || ((in_stack_7->fields)._formatting != 1))
          goto code_?;
          pIVar9 = (in_stack_7->klass->vtable).WriteNull.methodPtr;
          pMVar10 = (in_stack_7->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar10)(in_stack_7,pIVar9);
code_?:
        WVar11 = JsonWriter_get_WriteState(in_stack_7,(MethodInfo *)0x0);
        if (((in_stack_2 == 4) && (WVar11 != WriteState__Enum_Start)) ||
           ((WVar11 == WriteState__Enum_Array || (WVar11 == WriteState__Enum_Constructor)))) {
          (*(code *)(in_stack_7->klass->vtable).WriteIndent.method)
                    (in_stack_7,
                     (in_stack_7->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (in_stack_7->fields)._currentState = JVar8;
        return;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&stack0x00000014);
  func_?(uVar5,0);
  uVar12 = func_?(3,uVar5);
  puVar13 = (undefined4 *)func_?(uVar5);
  in_stack_2 = *puVar13;
  func_?(args,0);
  func_?(args,uVar12);
  func_?(0,uVar12);
  puVar13 = (undefined4 *)func_?();
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar13);
  func_?(uVar5,0);
  uVar12 = func_?(3,uVar5);
  puVar14 = (undefined4 *)func_?(uVar5);
  *puVar13 = *puVar14;
  func_?(args,0);
  func_?(args,uVar12);
  func_?(1,uVar12);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar15 = func_?(this_00,0);
  piVar16 = (int *)(iVar15 + 1);
  cVar17 = (char)piVar16;
  *(char *)piVar16 = *(char *)piVar16 + cVar17;
  *(char *)piVar16 = *(char *)piVar16 + cVar17;
  *(char *)piVar16 = *(char *)piVar16 + cVar17;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar16);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void WriteValue(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_37
               (JsonWriter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    (*(code *)(this->klass->vtable).WriteNull.method)
              (this,(this->klass->vtable).WriteUndefined.methodPtr);
    return;
  }
  iVar1 = func_?(value,TypeInfo__System__IConvertible);
  if (iVar1 == 0) {
    pOVar2 = (Object *)0x0;
    if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
      pOVar2 = value;
    }
    if (pOVar2 != (Object *)0x0) {
      puVar3 = (undefined4 *)func_?(value,TypeInfo__System__DateTimeOffset);
      func_?(0x26,this,*puVar3,puVar3[1],puVar3[2],puVar3[3],
                      (int)*(undefined8 *)(puVar3 + 4),
                      (int)((ulonglong)*(undefined8 *)(puVar3 + 4) >> 0x20));
      return;
    }
    iVar1 = func_?(value,TypeInfo__System__Byte);
    pUVar4 = TypeInfo__System__Uri;
    if (iVar1 != 0) {
      uVar5 = func_?(value,TypeInfo__System__Byte);
      (*(code *)(this->klass->vtable).WriteValue_35.method)
                (this,uVar5,(this->klass->vtable).WriteValue_36.methodPtr);
      return;
    }
    pGVar6 = (Guid__Class *)value->klass;
    pOVar2 = (Object *)0x0;
    if (pGVar6 == TypeInfo__System__Guid) {
      pOVar2 = value;
    }
    if (pOVar2 != (Object *)0x0) {
      puVar3 = (undefined4 *)func_?(value,TypeInfo__System__Guid);
      func_?(0x27,this,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      return;
    }
    iVar1 = func_?(value,TypeInfo__System__Uri);
    if (iVar1 != 0) {
      uVar5 = func_?(value,pUVar4);
      (*(code *)(this->klass->vtable).WriteValue_36.method)
                (this,uVar5,(this->klass->vtable).WriteValue_37.methodPtr);
      return;
    }
    pOVar2 = (Object *)0x0;
    if (pGVar6 == (Guid__Class *)TypeInfo__System__TimeSpan) {
      pOVar2 = value;
    }
    if (pOVar2 != (Object *)0x0) {
      puVar3 = (undefined4 *)func_?(value,TypeInfo__System__TimeSpan);
      func_?(0x28,this,*puVar3,puVar3[1]);
      return;
    }
  }
  else {
    piVar7 = (int *)func_?(value,TypeInfo__System__IConvertible);
    pSVar8 = (String *)0x0;
    if (piVar7 == (int *)0x0) goto code_?;
    uVar5 = func_?(0,TypeInfo__System__IConvertible,piVar7);
    switch(uVar5) {
    case 2:
      func_?(0x13,this);
      return;
    case 3:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      bVar12 = (*(code *)*puVar3)(piVar7,pCVar9);
      value = (Object *)(uint)bVar12;
      func_?(0x1e,this,value);
      return;
    case 4:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1b) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar13 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x21,this,uVar13);
      return;
    case 5:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x22) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      bVar12 = (*(code *)*puVar3)(piVar7,pCVar9);
      value = (Object *)(uint)bVar12;
      func_?(0x23,this,value);
      return;
    case 6:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1a) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      bVar12 = (*(code *)*puVar3)(piVar7,pCVar9);
      value = (Object *)(uint)bVar12;
      func_?(0x22,this,value);
      return;
    case 7:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1f) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar13 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x1f,this,uVar13);
      return;
    case 8:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x26) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar13 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x20,this,uVar13);
      return;
    case 9:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x20) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar5 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x18,this,uVar5);
      return;
    case 10:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x27) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar5 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x19,this,uVar5);
      return;
    case 0xb:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x21) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar14 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x1a,this,uVar14);
      return;
    case 0xc:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x28) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar14 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x1b,this,uVar14);
      return;
    case 0xd:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x23) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x1c,this);
      return;
    case 0xe:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1e) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      fVar15 = (float10)(*(code *)*puVar3)(piVar7,pCVar9);
      uStack_16 = (double)fVar15;
      func_?(0x1d,this,SUB84(uStack_16,0));
      return;
    case 0xf:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1d) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      puVar3 = (undefined4 *)(*(code *)*puVar3)(auStack_17,piVar7,pCVar9);
      func_?(0x24,this,*puVar3,puVar3[1],puVar3[2]);
      return;
    case 0x10:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x1c) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      puVar3 = (undefined4 *)(*(code *)*puVar3)(auStack_17,piVar7,pCVar9);
      func_?(0x25,this,*puVar3,puVar3[1],puVar3[2]);
      return;
    default:
      break;
    case 0x12:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        iVar1 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IConvertible__Class **)(iVar1 + (uint)uVar10 * 8) == TypeInfo__System__IConvertible
             ) {
            puVar3 = (undefined4 *)
                      (*piVar7 + (*(int *)(iVar1 + 4 + (uint)uVar10 * 8) + 0x24) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar3 = (undefined4 *)func_?(piVar7,TypeInfo__System__IConvertible);
code_?:
      uVar5 = (*(code *)*puVar3)(piVar7,pCVar9);
      func_?(0x17,this,uVar5);
      return;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  unaff_EBX = (String__Class *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
  pOVar18 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(value,0);
  pTVar19 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  func_?(pOVar18,0);
  func_?(pOVar18,pTVar19);
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unsupported_type___0___Use_the_J,(IFormatProvider *)unaff_EBX,
                       pOVar18,(MethodInfo *)0x0);
  unaff_EDI = (ArgumentException *)func_?();
  pMVar20 = (MethodInfo *)0x0;
code_?:
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(unaff_EDI,message,pMVar20);
  do {
    uStack_16 = (double)ZEXT48(unaff_EDI);
    func_?();
    pSVar8 = message;
code_?:
    pMVar20 = (MethodInfo *)0x0;
    uVar21 = func_?();
    puVar22 = (uint *)((int)&unaff_EDI[-1].fields.param_name + 3);
    bVar23 = ((uint)pMVar20 & 0x400) != 0;
    if (((uint)pMVar20 & 0x800) == 0) {
      unaff_EBX = pSVar8[-0x60e2ef9].klass;
    }
    pcVar24 = (char *)((int)unaff_EDI + (uint)bVar23 * -8 + 3);
    uVar25 = uVar21 - *puVar22;
    unaff_EDI = (ArgumentException *)
                CONCAT22((short)(uVar21 >> 0x10),
                         CONCAT11(((int)uVar25 < 0) << 7 | (uVar25 == 0) << 6 |
                                  (((uint)pMVar20 & 0x10) != 0) << 4 |
                                  ((POPCOUNT(uVar25 & 0xff) & 1U) == 0) << 2 | 2U | uVar21 < *puVar22
                                  ,(char)uVar21));
    if (!SBORROW4(uVar21,*puVar22)) {
      unaff_EDI = pARama1e91070;
    }
    if ((int)uVar25 >= 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!SBORROW4(uVar21,*puVar22)) {
      ppMVar26 = &unaff_EBX[-0x3a8466].vtable.CompareTo.method;
      *ppMVar26 = (MethodInfo *)((uint)*ppMVar26 | (uint)&stack0xffffffe0);
      bVar27 = SCARRY4((int)pcVar24,1);
      pcVar28 = pcVar24 + 1;
      pcVar24 = pcVar24 + (uint)bVar23 * -2 + 2;
      message = (String *)((int)pSVar8 + (uint)bVar23 * -2 + 1);
      *pcVar28 = *(char *)&pSVar8->klass;
      puVar29 = &stack0xfffffffc;
      if (bVar27) goto code_?;
      pSVar8 = message;
      if (extraout_ECX_00 != 0) goto code_?;
      goto code_?;
    }
code_?:
    unaff_EDI = (ArgumentException *)(pcVar24 + (uint)bVar23 * -2 + 1);
    message = (String *)((int)pSVar8 + (uint)bVar23 * -2 + 1);
    puVar29 = &stack0xfffffffc;
    if (SBORROW1(*(char *)&pSVar8->klass,*pcVar24)) goto code_?;
  } while ((POPCOUNT(*(char *)&pSVar8->klass - *pcVar24) & 1U) != 0);
  puVar29 = &stack0xffffffe0;
  puVar30 = &stack0xffffffe0;
  if (cRam_? == '\0') {
code_?:
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar30 = puVar29;
  }
  if ((((uint)(TypeInfo__System__Uri->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Uri->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Uri);
  }
  bVar31 = System.dll::System::Uri::Uri_op_Equality
                     (*(Uri **)(puVar30 + 0xc),(Uri *)0x0,(MethodInfo *)0x0);
  if (bVar31 != 0) {
    (**(code **)(**(int **)(puVar30 + 8) + 0x158))();
    return;
  }
  *(undefined4 *)(puVar30 + 0x10) = 0;
  *(undefined4 *)(puVar30 + 0xc) = 9;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(uStack_16._4_4_) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar21 = 7;
    break;
  default:
    uVar21 = uStack_16._4_4_;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter,message,unaff_EBX);
  }
  pJVar32 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar32 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  else {
    if (pJVar32->max_length <= uVar21) goto code_?;
    pJVar33 = pJVar32->vector[uVar21];
    if (pJVar33 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    this_00 = (JsonWriter *)uStack_16;
    uVar21 = (((JsonWriter *)uStack_16)->fields)._currentState;
    if (uVar21 < pJVar33->max_length) {
      JVar34 = pJVar33->vector[uVar21];
      if (JVar34 != JsonWriter_State__Enum_Error) {
        if ((((uVar21 == 3) || (uVar21 == 5)) || (uVar21 == 7)) && (uStack_16._4_4_ != 5)) {
          pIVar35 = (((JsonWriter *)uStack_16)->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar20 = (((JsonWriter *)uStack_16)->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar21 != 1) || ((((JsonWriter *)uStack_16)->fields)._formatting != 1))
          goto code_?;
          pIVar35 = (((JsonWriter *)uStack_16)->klass->vtable).WriteNull.methodPtr;
          pMVar20 = (((JsonWriter *)uStack_16)->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar20)((JsonWriter *)uStack_16,pIVar35);
code_?:
        WVar36 = JsonWriter_get_WriteState(this_00,(MethodInfo *)0x0);
        if (((uStack_16._4_4_ == 4) && (WVar36 != WriteState__Enum_Start)) ||
           ((WVar36 == WriteState__Enum_Array || (WVar36 == WriteState__Enum_Constructor)))) {
          (*(code *)(this_00->klass->vtable).WriteIndent.method)
                    (this_00,(this_00->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this_00->fields)._currentState = JVar34;
        return;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo,message,unaff_EBX);
  }
  pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar18 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,(int)&uStack_16 + 4);
  func_?(uVar5,0);
  uVar37 = func_?(3,uVar5);
  puVar3 = (undefined4 *)func_?(uVar5);
  uStack_16 = (double)CONCAT44(*puVar3,(JsonWriter *)uStack_16);
  func_?(pOVar18,0);
  func_?(pOVar18,uVar37);
  func_?(0,uVar37);
  puVar3 = (undefined4 *)func_?();
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar3);
  func_?(uVar5,0);
  uVar37 = func_?(3,uVar5);
  puVar38 = (undefined4 *)func_?(uVar5);
  *puVar3 = *puVar38;
  func_?(pOVar18,0);
  func_?(pOVar18,uVar37);
  func_?(1,uVar37);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)pCVar9,
                       pOVar18,(MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
  iVar1 = func_?(this_01);
  piVar7 = (int *)(iVar1 + 1);
  cVar39 = (char)piVar7;
  *(char *)piVar7 = *(char *)piVar7 + cVar39;
  *(char *)piVar7 = *(char *)piVar7 + cVar39;
  *(char *)piVar7 = *(char *)piVar7 + cVar39;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar7);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(value) {
  case 9.80909e-45:
  case 1.12104e-44:
  case 1.26117e-44:
  case 1.4013e-44:
  case 1.54143e-44:
  case 1.68156e-44:
  case 2.24208e-44:
  case 2.38221e-44:
    fVar1 = 9.80909e-45;
    break;
  default:
    fVar1 = value;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pJVar2->max_length <= (uint)fVar1) goto code_?;
    pJVar4 = pJVar2->vector[(int)fVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar5 = (this->fields)._currentState;
    if (uVar5 < pJVar4->max_length) {
      JVar6 = pJVar4->vector[uVar5];
      if (JVar6 != JsonWriter_State__Enum_Error) {
        if ((((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) && (value != 7.00649e-45)) {
          pIVar7 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar8 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar5 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar7 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar8 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar8)(this,pIVar7);
code_?:
        WVar9 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((value == 5.60519e-45) && (WVar9 != WriteState__Enum_Start)) ||
           ((WVar9 == WriteState__Enum_Array || (WVar9 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar6;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  pfVar11 = (float *)func_?(uVar3);
  value = *pfVar11;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(0,uVar10);
  puVar12 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar12);
  func_?(uVar3,0);
  uVar10 = func_?(3,uVar3);
  puVar13 = (undefined4 *)func_?(uVar3);
  *puVar12 = *puVar13;
  func_?(args,0);
  func_?(args,uVar10);
  func_?(1,uVar10);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar14 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar15 = (int *)(iVar14 + 1);
  cVar16 = (char)piVar15;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *(char *)piVar15 = *(char *)piVar15 + cVar16;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar15);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteValue_7
               (JsonWriter *this,bool value,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  _value = 10;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(_value) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar1 = 7;
    break;
  default:
    uVar1 = _value;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  pJVar2 = TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray;
  if (pJVar2 == (JsonWriter_State__Enum__Array__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pJVar2->max_length <= uVar1) goto code_?;
    pJVar4 = pJVar2->vector[uVar1];
    if (pJVar4 == (JsonWriter_State__Enum__Array *)0x0) goto code_?;
    uVar1 = (this->fields)._currentState;
    if (uVar1 < pJVar4->max_length) {
      JVar5 = pJVar4->vector[uVar1];
      if (JVar5 != JsonWriter_State__Enum_Error) {
        if ((((uVar1 == 3) || (uVar1 == 5)) || (uVar1 == 7)) && (_value != 5)) {
          pIVar6 = (this->klass->vtable).WriteIndentSpace.methodPtr;
          pMVar7 = (this->klass->vtable).WriteValueDelimiter.method;
        }
        else {
          if ((uVar1 != 1) || ((this->fields)._formatting != 1)) goto code_?;
          pIVar6 = (this->klass->vtable).WriteNull.methodPtr;
          pMVar7 = (this->klass->vtable).WriteIndentSpace.method;
        }
        (*(code *)pMVar7)(this,pIVar6);
code_?:
        WVar8 = JsonWriter_get_WriteState(this,(MethodInfo *)0x0);
        if (((_value == 4) && (WVar8 != WriteState__Enum_Start)) ||
           ((WVar8 == WriteState__Enum_Array || (WVar8 == WriteState__Enum_Constructor)))) {
          (*(code *)(this->klass->vtable).WriteIndent.method)
                    (this,(this->klass->vtable).WriteValueDelimiter.methodPtr);
        }
        (this->fields)._currentState = JVar5;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&value);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar10 = (undefined4 *)func_?(uVar3);
  _value = *puVar10;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(0,uVar9);
  puVar10 = (undefined4 *)func_?();
  uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,puVar10);
  func_?(uVar3,0);
  uVar9 = func_?(3,uVar3);
  puVar11 = (undefined4 *)func_?(uVar3);
  *puVar10 = *puVar11;
  func_?(args,0);
  func_?(args,uVar9);
  func_?(1,uVar9);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Token__0__in_state__1__would_res,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  iVar12 = func_?(this_00,0,
                           MethodInfo__Newtonsoft__Json__JsonWriter__AutoComplete_Newtonsoft__Json__JsonToken_
                          );
  piVar13 = (int *)(iVar12 + 1);
  cVar14 = (char)piVar13;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *(char *)piVar13 = *(char *)piVar13 + cVar14;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar13);
  *piVar13 = (int)(*piVar13 + (int)piVar13);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WriteWhitespace(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_WriteWhitespace
               (JsonWriter *this,String *ws,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ws != (String *)0x0) {
    bVar1 = Json::Utilities::StringUtils::StringUtils_IsWhiteSpace(ws,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (JsonSchemaException *)
                func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
      Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                (this_00,StringLiteral_Only_white_space_characters_shou,(MethodInfo *)0x0);
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* JsonWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonWriter_State__Enum__Array__Array *)
           func_?(TypeInfo__Newtonsoft__Json__JsonWriter_State,8);
  pJVar2 = (JsonWriter_State__Enum__Array *)
           func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State,10);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pJVar2,__field_88821E1DF26D78EB18754B6C63B782777B7168F7_Field,
             (MethodInfo *)0x0);
  if (pJVar1 == (JsonWriter_State__Enum__Array__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    pIStack4 = (Il2CppClass *)0x0;
    pJStack5 = (JsonWriter_State__Enum__Array__Class *)0x0;
    func_?();
    func_?();
code_?:
    pIStack4 = (Il2CppClass *)0x0;
    pJStack5 = (JsonWriter_State__Enum__Array__Class *)0x0;
    func_?();
    func_?();
  }
  else {
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?(pJVar2);
      if (iVar6 == 0) goto code_?;
    }
    if (pJVar1->max_length == 0) goto code_?;
    pJVar1->vector[0] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)
             func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_E59613C63D9245F8B2CF85740BCAEDBBF24B0851_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 2) goto code_?;
    pJVar1->vector[1] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_162A7A46BCD84A244E3F402C23AB0DBF2624532C_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 3) goto code_?;
    pJVar1->vector[2] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_2BE616D9E50D27B7FFF12AA0CD2B09D8F53BE4C9_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 4) goto code_?;
    pJVar1->vector[3] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_5E4A22E3EAE42CEF4AFC0C6280B473C9A110DB2C_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 5) goto code_?;
    pJVar1->vector[4] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_0A0D5B5AA815BDD0017F22ADA6671FAFFA4B77EA_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 6) goto code_?;
    pJVar1->vector[5] = pJVar2;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_0A0D5B5AA815BDD0017F22ADA6671FAFFA4B77EA_Field,
               (MethodInfo *)0x0);
    if (pJVar2 != (JsonWriter_State__Enum__Array *)0x0) {
      pIStack4 = (pJVar1->klass->_0).element_class;
      pJStack5 = (JsonWriter_State__Enum__Array__Class *)pJVar2;
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pJVar1->max_length < 7) goto code_?;
    pJVar1->vector[6] = pJVar2;
    pIStack4 = (Il2CppClass *)0xa;
    pJStack5 = TypeInfo__Newtonsoft__Json__JsonWriter__State;
    pJVar2 = (JsonWriter_State__Enum__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pJVar2,__field_E0E6D7E415DD8962026D3157A5FB8B7C3B4B3C50_Field,
               (MethodInfo *)0x0);
    if (pJVar2 == (JsonWriter_State__Enum__Array *)0x0) {
code_?:
      if (7 < pJVar1->max_length) {
        pJVar1->vector[7] = pJVar2;
        TypeInfo__Newtonsoft__Json__JsonWriter->static_fields->stateArray = pJVar1;
        return;
      }
      goto code_?;
    }
    pIStack7 = (pJVar1->klass->_0).element_class;
    pJStack8 = pJVar2;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  pIStack7 = (Il2CppClass *)0x0;
  pJStack8 = (JsonWriter_State__Enum__Array *)0x0;
  puStack9 = (undefined *)func_?();
  func_?();
code_?:
  pIStack7 = (Il2CppClass *)0x0;
  pJStack8 = (JsonWriter_State__Enum__Array *)0x0;
  puStack9 = (undefined *)func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JsonWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter__ctor
               (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_UIPushOption_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
  List_1_Newtonsoft_Json_Linq_JTokenType___ctor_1
            ((List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00,8,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List_int_
            );
  (this->fields)._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00;
  if (this_00 != (List_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
              );
    (this->fields)._currentState = 0;
    (this->fields)._formatting = 0;
    (this->fields)._CloseOutput_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WriteState get_WriteState() */

WriteState__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonWriter::JsonWriter_get_WriteState
          (JsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
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
    arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonWriter__State);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    break;
  case 9:
    return WriteState__Enum_Closed;
  case 10:
    return WriteState__Enum_Error;
  }
  arg0 = StringLiteral_Invalid_state__;
  method_00 = (MethodInfo *)0x0;
  while( true ) {
    message = mscorlib.dll::System::String::String_Concat((Object *)arg0,arg1,method_00);
    this_00 = (JsonSchemaException *)func_?();
    arg1 = (Object *)0x0;
    arg0 = message;
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    bVar1 = (undefined1 *)0xffffffe3 < &stack0xfffffff0;
    func_?();
    uVar2 = (undefined3)((uint)extraout_EDX >> 8);
    pbVar3 = (byte *)((int)&message[-5].klass + 2);
    bVar4 = *pbVar3 + unaff_BL;
    bVar5 = CARRY1(*pbVar3,unaff_BL) || CARRY1(bVar4,bVar1);
    bVar6 = SCARRY1(*pbVar3,unaff_BL) != SCARRY1(bVar4,bVar1);
    *pbVar3 = bVar4 + bVar1;
    bVar4 = *pbVar3;
    bVar7 = bVar5;
    if (!bVar6) {
      pbVar3 = (byte *)((int)&this_00[-2].fields._.hresult + 2);
      bVar1 = *pbVar3;
      bVar8 = *pbVar3 + extraout_AH;
      bVar7 = CARRY1(*pbVar3,extraout_AH) || CARRY1(bVar8,bVar5);
      *pbVar3 = bVar8 + bVar5;
      bVar4 = *pbVar3;
      if (SCARRY1(bVar1,extraout_AH) != SCARRY1(bVar8,bVar5)) goto code_?;
      bVar6 = false;
    }
    if ((char)bVar4 < '\0') break;
    method_00 = (MethodInfo *)&stack0xfffffffc;
    if (extraout_ECX == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WVar9 = (**(code **)CONCAT31(uVar2,0x70))();
      return WVar9;
    }
  }
  if (bVar6) {
    pcVar10 = (code *)swi(3);
    WVar9 = (*pcVar10)();
    return WVar9;
  }
code_?:
  pcVar11 = (char *)(CONCAT31(uVar2,0x70) + -0x74ef8f4e);
  *pcVar11 = *pcVar11 + (char)extraout_ECX + bVar7;
  pcVar10 = (code *)swi(3);
  WVar9 = (*pcVar10)();
  return WVar9;
}

