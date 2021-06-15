
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Close
               (JsonReader *this,MethodInfo *method)

{
  (this->fields)._currentState = 7;
  (this->fields)._token = 0;
  (this->fields)._value = (Object *)0x0;
  (this->fields)._valueType = (Type *)0x0;
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Dispose
               (JsonReader *this,bool disposing,MethodInfo *method)

{
  if (((this->fields)._currentState != 7) && (disposing != 0)) {
    (*(code *)(this->klass->vtable).Close.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* JTokenType GetTypeForCloseToken(JsonToken) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_GetTypeForCloseToken
          (JsonReader *this,JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JVar1 = token;
  if (token == JsonToken__Enum_EndObject) {
    return JTokenType__Enum_Object;
  }
  if (token == JsonToken__Enum_EndArray) {
    return JTokenType__Enum_Array;
  }
  if (token == JsonToken__Enum_EndConstructor) {
    return JTokenType__Enum_Constructor;
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  token = JVar1;
  uVar2 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&token);
  func_?(args,0);
  func_?(args,uVar2);
  func_?(0,uVar2);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Not_a_valid_close_JsonToken___0_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar3 = (code *)swi(3);
  JVar4 = (*pcVar3)();
  return JVar4;
}


/* Boolean IsPrimitiveToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_IsPrimitiveToken
               (JsonToken__Enum token,MethodInfo *method)

{
  switch(token) {
  case JsonToken__Enum_Integer:
  case JsonToken__Enum_Float:
  case JsonToken__Enum_String:
  case JsonToken__Enum_Boolean:
  case JsonToken__Enum_Null:
  case JsonToken__Enum_Undefined:
  case JsonToken__Enum_Date:
  case JsonToken__Enum_Bytes:
    return 1;
  default:
    return 0;
  }
}


/* Boolean IsStartToken(JsonToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_IsStartToken
               (JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
    actualValue = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&token);
    Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
              (StringLiteral_token,actualValue,StringLiteral_Unexpected_JsonToken_value_,
               (MethodInfo *)0x0);
    method = MethodInfo__Newtonsoft__Json__JsonReader__IsStartToken_Newtonsoft__Json__JsonToken_;
    token = JsonToken__Enum_None;
    uVar1 = func_?();
    pcVar2 = (char *)uVar1;
    cVar3 = (char)uVar1;
    *pcVar2 = *pcVar2 + cVar3 +
              (unaff_ESI < *(uint *)((int)((ulonglong)uVar1 >> 0x20) + -0x4dd8efab));
    *extraout_ECX = (int)(pcVar2 + *extraout_ECX);
    *extraout_ECX = (int)(pcVar2 + *extraout_ECX);
    *pcVar2 = *pcVar2 + cVar3;
    *pcVar2 = *pcVar2 + cVar3;
    *pcVar2 = *pcVar2 + cVar3;
    *pcVar2 = *pcVar2 + cVar3;
    *pcVar2 = *pcVar2 + cVar3;
    *pcVar2 = *pcVar2 + cVar3;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._stack;
  JVar2 = (this->fields)._currentTypeContext;
  if (pLVar1 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Count__
                       );
    mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]::
    List_1_Newtonsoft_Json_Linq_JTokenType__RemoveAt
              (pLVar1,(int32_t)((int)&pOVar3[-1].monitor + 3),
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__RemoveAt_int_
              );
    iVar4 = (this->fields)._top;
    pLVar1 = (this->fields)._stack;
    (this->fields)._top = iVar4 + -1;
    if (pLVar1 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
      JVar5 = mscorlib.dll::System::Collections::Generic::List`1[Newtonsoft::Json::Linq::JTokenType]
              ::List_1_Newtonsoft_Json_Linq_JTokenType__get_Item
                        (pLVar1,iVar4 + -2,
                         MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__get_Item_int_
                        );
      (this->fields)._currentTypeContext = JVar5;
      return JVar2;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  JVar2 = (*pcVar6)();
  return JVar2;
}


/* Void Push(JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Push
               (JsonReader *this,JTokenType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)(this->fields)._stack;
  if (this_00 != (List_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (this_00,value,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
              );
    (this->fields)._currentTypeContext = value;
    piVar1 = &(this->fields)._top;
    *piVar1 = *piVar1 + 1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStateBasedOnCurrent() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_SetStateBasedOnCurrent
               (JsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonReader *)(this->fields)._currentTypeContext;
  switch(pJVar1) {
  case (JsonReader *)0x0:
    (this->fields)._currentState = 0xc;
    return;
  case (JsonReader *)0x1:
    (this->fields)._currentState = 4;
    return;
  case (JsonReader *)0x2:
    (this->fields)._currentState = 6;
    return;
  case (JsonReader *)0x3:
    (this->fields)._currentState = 10;
    return;
  default:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  this = pJVar1;
  uVar2 = func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&this);
  func_?(args,0);
  func_?(args,uVar2);
  func_?(0,uVar2);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_While_setting_the_reader_state_b,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  this = (JsonReader *)MethodInfo__Newtonsoft__Json__JsonReader__SetStateBasedOnCurrent__;
  func_?(this_00);
  *(char *)(extraout_EDX + -0x41efaa4d) =
       *(char *)(extraout_EDX + -0x41efaa4d) + (char)((uint)extraout_EDX >> 8) +
       (*(byte *)&message->klass < *(byte *)&this_00->klass);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToken(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_SetToken
               (JsonReader *this,JsonToken__Enum newToken,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).SetToken.method)
            (this,newToken,0,(this->klass->vtable).Dispose.methodPtr);
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
  if (value == (Object *)0x0) {
    (this->fields)._value = (Object *)0x0;
    (this->fields)._valueType = (Type *)0x0;
    return;
  }
  (this->fields)._value = value;
  pTVar1 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  (this->fields)._valueType = pTVar1;
  return;
}


/* Void Skip() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_Skip
               (JsonReader *this,MethodInfo *method)

{
  token = (*(code *)(this->klass->vtable).get_TokenType.method)
                    (this,(this->klass->vtable).get_Value.methodPtr);
  bVar1 = JsonReader_IsStartToken(token,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = (*(code *)(this->klass->vtable).get_Depth.method)
                      (this,(this->klass->vtable).__unknown.methodPtr);
    do {
      cVar3 = (*(code *)(this->klass->vtable).__unknown.method)
                        (this,(this->klass->vtable).__unknown_1.methodPtr);
      if (cVar3 == '\0') {
        return;
      }
      iVar4 = (*(code *)(this->klass->vtable).get_Depth.method)
                        (this,(this->klass->vtable).__unknown.methodPtr);
    } while (iVar2 < iVar4);
  }
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_System_IDisposable_Dispose
               (JsonReader *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Dispose.method)(this,1,(this->klass->vtable).Close.methodPtr);
  return;
}


/* Void ValidateEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_ValidateEnd
               (JsonReader *this,JsonToken__Enum endToken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJStack_1 = (JsonSchemaException *)JsonReader_Pop(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JVar2 = endToken;
  if (endToken == JsonToken__Enum_EndObject) {
    pJVar3 = (JsonSchemaException *)0x1;
  }
  else if (endToken == JsonToken__Enum_EndArray) {
    pJVar3 = (JsonSchemaException *)0x2;
  }
  else {
    if (endToken != JsonToken__Enum_EndConstructor) {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      endToken = JVar2;
      uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&endToken);
      func_?(pOVar5,0);
      func_?(pOVar5,uVar6);
      func_?(0,uVar6);
      pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (StringLiteral_Not_a_valid_close_JsonToken___0_,(IFormatProvider *)pCVar4,
                          pOVar5,(MethodInfo *)0x0);
      pJVar3 = (JsonSchemaException *)
               func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
      Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                (pJVar3,pSVar7,(MethodInfo *)0x0);
      func_?();
      goto code_?;
    }
    pJVar3 = (JsonSchemaException *)0x3;
  }
  pSVar7 = (String *)endToken;
  if (pJVar3 == pJStack_1) {
    return;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  endToken = (JsonToken__Enum)pSVar7;
  uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&endToken);
  func_?(pOVar5,0);
  func_?(pOVar5,uVar6);
  func_?(0,uVar6);
  pJStack_8 = pJStack_1;
  uVar6 = func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&pJStack_8);
  func_?(pOVar5,0);
  func_?(pOVar5,uVar6);
  func_?(1,uVar6);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_JsonToken__0__is_not_valid_for_c,(IFormatProvider *)pCVar4,
                      pOVar5,(MethodInfo *)0x0);
  pJVar3 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar3,pSVar7,(MethodInfo *)0x0);
  pJStack_1 = (JsonSchemaException *)0x0;
  pJStack_8 = pJVar3;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* JsonReader() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader__ctor
               (JsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._currentState = 0;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List__
            );
  (this->fields)._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00;
  bVar1 = cRam_? == '\0';
  (this->fields)._CloseInput_k__BackingField = 1;
  if (bVar1) {
    func_?();
    this_00 = (List_1_UnityEngine_Vector4_ *)(this->fields)._stack;
    cRam_? = '\x01';
  }
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
              );
    (this->fields)._currentTypeContext = 0;
    piVar2 = &(this->fields)._top;
    *piVar2 = *piVar2 + 1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Depth() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonReader::JsonReader_get_Depth
                  (JsonReader *this,MethodInfo *method)

{
  iVar1 = (this->fields)._top;
  token = (*(code *)(this->klass->vtable).get_TokenType.method)
                    (this,(this->klass->vtable).get_Value.methodPtr);
  bVar2 = JsonReader_IsStartToken(token,(MethodInfo *)0x0);
  iVar3 = iVar1 + -1;
  if (bVar2 != 0) {
    iVar3 = iVar1 + -2;
  }
  return iVar3;
}

