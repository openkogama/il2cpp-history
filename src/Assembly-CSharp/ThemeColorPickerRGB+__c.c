
/* ThemeColorPickerRGB+<>c() */

void Assembly-CSharp.dll::ThemeColorPickerRGB+<>c::ThemeColorPickerRGB_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeColorPickerRGB____c);
    cRam_? = '\x01';
  }
  value = (ThemeColorPickerRGB_c *)func_?(TypeInfo__ThemeColorPickerRGB____c);
  if (value != (ThemeColorPickerRGB_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ThemeColorPickerRGB____c->static_fields->__9 = value;
    func_?(TypeInfo__ThemeColorPickerRGB____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

