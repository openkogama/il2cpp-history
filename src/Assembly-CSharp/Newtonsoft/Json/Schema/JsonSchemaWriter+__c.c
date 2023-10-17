
/* Boolean <WriteType>b__7_0(JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter+<>c::
     JsonSchemaWriter_c__WriteType_b__7_0
               (JsonSchemaWriter_c *this,JsonSchemaType__Enum v,MethodInfo *method)

{
  return v != JsonSchemaType__Enum_None;
}


/* JsonSchemaWriter+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaWriter+<>c::JsonSchemaWriter_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c);
    cRam_? = '\x01';
  }
  value = (JsonSchemaWriter_c *)
          func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c);
  if (value != (JsonSchemaWriter_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaWriter____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

