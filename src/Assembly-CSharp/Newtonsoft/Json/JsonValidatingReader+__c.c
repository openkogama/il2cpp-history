
/* Boolean <ValidateEndObject>b__41_0(KeyValuePair`2[System.String,System.Boolean]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+<>c::
     JsonValidatingReader_c__ValidateEndObject_b__41_0
               (JsonValidatingReader_c *this,KeyValuePair_2_System_String_System_Boolean_ kv,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_bool>__get_Value__
                   );
    cRam_? = '\x01';
  }
  return kv.value == 0;
}


/* String <ValidateEndObject>b__41_1(KeyValuePair`2[System.String,System.Boolean]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+<>c::
         JsonValidatingReader_c__ValidateEndObject_b__41_1
                   (JsonValidatingReader_c *this,KeyValuePair_2_System_String_System_Boolean_ kv,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_bool>__get_Key__
                   );
    cRam_? = '\x01';
  }
  return kv.key;
}


/* JsonValidatingReader+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+<>c::JsonValidatingReader_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
    cRam_? = '\x01';
  }
  value = (JsonValidatingReader_c *)
          func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
  if (value != (JsonValidatingReader_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

