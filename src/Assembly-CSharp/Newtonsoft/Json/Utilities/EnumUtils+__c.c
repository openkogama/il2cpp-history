
/* Boolean <GetNames>b__10_0(FieldInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils+<>c::EnumUtils_c__GetNames_b__10_0
               (EnumUtils_c *this,FieldInfo_1 *field,MethodInfo *method)

{
  if (field != (FieldInfo_1 *)0x0) {
    bVar1 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsLiteral
                      (field,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* EnumUtils+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils+<>c::EnumUtils_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
    cRam_? = '\x01';
  }
  value = (EnumUtils_c *)func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
  if (value != (EnumUtils_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

