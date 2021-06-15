
/* JsonSchema Parse(String) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Parse
          (String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSchemaResolver *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  JsonSchemaResolver::JsonSchemaResolver__ctor(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)json,StringLiteral_json,(MethodInfo *)0x0);
  this_00 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_00,json,(MethodInfo *)0x0);
  this_01 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_01,(TextReader *)this_00,(MethodInfo *)0x0);
  pJVar1 = JsonSchema_Read_1((JsonReader *)this_01,this,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Parse(String, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Parse_1
          (String *json,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)json,StringLiteral_json,(MethodInfo *)0x0);
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,json,(MethodInfo *)0x0);
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
  pJVar1 = JsonSchema_Read_1((JsonReader *)this_00,resolver,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Read(JsonReader) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Read
          (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSchemaResolver *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  JsonSchemaResolver::JsonSchemaResolver__ctor(this,(MethodInfo *)0x0);
  pJVar1 = JsonSchema_Read_1(reader,this,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Read(JsonReader, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Read_1
          (JsonReader *reader,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  this = (ScaleAnimationBase *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,unaff_ESI);
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  (this->fields).state = (int32_t)this_00;
  (this->fields).originalScale.x = (float)unaff_ESI;
  (this->fields)._._._._.m_CachedPtr = reader;
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
    if (iVar1 == 0) {
      piVar2 = (this->fields)._._._._.m_CachedPtr;
      if (piVar2 == (int *)0x0) goto code_?;
      (**(code **)(*piVar2 + 0x118))();
    }
    pJVar3 = JsonSchemaBuilder::JsonSchemaBuilder_BuildSchema
                       ((JsonSchemaBuilder *)this,(MethodInfo *)0x0);
    return pJVar3;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar3 = (JsonSchema *)(*pcVar4)();
  return pJVar3;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_ToString
                   (JsonSchema *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
            (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  this_01 = (JsonTextWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
  JsonTextWriter::JsonTextWriter__ctor(this_01,(TextWriter *)this_00,(MethodInfo *)0x0);
  if (this_01 != (JsonTextWriter *)0x0) {
    bVar1 = cRam_? == '\0';
    (this_01->fields)._._formatting = 1;
    if (bVar1) {
      func_?();
      cRam_? = '\x01';
    }
    schema = (JsonSchema *)func_?();
    JsonSchemaResolver::JsonSchemaResolver__ctor((JsonSchemaResolver *)schema,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this_01,StringLiteral_writer,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)schema,StringLiteral_resolver,(MethodInfo *)0x0);
    this_02 = (JsonSchemaWriter *)func_?();
    JsonSchemaWriter::JsonSchemaWriter__ctor
              (this_02,(JsonWriter *)this_01,(JsonSchemaResolver *)schema,(MethodInfo *)0x0);
    if (this_02 != (JsonSchemaWriter *)0x0) {
      JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_02,schema,(MethodInfo *)0x0);
      if (this_00 != (StringWriter *)0x0) {
        pSVar2 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
        return pSVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void WriteTo(JsonWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_WriteTo
               (JsonSchema *this,JsonWriter *writer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaResolver *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  JsonSchemaResolver::JsonSchemaResolver__ctor(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)this_00,StringLiteral_resolver,(MethodInfo *)0x0);
  this_01 = (JsonSchemaWriter *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
  JsonSchemaWriter::JsonSchemaWriter__ctor(this_01,writer,this_00,(MethodInfo *)0x0);
  if (this_01 != (JsonSchemaWriter *)0x0) {
    JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_01,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteTo(JsonWriter, JsonSchemaResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_WriteTo_1
               (JsonSchema *this,JsonWriter *writer,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  this_00 = (JsonSchemaWriter *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
  JsonSchemaWriter::JsonSchemaWriter__ctor(this_00,writer,resolver,(MethodInfo *)0x0);
  if (this_00 != (JsonSchemaWriter *)0x0) {
    JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_00,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JsonSchema() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema__ctor
               (JsonSchema *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (Il2CppMethodPointer)0x0;
  pIStack_2 = (Il2CppMethodPointer)0x0;
  pIStack_3 = (InvokerMethod)0x0;
  pcStack_4 = (char *)0x0;
  if ((((uint)(TypeInfo__System__Guid->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Guid->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Guid);
  }
  pGVar5 = mscorlib.dll::System::Guid::Guid_NewGuid(&GStack_6,(MethodInfo *)0x0);
  pIStack_1 = (Il2CppMethodPointer)pGVar5->_a;
  pIStack_2 = *(Il2CppMethodPointer *)&pGVar5->_b;
  pIStack_3 = *(InvokerMethod *)&pGVar5->_d;
  pcStack_4 = *(char **)&pGVar5->_h;
  method_00 = (MethodInfo *)&pIStack_1;
  pSVar7 = (String *)func_?(method_00,StringLiteral_N,0);
  (this->fields)._internalId = pSVar7;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  (this->fields)._AllowAdditionalProperties_k__BackingField = 1;
  return;
}


/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] get_Disallow() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Disallow
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Disallow_k__BackingField;
}


/* Nullable`1[Double] get_DivisibleBy() */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_DivisibleBy
          (Nullable_1_Double_ *__return_storage_ptr__,JsonSchema *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._DivisibleBy_k__BackingField.value + 4);
  bVar2 = (this->fields)._DivisibleBy_k__BackingField.has_value;
  uVar3 = *(undefined3 *)&(this->fields)._DivisibleBy_k__BackingField.field_0x9;
  uVar4 = *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.field_0xc;
  *(undefined4 *)&__return_storage_ptr__->value =
       *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.value;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar1;
  __return_storage_ptr__->has_value = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}


/* Nullable`1[Boolean] get_ExclusiveMaximum() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_ExclusiveMaximum
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._ExclusiveMaximum_k__BackingField;
}


/* Nullable`1[Boolean] get_ExclusiveMinimum() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_ExclusiveMinimum
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._ExclusiveMinimum_k__BackingField;
}


/* Nullable`1[Boolean] get_Hidden() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Hidden
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Hidden_k__BackingField;
}


/* Nullable`1[Double] get_Maximum() */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Maximum
          (Nullable_1_Double_ *__return_storage_ptr__,JsonSchema *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._Maximum_k__BackingField.value + 4);
  bVar2 = (this->fields)._Maximum_k__BackingField.has_value;
  uVar3 = *(undefined3 *)&(this->fields)._Maximum_k__BackingField.field_0x9;
  uVar4 = *(undefined4 *)&(this->fields)._Maximum_k__BackingField.field_0xc;
  *(undefined4 *)&__return_storage_ptr__->value =
       *(undefined4 *)&(this->fields)._Maximum_k__BackingField.value;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar1;
  __return_storage_ptr__->has_value = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}


/* Nullable`1[Int32] get_MaximumItems() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_MaximumItems
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._MaximumItems_k__BackingField;
}


/* Nullable`1[Int32] get_MaximumLength() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_MaximumLength
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._MaximumLength_k__BackingField;
}


/* Nullable`1[Double] get_Minimum() */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Minimum
          (Nullable_1_Double_ *__return_storage_ptr__,JsonSchema *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._Minimum_k__BackingField.value + 4);
  bVar2 = (this->fields)._Minimum_k__BackingField.has_value;
  uVar3 = *(undefined3 *)&(this->fields)._Minimum_k__BackingField.field_0x9;
  uVar4 = *(undefined4 *)&(this->fields)._Minimum_k__BackingField.field_0xc;
  *(undefined4 *)&__return_storage_ptr__->value =
       *(undefined4 *)&(this->fields)._Minimum_k__BackingField.value;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar1;
  __return_storage_ptr__->has_value = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}


/* Nullable`1[Int32] get_MinimumItems() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_MinimumItems
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._MinimumItems_k__BackingField;
}


/* Nullable`1[Int32] get_MinimumLength() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_MinimumLength
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._MinimumLength_k__BackingField;
}


/* Nullable`1[Boolean] get_ReadOnly() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_ReadOnly
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._ReadOnly_k__BackingField;
}


/* Nullable`1[Boolean] get_Transient() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Transient
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Transient_k__BackingField;
}


/* Void set_Disallow(Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Disallow
               (JsonSchema *this,Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_ value,
               MethodInfo *method)

{
  (this->fields)._Disallow_k__BackingField.value = value.value;
  (this->fields)._Disallow_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._Disallow_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_DivisibleBy(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_DivisibleBy
               (JsonSchema *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._DivisibleBy_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._DivisibleBy_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._DivisibleBy_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._DivisibleBy_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_ExclusiveMaximum(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_ExclusiveMaximum
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._ExclusiveMaximum_k__BackingField = value;
  return;
}


/* Void set_ExclusiveMinimum(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_ExclusiveMinimum
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._ExclusiveMinimum_k__BackingField = value;
  return;
}


/* Void set_Format(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Format
               (JsonSchema *this,String *value,MethodInfo *method)

{
  (this->fields)._Format_k__BackingField = value;
  return;
}


/* Void set_Hidden(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Hidden
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._Hidden_k__BackingField = value;
  return;
}


/* Void set_Maximum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Maximum
               (JsonSchema *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._Maximum_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._Maximum_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._Maximum_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_MaximumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MaximumItems
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumItems_k__BackingField.value = value.value;
  (this->fields)._MaximumItems_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MaximumItems_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_Minimum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Minimum
               (JsonSchema *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField.value = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._Minimum_k__BackingField.value + 4) = value.value._0_4_;
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField.has_value = value.value._4_4_;
  (this->fields)._Minimum_k__BackingField.field_0xc = value.has_value;
  *(undefined3 *)&(this->fields)._Minimum_k__BackingField.field_0xd = value._9_3_;
  return;
}


/* Void set_MinimumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MinimumItems
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumItems_k__BackingField.value = value.value;
  (this->fields)._MinimumItems_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MinimumItems_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_MinimumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MinimumLength
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumLength_k__BackingField.value = value.value;
  (this->fields)._MinimumLength_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._MinimumLength_k__BackingField.field_0x5 = value._5_3_;
  return;
}


/* Void set_ReadOnly(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_ReadOnly
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._ReadOnly_k__BackingField = value;
  return;
}


/* Void set_Transient(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Transient
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._Transient_k__BackingField = value;
  return;
}


/* Void set_Type(Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Type
               (JsonSchema *this,Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_ value,
               MethodInfo *method)

{
  (this->fields)._Type_k__BackingField.value = value.value;
  (this->fields)._Type_k__BackingField.has_value = value.has_value;
  *(undefined3 *)&(this->fields)._Type_k__BackingField.field_0x5 = value._5_3_;
  return;
}

