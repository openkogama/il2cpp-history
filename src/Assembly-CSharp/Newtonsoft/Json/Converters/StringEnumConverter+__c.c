
/* String <GetEnumNameMap>b__7_0(EnumMemberAttribute) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter+<>c::
         StringEnumConverter_c__GetEnumNameMap_b__7_0
                   (StringEnumConverter_c *this,EnumMemberAttribute *a,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (a != (EnumMemberAttribute *)0x0) {
    return (a->fields).value;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* StringEnumConverter+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter+<>c::
     StringEnumConverter_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c);
    cRam_? = '\x01';
  }
  value = (StringEnumConverter_c *)
          func_?(TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c);
  if (value != (StringEnumConverter_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->static_fields,
                    value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

