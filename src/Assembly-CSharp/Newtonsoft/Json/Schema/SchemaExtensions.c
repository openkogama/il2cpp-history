
/* Boolean IsValid(JToken, JsonSchema) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::SchemaExtensions::SchemaExtensions_IsValid
               (JToken *source,JsonSchema *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__SchemaExtensions____c__DisplayClass0_0___IsValid_b__0_System__Object__Newtonsoft__Json__Schema__ValidationEventArgs_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__SchemaExtensions____c__DisplayClass0_0);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Schema__SchemaExtensions____c__DisplayClass0_0
                         );
  if (value == (Object *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  *(undefined1 *)&value[1].klass = 1;
  validationEventHandler =
       (ValidationEventHandler *)
       func_?(TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
  pMVar3 = 
  MethodInfo__Newtonsoft__Json__Schema__SchemaExtensions____c__DisplayClass0_0___IsValid_b__0_System__Object__Newtonsoft__Json__Schema__ValidationEventArgs_
  ;
  if (validationEventHandler == (ValidationEventHandler *)0x0) goto code_?;
  pvVar4 = (void *)func_?(
                                  MethodInfo__Newtonsoft__Json__Schema__SchemaExtensions____c__DisplayClass0_0___IsValid_b__0_System__Object__Newtonsoft__Json__Schema__ValidationEventArgs_
                                  );
  (validationEventHandler->fields)._._.method_ptr = pvVar4;
  (validationEventHandler->fields)._._.method = pMVar3;
  (validationEventHandler->fields)._._.m_target = value;
  func_?(&(validationEventHandler->fields)._._.m_target,value);
  uVar5 = pMVar3->parameters_count;
  (validationEventHandler->fields)._._.method_code = validationEventHandler;
  cVar6 = func_?(pMVar3);
  if (cVar6 == '\0') {
    if (uVar5 == 1) {
      if ((validationEventHandler->fields)._._.method_is_virtual == 0) {
        puVar7 = &UNK_?;
      }
      else {
        cVar6 = func_?(pMVar3);
        if (cVar6 == '\0') {
          cVar6 = func_?(pMVar3);
          if (cVar6 == '\0') {
            puVar7 = &UNK_?;
          }
          else {
            puVar7 = &UNK_?;
          }
        }
        else {
          cVar6 = func_?(pMVar3);
          puVar7 = &UNK_?;
          if (cVar6 != '\0') {
            puVar7 = &UNK_?;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if (pMVar3->indirect_call_via_invokers != 0) {
      puVar7 = &UNK_?;
      if (uVar5 != 2) {
        puVar7 = &UNK_?;
      }
      goto code_?;
    }
    if (uVar5 == 2) {
      puVar7 = &UNK_?;
      goto code_?;
    }
  }
  puVar7 = (validationEventHandler->fields)._._.method_ptr;
  (validationEventHandler->fields)._._.method_code = (validationEventHandler->fields)._._.m_target;
code_?:
  (validationEventHandler->fields)._._.invoke_impl = puVar7;
  (validationEventHandler->fields)._._.extra_arg = &UNK_?;
  SchemaExtensions_Validate_1(source,schema,validationEventHandler,(MethodInfo *)0x0);
  return *(bool *)&value[1].klass;
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader);
    func_?(&StringLiteral_source);
    func_?(&StringLiteral_schema);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)schema,StringLiteral_schema,(MethodInfo *)0x0);
  if (source != (JToken *)0x0) {
    reader = Linq::JToken::JToken_CreateReader(source,(MethodInfo *)0x0);
    this = (JsonValidatingReader *)func_?();
    if (this != (JsonValidatingReader *)0x0) {
      JsonValidatingReader::JsonValidatingReader__ctor(this,reader,(MethodInfo *)0x0);
      uStack_1 = 1;
      if (this != (JsonValidatingReader *)0x0) {
        JsonValidatingReader::JsonValidatingReader_set_Schema(this,schema,(MethodInfo *)0x0);
        if (validationEventHandler != (ValidationEventHandler *)0x0) {
          if (this == (JsonValidatingReader *)0x0) goto code_?;
          JsonValidatingReader::JsonValidatingReader_add_ValidationEventHandler
                    (this,validationEventHandler,(MethodInfo *)0x0);
        }
        while (this != (JsonValidatingReader *)0x0) {
          cVar4 = (*(this->klass->vtable).Read.methodPtr)();
          if (cVar4 == '\0') {
            uStack_1 = 0xffffffff;
            if (this != (JsonValidatingReader *)0x0) {
              func_?();
            }
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

