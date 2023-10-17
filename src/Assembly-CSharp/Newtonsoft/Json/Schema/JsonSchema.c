
/* JsonSchema Parse(String) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Parse
          (String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
    cRam_? = '\x01';
  }
  this = (JsonSchemaResolver *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (this != (JsonSchemaResolver *)0x0) {
    JsonSchemaResolver::JsonSchemaResolver__ctor(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
      func_?(&TypeInfo__System__IO__StringReader);
      func_?(&StringLiteral_json);
      cRam_? = '\x01';
    }
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)json,StringLiteral_json,(MethodInfo *)0x0);
    this_00 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
    if (this_00 != (StringReader *)0x0) {
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_00,json,(MethodInfo *)0x0);
      this_01 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
      if (this_01 != (JsonTextReader *)0x0) {
        JsonTextReader::JsonTextReader__ctor(this_01,(TextReader *)this_00,(MethodInfo *)0x0);
        pJVar1 = JsonSchema_Read_1((JsonReader *)this_01,this,(MethodInfo *)0x0);
        return pJVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchema Parse(String, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Parse_1
          (String *json,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    func_?(&TypeInfo__System__IO__StringReader);
    func_?(&StringLiteral_json);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)json,StringLiteral_json,(MethodInfo *)0x0);
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  if (this != (StringReader *)0x0) {
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,json,(MethodInfo *)0x0);
    this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
    if (this_00 != (JsonTextReader *)0x0) {
      JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
      pJVar1 = JsonSchema_Read_1((JsonReader *)this_00,resolver,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchema Read(JsonReader) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Read
          (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
    cRam_? = '\x01';
  }
  this = (JsonSchemaResolver *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (this != (JsonSchemaResolver *)0x0) {
    JsonSchemaResolver::JsonSchemaResolver__ctor(this,(MethodInfo *)0x0);
    pJVar1 = JsonSchema_Read_1(reader,this,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchema Read(JsonReader, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_Read_1
          (JsonReader *reader,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder);
    func_?(&StringLiteral_resolver);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  this = (JsonSchemaBuilder *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder)
  ;
  if (this != (JsonSchemaBuilder *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBX);
    this_00 = (LowLevelList_1_System_Object_ *)func_?();
    if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                );
      (this->fields)._stack = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
      func_?();
      (this->fields)._resolver = (JsonSchemaResolver *)this_00;
      func_?(&(this->fields)._resolver);
      (this->fields)._reader = reader;
      func_?(&this->fields,reader);
      if (reader != (JsonReader *)0x0) {
        iVar1 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
        if (iVar1 == 0) {
          pJVar2 = (this->fields)._reader;
          if (pJVar2 == (JsonReader *)0x0) goto code_?;
          (*(pJVar2->klass->vtable).__unknown.methodPtr)();
        }
        pJVar3 = JsonSchemaBuilder::JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
        return pJVar3;
      }
    }
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
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  if (this_00 != (StringWriter *)0x0) {
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
    this_01 = (JsonTextWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
    if (this_01 != (JsonTextWriter *)0x0) {
      JsonTextWriter::JsonTextWriter__ctor(this_01,(TextWriter *)this_00,(MethodInfo *)0x0);
      (this_01->fields)._._formatting = 1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
        cRam_? = '\x01';
      }
      this_02 = (JsonSchemaResolver *)
                func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
      if (this_02 != (JsonSchemaResolver *)0x0) {
        JsonSchemaResolver::JsonSchemaResolver__ctor(this_02,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
          func_?(&StringLiteral_resolver);
          func_?(&StringLiteral_writer);
          cRam_? = '\x01';
        }
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)this_01,StringLiteral_writer,(MethodInfo *)0x0);
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)this_02,StringLiteral_resolver,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        this_03 = (JsonSchemaWriter *)
                  func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
        if (this_03 != (JsonSchemaWriter *)0x0) {
          if (cRam_? == '\0') {
            func_?(&StringLiteral_writer);
            cRam_? = '\x01';
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this_03,ExceptionArgument__Enum_obj,method_00);
          Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                    ((Object *)this_01,StringLiteral_writer,(MethodInfo *)0x0);
          (this_03->fields)._writer = (JsonWriter *)this_01;
          func_?(&this_03->fields,this_01);
          (this_03->fields)._resolver = this_02;
          func_?(&(this_03->fields)._resolver,this_02);
          JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_03,this,(MethodInfo *)0x0);
          pSVar1 = (String *)
                   (*(this_00->klass->vtable).ToString.methodPtr)
                             (this_00,(this_00->klass->vtable).ToString.method);
          return pSVar1;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void WriteTo(JsonWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_WriteTo
               (JsonSchema *this,JsonWriter *writer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaResolver *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (this_00 != (JsonSchemaResolver *)0x0) {
    JsonSchemaResolver::JsonSchemaResolver__ctor(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
      func_?(&StringLiteral_resolver);
      func_?(&StringLiteral_writer);
      cRam_? = '\x01';
    }
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this_00,StringLiteral_resolver,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    this_01 = (JsonSchemaWriter *)
              func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
    if (this_01 != (JsonSchemaWriter *)0x0) {
      if (cRam_? == '\0') {
        func_?(&StringLiteral_writer);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
      (this_01->fields)._writer = writer;
      func_?(&this_01->fields,writer);
      (this_01->fields)._resolver = this_00;
      func_?(&(this_01->fields)._resolver,this_00);
      JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_01,this,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
    func_?(&StringLiteral_resolver);
    func_?(&StringLiteral_writer);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  this_00 = (JsonSchemaWriter *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter);
  if (this_00 != (JsonSchemaWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,(MethodInfo *)writer);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)writer,StringLiteral_writer,(MethodInfo *)0x0);
    (this_00->fields)._writer = writer;
    func_?();
    (this_00->fields)._resolver = resolver;
    func_?(&(this_00->fields)._resolver,resolver);
    JsonSchemaWriter::JsonSchemaWriter_WriteSchema(this_00,(JsonSchema *)writer,(MethodInfo *)0x0);
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
    func_?(&StringLiteral_N);
    cRam_? = '\x01';
  }
  GStack_1._a = 0;
  GStack_1._b = 0;
  GStack_1._c = 0;
  GStack_1._d = 0;
  GStack_1._e = 0;
  GStack_1._f = 0;
  GStack_1._g = 0;
  GStack_1._h = 0;
  GStack_1._i = 0;
  GStack_1._j = 0;
  GStack_1._k = 0;
  pGVar2 = mscorlib.dll::System::Guid::Guid_NewGuid(&GStack_3,(MethodInfo *)0x0);
  GStack_1._a = pGVar2->_a;
  GStack_1._b = pGVar2->_b;
  GStack_1._c = pGVar2->_c;
  GStack_1._d = pGVar2->_d;
  GStack_1._e = pGVar2->_e;
  GStack_1._f = pGVar2->_f;
  GStack_1._g = pGVar2->_g;
  GStack_1._h = pGVar2->_h;
  GStack_1._i = pGVar2->_i;
  GStack_1._j = pGVar2->_j;
  GStack_1._k = pGVar2->_k;
  pSVar4 = mscorlib.dll::System::Guid::Guid_ToString_1(&GStack_1,StringLiteral_N,(MethodInfo *)0x0)
  ;
  (this->fields)._internalId = pSVar4;
  method_00 = (MethodInfo *)&(this->fields)._internalId;
  func_?(method_00,pSVar4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._AllowAdditionalProperties_k__BackingField = 1;
  return;
}


/* JToken get_Default() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Default
                   (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Default_k__BackingField;
}


/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] get_Disallow() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Disallow
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Disallow_k__BackingField;
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
  uVar1 = *(undefined3 *)&(this->fields)._Maximum_k__BackingField.field_0x1;
  uVar2 = *(undefined4 *)&(this->fields)._Maximum_k__BackingField.field_0x4;
  uVar3 = *(undefined4 *)&(this->fields)._Maximum_k__BackingField.value;
  uVar4 = *(undefined4 *)((int)&(this->fields)._Maximum_k__BackingField.value + 4);
  __return_storage_ptr__->hasValue = (this->fields)._Maximum_k__BackingField.hasValue;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->value = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar4;
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
  uVar1 = *(undefined3 *)&(this->fields)._Minimum_k__BackingField.field_0x1;
  uVar2 = *(undefined4 *)&(this->fields)._Minimum_k__BackingField.field_0x4;
  uVar3 = *(undefined4 *)&(this->fields)._Minimum_k__BackingField.value;
  uVar4 = *(undefined4 *)((int)&(this->fields)._Minimum_k__BackingField.value + 4);
  __return_storage_ptr__->hasValue = (this->fields)._Minimum_k__BackingField.hasValue;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->value = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = uVar4;
  return __return_storage_ptr__;
}


/* Nullable`1[Int32] get_MinimumItems() */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_MinimumItems
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._MinimumItems_k__BackingField;
}


/* Nullable`1[Boolean] get_ReadOnly() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_ReadOnly
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._ReadOnly_k__BackingField;
}


/* Nullable`1[Boolean] get_Required() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Required
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Required_k__BackingField;
}


/* Nullable`1[Boolean] get_Transient() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Transient
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Transient_k__BackingField;
}


/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] get_Type() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_get_Type
          (JsonSchema *this,MethodInfo *method)

{
  return (this->fields)._Type_k__BackingField;
}


/* Void set_AllowAdditionalProperties(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::
     JsonSchema_set_AllowAdditionalProperties(JsonSchema *this,bool value,MethodInfo *method)

{
  (this->fields)._AllowAdditionalProperties_k__BackingField = value;
  return;
}


/* Void set_Default(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Default
               (JsonSchema *this,JToken *value,MethodInfo *method)

{
  (this->fields)._Default_k__BackingField = value;
  func_?(&(this->fields)._Default_k__BackingField,value);
  return;
}


/* Void set_Disallow(Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Disallow
               (JsonSchema *this,Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_ value,
               MethodInfo *method)

{
  (this->fields)._Disallow_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._Disallow_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._Disallow_k__BackingField.value = value.value;
  return;
}


/* Void set_Enum(IList`1[Newtonsoft.Json.Linq.JToken]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Enum
               (JsonSchema *this,IList_1_Newtonsoft_Json_Linq_JToken_ *value,MethodInfo *method)

{
  (this->fields)._Enum_k__BackingField = value;
  func_?(&(this->fields)._Enum_k__BackingField,value);
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


/* Void set_Extends(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Extends
               (JsonSchema *this,JsonSchema *value,MethodInfo *method)

{
  (this->fields)._Extends_k__BackingField = value;
  func_?(&(this->fields)._Extends_k__BackingField,value);
  return;
}


/* Void set_Hidden(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Hidden
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._Hidden_k__BackingField = value;
  return;
}


/* Void set_Identity(IList`1[System.String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Identity
               (JsonSchema *this,IList_1_System_String_ *value,MethodInfo *method)

{
  (this->fields)._Identity_k__BackingField = value;
  func_?(&(this->fields)._Identity_k__BackingField,value);
  return;
}


/* Void set_Maximum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Maximum
               (JsonSchema *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField = in_stack_1;
  (this->fields)._Maximum_k__BackingField.field_0x4 = value.hasValue;
  *(undefined3 *)&(this->fields)._Maximum_k__BackingField.field_0x5 = value._1_3_;
  *(undefined4 *)&(this->fields)._Maximum_k__BackingField.value = value._4_4_;
  *(undefined4 *)((int)&(this->fields)._Maximum_k__BackingField.value + 4) = value.value._0_4_;
  return;
}


/* Void set_MaximumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MaximumItems
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumItems_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MaximumItems_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MaximumItems_k__BackingField.value = value.value;
  return;
}


/* Void set_MaximumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MaximumLength
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MaximumLength_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MaximumLength_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MaximumLength_k__BackingField.value = value.value;
  return;
}


/* Void set_Minimum(Nullable`1[Double]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Minimum
               (JsonSchema *this,Nullable_1_Double_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField = in_stack_1;
  (this->fields)._Minimum_k__BackingField.field_0x4 = value.hasValue;
  *(undefined3 *)&(this->fields)._Minimum_k__BackingField.field_0x5 = value._1_3_;
  *(undefined4 *)&(this->fields)._Minimum_k__BackingField.value = value._4_4_;
  *(undefined4 *)((int)&(this->fields)._Minimum_k__BackingField.value + 4) = value.value._0_4_;
  return;
}


/* Void set_MinimumItems(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MinimumItems
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumItems_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MinimumItems_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MinimumItems_k__BackingField.value = value.value;
  return;
}


/* Void set_MinimumLength(Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_MinimumLength
               (JsonSchema *this,Nullable_1_Int32_ value,MethodInfo *method)

{
  (this->fields)._MinimumLength_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._MinimumLength_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._MinimumLength_k__BackingField.value = value.value;
  return;
}


/* Void set_Properties(IDictionary`2[System.String,Newtonsoft.Json.Schema.JsonSchema]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Properties
               (JsonSchema *this,
               IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *value,
               MethodInfo *method)

{
  (this->fields)._Properties_k__BackingField = value;
  func_?(&(this->fields)._Properties_k__BackingField,value);
  return;
}


/* Void set_ReadOnly(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_ReadOnly
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._ReadOnly_k__BackingField = value;
  return;
}


/* Void set_Required(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Required
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._Required_k__BackingField = value;
  return;
}


/* Void set_Requires(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Requires
               (JsonSchema *this,String *value,MethodInfo *method)

{
  (this->fields)._Requires_k__BackingField = value;
  func_?(&(this->fields)._Requires_k__BackingField,value);
  return;
}


/* Void set_Transient(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchema::JsonSchema_set_Transient
               (JsonSchema *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._Transient_k__BackingField = value;
  return;
}

