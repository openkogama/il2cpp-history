
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
  this_00 = (Object__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
  pOVar1 = (Object *)func_?(TypeInfo__Sentry__ExceptionSpec);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)breadcrumbs);
  pOVar1[1].klass = (Object__Class *)exceptionType;
  func_?();
  pOVar1[1].monitor = (MonitorData *)exceptionType;
  func_?();
  method_01 = TypeInfo__Sentry__StackTraceContainer;
  value = (Object__Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (value->_0).name = (char *)stackTrace;
  func_?(&(value->_0).name,stackTrace);
  pOVar1[2].klass = value;
  func_?(pOVar1 + 2,value);
  if (this_00 != (Object__Class *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,pOVar1,
               MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
              );
    method_00 = TypeInfo__Sentry__ExceptionContainer;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pOVar1[1].klass = this_00;
    func_?();
    exceptionType[3].fields._stringLength = (int32_t)pOVar1;
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

