
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_Close
               (JsonTextWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoCompleteAll((JsonWriter *)this,(MethodInfo *)0x0);
  if (((this->fields)._._CloseOutput_k__BackingField != 0) &&
     ((this->fields)._writer != (TextWriter *)0x0)) {
    pTVar1 = (this->fields)._writer;
    pTVar2 = pTVar1->klass;
    (*(pTVar2->vtable).Close.methodPtr)(pTVar1,(pTVar2->vtable).Close.method);
  }
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_Flush
               (JsonTextWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields)._writer;
  if (pTStack_2 != (TextWriter *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).Flush.method;
    (*(pTStack_2->klass->vtable).Flush.methodPtr)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteComment
               (JsonTextWriter *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Ptr_);
    func_?(&StringLiteral__Ptr);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteComment((JsonWriter *)this,text,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,StringLiteral__Ptr);
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,text);
      pTVar1 = (this->fields)._writer;
      if (pTVar1 != (TextWriter *)0x0) {
        (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,StringLiteral_Ptr_);
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
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (token == JsonToken__Enum_EndObject) {
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(pTVar1->klass->vtable).Write_5.methodPtr)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.method);
      return;
    }
  }
  else if (token == JsonToken__Enum_EndArray) {
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(pTVar1->klass->vtable).Write_5.methodPtr)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.method);
      return;
    }
  }
  else {
    if (token != JsonToken__Enum_EndConstructor) goto code_?;
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(pTVar1->klass->vtable).Write_5.methodPtr)
                (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).Write_5.method);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&token);
  func_?(uVar2);
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  str0 = (String *)func_?(&StringLiteral_Invalid_JsonToken__);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar3,method_00);
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonWriterException);
  this_00 = (JsonWriterException *)func_?(uVar2);
  func_?(this_00);
  JsonWriterException::JsonWriterException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonTextWriter__WriteEnd_Newtonsoft__Json__JsonToken_
                 );
  EStack_4.monitor = (MonitorData *)&UNK_?;
  pJStack_5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void WriteIndent() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteIndent
               (JsonTextWriter *this,MethodInfo *method)

{
  if ((this->fields)._._formatting == 1) {
    pTVar1 = (this->fields)._writer;
    pSVar2 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
    if (pTVar1 == (TextWriter *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(pTVar1->klass->vtable).Write_5.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).Write_5.method);
    iVar4 = (this->fields)._indentation * (this->fields)._._top;
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        pTVar1 = (this->fields)._writer;
        if (pTVar1 == (TextWriter *)0x0) goto code_?;
        (*(pTVar1->klass->vtable).Write.methodPtr)
                  (pTVar1,(uint)(this->fields)._indentChar,(pTVar1->klass->vtable).Write.method);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return;
}


/* Void WriteIndentSpace() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteIndentSpace
               (JsonTextWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields)._writer;
  if (pTStack_2 != (TextWriter *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).Write.method;
    uStack_3 = 0x20;
    (*(pTStack_2->klass->vtable).Write.methodPtr)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteNull
               (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteNull((JsonWriter *)this,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)
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
    pMStack2 = (pTStack1->klass->vtable).Write.method;
    uStack3 = 0x3a;
    (*(pTStack1->klass->vtable).Write.methodPtr)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteRaw
               (JsonTextWriter *this,String *json,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)json,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,json);
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
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartArray((JsonWriter *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,::StringLiteral__);
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
    func_?(&StringLiteral_new_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartConstructor((JsonWriter *)this,name,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,StringLiteral_new_);
    pTVar1 = (this->fields)._writer;
    if (pTVar1 != (TextWriter *)0x0) {
      (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,name);
      pTVar1 = (this->fields)._writer;
      if (pTVar1 != (TextWriter *)0x0) {
        (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,::StringLiteral__);
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
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartObject((JsonWriter *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1,::StringLiteral__);
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteUndefined((JsonWriter *)this,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)value,(MethodInfo *)0x0);
  if (value != (String *)0x0) {
    Json::Utilities::JavaScriptUtils::JavaScriptUtils_WriteEscapedJavaScriptString
              ((this->fields)._writer,value,(this->fields)._quoteChar,1,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)
              (pTVar1,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,
               (pTVar1->klass->vtable).Write_5.method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValueDelimiter() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValueDelimiter
               (JsonTextWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields)._writer;
  if (pTStack_2 != (TextWriter *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).Write.method;
    uStack_3 = 0x2c;
    (*(pTStack_2->klass->vtable).Write.methodPtr)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValueInternal(String, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValueInternal
               (JsonTextWriter *this,String *value,JsonToken__Enum token,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields)._writer;
  if (pTStack_2 != (TextWriter *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).Write_5.method;
    pSStack_3 = value;
    (*(pTStack_2->klass->vtable).Write_5.methodPtr)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_1
               (JsonTextWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  iVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value = iVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::Int32::Int32_ToString_3
                 ((Int32 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_3(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)();
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  value_00 = (int8_t)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value_00,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = CONCAT31(in_stack_1,value_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::Byte::Byte_ToString_3
                 ((Byte *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  value_00 = (int8_t)_value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value_00,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = CONCAT31(in_stack_1,value_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::SByte::SByte_ToString_3
                 ((SByte *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_13
               (JsonTextWriter *this,Decimal value,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  auVar2 = value._0_12_;
  DVar3.mid = 0;
  DVar3.flags = auVar2._0_4_;
  DVar3.hi = auVar2._4_4_;
  DVar3.lo = auVar2._8_4_;
  DVar3.ulomidLE._0_4_ = unaff_ESI;
  DVar3.ulomidLE._4_4_ = unaff_EBP;
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,DVar3,unaff_retaddr);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_4 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  pJVar5 = in_stack_4;
  in_stack_4 = (JsonConvert__Class *)0x0;
  unaff_retaddr = (MethodInfo *)(int)value._4_8_;
  this = (JsonTextWriter *)(int)(value._4_8_ >> 0x20);
  iVar6 = value.flags;
  iVar7 = (int32_t)pJVar5;
  DVar3._0_8_ = CONCAT44(iVar6,iVar7);
  DVar3 = (Decimal)CONCAT168(DVar3._0_16_,DVar3._0_8_);
  in_stack_4 = (JsonConvert__Class *)0x0;
  JsonConvert::JsonConvert_ToString_15(DVar3,(MethodInfo *)value.hi);
  pTVar8 = (pJVar1->fields)._writer;
  if (pTVar8 != (TextWriter *)0x0) {
    (*(pTVar8->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_14
               (JsonTextWriter *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._dateData;
  value_01._8_4_ = unaff_EDI;
  value_01._dateTime._dateData = value._dateData & 0xffffffff;
  value_01._12_4_ = unaff_ESI;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_01,unaff_EBX);
  writer = (this->fields)._writer;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value._dateData._0_4_ = uVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._dateData;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  method_00 = (MethodInfo *)
              mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    uVar2 = (*(((TimeZone__Class *)method_00->methodPointer)->vtable).__unknown.methodPtr)
                      (method_00,in_stack_3,uVar1);
    DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Kind
                      ((DateTime *)&stack0x00000008,(MethodInfo *)0x0);
    value_00._dateData._4_4_ = (int)uVar2;
    value_00._dateData._0_4_ = in_stack_3;
    offset._ticks._4_4_ = DVar4;
    offset._ticks._0_4_ = (int)((ulonglong)uVar2 >> 0x20);
    JsonConvert::JsonConvert_WriteDateTimeString_1
              (writer,value_00,offset,DateTimeKind__Enum_Unspecified,method_00);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    (*(pTVar1->klass->vtable).Write.methodPtr)
              (pTVar1,(uint)(this->fields)._quoteChar,(pTVar1->klass->vtable).Write.method);
    pBVar2 = JsonTextWriter_get_Base64Encoder(this,(MethodInfo *)0x0);
    if (pBVar2 != (Base64Encoder *)0x0) {
      Json::Utilities::Base64Encoder::Base64Encoder_Encode
                (pBVar2,value,0,value->max_length,(MethodInfo *)0x0);
      pBVar2 = JsonTextWriter_get_Base64Encoder(this,(MethodInfo *)0x0);
      if (pBVar2 != (Base64Encoder *)0x0) {
        Json::Utilities::Base64Encoder::Base64Encoder_Flush(pBVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._writer;
        if (pTVar1 != (TextWriter *)0x0) {
          (*(pTVar1->klass->vtable).Write.methodPtr)
                    (pTVar1,(uint)(this->fields)._quoteChar,(pTVar1->klass->vtable).Write.method);
          return;
        }
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  auVar2 = value._0_12_;
  value_00._12_4_ = 0;
  value_00._dateTime._dateData = auVar2._0_8_;
  value_00._offsetMinutes = auVar2._8_2_;
  value_00._10_2_ = auVar2._10_2_;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,unaff_ESI);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_3 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  pJVar4 = in_stack_3;
  in_stack_3 = (JsonConvert__Class *)0x0;
  value_01._dateTime._dateData._4_4_ = (undefined4)value._dateTime._dateData;
  value_01._dateTime._dateData._0_4_ = pJVar4;
  value_01._8_8_ = value._4_8_;
  JsonConvert::JsonConvert_ToString_1(value_01,(MethodInfo *)0x0);
  pTVar5 = (pJVar1->fields)._writer;
  if (pTVar5 != (TextWriter *)0x0) {
    (*(pTVar5->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_17
               (JsonTextWriter *this,Guid value,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)value._4_8_,(MethodInfo *)value._12_4_);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    pMStack7 = (pTVar6->vtable).Write_5.method;
    (*(pTVar6->vtable).Write_5.methodPtr)();
    return;
  }
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._ticks;
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)(value._ticks & 0xffffffff),unaff_EDI);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  value._ticks._0_4_ = uVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::TimeSpan::TimeSpan_ToString
                   ((TimeSpan *)&stack0x00000008,(MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::String::String_Concat_4
                 (::StringLiteral__,str1,::StringLiteral__,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_19
               (JsonTextWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_36((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (value != (Uri *)0x0) {
    pSVar1 = (String *)
             (*(value->klass->vtable).ToString.methodPtr)
                       (value,(value->klass->vtable).ToString.method);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._writer;
    if (pTVar2 != (TextWriter *)0x0) {
      (*(pTVar2->klass->vtable).Write_5.methodPtr)
                (pTVar2,pSVar1,(pTVar2->klass->vtable).Write_5.method);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_2
               (JsonTextWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value = uVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::UInt32::UInt32_ToString_3
                 ((UInt32 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  value._0_4_ = uVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::Int64::Int64_ToString_3
                 ((Int64 *)&stack0x00000008,(String *)0x0,(IFormatProvider *)provider,
                  (MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_4
               (JsonTextWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  value._0_4_ = uVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::UInt64::UInt64_ToString_3
                 ((UInt64 *)&stack0x00000008,(String *)0x0,(IFormatProvider *)provider,
                  (MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_5
               (JsonTextWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_5((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_11(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)();
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  iVar1 = unaff_ESI;
  iVar2 = (int)((ulonglong)value & 0xffffffff);
  stack0xfffffff4 = (int)(((ulonglong)value & 0xffffffff) >> 0x20);
  auVar3 = CONCAT48(iVar1,uVar4);
  iVar5 = unaff_EBP;
  value_00._0_16_ = CONCAT412(iVar5,auVar3);
  value_00 = (Decimal)CONCAT816(uVar6,value_00._0_16_);
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value_00,(MethodInfo *)in_stack_7);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_7 = TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  JsonConvert::JsonConvert_ToString_12
            ((double)CONCAT44(SUB84(value,0),in_stack_7),(MethodInfo *)0x0);
  pTVar8 = (this->fields)._writer;
  if (pTVar8 != (TextWriter *)0x0) {
    pTVar9 = pTVar8->klass;
    pMStack10 = (pTVar9->vtable).Write_5.method;
    (*(pTVar9->vtable).Write_5.methodPtr)();
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_WriteValue_7
               (JsonTextWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_7((JsonWriter *)this,value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  JsonConvert::JsonConvert_ToString_2(value,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(pTVar1->klass->vtable).Write_5.methodPtr)();
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = uVar1 & 0xffff;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::Int16::Int16_ToString_3
                 ((Int16 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  _value = uVar1 & 0xffff;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSStack2 =
       mscorlib.dll::System::UInt16::UInt16_ToString_3
                 ((UInt16 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pTStack3 = (this->fields)._writer;
  if (pTStack3 != (TextWriter *)0x0) {
    pMStack4 = (pTStack3->klass->vtable).Write_5.method;
    method = (MethodInfo *)&UNK_?;
    (*(pTStack3->klass->vtable).Write_5.methodPtr)();
    return;
  }
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
    (*(pTVar1->klass->vtable).Write_5.methodPtr)(pTVar1);
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor((JsonWriter *)this,(MethodInfo *)0x0);
  if (textWriter != (TextWriter *)0x0) {
    (this->fields)._writer = textWriter;
    func_?(&(this->fields)._writer,textWriter);
    (this->fields)._quoteName = 1;
    (this->fields)._quoteChar = 0x22;
    (this->fields)._indentation = 2;
    (this->fields)._indentChar = 0x20;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_textWriter);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonTextWriter__JsonTextWriter_System__IO__TextWriter_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Base64Encoder get_Base64Encoder() */

Base64Encoder *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_get_Base64Encoder
          (JsonTextWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__Base64Encoder);
    cRam_? = '\x01';
  }
  if ((this->fields)._base64Encoder == (Base64Encoder *)0x0) {
    writer = (this->fields)._writer;
    pBVar1 = (Base64Encoder *)func_?(TypeInfo__Newtonsoft__Json__Utilities__Base64Encoder);
    if (pBVar1 == (Base64Encoder *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pBVar1 = (Base64Encoder *)(*pcVar2)();
      return pBVar1;
    }
    Json::Utilities::Base64Encoder::Base64Encoder__ctor(pBVar1,writer,(MethodInfo *)0x0);
    (this->fields)._base64Encoder = pBVar1;
    func_?(&(this->fields)._base64Encoder,pBVar1);
  }
  return (this->fields)._base64Encoder;
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
  if (-1 < value) {
    (this->fields)._indentation = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Indentation_value_must_be_greate);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__JsonTextWriter__set_Indentation_int_);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_QuoteChar(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextWriter::JsonTextWriter_set_QuoteChar
               (JsonTextWriter *this,uint16_t value,MethodInfo *method)

{
  if ((value != 0x22) && (value != 0x27)) {
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (ArgumentException *)func_?(uVar1);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Invalid_JavaScript_string_quote_);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
    func_?(&MethodInfo__Newtonsoft__Json__JsonTextWriter__set_QuoteChar_wchar_t_);
    func_?(this_00);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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

