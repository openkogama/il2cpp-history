
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_Close
               (JsonTextWriter *this,MethodInfo *method)

{
  Json::Linq::JTokenWriter::JTokenWriter_Close((JTokenWriter *)this,(MethodInfo *)0x0);
  uVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this,
                     (MethodInfo *)0x0);
  if ((uVar1 != 0) && (pTVar2 = (this->fields)._writer, pTVar2 != (TextWriter *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).Close.method)();
  }
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_Flush
               (JsonTextWriter *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Flush.method)(pTVar1,(pTVar1->klass->vtable).Write.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteComment
               (JsonTextWriter *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteComment((JsonWriter *)this,text,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,StringLiteral__Ptr);
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,text);
      pTVar1 = (this->fields)._writer;
      if (pTVar1 != (TextWriter *)0x0) {
        (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,StringLiteral_Ptr_);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteEnd
               (JsonTextWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (token == JsonToken__Enum_EndObject) {
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Write_4.method)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.methodPtr);
      return;
    }
  }
  else if (token == JsonToken__Enum_EndArray) {
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Write_4.method)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.methodPtr);
      return;
    }
  }
  else {
    if (token != JsonToken__Enum_EndConstructor) goto code_?;
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Write_4.method)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.methodPtr);
      return;
    }
  }
  func_?(0);
  token = extraout_ECX;
code_?:
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&token);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Invalid_JsonToken__,arg1,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  token = (JsonToken__Enum)
          MethodInfo__Newtonsoft__Json__JsonTextWriter__WriteEnd_Newtonsoft__Json__JsonToken_;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteIndent() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteIndent
               (JsonTextWriter *this,MethodInfo *method)

{
  pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)this,(MethodInfo *)0x0);
  if (pIVar1 == (IKogamaSetting *)0x1) {
    pTVar2 = (this->fields)._writer;
    pSVar3 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
    if (pTVar2 == (TextWriter *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(code *)(pTVar2->klass->vtable).Write_4.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).Write_5.methodPtr);
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    iVar6 = (this->fields)._indentation * (int)pIVar5;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        pTVar2 = (this->fields)._writer;
        if (pTVar2 == (TextWriter *)0x0) goto code_?;
        (*(code *)(pTVar2->klass->vtable).Write.method)
                  (pTVar2,(this->fields)._indentChar,(pTVar2->klass->vtable).Write_1.methodPtr);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  return;
}


/* Void WriteIndentSpace() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteIndentSpace
               (JsonTextWriter *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write.method)
              (pTVar1,0x20,(pTVar1->klass->vtable).Write_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteNull
               (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteNull((JsonWriter *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)
              (pTVar1,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WritePropertyName
               (JsonTextWriter *this,String *name,MethodInfo *method)

{
  JsonWriter::JsonWriter_WritePropertyName((JsonWriter *)this,name,(MethodInfo *)0x0);
  Json::Utilities::JavaScriptUtils::JavaScriptUtils_WriteEscapedJavaScriptString
            ((this->fields)._writer,name,(this->fields)._quoteChar,(this->fields)._quoteName,
             (MethodInfo *)0x0);
  pTStack1 = (this->fields)._writer;
  if (pTStack1 != (TextWriter *)0x0) {
    pIStack2 = (pTStack1->klass->vtable).Write_1.methodPtr;
    puStack3 = (undefined *)0x3a;
    (*(code *)(pTStack1->klass->vtable).Write.method)();
    return;
  }
  pIStack2 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteRaw
               (JsonTextWriter *this,String *json,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)json,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,json);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteStartArray
               (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartArray((JsonWriter *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,::StringLiteral__);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteStartConstructor
               (JsonTextWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartConstructor((JsonWriter *)this,name,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,StringLiteral_new_);
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,name);
      pTVar1 = (this->fields)._writer;
      if (pTVar1 != (TextWriter *)0x0) {
        (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,::StringLiteral__);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteStartObject
               (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartObject((JsonWriter *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1,::StringLiteral__);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteUndefined
               (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteUndefined((JsonWriter *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)
              (pTVar1,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue
               (JsonTextWriter *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)value,(MethodInfo *)0x0);
  if (value != (String *)0x0) {
    Json::Utilities::JavaScriptUtils::JavaScriptUtils_WriteEscapedJavaScriptString
              ((this->fields)._writer,value,(this->fields)._quoteChar,1,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)
              (pTVar1,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,
               (pTVar1->klass->vtable).Write_5.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValueDelimiter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValueDelimiter
               (JsonTextWriter *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write.method)
              (pTVar1,0x2c,(pTVar1->klass->vtable).Write_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValueInternal(String, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValueInternal
               (JsonTextWriter *this,String *value,JsonToken__Enum token,MethodInfo *method)

{
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)
              (pTVar1,value,(pTVar1->klass->vtable).Write_5.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_1
               (JsonTextWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value = iVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    value = (int32_t)(pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  value = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_10
               (JsonTextWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_3(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(Byte) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_11
               (JsonTextWriter *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = (int8_t)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = (Il2CppMethodPointer)CONCAT31(in_stack_1,value_00);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    _value = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  _value = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_12
               (JsonTextWriter *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = (int8_t)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = (Il2CppMethodPointer)CONCAT31(in_stack_1,value_00);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    _value = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  _value = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_13
               (JsonTextWriter *this,Decimal value,MethodInfo *method)

{
  DVar1 = value;
  pJVar2 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    value.flags = (uint32_t)TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  value_00.hi = value.hi;
  value_00.flags = value.flags;
  value_00._8_8_ = DVar1._8_8_;
  JsonConvert::JsonConvert_ToString_15(value_00,(MethodInfo *)0x0);
  pTVar3 = (pJVar2->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    pIStack5 = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  pIStack5 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_14
               (JsonTextWriter *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00.dt.ticks._ticks._4_4_ = (undefined *)value.ticks._ticks._4_4_;
  value_00.dt.ticks._ticks._0_4_ = (undefined4)value.ticks._ticks;
  value_00.dt.kind = value.kind;
  value_00.dt._12_4_ = 0;
  value_00.utc_offset._ticks._0_4_ = unaff_EDI;
  value_00.utc_offset._ticks._4_4_ = unaff_ESI;
  pCVar1 = in_stack_2;
  uVar3 = (undefined4)value.ticks._ticks;
  puVar4 = (undefined *)value.ticks._ticks._4_4_;
  pJVar5 = (JsonConvert__Class *)value.kind;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,unaff_EBX);
  writer = (this->fields)._writer;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    puVar4 = &UNK_?;
    pJVar5 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pCVar1 = in_stack_2;
    uVar3 = (undefined4)value.ticks._ticks;
    puVar4 = (undefined *)value.ticks._ticks._4_4_;
    pJVar5 = (JsonConvert__Class *)value.kind;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    puVar4 = &UNK_?;
    pJVar5 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  DVar6.ticks._ticks._4_4_ = uVar3;
  DVar6.ticks._ticks._0_4_ = pCVar1;
  DVar6.kind = (int32_t)puVar4;
  DVar6._12_4_ = pJVar5;
  TVar7 = JsonConvert::JsonConvert_GetUtcOffset(DVar6,(MethodInfo *)0x0);
  this_00 = (Collection_1_VoxelHit_ *)&stack0x00000008;
  this = (JsonTextWriter *)0x0;
  puVar4 = &UNK_?;
  value.ticks._ticks._4_4_ =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
       Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
  value.kind = 0;
  in_stack_2 = (Collection_1_VoxelHit___Class *)TVar7._ticks;
  value.ticks._ticks._0_4_ = (undefined4)((ulonglong)TVar7._ticks >> 0x20);
  pCVar8 = this_00;
  DVar6.ticks._ticks._0_4_ = puVar4;
  DVar6 = (DateTime)CONCAT124(DVar6._0_12_,(undefined *)DVar6.ticks._ticks);
  TVar7._ticks._4_4_ = value.ticks._ticks._4_4_;
  TVar7._ticks._0_4_ = (undefined4)value.ticks._ticks;
  JsonConvert::JsonConvert_WriteDateTimeString_1
            (writer,DVar6,TVar7,DateTimeKind__Enum_Unspecified,(MethodInfo *)value._12_4_);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_15
               (JsonTextWriter *this,Byte__Array *value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_35((JsonWriter *)this,value,(MethodInfo *)0x0);
  if (value == (Byte__Array *)0x0) {
    return;
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write.method)
              (pTVar1,(this->fields)._quoteChar,(pTVar1->klass->vtable).Write_1.methodPtr);
    pBVar2 = JsonTextWriter_get_Base64Encoder(this,(MethodInfo *)0x0);
    if (pBVar2 != (Base64Encoder *)0x0) {
      Json::Utilities::Base64Encoder::Base64Encoder_Encode
                (pBVar2,value,0,value->max_length,(MethodInfo *)0x0);
      pBVar2 = JsonTextWriter_get_Base64Encoder(this,(MethodInfo *)0x0);
      if (pBVar2 != (Base64Encoder *)0x0) {
        Json::Utilities::Base64Encoder::Base64Encoder_Flush(pBVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._writer;
        if (pTVar1 != (TextWriter *)0x0) {
          (*(code *)(pTVar1->klass->vtable).Write.method)
                    (pTVar1,(this->fields)._quoteChar,(pTVar1->klass->vtable).Write_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_16
               (JsonTextWriter *this,DateTimeOffset value,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = value.dt._12_4_;
  uVar3 = (undefined4)value.utc_offset._ticks;
  DVar4.utc_offset._ticks._4_4_ = 0;
  DVar4._0_20_ = value._0_20_;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,DVar4,unaff_ESI);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    value.dt.ticks._ticks._4_4_ = TypeInfo__Newtonsoft__Json__JsonConvert;
    value.dt.ticks._ticks._0_4_ = &UNK_?;
    func_?();
  }
  puVar5 = (undefined *)value.dt.ticks._ticks;
  uVar6 = in_stack_7;
  TVar8._ticks = CONCAT44(puVar5,uVar6);
  this = (JsonTextWriter *)value.dt.kind;
  iVar9 = (int32_t)value.dt.ticks._ticks._4_4_;
  in_stack_7 = uVar2;
  value.dt.ticks._ticks._0_4_ = (undefined *)uVar3;
  DVar4 = (DateTimeOffset)CONCAT168(DVar4.dt,TVar8._ticks);
  pSStack10 = JsonConvert::JsonConvert_ToString_1(DVar4,(MethodInfo *)0x0);
  pTVar11 = (pJVar1->fields)._writer;
  if (pTVar11 != (TextWriter *)0x0) {
    pTVar12 = pTVar11->klass;
    pIStack13 = (pTVar12->vtable).Write_5.methodPtr;
    (*(code *)(pTVar12->vtable).Write_4.method)();
    return;
  }
  pIStack13 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_17
               (JsonTextWriter *this,Guid value,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)value._4_8_,(MethodInfo *)value._12_4_);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    value._4_4_ = TypeInfo__Newtonsoft__Json__JsonConvert;
    value._a = (int32_t)&UNK_?;
    func_?();
  }
  iVar2 = value._a;
  this = (JsonTextWriter *)value._8_4_;
  iVar3 = value._b;
  stack0x00000002 = value._c;
  value._a._0_1_ = value._h;
  value._a._1_1_ = value._i;
  value._a._2_1_ = value._j;
  value._a._3_1_ = value._k;
  value_00._a = iVar2;
  value_00 = (Guid)CONCAT124(value_00._0_12_,value_00._a);
  pSStack4 = JsonConvert::JsonConvert_ToString_16(value_00,(MethodInfo *)0x0);
  pTVar5 = (pJVar1->fields)._writer;
  if (pTVar5 != (TextWriter *)0x0) {
    pTVar6 = pTVar5->klass;
    pIStack7 = (pTVar6->vtable).Write_5.methodPtr;
    (*(code *)(pTVar6->vtable).Write_4.method)();
    return;
  }
  pIStack7 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_18
               (JsonTextWriter *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)(value._ticks & 0xffffffff),unaff_EBX);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  puStack1 = (undefined *)0x0;
  pSStack2 = JsonConvert::JsonConvert_ToString_17((TimeSpan)0x0,(MethodInfo *)0x0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    pIStack5 = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  pIStack5 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_19
               (JsonTextWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_36((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_18(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_2
               (JsonTextWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value = uVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    value = (uint32_t)(pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  value = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_3
               (JsonTextWriter *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined *)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  value._0_4_ = (undefined *)uVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  value._0_4_ = (undefined *)func_?(&stack0x00000008,0,pCVar2);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    value._4_4_ = (pTStack3->klass->vtable).Write_5.methodPtr;
    (*(code *)(pTStack3->klass->vtable).Write_4.method)();
    return;
  }
  value._4_4_ = (Il2CppMethodPointer)0x0;
  value._0_4_ = &UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_4
               (JsonTextWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined *)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  value._0_4_ = (undefined *)uVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  value._0_4_ = (undefined *)func_?(&stack0x00000008,0,pCVar2);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    value._4_4_ = (pTStack3->klass->vtable).Write_5.methodPtr;
    (*(code *)(pTStack3->klass->vtable).Write_4.method)();
    return;
  }
  value._4_4_ = (Il2CppMethodPointer)0x0;
  value._0_4_ = &UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_5
               (JsonTextWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_5((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_11(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_6
               (JsonTextWriter *this,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00.hi = value._0_4_;
  value_00.flags = (uint32_t)in_stack_1;
  value_00.lo = 0;
  value_00.mid = unaff_ESI;
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value_00,unaff_EBP);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    in_stack_1 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  JsonConvert::JsonConvert_ToString_12
            ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  pTVar2 = (this->fields)._writer;
  if (pTVar2 != (TextWriter *)0x0) {
    pTVar3 = pTVar2->klass;
    pIStack4 = (pTVar3->vtable).Write_5.methodPtr;
    (*(code *)(pTVar3->vtable).Write_4.method)();
    return;
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_7
               (JsonTextWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_7((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_2(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(Int16) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_8
               (JsonTextWriter *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (uint)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = (Il2CppMethodPointer)(uVar1 & 0xffff);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    _value = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  _value = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(UInt16) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_9
               (JsonTextWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (uint)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = (Il2CppMethodPointer)(uVar1 & 0xffff);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?(&value,0,pCVar2,0);
  pTVar3 = (this->fields)._writer;
  if (pTVar3 != (TextWriter *)0x0) {
    pTVar4 = pTVar3->klass;
    _value = (pTVar4->vtable).Write_5.methodPtr;
    (*(code *)(pTVar4->vtable).Write_4.method)();
    return;
  }
  _value = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteWhitespace(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteWhitespace
               (JsonTextWriter *this,String *ws,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteWhitespace((JsonWriter *)this,ws,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_4.method)(pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JsonTextWriter(TextWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter__ctor
               (JsonTextWriter *this,TextWriter *textWriter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor((JsonWriter *)this,(MethodInfo *)0x0);
  if (textWriter != (TextWriter *)0x0) {
    (this->fields)._writer = textWriter;
    (this->fields)._quoteChar = 0x22;
    (this->fields)._quoteName = 1;
    (this->fields)._indentChar = 0x20;
    (this->fields)._indentation = 2;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_textWriter,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Base64Encoder get_Base64Encoder() */

Base64Encoder *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_get_Base64Encoder
          (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._base64Encoder;
  if (this_00 == (Base64Encoder *)0x0) {
    writer = (this->fields)._writer;
    this_00 = (Base64Encoder *)func_?(TypeInfo__Newtonsoft__Json__Utilities__Base64Encoder)
    ;
    Json::Utilities::Base64Encoder::Base64Encoder__ctor(this_00,writer,(MethodInfo *)0x0);
    (this->fields)._base64Encoder = this_00;
  }
  return this_00;
}


/* Char get_IndentChar() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_get_IndentChar
                   (JsonTextWriter *this,MethodInfo *method)

{
  return (this->fields)._indentChar;
}


/* Char get_QuoteChar() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_get_QuoteChar
                   (JsonTextWriter *this,MethodInfo *method)

{
  return (this->fields)._quoteChar;
}


/* Boolean get_QuoteName() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_get_QuoteName
               (JsonTextWriter *this,MethodInfo *method)

{
  return (this->fields)._quoteName;
}


/* Void set_IndentChar(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_set_IndentChar
               (JsonTextWriter *this,uint16_t value,MethodInfo *method)

{
  (this->fields)._indentChar = value;
  return;
}


/* Void set_Indentation(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_set_Indentation
               (JsonTextWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (-1 < value) {
    (this->fields)._indentation = value;
    return;
  }
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,StringLiteral_Indentation_value_must_be_greate,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_QuoteChar(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_set_QuoteChar
               (JsonTextWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((value != 0x22) && (value != 0x27)) {
    this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_00,StringLiteral_Invalid_JavaScript_string_quote_,(MethodInfo *)0x0);
    func_?(this_00,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._quoteChar = value;
  return;
}


/* Void set_QuoteName(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_set_QuoteName
               (JsonTextWriter *this,bool value,MethodInfo *method)

{
  (this->fields)._quoteName = value;
  return;
}

