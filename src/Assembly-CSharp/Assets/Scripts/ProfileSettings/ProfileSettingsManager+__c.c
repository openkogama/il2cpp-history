
/* ProfileSettingsManager+<>c() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager+<>c::
     ProfileSettingsManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9 =
       (ProfileSettingsManager_c *)value;
  func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->
                  static_fields,value);
  return;
}

