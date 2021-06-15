
/* Boolean IsValid(JToken, JsonSchema) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::SchemaExtensions::SchemaExtensions_IsValid
               (JToken *source,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Schema__SchemaExtensions___IsValid_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    *(undefined1 *)&(this->fields)._._._._.m_CachedPtr = 1;
    validationEventHandler =
         (ValidationEventHandler *)
         func_?(TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
    pMVar1 = 
    MethodInfo__Newtonsoft__Json__Schema__SchemaExtensions___IsValid_c__AnonStorey0____m__0_System__Object__Newtonsoft__Json__Schema__ValidationEventArgs_
    ;
    (validationEventHandler->fields)._._.method_ptr =
         MethodInfo__Newtonsoft__Json__Schema__SchemaExtensions___IsValid_c__AnonStorey0____m__0_System__Object__Newtonsoft__Json__Schema__ValidationEventArgs_
         ->methodPointer;
    (validationEventHandler->fields)._._.method = pMVar1;
    (validationEventHandler->fields)._._.m_target = (Object *)this;
    SchemaExtensions_Validate_1(source,schema,validationEventHandler,(MethodInfo *)0x0);
    return *(bool *)&(this->fields)._._._._.m_CachedPtr;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Validate(JToken, JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::SchemaExtensions::SchemaExtensions_Validate
               (JToken *source,JsonSchema *schema,MethodInfo *method)

{
  SchemaExtensions_Validate_1(source,schema,(ValidationEventHandler *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void Validate(JToken, JsonSchema, ValidationEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::SchemaExtensions::SchemaExtensions_Validate_1
               (JToken *source,JsonSchema *schema,ValidationEventHandler *validationEventHandler,
               MethodInfo *method)

{
  pJVar1 = (JsonValidatingReader *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  if (source != (JToken *)0x0) {
    reader = Json::Linq::JToken::JToken_CreateReader(source,(MethodInfo *)0x0);
    this = (JsonValidatingReader *)func_?();
    JsonValidatingReader::JsonValidatingReader__ctor(this,reader,(MethodInfo *)0x0);
    if (this != (JsonValidatingReader *)0x0) {
      JsonValidatingReader::JsonValidatingReader_set_Schema(this,schema,(MethodInfo *)0x0);
      if (validationEventHandler != (ValidationEventHandler *)0x0) {
        pJVar1 = this;
        JsonValidatingReader::JsonValidatingReader_add_ValidationEventHandler
                  (this,validationEventHandler,(MethodInfo *)0x0);
      }
      do {
        cVar2 = (*(code *)(this->klass->vtable).Read.method)();
      } while (cVar2 != '\0');
      schema->klass = (JsonSchema__Class *)0x58;
      if (this != (JsonValidatingReader *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = pJVar1;
      return;
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

