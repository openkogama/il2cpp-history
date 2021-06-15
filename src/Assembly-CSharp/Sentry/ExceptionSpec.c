
/* ExceptionSpec(String, String, List`1[Sentry.StackTraceSpec]) */

void Assembly-CSharp.dll::Sentry::ExceptionSpec::ExceptionSpec__ctor
               (ExceptionSpec *this,String *type,String *value,
               List_1_Sentry_StackTraceSpec_ *stacktrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).type = type;
  (this->fields).value = value;
  method_00 = TypeInfo__Sentry__StackTraceContainer;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields)._._._._.m_CachedPtr = stacktrace;
  (this->fields).stacktrace = (StackTraceContainer *)this_00;
  return;
}

