
/* Boolean
   <GetRequiredProperties>b__18_0(KeyValuePair`2[System.String,Newtonsoft.Json.Schema.JsonSchemaModel])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope+<>c::
     JsonValidatingReader_SchemaScope_c__GetRequiredProperties_b__18_0
               (JsonValidatingReader_SchemaScope_c *this,
               KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Value__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (p.value != (JsonSchemaModel *)0x0) {
    return ((p.value)->fields)._Required_k__BackingField;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* String 
   <GetRequiredProperties>b__18_1(KeyValuePair`2[System.String,Newtonsoft.Json.Schema.JsonSchemaModel])
    */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope+<>c::
         JsonValidatingReader_SchemaScope_c__GetRequiredProperties_b__18_1
                   (JsonValidatingReader_SchemaScope_c *this,
                   KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ p,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Key__
                   );
    cRam_? = '\x01';
  }
  return p.key;
}


/* JsonValidatingReader+SchemaScope+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope+<>c::
     JsonValidatingReader_SchemaScope_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
    cRam_? = '\x01';
  }
  value = (JsonValidatingReader_SchemaScope_c *)
          func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
  if (value != (JsonValidatingReader_SchemaScope_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields
                    ,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

