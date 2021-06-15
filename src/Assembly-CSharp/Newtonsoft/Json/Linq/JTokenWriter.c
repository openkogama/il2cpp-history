
/* Void AddParent(JContainer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddParent
               (JTokenWriter *this,JContainer *container,MethodInfo *method)

{
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).Add.method)(pJVar1,container,pJVar1->klass[1]._0.image);
    (this->fields)._parent = container;
    return;
  }
  (this->fields)._token = container;
  (this->fields)._parent = container;
  return;
}


/* Void AddValue(Object, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddValue
               (JTokenWriter *this,Object *value,JsonToken__Enum token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  value_00 = (JValue *)func_?();
  JVar1 = JValue::JValue_GetValueType
                    ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,(MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)value_00,0.0,(MethodInfo *)method_00);
  (value_00->fields)._value = value;
  (value_00->fields)._valueType = JVar1;
  JTokenWriter_AddValue_1(this,value_00,token,(MethodInfo *)0x0);
  return;
}


/* Void AddValue(JValue, JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_AddValue_1
               (JTokenWriter *this,JValue *value,JsonToken__Enum token,MethodInfo *method)

{
  pJVar1 = (this->fields)._parent;
  if (pJVar1 == (JContainer *)0x0) {
    (this->fields)._value = value;
    return;
  }
  (*(code *)(pJVar1->klass->vtable).Add.method)(pJVar1,value,pJVar1->klass[1]._0.image);
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).__unknown_2.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 4) {
      return;
    }
    pJVar1 = (this->fields)._parent;
    if (pJVar1 != (JContainer *)0x0) {
      (this->fields)._parent = (pJVar1->fields)._._parent;
      return;
    }
  }
  func_?(0);
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
    (*(code *)(this->klass->vtable).WriteEnd.method)
              (this,(this->klass->vtable).WriteEnd_1.methodPtr);
    iVar1 = (this->fields)._._top;
  }
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteComment
               (JTokenWriter *this,String *text,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Comment,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  value = (JValue *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)value,0.0,(MethodInfo *)method_00);
  (value->fields)._value = (Object *)text;
  (value->fields)._valueType = 5;
  JTokenWriter_AddValue_1(unaff_ESI,value,JsonToken__Enum_Comment,(MethodInfo *)0x0);
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
    if (pJVar1 != (JContainer *)0x0) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).__unknown_2.method)
                        (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
      if (iVar2 == 4) {
        pJVar1 = (this->fields)._parent;
        if (pJVar1 == (JContainer *)0x0) goto code_?;
        (this->fields)._parent = (pJVar1->fields)._._parent;
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteNull
               (JTokenWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Null,(MethodInfo *)0x0);
  JTokenWriter_AddValue_1(this,(JValue *)0x0,JsonToken__Enum_Null,(MethodInfo *)0x0);
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WritePropertyName
               (JTokenWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_PropertyName,(MethodInfo *)0x0);
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  JProperty::JProperty__ctor_1(this_00,name,(MethodInfo *)0x0);
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).Add.method)();
    (this->fields)._parent = (JContainer *)this_00;
    return;
  }
  (this->fields)._token = (JContainer *)this_00;
  (this->fields)._parent = (JContainer *)this_00;
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteRaw
               (JTokenWriter *this,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JRaw;
  value = (JValue *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)value,0.0,(MethodInfo *)method_00);
  (value->fields)._value = (Object *)json;
  (value->fields)._valueType = 0xd;
  JTokenWriter_AddValue_1(this,value,JsonToken__Enum_Raw,(MethodInfo *)0x0);
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartArray
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_StartArray,(MethodInfo *)0x0);
  JsonWriter::JsonWriter_Push((JsonWriter *)this,JTokenType__Enum_Array,(MethodInfo *)0x0);
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>;
  this_01 = (JContainer__Class *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  this_00[1].klass = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  pJStack1 = (this->fields)._parent;
  if (pJStack1 != (JContainer *)0x0) {
    pIStack2 = pJStack1->klass[1]._0.image;
    pJStack3 = this_00;
    (*(code *)(pJStack1->klass->vtable).Add.method)();
    (this->fields)._parent = this_00;
    return;
  }
  (this->fields)._token = this_00;
  (this->fields)._parent = this_00;
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartConstructor
               (JTokenWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_StartConstructor,(MethodInfo *)0x0);
  JsonWriter::JsonWriter_Push((JsonWriter *)this,JTokenType__Enum_Constructor,(MethodInfo *)0x0);
  this_00 = (JConstructor *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
  JConstructor::JConstructor__ctor_4(this_00,name,(MethodInfo *)0x0);
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    pJVar2 = pJVar1->klass;
    pIStack3 = pJVar2[1]._0.image;
    pJStack4 = this_00;
    (*(code *)(pJVar2->vtable).Add.method)();
    (this->fields)._parent = (JContainer *)this_00;
    return;
  }
  (this->fields)._token = (JContainer *)this_00;
  (this->fields)._parent = (JContainer *)this_00;
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteStartObject
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
  JsonWriter::JsonWriter_Push((JsonWriter *)this,JTokenType__Enum_Object,(MethodInfo *)0x0);
  this_00 = (JObject *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
  JObject::JObject__ctor(this_00,(MethodInfo *)0x0);
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    pJVar2 = pJVar1->klass;
    pIStack3 = pJVar2[1]._0.image;
    pJStack4 = this_00;
    (*(code *)(pJVar2->vtable).Add.method)();
    (this->fields)._parent = (JContainer *)this_00;
    return;
  }
  (this->fields)._token = (JContainer *)this_00;
  (this->fields)._parent = (JContainer *)this_00;
  return;
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteUndefined
               (JTokenWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  JTokenWriter_AddValue_1(this,(JValue *)0x0,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue
               (JTokenWriter *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_String,(MethodInfo *)0x0);
  if (value == (String *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  iStack_1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_10
               (JTokenWriter *this,uint16_t value,MethodInfo *method)

{
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_String,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(&value,0);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_11
               (JTokenWriter *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  value_00 = (Object *)
             func_?(TypeInfo__System__Byte,&stack0xfffffffb,
                             CONCAT13(value,(int3)extraout_var));
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_12
               (JTokenWriter *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  value_00 = (Object *)
             func_?(TypeInfo__System__SByte,&stack0xfffffffb,
                             CONCAT13(value,(int3)extraout_var));
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_13
               (JTokenWriter *this,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Float,(MethodInfo *)0x0);
  uStack_1 = value.flags;
  uStack_2 = value.hi;
  uStack_3 = value.lo;
  uStack_4 = value.mid;
  value_00 = (Object *)func_?(TypeInfo__System__Decimal,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_14
               (JTokenWriter *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Date,(MethodInfo *)0x0);
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value.ticks._ticks;
  uStack_4 = value.ticks._ticks._4_4_;
  iStack_5 = value.kind;
  value_00 = (Object *)func_?(TypeInfo__System__DateTime,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_15
               (JTokenWriter *this,DateTimeOffset value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Date,(MethodInfo *)0x0);
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value.dt.ticks._ticks;
  uStack_4 = value.dt.ticks._ticks._4_4_;
  iStack_5 = value.dt.kind;
  uStack_6 = value._12_8_;
  value_00 = (Object *)func_?(TypeInfo__System__DateTimeOffset,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Date,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_16
               (JTokenWriter *this,Byte__Array *value,MethodInfo *method)

{
  if (value != (Byte__Array *)0x0) {
    JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Bytes,(MethodInfo *)0x0);
    JTokenWriter_AddValue(this,(Object *)value,JsonToken__Enum_Bytes,(MethodInfo *)0x0);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)
            (this,(this->klass->vtable).WriteUndefined.methodPtr);
  JTokenWriter_AddValue(this,(Object *)0x0,JsonToken__Enum_Bytes,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_17
               (JTokenWriter *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_String,(MethodInfo *)0x0);
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value._ticks;
  value_00 = (Object *)func_?(TypeInfo__System__TimeSpan,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_18
               (JTokenWriter *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_String,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Uri->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Uri->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Uri);
  }
  bVar1 = System.dll::System::Uri::Uri_op_Equality(value,(Uri *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_String,(MethodInfo *)0x0)
    ;
    JTokenWriter_AddValue(this,(Object *)0x9,JsonToken__Enum_String,(MethodInfo *)0x0);
    return;
  }
  (*(code *)(this->klass->vtable).WriteNull.method)(this);
  JTokenWriter_AddValue(this,(Object *)value,JsonToken__Enum_String,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_2
               (JTokenWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  uStack_1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_3
               (JTokenWriter *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value;
  value_00 = (Object *)func_?(TypeInfo__System__Int64,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_4
               (JTokenWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value;
  value_00 = (Object *)func_?(TypeInfo__System__UInt64,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_5
               (JTokenWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Float,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Float,(MethodInfo *)0x0);
  uStack_1 = CONCAT44(value._0_4_,in_stack_2);
  value_00 = (Object *)func_?(TypeInfo__System__Double,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Float,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_7
               (JTokenWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Boolean,(MethodInfo *)0x0);
  value_00 = (Object *)
             func_?(TypeInfo__System__Boolean,&stack0xfffffffb,
                             CONCAT13(value,(int3)extraout_var));
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Boolean,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_8
               (JTokenWriter *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  uStack_1 = (uint)(ushort)value;
  value_00 = (Object *)func_?(TypeInfo__System__Int16,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_WriteValue_9
               (JTokenWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_AutoComplete((JsonWriter *)this,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  uStack_1 = (uint)value;
  value_00 = (Object *)func_?(TypeInfo__System__UInt16,&uStack_1);
  JTokenWriter_AddValue(this,value_00,JsonToken__Enum_Integer,(MethodInfo *)0x0);
  return;
}


/* JTokenWriter(JContainer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter__ctor
               (JTokenWriter *this,JContainer *container,MethodInfo *method)

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
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)container,StringLiteral_container,(MethodInfo *)0x0);
  (this->fields)._token = container;
  (this->fields)._parent = container;
  return;
}


/* JTokenWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter__ctor_1
               (JTokenWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
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
  (this->fields)._._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)this_00;
  if (this_00 != (List_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__Add_Newtonsoft__Json__Linq__JTokenType_
              );
    (this->fields)._._currentState = 0;
    (this->fields)._._formatting = 0;
    (this->fields)._._CloseOutput_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JToken get_Token() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter_get_Token
                   (JTokenWriter *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._token;
  if (pJVar1 == (JContainer *)0x0) {
    return (JToken *)(this->fields)._value;
  }
  return (JToken *)pJVar1;
}

