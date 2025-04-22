
/* ExceptionSpec(String, String, List`1[Sentry.StackTraceSpec]) */

void Assembly-CSharp.dll::Sentry::ExceptionSpec::ExceptionSpec__ctor
               (ExceptionSpec *this,String *type,String *value,
               List_1_Sentry_StackTraceSpec_ *stacktrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__StackTraceContainer);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).type = type;
  func_?(&this->fields,type);
  (this->fields).value = value;
  func_?(&(this->fields).value,value);
  method_00 = TypeInfo__Sentry__StackTraceContainer;
  value_00 = (StackTraceContainer *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value_00->fields).frames = stacktrace;
  func_?(&value_00->fields,stacktrace);
  (this->fields).stacktrace = value_00;
  func_?(&(this->fields).stacktrace,value_00);
  return;
}

