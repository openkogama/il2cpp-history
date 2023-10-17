
/* SentryExceptionEvent(String, String, List`1[Sentry.Breadcrumb], List`1[Sentry.StackTraceSpec],
   Dictionary`2[System.String,System.String], Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::Sentry::SentryExceptionEvent::SentryExceptionEvent__ctor
               (SentryExceptionEvent *this,String *exceptionType,String *exceptionValue,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,List_1_Sentry_StackTraceSpec_ *stackTrace,
               Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__ExceptionContainer);
    func_?(&TypeInfo__Sentry__ExceptionSpec);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
    cRam_? = '\x01';
  }
  SentryEvent::SentryEvent__ctor
            ((SentryEvent *)this,exceptionType,tags,extra,breadcrumbs,(MethodInfo *)0x0);
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)exceptionType);
      value[1].klass = (Object__Class *)exceptionType;
      func_?();
      value[1].monitor = (MonitorData *)exceptionValue;
      func_?(&value[1].monitor,exceptionValue);
      value_00 = (Object__Class *)func_?(TypeInfo__Sentry__StackTraceContainer);
      if (value_00 != (Object__Class *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)exceptionType);
        (value_00->_0).name = (char *)stackTrace;
        func_?();
        value[2].klass = value_00;
        func_?(value + 2,value_00);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_00,value,
                   MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
                  );
        value_01 = (Object__Array *)func_?(TypeInfo__Sentry__ExceptionContainer);
        if (value_01 != (Object__Array *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value_01,ExceptionArgument__Enum_obj,(MethodInfo *)exceptionType);
          value_01->bounds = (Il2CppArrayBounds *)this_00;
          func_?();
          this_00[2].fields._items = value_01;
          func_?(&this_00[2].fields,value_01);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

