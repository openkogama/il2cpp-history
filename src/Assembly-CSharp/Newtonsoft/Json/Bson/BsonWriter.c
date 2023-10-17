
/* Void AddParent(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddParent
               (BsonWriter *this,BsonToken *container,MethodInfo *method)

{
  BsonWriter_AddToken(this,container,(MethodInfo *)0x0);
  (this->fields)._parent = container;
  func_?(&(this->fields)._parent,container);
  return;
}


/* Void AddToken(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddToken
               (BsonWriter *this,BsonToken *token,MethodInfo *method)

{
  message = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonArray);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonObject);
    cRam_? = '\x01';
  }
  pBVar1 = token;
  if ((message->fields)._parent == (BsonToken *)0x0) {
    if (token == (BsonToken *)0x0) goto code_?;
    cVar2 = (*(token->klass->vtable).__unknown.methodPtr)
                      (token,(token->klass->vtable).__unknown.method);
    if (cVar2 == '\x03') {
code_?:
      (message->fields)._parent = pBVar1;
      func_?(&(message->fields)._parent,pBVar1);
      (message->fields)._root = pBVar1;
      func_?(&(message->fields)._root,pBVar1);
      return;
    }
    cVar2 = (*(pBVar1->klass->vtable).__unknown.methodPtr)
                      (pBVar1,(pBVar1->klass->vtable).__unknown.method);
    if (cVar2 == '\x04') goto code_?;
code_?:
    uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar3);
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uVar3 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar3);
    pBVar1 = token;
    func_?(token);
    uVar5 = func_?(4,pBVar1);
    this = (BsonWriter *)CONCAT13(uVar5,this._0_3_);
    uVar3 = func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonType,(int)&this + 3);
    uVar3 = func_?(uVar3);
    func_?(args);
    func_?(args,uVar3);
    func_?(0,uVar3);
    method_00 = (MethodInfo *)0x0;
    provider = pCVar4;
    format = (String *)func_?(&StringLiteral_Error_writing__0__value__BSON_mu);
    message = (BsonWriter *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (format,(IFormatProvider *)provider,args,method_00);
    uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
    this_00 = (JsonWriterException *)func_?(uVar3);
    func_?(this_00);
    JsonWriterException::JsonWriterException__ctor_1(this_00,(String *)message,(MethodInfo *)0x0);
    uVar3 = func_?(&
                            MethodInfo__Newtonsoft__Json__Bson__BsonWriter__AddToken_Newtonsoft__Json__Bson__BsonToken_
                           );
    func_?(this_00,uVar3);
    pBVar6 = extraout_EDX;
  }
  else {
    pBVar1 = (message->fields)._parent;
    if (pBVar1 == (BsonToken *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    pBVar7 = pBVar1->klass;
    if (((pBVar7->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth) ||
       ((pBVar7->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
      message = (BsonWriter *)(message->fields)._parent;
      pBVar8 = TypeInfo__Newtonsoft__Json__Bson__BsonArray;
      if (((message->klass->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth) ||
         ((ppIVar9 = (message->klass->_1).typeHierarchy,
          ppIVar9[(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray ||
          (ppIVar9[(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1] !=
           (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray)))) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
                       );
        cRam_? = '\x01';
      }
      pBVar1 = token;
      pLVar10 = (List_1_System_Object_ *)(message->fields)._._currentState;
      if (pLVar10 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar10,(Object *)token,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
                  );
        if (pBVar1 != (BsonToken *)0x0) {
          (pBVar1->fields)._Parent_k__BackingField = (BsonToken *)message;
          func_?(&pBVar1->fields,message);
          return;
        }
      }
      goto code_?;
    }
    pCVar4 = (CultureInfo *)(message->fields)._parent;
    this = (BsonWriter *)(message->fields)._propertyName;
    if (pCVar4 == (CultureInfo *)0x0) goto code_?;
    pBVar6 = TypeInfo__Newtonsoft__Json__Bson__BsonObject;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth <=
         (pCVar4->klass->_1).typeHierarchyDepth) &&
       ((pCVar4->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonProperty);
        func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                       );
        cRam_? = '\x01';
      }
      pLVar10 = (List_1_System_Object_ *)(pCVar4->fields).parent_lcid;
      value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonProperty);
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EDI);
        value_00 = (Object__Class *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
        if (value_00 != (Object__Class *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
          (value_00->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this;
          func_?(&(value_00->_0).byval_arg,this);
          *(undefined1 *)&(value_00->_0).byval_arg.attrs = 2;
          *(undefined1 *)&(value_00->_0).this_arg.attrs = 0;
          value[1].klass = value_00;
          func_?(value + 1,value_00);
          pBVar1 = token;
          value[1].monitor = (MonitorData *)token;
          func_?(&value[1].monitor,token);
          if (pLVar10 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (pLVar10,value,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                      );
            if (pBVar1 != (BsonToken *)0x0) {
              (pBVar1->fields)._Parent_k__BackingField = (BsonToken *)pCVar4;
              func_?(&pBVar1->fields,pCVar4);
              (message->fields)._propertyName = (String *)0x0;
              func_?(&(message->fields)._propertyName,0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pCVar4,pBVar6);
  pBVar8 = extraout_EDX_00;
code_?:
  func_?(message,pBVar8);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AddValue(Object, BsonType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddValue
               (BsonWriter *this,Object *value,BsonType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonValue);
    cRam_? = '\x01';
  }
  token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonValue);
  if (token != (BsonToken *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)token,ExceptionArgument__Enum_obj,unaff_ESI);
    token[1].klass = (BsonToken__Class *)value;
    func_?(token + 1,value);
    *(undefined1 *)&token[1].monitor = (undefined1)type;
    BsonWriter_AddToken(this,token,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_Close
               (BsonWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoCompleteAll((JsonWriter *)this,(MethodInfo *)0x0);
  if (((this->fields)._._CloseOutput_k__BackingField != 0) &&
     ((this->fields)._writer != (BsonBinaryWriter *)0x0)) {
    pBVar1 = (((this->fields)._writer)->fields)._writer;
    if (pBVar1 == (BinaryWriter *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pBVar1->klass->vtable).Close.methodPtr)(pBVar1,(pBVar1->klass->vtable).Close.method);
  }
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_Flush
               (BsonWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._writer;
  if ((pBVar2 != (BsonBinaryWriter *)0x0) &&
     (pBStack_3 = (pBVar2->fields)._writer, pBStack_3 != (BinaryWriter *)0x0)) {
    pMStack_1 = (pBStack_3->klass->vtable).Flush.method;
    (*(pBStack_3->klass->vtable).Flush.methodPtr)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveParent() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_RemoveParent
               (BsonWriter *this,MethodInfo *method)

{
  ppBStack_1 = (BsonToken **)&stack0xfffffffc;
  pBVar2 = (this->fields)._parent;
  if (pBVar2 != (BsonToken *)0x0) {
    (this->fields)._parent = (pBVar2->fields)._Parent_k__BackingField;
    ppBStack_1 = &(this->fields)._parent;
    func_?();
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteComment
               (BsonWriter *this,String *text,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Cannot_write_JSON_comment_as_BSO);
  JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteComment_System__String_);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteEnd
               (BsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,token,(MethodInfo *)0x0);
  pBVar1 = (this->fields)._parent;
  if (pBVar1 != (BsonToken *)0x0) {
    pBVar1 = (pBVar1->fields)._Parent_k__BackingField;
    (this->fields)._parent = pBVar1;
    func_?(&(this->fields)._parent,pBVar1);
    if ((this->fields)._._top == 0) {
      this_00 = (this->fields)._writer;
      pBVar1 = (this->fields)._root;
      if (this_00 == (BsonBinaryWriter *)0x0) goto code_?;
      BsonBinaryWriter::BsonBinaryWriter_CalculateSize_1(this_00,pBVar1,(MethodInfo *)0x0);
      BsonBinaryWriter::BsonBinaryWriter_WriteTokenInternal(this_00,pBVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteNull
               (BsonWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteNull((JsonWriter *)this,(MethodInfo *)0x0);
  BsonWriter_AddValue(this,(Object *)0x0,BsonType__Enum_Null,(MethodInfo *)0x0);
  return;
}


/* Void WriteObjectId(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteObjectId
               (BsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Byte__Array *)0x0) {
    func_?();
  }
  else if (value->max_length == 0xc) {
    JsonWriter::JsonWriter_AutoComplete
              ((JsonWriter *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
    BsonWriter_AddValue(this,(Object *)value,BsonType__Enum_Oid,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_An_object_id_must_be_12_bytes);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteObjectId_System__Byte____);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WritePropertyName
               (BsonWriter *this,String *name,MethodInfo *method)

{
  JsonWriter::JsonWriter_WritePropertyName((JsonWriter *)this,name,(MethodInfo *)0x0);
  (this->fields)._propertyName = name;
  func_?(&(this->fields)._propertyName,name);
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRaw
               (BsonWriter *this,String *json,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Cannot_write_raw_JSON_as_BSON_);
  JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteRaw_System__String_);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteRawValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRawValue
               (BsonWriter *this,String *json,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Cannot_write_raw_JSON_as_BSON_);
  JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteRawValue_System__String_);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteRegex(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRegex
               (BsonWriter *this,String *pattern,String *options,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
    func_?(&StringLiteral_pattern);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)pattern,StringLiteral_pattern,(MethodInfo *)0x0);
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
  if (token != (BsonToken *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)pattern);
    value = (BsonToken__Class *)func_?();
    if (value != (BsonToken__Class *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)pattern);
      (value->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pattern;
      func_?();
      *(undefined1 *)&(value->_0).byval_arg.attrs = 2;
      *(undefined1 *)&(value->_0).this_arg.attrs = 0;
      token[1].klass = value;
      func_?(token + 1,value);
      value_00 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
      if (value_00 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)pattern);
        value_00[2].klass = (Object__Class *)options;
        func_?();
        *(undefined1 *)&value_00[2].monitor = 2;
        *(undefined1 *)&value_00[3].monitor = 0;
        token[1].monitor = (MonitorData *)value_00;
        func_?(&token[1].monitor,value_00);
        BsonWriter_AddToken((BsonWriter *)options,token,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartArray
               (BsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonArray);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartArray((JsonWriter *)this,(MethodInfo *)0x0);
  token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonArray);
  if (token != (BsonToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>
                     );
      cRam_? = '\x01';
    }
    this_00 = (BsonToken__Class *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>
                             );
    if (this_00 != (BsonToken__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
                );
      method_00 = (MethodInfo *)(token + 1);
      token[1].klass = this_00;
      func_?(method_00,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)token,ExceptionArgument__Enum_obj,method_00);
      BsonWriter_AddToken(this,token,(MethodInfo *)0x0);
      (this->fields)._parent = token;
      func_?(&(this->fields)._parent,token);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartConstructor
               (BsonWriter *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Cannot_write_JSON_constructor_as);
  JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteStartConstructor_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartObject
               (BsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonObject);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartObject((JsonWriter *)this,(MethodInfo *)0x0);
  token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonObject);
  if (token != (BsonToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>
                     );
      cRam_? = '\x01';
    }
    this_00 = (BsonToken__Class *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>
                             );
    if (this_00 != (BsonToken__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
                );
      method_00 = (MethodInfo *)(token + 1);
      token[1].klass = this_00;
      func_?(method_00,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)token,ExceptionArgument__Enum_obj,method_00);
      BsonWriter_AddToken(this,token,(MethodInfo *)0x0);
      (this->fields)._parent = token;
      func_?(&(this->fields)._parent,token);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteUndefined
               (BsonWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteUndefined((JsonWriter *)this,(MethodInfo *)0x0);
  BsonWriter_AddValue(this,(Object *)0x0,BsonType__Enum_Undefined,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue
               (BsonWriter *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)value,(MethodInfo *)0x0);
  if (value != (String *)0x0) {
    token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
    if (token != (BsonToken *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)token,ExceptionArgument__Enum_obj,unaff_ESI);
      token[1].klass = (BsonToken__Class *)value;
      func_?(token + 1,value);
      *(undefined1 *)&token[1].monitor = 2;
      *(undefined1 *)&token[1].fields._CalculatedSize_k__BackingField = 1;
      BsonWriter_AddToken(this,token,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  BsonWriter_AddValue(this,(Object *)0x0,BsonType__Enum_Null,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_1
               (BsonWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  value = iVar1;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&value);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_10
               (BsonWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)_value,(MethodInfo *)0x0);
  this_00 = (BsonToken__Class *)
            mscorlib.dll::System::Char::Char_ToString((Char *)&value,(MethodInfo *)0x0);
  token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
  if (token != (BsonToken *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)token,ExceptionArgument__Enum_obj,_value);
    token[1].klass = this_00;
    func_?();
    *(undefined1 *)&token[1].monitor = 2;
    *(undefined1 *)&token[1].fields._CalculatedSize_k__BackingField = 1;
    BsonWriter_AddToken((BsonWriter *)this_00,token,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteValue(Byte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_11
               (BsonWriter *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Byte,&stack0x0000000b);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_12
               (BsonWriter *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__SByte);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__SByte,&stack0x0000000b);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_13
               (BsonWriter *this,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    cRam_? = '\x01';
  }
  auVar1 = value._0_12_;
  value_00.mid = 0;
  value_00.flags = auVar1._0_4_;
  value_00.hi = auVar1._4_4_;
  value_00.lo = auVar1._8_4_;
  value_00.ulomidLE._0_4_ = in_stack_2;
  value_00.ulomidLE._4_4_ = in_stack_3;
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value_00,in_stack_4);
  value_01 = (Object *)func_?(TypeInfo__System__Decimal,&stack0xffffffec);
  BsonWriter_AddValue(this,value_01,BsonType__Enum_Number,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_14
               (BsonWriter *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._dateData;
  value_00._8_4_ = unaff_EDI;
  value_00._dateTime._dateData = value._dateData & 0xffffffff;
  value_00._12_4_ = unaff_ESI;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,unaff_EBP);
  value._dateData._0_4_ = uVar1;
  value_01 = (Object *)func_?(TypeInfo__System__DateTime,&stack0x00000008);
  BsonWriter_AddValue(this,value_01,BsonType__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_15
               (BsonWriter *this,DateTimeOffset value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    cRam_? = '\x01';
  }
  auVar1 = value._0_12_;
  value_00._12_4_ = 0;
  value_00._dateTime._dateData = auVar1._0_8_;
  value_00._offsetMinutes = auVar1._8_2_;
  value_00._10_2_ = auVar1._10_2_;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,in_stack_2);
  value_01 = (Object *)func_?(TypeInfo__System__DateTimeOffset,&stack0xffffffec);
  BsonWriter_AddValue(this,value_01,BsonType__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_16
               (BsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_35((JsonWriter *)this,value,(MethodInfo *)0x0);
  BsonWriter_AddValue(this,(Object *)value,BsonType__Enum_Binary,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_17
               (BsonWriter *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  value_00._ticks._4_1_ = value._d;
  value_00._ticks._5_1_ = value._e;
  value_00._ticks._6_1_ = value._f;
  value_00._ticks._7_1_ = value._g;
  value_00._ticks._0_2_ = value._b;
  value_00._ticks._2_2_ = value._c;
  JsonWriter::JsonWriter_WriteValue_17((JsonWriter *)this,value_00,(MethodInfo *)value._12_4_);
  pSVar1 = mscorlib.dll::System::Guid::Guid_ToString(&value,(MethodInfo *)0x0);
  this_00 = (BsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
  if (this_00 != (BsonWriter *)0x0) {
    value._d = 0;
    value._e = 0;
    value._f = 0;
    value._g = 0;
    value._a = (int32_t)&UNK_?;
    value._4_4_ = this_00;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,(MethodInfo *)value._12_4_);
    value._4_4_ = &(this_00->fields)._._currentState;
    (this_00->fields)._._currentState = (int32_t)pSVar1;
    value._a = (int32_t)&UNK_?;
    value._8_4_ = pSVar1;
    func_?();
    value._a = 0;
    *(undefined1 *)&(this_00->fields)._._formatting = 2;
    *(undefined1 *)&(this_00->fields)._writer = 1;
    BsonWriter_AddToken(this_00,(BsonToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  value._8_4_ = &UNK_?;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_18
               (BsonWriter *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)(value._ticks & 0xffffffff),unaff_EDI);
  pSVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_ToString
                     ((TimeSpan *)&stack0x00000008,(MethodInfo *)0x0);
  this_00 = (BsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
  if (this_00 != (BsonWriter *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,method);
    (this_00->fields)._._currentState = (int32_t)pSVar1;
    func_?();
    *(undefined1 *)&(this_00->fields)._._formatting = 2;
    *(undefined1 *)&(this_00->fields)._writer = 1;
    BsonWriter_AddToken(this_00,(BsonToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_19
               (BsonWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_36((JsonWriter *)this,value,(MethodInfo *)0x0);
  if (value != (Uri *)0x0) {
    pBVar1 = (BsonToken__Class *)
             (*(value->klass->vtable).ToString.methodPtr)
                       (value,(value->klass->vtable).ToString.method);
    token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
    if (token != (BsonToken *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)token,ExceptionArgument__Enum_obj,unaff_retaddr);
      token[1].klass = pBVar1;
      func_?(token + 1,pBVar1);
      *(undefined1 *)&token[1].monitor = 2;
      *(undefined1 *)&token[1].fields._CalculatedSize_k__BackingField = 1;
      BsonWriter_AddToken(this,token,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_2
               (BsonWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt32);
    cRam_? = '\x01';
  }
  uVar1 = value;
  if (value < 0x80000000) {
    JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
    value = uVar1;
    value_00 = (Object *)func_?(TypeInfo__System__UInt32,&value);
    BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar2);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Value_is_too_large_to_fit_in_a_s);
  JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
  uVar2 = func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteValue_unsigned_int_)
  ;
  func_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_3
               (BsonWriter *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int64);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__Int64,&stack0x00000008);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Long,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_4
               (BsonWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt64);
    cRam_? = '\x01';
  }
  uVar1 = (uint)value;
  if (0x7fffffff < (uint)value) {
    uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
    this_00 = (JsonWriterException *)func_?(uVar2);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Value_is_too_large_to_fit_in_a_s);
    JsonWriterException::JsonWriterException__ctor_1(this_00,message,method_00);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteValue_unsigned_long_
                           );
    func_?(this_00,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__UInt64,&stack0x00000008);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Long,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_5
               (BsonWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_5((JsonWriter *)this,value,(MethodInfo *)0x0);
  fStack_1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Number,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_6
               (BsonWriter *this,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    cRam_? = '\x01';
  }
  value_01.lo = in_stack_1;
  value_01.flags = (int)((ulonglong)value & 0xffffffff);
  value_01.hi = (int)(((ulonglong)value & 0xffffffff) >> 0x20);
  value_01.mid = in_stack_2;
  value_01.ulomidLE._0_4_ = unaff_EBP;
  value_01.ulomidLE._4_4_ = unaff_retaddr;
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value_01,(MethodInfo *)this);
  value_00 = (Object *)func_?(TypeInfo__System__Double);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Number,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_7
               (BsonWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_7((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Boolean,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_8
               (BsonWriter *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int16);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  value_00 = (Object *)func_?(TypeInfo__System__Int16,&value);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_9
               (BsonWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt16);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  value_00 = (Object *)func_?(TypeInfo__System__UInt16,&value);
  BsonWriter_AddValue(this,value_00,BsonType__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* BsonWriter(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter__ctor
               (BsonWriter *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    func_?(&StringLiteral_stream);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor((JsonWriter *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  value = (BsonBinaryWriter *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
  if (value != (BsonBinaryWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    (value->fields)._DateTimeKindHandling_k__BackingField = 1;
    this_00 = (BinaryWriter *)func_?();
    if (this_00 != (BinaryWriter *)0x0) {
      mscorlib.dll::System::IO::BinaryWriter::BinaryWriter__ctor_1(this_00,stream,(MethodInfo *)0x0)
      ;
      (value->fields)._writer = this_00;
      func_?(&value->fields);
      (this->fields)._writer = value;
      func_?(&(this->fields)._writer,value);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DateTimeKind get_DateTimeKindHandling() */

DateTimeKind__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_get_DateTimeKindHandling
          (BsonWriter *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._writer;
  if (pBVar2 != (BsonBinaryWriter *)0x0) {
    return (pBVar2->fields)._DateTimeKindHandling_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  DVar6 = (*pcVar5)();
  return DVar6;
}


/* Void set_DateTimeKindHandling(DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_set_DateTimeKindHandling
               (BsonWriter *this,DateTimeKind__Enum value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._writer;
  if (pBVar2 != (BsonBinaryWriter *)0x0) {
    (pBVar2->fields)._DateTimeKindHandling_k__BackingField = value;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

