
/* JToken <PropertyValues>b__21_0(JProperty) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<>c::JObject_c__PropertyValues_b__21_0
                   (JObject_c *this,JProperty *p,MethodInfo *method)

{
  if (p != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(p,(MethodInfo *)0x0);
    return pJVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar4)();
  return pJVar1;
}


/* JObject+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<>c::JObject_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject____c);
    cRam_? = '\x01';
  }
  value = (JObject_c *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject____c);
  if (value != (JObject_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

