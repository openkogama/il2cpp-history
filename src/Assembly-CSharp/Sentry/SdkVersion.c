
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
  (this->fields).version = StringLiteral__0_0_4;
  method_00 = (MethodInfo *)&(this->fields).version;
  func_?(method_00,StringLiteral__0_0_4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

