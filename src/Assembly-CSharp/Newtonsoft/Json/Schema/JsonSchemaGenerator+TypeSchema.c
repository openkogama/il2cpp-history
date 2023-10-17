
/* JsonSchemaGenerator+TypeSchema(Type, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator+TypeSchema::
     JsonSchemaGenerator_TypeSchema__ctor
               (JsonSchemaGenerator_TypeSchema *this,Type *type,JsonSchema *schema,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_schema);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  (this->fields)._Type_k__BackingField = type;
  func_?(&this->fields,type);
  (this->fields)._Schema_k__BackingField = schema;
  func_?(&(this->fields)._Schema_k__BackingField,schema);
  return;
}

