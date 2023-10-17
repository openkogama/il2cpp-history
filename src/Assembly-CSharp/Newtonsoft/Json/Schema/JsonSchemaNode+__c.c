
/* String <GetId>b__27_0(JsonSchema) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode+<>c::
         JsonSchemaNode_c__GetId_b__27_0(JsonSchemaNode_c *this,JsonSchema *s,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (JsonSchema *)0x0) {
    return (s->fields)._internalId;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* JsonSchemaNode+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaNode+<>c::JsonSchemaNode_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
    cRam_? = '\x01';
  }
  value = (JsonSchemaNode_c *)
          func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c);
  if (value != (JsonSchemaNode_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaNode____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

