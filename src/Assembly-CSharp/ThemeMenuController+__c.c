
/* ThemeMenuController+<>c() */

void Assembly-CSharp.dll::ThemeMenuController+<>c::ThemeMenuController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeMenuController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeMenuController____c;
  value = (ThemeMenuController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ThemeMenuController____c->static_fields->__9 = value;
  func_?(TypeInfo__ThemeMenuController____c->static_fields,value);
  return;
}

