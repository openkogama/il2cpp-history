
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
     BsonObjectIdConverter_CanConvert
               (BsonObjectIdConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__Bson__BsonObjectId;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return objectType == pTVar1;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
         BsonObjectIdConverter_ReadJson
                   (BsonObjectIdConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?(0);
code_?:
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_An_ObjectId_must_be_12_bytes,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Bson__BsonObjectId__BsonObjectId_System__Byte____)
    ;
  }
  else {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar1 != 0x11) goto code_?;
    unaff_EDI = (ScaleAnimationBase *)
                (*(code *)(((JsonReader *)this_00)->klass->vtable).get_Value.method)
                          (this_00,(((JsonReader *)this_00)->klass->vtable).get_ValueType.methodPtr)
    ;
    unaff_EBX = TypeInfo__System__Byte;
    if (unaff_EDI == (ScaleAnimationBase *)0x0) {
      pOVar2 = (Object *)0x0;
code_?:
      unaff_EBX = in_stack_3;
      unaff_EDI = (ScaleAnimationBase *)
                  func_?(TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      ScaleAnimationBase::ScaleAnimationBase_Play(unaff_EDI,0.0,in_stack_4);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                (pOVar2,StringLiteral_value,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x0) goto code_?;
      if (pOVar2[1].monitor == (MonitorData *)0xc) {
        (unaff_EDI->fields)._._._._.m_CachedPtr = pOVar2;
        return (Object *)unaff_EDI;
      }
      goto code_?;
    }
    pOVar2 = (Object *)func_?(unaff_EDI,TypeInfo__System__Byte);
    this_00 = (IsolatedStorageException *)0x0;
    if (pOVar2 != (Object *)0x0) goto code_?;
  }
  func_?(unaff_EDI,unaff_EBX);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(this_00,0);
  reader = (JsonReader *)func_?(7,this_00);
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(0,uVar5);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Expected_Bytes_but_got__0__,(IFormatProvider *)provider,args,
                       (MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,message,(MethodInfo *)0x0);
  func_?(this_01);
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::BsonObjectIdConverter::
     BsonObjectIdConverter_WriteJson
               (BsonObjectIdConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    pOVar1 = (Object *)0x0;
code_?:
    if (writer != (JsonWriter *)0x0) {
      bVar2 = (TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).naturalAligment;
      if (((writer->klass->_1).naturalAligment < bVar2) ||
         ((BsonWriter__Class *)(writer->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__Newtonsoft__Json__Bson__BsonWriter)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_02 = (BsonWriter *)0x0;
      if (bVar3) {
        this_02 = (BsonWriter *)writer;
      }
      if (this_02 != (BsonWriter *)0x0) {
        if (pOVar1 == (Object *)0x0) goto code_?;
        value_00 = pOVar1[1].klass;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)value_00,StringLiteral_value,(MethodInfo *)0x0);
        if (value_00 == (Object__Class *)0x0) goto code_?;
        if ((value_00->_0).namespaze == (char *)0xc) {
          JsonWriter::JsonWriter_AutoComplete
                    ((JsonWriter *)this_02,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
          this_00 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
          (this_00->fields).originalScale.x = (float)value_00;
          *(undefined1 *)&(this_00->fields).originalScale.y = 7;
          Bson::BsonWriter::BsonWriter_AddToken(this_02,(BsonToken *)this_00,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    if ((pOVar1 != (Object *)0x0) && (writer != (JsonWriter *)0x0)) {
      (*(code *)(writer->klass->vtable).WriteValue_35.method)
                (writer,pOVar1[1].klass,(writer->klass->vtable).WriteValue_36.methodPtr);
      return;
    }
  }
  else {
    bVar2 = (TypeInfo__Newtonsoft__Json__Bson__BsonObjectId->_1).naturalAligment;
    if (((value->klass->_1).naturalAligment < bVar2) ||
       ((value->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObjectId)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pOVar1 = (Object *)0x0;
    if (bVar3) {
      pOVar1 = value;
    }
    if (pOVar1 != (Object *)0x0) goto code_?;
    func_?(value,TypeInfo__Newtonsoft__Json__Bson__BsonObjectId);
code_?:
    this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_01,StringLiteral_An_object_id_must_be_12_bytes,(MethodInfo *)0x0);
    func_?(this_01,0,
                    MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteObjectId_System__Byte____);
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

