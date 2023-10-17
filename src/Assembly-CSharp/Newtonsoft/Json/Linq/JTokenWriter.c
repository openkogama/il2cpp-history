
/* Void AddParent(JContainer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddParent
               (JTokenWriter *this,JContainer *container,MethodInfo *method)

{
  if ((this->fields)._parent != (JContainer *)0x0) {
    pJVar1 = (this->fields)._parent;
    pJVar2 = pJVar1->klass;
    (*(pJVar2->vtable).Add.methodPtr)(pJVar1,container,(pJVar2->vtable).Add.method);
    (this->fields)._parent = container;
    func_?(&(this->fields)._parent,container);
    return;
  }
  (this->fields)._token = container;
  func_?(&(this->fields)._token,container);
  (this->fields)._parent = container;
  func_?(&(this->fields)._parent,container);
  return;
}


/* Void AddValue(Object, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddValue
               (JTokenWriter *this,Object *value,JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  value_00 = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (value_00 != (JValue *)0x0) {
    JVar1 = JValue::JValue_GetValueType
                      ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
    (value_00->fields)._value = value;
    func_?(&(value_00->fields)._value,value);
    (value_00->fields)._valueType = JVar1;
    JTokenWriter_AddValue_1(this,value_00,token,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddValue(JValue, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddValue_1
               (JTokenWriter *this,JValue *value,JsonToken__Enum token,MethodInfo *method)

{
  if ((this->fields)._parent == (JContainer *)0x0) {
    (this->fields)._value = value;
    func_?(&(this->fields)._value,value);
    return;
  }
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    (*(pJVar1->klass->vtable).Add.methodPtr)(pJVar1,value,(pJVar1->klass->vtable).Add.method);
    pJVar1 = (this->fields)._parent;
    if (pJVar1 != (JContainer *)0x0) {
      iVar2 = (*(pJVar1->klass->vtable).__unknown_2.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).__unknown_2.method);
      if (iVar2 != 4) {
        return;
      }
      pJVar1 = (this->fields)._parent;
      if (pJVar1 != (JContainer *)0x0) {
        pJVar1 = (pJVar1->fields)._._parent;
        (this->fields)._parent = pJVar1;
        func_?(&(this->fields)._parent,pJVar1);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_Close
               (JTokenWriter *this,MethodInfo *method)

{
  iVar1 = (this->fields)._._top;
  while (0 < iVar1) {
    (*(this->klass->vtable).WriteEnd.methodPtr)(this,(this->klass->vtable).WriteEnd.method);
    iVar1 = (this->fields)._._top;
  }
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteComment
               (JTokenWriter *this,String *text,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteComment((JsonWriter *)this,text,(MethodInfo *)0x0);
  value = JValue::JValue_CreateComment(text,(MethodInfo *)0x0);
  JTokenWriter_AddValue_1(this,value,JsonToken__Enum_Comment,(MethodInfo *)0x0);
  return;
}


/* Void WriteEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteEnd
               (JTokenWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    pJVar1 = (pJVar1->fields)._._parent;
    (this->fields)._parent = pJVar1;
    func_?(&(this->fields)._parent,pJVar1);
    if ((this->fields)._parent != (JContainer *)0x0) {
      pJVar1 = (this->fields)._parent;
      pJVar2 = pJVar1->klass;
      iVar3 = (*(pJVar2->vtable).__unknown_2.methodPtr)(pJVar1,(pJVar2->vtable).__unknown_2.method);
      if (iVar3 == 4) {
        pJVar1 = (this->fields)._parent;
        if (pJVar1 == (JContainer *)0x0) goto code_?;
        pJVar1 = (pJVar1->fields)._._parent;
        (this->fields)._parent = pJVar1;
        func_?(&(this->fields)._parent,pJVar1);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteNull
               (JTokenWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteNull((JsonWriter *)this,(MethodInfo *)0x0);
  JTokenWriter_AddValue_1(this,(JValue *)0x0,JsonToken__Enum_Null,(MethodInfo *)0x0);
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WritePropertyName
               (JTokenWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WritePropertyName((JsonWriter *)this,name,(MethodInfo *)0x0);
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  if (this_00 != (JProperty *)0x0) {
    JProperty::JProperty__ctor_1(this_00,name,(MethodInfo *)0x0);
    if ((this->fields)._parent != (JContainer *)0x0) {
      (*(((this->fields)._parent)->klass->vtable).Add.methodPtr)();
      (this->fields)._parent = (JContainer *)this_00;
      func_?();
      return;
    }
    (this->fields)._token = (JContainer *)this_00;
    func_?();
    (this->fields)._parent = (JContainer *)this_00;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteRaw
               (JTokenWriter *this,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JRaw);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)json,(MethodInfo *)0x0);
  value = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JRaw);
  if (value != (JValue *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBP);
    (value->fields)._value = (Object *)json;
    func_?(&(value->fields)._value,json);
    (value->fields)._valueType = 0xd;
    JTokenWriter_AddValue_1(this,value,JsonToken__Enum_Raw,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartArray
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartArray((JsonWriter *)this,(MethodInfo *)0x0);
  this_00 = (JArray *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
  if (this_00 != (JArray *)0x0) {
    JArray::JArray__ctor(this_00,(MethodInfo *)0x0);
    if ((this->fields)._parent != (JContainer *)0x0) {
      pJVar1 = (this->fields)._parent;
      (*(pJVar1->klass->vtable).Add.methodPtr)(pJVar1,this_00);
      (this->fields)._parent = (JContainer *)this_00;
      func_?(&(this->fields)._parent);
      return;
    }
    (this->fields)._token = (JContainer *)this_00;
    func_?(&(this->fields)._token);
    (this->fields)._parent = (JContainer *)this_00;
    func_?(&(this->fields)._parent);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartConstructor
               (JTokenWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JConstructor);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartConstructor((JsonWriter *)this,name,(MethodInfo *)0x0);
  this_00 = (JConstructor *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
  if (this_00 != (JConstructor *)0x0) {
    JConstructor::JConstructor__ctor_4(this_00,name,(MethodInfo *)0x0);
    if ((this->fields)._parent != (JContainer *)0x0) {
      (*(((this->fields)._parent)->klass->vtable).Add.methodPtr)();
      (this->fields)._parent = (JContainer *)this_00;
      func_?();
      return;
    }
    (this->fields)._token = (JContainer *)this_00;
    func_?();
    (this->fields)._parent = (JContainer *)this_00;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartObject
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartObject((JsonWriter *)this,(MethodInfo *)0x0);
  this_00 = (JObject *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
  if (this_00 != (JObject *)0x0) {
    JObject::JObject__ctor(this_00,(MethodInfo *)0x0);
    if ((this->fields)._parent != (JContainer *)0x0) {
      pJVar1 = (this->fields)._parent;
      (*(pJVar1->klass->vtable).Add.methodPtr)(pJVar1,this_00);
      (this->fields)._parent = (JContainer *)this_00;
      func_?(&(this->fields)._parent);
      return;
    }
    (this->fields)._token = (JContainer *)this_00;
    func_?(&(this->fields)._token);
    (this->fields)._parent = (JContainer *)this_00;
    func_?(&(this->fields)._parent);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteUndefined
               (JTokenWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteUndefined((JsonWriter *)this,(MethodInfo *)0x0);
  JTokenWriter_AddValue_1(this,(JValue *)0x0,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue
               (JTokenWriter *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)value,(MethodInfo *)0x0);
  if (value == (String *)0x0) {
    value = TypeInfo__System__String->static_fields->Empty;
  }
  if (this != (JTokenWriter *)0x0) {
    JTokenWriter_AddValue(this,(Object *)value,JsonToken__Enum_String,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteValue(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_1
               (JTokenWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  value = iVar1;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&value);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_10
               (JTokenWriter *this,uint16_t value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = mscorlib.dll::System::Char::Char_ToString((Char *)&value,(MethodInfo *)0x0);
  JTokenWriter_AddValue(this,(Object *)value_00,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_11
               (JTokenWriter *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Byte,&stack0x0000000b);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_12
               (JTokenWriter *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__SByte);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__SByte,&stack0x0000000b);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_13
               (JTokenWriter *this,Decimal value,MethodInfo *method)

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
  JTokenWriter_AddValue(this,value_01,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_14
               (JTokenWriter *this,DateTime value,MethodInfo *method)

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
  JTokenWriter_AddValue(this,value_01,JsonToken__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_15
               (JTokenWriter *this,DateTimeOffset value,MethodInfo *method)

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
  JTokenWriter_AddValue(this,value_01,JsonToken__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_16
               (JTokenWriter *this,Byte__Array *value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_35((JsonWriter *)this,value,(MethodInfo *)0x0);
  JTokenWriter_AddValue(this,(Object *)value,JsonToken__Enum_Bytes,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_17
               (JTokenWriter *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._ticks;
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)(value._ticks & 0xffffffff),unaff_EDI);
  value._ticks._0_4_ = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__TimeSpan,&stack0x00000008);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_18
               (JTokenWriter *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Guid);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)value._4_8_,(MethodInfo *)value._12_4_);
  aiStack_1[0] = value._a;
  aiStack_1[1]._0_2_ = value._b;
  aiStack_1[1]._2_2_ = value._c;
  aiStack_1[2]._0_1_ = value._d;
  aiStack_1[2]._1_1_ = value._e;
  aiStack_1[2]._2_1_ = value._f;
  aiStack_1[2]._3_1_ = value._g;
  aiStack_1[3]._0_1_ = value._h;
  aiStack_1[3]._1_1_ = value._i;
  aiStack_1[3]._2_1_ = value._j;
  aiStack_1[3]._3_1_ = value._k;
  value_00 = (Object *)func_?(TypeInfo__System__Guid,aiStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_19
               (JTokenWriter *this,Uri *value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_36((JsonWriter *)this,value,(MethodInfo *)0x0);
  JTokenWriter_AddValue(this,(Object *)value,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_2
               (JTokenWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt32);
    cRam_? = '\x01';
  }
  uVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  value = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__UInt32,&value);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_3
               (JTokenWriter *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int64);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__Int64,&stack0x00000008);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_4
               (JTokenWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt64);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  value_00 = (Object *)func_?(TypeInfo__System__UInt64,&stack0x00000008);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_5
               (JTokenWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_5((JsonWriter *)this,value,(MethodInfo *)0x0);
  fStack_1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_6
               (JTokenWriter *this,double value,MethodInfo *method)

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
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_7
               (JTokenWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_7((JsonWriter *)this,value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Boolean,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_8
               (JTokenWriter *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int16);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  value_00 = (Object *)func_?(TypeInfo__System__Int16,&value);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_9
               (JTokenWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt16);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  value_00 = (Object *)func_?(TypeInfo__System__UInt16,&value);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* JTokenWriter(JContainer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter__ctor
               (JTokenWriter *this,JContainer *container,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    func_?(&StringLiteral_container);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor((JsonWriter *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)container,StringLiteral_container,(MethodInfo *)0x0);
  (this->fields)._token = container;
  func_?(&(this->fields)._token,container);
  (this->fields)._parent = container;
  func_?(&(this->fields)._parent,container);
  return;
}


/* JTokenWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter__ctor_1
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                    ,unaff_EBP);
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
    (this->fields)._._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00;
    func_?(&(this->fields)._._stack,this_00);
    pLVar1 = (this->fields)._._stack;
    if (pLVar1 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
      func_?(pLVar1,0,
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
                     );
      (this->fields)._._currentState = 0;
      (this->fields)._._formatting = 0;
      (this->fields)._._CloseOutput_k__BackingField = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JToken get_Token() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_get_Token
                   (JTokenWriter *this,MethodInfo *method)

{
  if ((this->fields)._token == (JContainer *)0x0) {
    return (JToken *)(this->fields)._value;
  }
  return (JToken *)(this->fields)._token;
}

