
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
     BsonObjectIdConverter_CanConvert
               (BsonObjectIdConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__Bson__BsonObjectId);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__Bson__BsonObjectId;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)objectType,(Object **)right,(MethodInfo *)0x0);
  return bVar1;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
         BsonObjectIdConverter_ReadJson
                   (BsonObjectIdConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  this_00 = (Exception *)reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    func_?(this_00);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_An_ObjectId_must_be_12_bytes);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar3,pMVar2);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Bson__BsonObjectId__BsonObjectId_System__Byte____
                           );
    func_?(this_00,uVar1);
  }
  else {
    iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar4 != 0x11) goto code_?;
    unaff_EBX = (*(((JsonReader *)this_00)->klass->vtable).get_Value.methodPtr)
                          (this_00,(((JsonReader *)this_00)->klass->vtable).get_Value.method);
    pMVar2 = (MethodInfo *)&UNK_?;
    pOVar5 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
    if (pOVar5 == (Object *)0x0) goto code_?;
    reader = (JsonReader *)TypeInfo__System__Byte;
    if (unaff_EBX == 0) {
      value = (Object__Class *)0x0;
code_?:
      unaff_EBX = in_stack_6;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_value);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar5,ExceptionArgument__Enum_obj,pMVar2);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)value,StringLiteral_value,(MethodInfo *)0x0);
      if (value == (Object__Class *)0x0) goto code_?;
      if ((value->_0).namespaze == (char *)0xc) {
        pOVar5[1].klass = value;
        func_?(pOVar5 + 1,value);
        return pOVar5;
      }
      goto code_?;
    }
    value = (Object__Class *)func_?(unaff_EBX,TypeInfo__System__Byte);
    this_00 = (Exception *)0x0;
    if (value != (Object__Class *)0x0) goto code_?;
  }
  func_?(unaff_EBX,reader);
code_?:
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  func_?(this_00);
  reader = (JsonReader *)func_?(7,this_00);
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  uVar1 = func_?(uVar1);
  func_?(args);
  func_?(args,uVar1);
  func_?(0,uVar1);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Expected_Bytes_but_got__0__);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,pMVar2);
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_01 = (JsonSerializationException *)func_?(uVar1);
  func_?(this_01);
  JsonSerializationException::JsonSerializationException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__BsonObjectIdConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?();
  pcVar7 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar7)();
  return pOVar5;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
     BsonObjectIdConverter_WriteJson
               (BsonObjectIdConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonWriter);
    cRam_? = '\x01';
  }
  if ((value == (Object *)0x0) ||
     (((TypeInfo__Newtonsoft__Json__Bson__BsonObjectId->_1).typeHierarchyDepth <=
       (value->klass->_1).typeHierarchyDepth &&
      ((value->klass->_1).typeHierarchy
       [(TypeInfo__Newtonsoft__Json__Bson__BsonObjectId->_1).typeHierarchyDepth - 1] ==
       (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObjectId)))) {
    if (writer != (JsonWriter *)0x0) {
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).typeHierarchyDepth <=
           (writer->klass->_1).typeHierarchyDepth) &&
         ((BsonWriter__Class *)
          (writer->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Bson__BsonWriter)) {
        if (value == (Object *)0x0) goto code_?;
        value_00 = value[1].klass;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_value);
          cRam_? = '\x01';
        }
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)value_00,StringLiteral_value,(MethodInfo *)0x0);
        if (value_00 == (Object__Class *)0x0) goto code_?;
        if ((value_00->_0).namespaze == (char *)0xc) {
          JsonWriter::JsonWriter_AutoComplete(writer,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
          Bson::BsonWriter::BsonWriter_AddValue
                    ((BsonWriter *)writer,(Object *)value_00,BsonType__Enum_Oid,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    if ((value != (Object *)0x0) && (writer != (JsonWriter *)0x0)) {
      (*(writer->klass->vtable).WriteValue_35.methodPtr)
                (writer,value[1].klass,(writer->klass->vtable).WriteValue_35.method);
      return;
    }
  }
  else {
    func_?(value,TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
code_?:
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_An_object_id_must_be_12_bytes);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteObjectId_System__Byte____
                           );
    func_?(this_00,uVar1);
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

