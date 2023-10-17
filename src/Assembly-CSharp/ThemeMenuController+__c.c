
/* ThemeMenuController+<>c() */

void Assembly-CSharp.dll::ThemeMenuController+<>c::ThemeMenuController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeMenuController____c);
    cRam_? = '\x01';
  }
  value = (ThemeMenuController_c *)func_?(TypeInfo__ThemeMenuController____c);
  if (value != (ThemeMenuController_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ThemeMenuController____c->static_fields->__9 = value;
    func_?(TypeInfo__ThemeMenuController____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

