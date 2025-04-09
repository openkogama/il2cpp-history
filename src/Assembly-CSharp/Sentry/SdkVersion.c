
/* SdkVersion() */

void Assembly-CSharp.dll::Sentry::SdkVersion::SdkVersion__ctor(SdkVersion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sentry_unity_lite);
    func_?(&StringLiteral__0_0_4);
    cRam_? = '\x01';
  }
  (this->fields).name = StringLiteral_sentry_unity_lite;
  func_?(&this->fields,StringLiteral_sentry_unity_lite);
  method_00 = (MethodInfo *)&(this->fields).version;
  *(String **)method_00 = StringLiteral__0_0_4;
  func_?(method_00,StringLiteral__0_0_4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

