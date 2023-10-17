
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Close
               (JsonReader *this,MethodInfo *method)

{
  (this->fields)._currentState = 7;
  (this->fields)._token = 0;
  (this->fields)._value = (Object *)0x0;
  func_?(&(this->fields)._value,0);
  (this->fields)._valueType = (Type *)0x0;
  func_?(&(this->fields)._valueType,0);
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Dispose
               (JsonReader *this,bool disposing,MethodInfo *method)

{
  bVar1 = 0;
  if ((this->fields)._currentState != 7) {
    bVar1 = disposing;
  }
  if (bVar1 != 0) {
    (*(this->klass->vtable).Close.methodPtr)(this,(this->klass->vtable).Close.method);
  }
  return;
}


/* JTokenType GetTypeForCloseToken(JsonToken) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_GetTypeForCloseToken
          (JsonReader *this,JsonToken__Enum token,MethodInfo *method)

{
  JVar1 = token;
  if (token == JsonToken__Enum_EndObject) {
    return JTokenType__Enum_Object;
  }
  if (token != JsonToken__Enum_EndArray) {
    if (token == JsonToken__Enum_EndConstructor) {
      return JTokenType__Enum_Constructor;
    }
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    token = JVar1;
    uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&token);
    uVar2 = func_?(uVar2);
    func_?(args);
    func_?(args,uVar2);
    func_?(0,uVar2);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Not_a_valid_close_JsonToken___0_);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (JsonReaderException *)func_?(uVar2);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonReader__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
                   );
    func_?();
    pcVar4 = (code *)swi(3);
    JVar5 = (*pcVar4)();
    return JVar5;
  }
  return JTokenType__Enum_Array;
}


/* Boolean IsPrimitiveToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_IsPrimitiveToken
               (JsonToken__Enum token,MethodInfo *method)

{
  if (5 < token - JsonToken__Enum_Integer) {
    return token - JsonToken__Enum_Date < 2;
  }
  return 1;
}


/* Boolean IsStartToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_IsStartToken
               (JsonToken__Enum token,MethodInfo *method)

{
  switch(token) {
  case JsonToken__Enum_None:
  case JsonToken__Enum_Comment:
  case JsonToken__Enum_Raw:
  case JsonToken__Enum_Integer:
  case JsonToken__Enum_Float:
  case JsonToken__Enum_String:
  case JsonToken__Enum_Boolean:
  case JsonToken__Enum_Null:
  case JsonToken__Enum_Undefined:
  case JsonToken__Enum_EndObject:
  case JsonToken__Enum_EndArray:
  case JsonToken__Enum_EndConstructor:
  case JsonToken__Enum_Date:
  case JsonToken__Enum_Bytes:
    return 0;
  case JsonToken__Enum_StartObject:
  case JsonToken__Enum_StartArray:
  case JsonToken__Enum_StartConstructor:
  case JsonToken__Enum_PropertyName:
    return 1;
  default:
    func_?();
    actualValue = (Object *)func_?();
    message = (String *)func_?();
    paramName = (String *)func_?();
    Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
              (paramName,actualValue,message,(MethodInfo *)0x0);
    func_?();
    cVar1 = (undefined1 *)0xffffffdb < &stack0xffffffe0;
    pcVar2 = (char *)func_?();
    piVar3 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),0xfa);
    *(char *)(unaff_EBX + 0x1046fa) =
         *(char *)(unaff_EBX + 0x1046fa) + (char)((uint)extraout_ECX >> 8) + cVar1;
    *piVar3 = (int)(pcVar2 + *piVar3);
    *piVar3 = (int)(pcVar2 + *piVar3);
    cVar1 = (char)pcVar2;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar1;
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
}


/* JTokenType Pop() */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Pop
          (JsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._stack;
  JVar2 = (this->fields)._currentTypeContext;
  if (pLVar1 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveAt
              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields)._stack,(pLVar1->fields)._size + -1,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__RemoveAt_int_
              );
    iVar3 = (this->fields)._top;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._stack;
    (this->fields)._top = iVar3 + -1;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar3 + -2,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                        );
      (this->fields)._currentTypeContext = (int32_t)RVar4;
      return JVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  JVar2 = (*pcVar5)();
  return JVar2;
}


/* Void Push(JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Push
               (JsonReader *this,JTokenType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
  ;
  pLVar2 = (this->fields)._stack;
  if (pLVar2 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pJVar4 = (pLVar2->fields)._items;
    if (pJVar4 != (JTokenType__Enum__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (pJVar4->max_length <= uVar5) {
        (*(pMVar1->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                  (pLVar2,value,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
        (this->fields)._currentTypeContext = value;
        piVar3 = &(this->fields)._top;
        *piVar3 = *piVar3 + 1;
        return;
      }
      (pLVar2->fields)._size = uVar5 + 1;
      if (uVar5 < pJVar4->max_length) {
        pJVar4->vector[uVar5] = value;
        piVar3 = &(this->fields)._top;
        *piVar3 = *piVar3 + 1;
        (this->fields)._currentTypeContext = value;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetStateBasedOnCurrent() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_SetStateBasedOnCurrent
               (JsonReader *this,MethodInfo *method)

{
  switch((this->fields)._currentTypeContext) {
  case 0:
    (this->fields)._currentState = 0xc;
    return;
  case 1:
    (this->fields)._currentState = 4;
    return;
  case 2:
    (this->fields)._currentState = 6;
    return;
  case 3:
    (this->fields)._currentState = 10;
    return;
  default:
    func_?();
    func_?();
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    method_00 = (MethodInfo *)0x0;
    provider = pCVar1;
    pSVar2 = (String *)func_?();
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar2,(IFormatProvider *)provider,args,method_00);
    func_?();
    this_00 = (JsonReaderException *)func_?();
    func_?();
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
    func_?();
    bVar3 = (undefined1 *)0xffffffd3 < &stack0xffffffdc;
    bVar4 = (int)&method < 0;
    bVar5 = func_?();
  }
  do {
  } while (bVar4);
  pbVar6 = &stack0xfc901046 + (int)this_00 * 8;
  bVar7 = *pbVar6;
  bVar8 = *pbVar6;
  *pbVar6 = bVar8 + bVar5 + bVar3;
  (&stack0xcccc1046)[(int)this_00 * 8] =
       (&stack0xcccc1046)[(int)this_00 * 8] + (char)pCVar1 +
       (CARRY1(bVar7,bVar5) || CARRY1(bVar8 + bVar5,bVar3));
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetToken(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_SetToken
               (JsonReader *this,JsonToken__Enum newToken,MethodInfo *method)

{
  (*(this->klass->vtable).SetToken.methodPtr)(this,newToken,0,(this->klass->vtable).SetToken.method)
  ;
  return;
}


/* Void SetToken(JsonToken, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_SetToken_1
               (JsonReader *this,JsonToken__Enum newToken,Object *value,MethodInfo *method)

{
  (this->fields)._token = newToken;
  switch(newToken) {
  case JsonToken__Enum_StartObject:
    (this->fields)._currentState = 3;
    JsonReader_Push(this,JTokenType__Enum_Object,(MethodInfo *)0x0);
    break;
  case JsonToken__Enum_StartArray:
    (this->fields)._currentState = 5;
    JsonReader_Push(this,JTokenType__Enum_Array,(MethodInfo *)0x0);
    break;
  case JsonToken__Enum_StartConstructor:
    (this->fields)._currentState = 9;
    JsonReader_Push(this,JTokenType__Enum_Constructor,(MethodInfo *)0x0);
    break;
  case JsonToken__Enum_PropertyName:
    (this->fields)._currentState = 2;
    JsonReader_Push(this,JTokenType__Enum_Property,(MethodInfo *)0x0);
    break;
  case JsonToken__Enum_Raw:
  case JsonToken__Enum_Integer:
  case JsonToken__Enum_Float:
  case JsonToken__Enum_String:
  case JsonToken__Enum_Boolean:
  case JsonToken__Enum_Null:
  case JsonToken__Enum_Undefined:
  case JsonToken__Enum_Date:
  case JsonToken__Enum_Bytes:
    goto code_?;
  case JsonToken__Enum_EndObject:
    endToken = JsonToken__Enum_EndObject;
    goto code_?;
  case JsonToken__Enum_EndArray:
    endToken = JsonToken__Enum_EndArray;
    goto code_?;
  case JsonToken__Enum_EndConstructor:
    endToken = JsonToken__Enum_EndConstructor;
code_?:
    JsonReader_ValidateEnd(this,endToken,(MethodInfo *)0x0);
code_?:
    (this->fields)._currentState = 8;
  }
  if (((this->fields)._currentTypeContext == 4) && ((this->fields)._currentState == 8)) {
    JsonReader_Pop(this,(MethodInfo *)0x0);
  }
  ppOVar1 = &(this->fields)._value;
  if (value == (Object *)0x0) {
    (this->fields)._value = (Object *)0x0;
    func_?(ppOVar1,0);
    pTVar2 = (Type *)0x0;
  }
  else {
    (this->fields)._value = value;
    func_?(ppOVar1,value);
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  }
  (this->fields)._valueType = pTVar2;
  func_?(&(this->fields)._valueType,pTVar2);
  return;
}


/* Void Skip() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Skip
               (JsonReader *this,MethodInfo *method)

{
  token = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  bVar1 = JsonReader_IsStartToken(token,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = (*(this->klass->vtable).get_Depth.methodPtr)
                      (this,(this->klass->vtable).get_Depth.method);
    do {
      cVar3 = (*(this->klass->vtable).__unknown.methodPtr)
                        (this,(this->klass->vtable).__unknown.method);
      if (cVar3 == '\0') {
        return;
      }
      iVar4 = (*(this->klass->vtable).get_Depth.methodPtr)
                        (this,(this->klass->vtable).get_Depth.method);
    } while (iVar2 < iVar4);
  }
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_System_IDisposable_Dispose
               (JsonReader *this,MethodInfo *method)

{
  (*(this->klass->vtable).Dispose.methodPtr)(this,1,(this->klass->vtable).Dispose.method);
  return;
}


/* Void ValidateEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_ValidateEnd
               (JsonReader *this,JsonToken__Enum endToken,MethodInfo *method)

{
  pJStack_1 = (JsonReaderException *)JsonReader_Pop(this,(MethodInfo *)0x0);
  JVar2 = endToken;
  if (endToken == JsonToken__Enum_EndObject) {
    puVar3 = (undefined *)0x1;
  }
  else if (endToken == JsonToken__Enum_EndArray) {
    puVar3 = (undefined *)0x2;
  }
  else {
    if (endToken != JsonToken__Enum_EndConstructor) {
      uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar4);
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar4 = func_?(&TypeInfo__System__Object,1);
      pOVar6 = (Object__Array *)func_?(uVar4);
      endToken = JVar2;
      uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&endToken);
      uVar4 = func_?(uVar4);
      func_?(pOVar6);
      func_?(pOVar6,uVar4);
      func_?(0,uVar4);
      pMVar7 = (MethodInfo *)0x0;
      pSVar8 = (String *)func_?(&StringLiteral_Not_a_valid_close_JsonToken___0_);
      pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar8,(IFormatProvider *)pCVar5,pOVar6,pMVar7);
      uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
      pJVar9 = (JsonReaderException *)func_?(uVar4);
      func_?(pJVar9);
      JsonReaderException::JsonReaderException__ctor_1(pJVar9,pSVar8,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__JsonReader__GetTypeForCloseToken_Newtonsoft__Json__JsonToken_
                     );
      func_?();
      goto code_?;
    }
    puVar3 = (undefined *)0x3;
  }
  pSVar8 = (String *)endToken;
  if ((JsonReaderException *)puVar3 == pJStack_1) {
    return;
  }
code_?:
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,2);
  pOVar6 = (Object__Array *)func_?(uVar4);
  endToken = (JsonToken__Enum)pSVar8;
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&endToken);
  uVar4 = func_?(uVar4);
  func_?(pOVar6);
  func_?(pOVar6,uVar4);
  func_?(0,uVar4);
  puStack_10 = (undefined *)pJStack_1;
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&puStack_10);
  uVar4 = func_?(uVar4);
  func_?(pOVar6);
  func_?(pOVar6,uVar4);
  func_?(1,uVar4);
  pMVar7 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_JsonToken__0__is_not_valid_for_c);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar8,(IFormatProvider *)pCVar5,pOVar6,pMVar7);
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
  pJVar9 = (JsonReaderException *)func_?(uVar4);
  func_?(pJVar9);
  JsonReaderException::JsonReaderException__ctor_1(pJVar9,pSVar8,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonReader__ValidateEnd_Newtonsoft__Json__JsonToken_
                 );
  pJStack_1 = pJVar9;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* JsonReader() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader__ctor
               (JsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._currentState = 0;
  this_00 = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List__
              );
    (this->fields)._stack = this_00;
    func_?(&(this->fields)._stack,this_00);
    (this->fields)._CloseInput_k__BackingField = 1;
    JsonReader_Push(this,JTokenType__Enum_None,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Depth() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_get_Depth
                  (JsonReader *this,MethodInfo *method)

{
  iVar1 = (this->fields)._top;
  token = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  bVar2 = JsonReader_IsStartToken(token,(MethodInfo *)0x0);
  iVar3 = iVar1 + -2;
  if (bVar2 == 0) {
    iVar3 = iVar1 + -1;
  }
  return iVar3;
}

