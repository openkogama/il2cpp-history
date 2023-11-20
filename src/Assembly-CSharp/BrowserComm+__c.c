
/* BrowserComm+<>c() */

void Assembly-CSharp.dll::BrowserComm+<>c::BrowserComm_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BrowserComm____c;
  value = (BrowserComm_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__BrowserComm____c->static_fields->__9 = value;
  func_?(TypeInfo__BrowserComm____c->static_fields,value);
  return;
}

