
/* JsonSchemaGenerator+TypeSchema(Type, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator+TypeSchema::
     JsonSchemaGenerator_TypeSchema__ctor
               (JsonSchemaGenerator_TypeSchema *this,Type *type,JsonSchema *schema,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  (this->fields)._Type_k__BackingField = type;
  (this->fields)._Schema_k__BackingField = schema;
  return;
}

