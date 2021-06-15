
/* SentryExceptionEvent(String, String, List`1[Sentry.Breadcrumb], List`1[Sentry.StackTraceSpec],
   Dictionary`2[System.String,System.String], Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::Sentry::SentryExceptionEvent::SentryExceptionEvent__ctor
               (SentryExceptionEvent *this,String *exceptionType,String *exceptionValue,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,List_1_Sentry_StackTraceSpec_ *stackTrace,
               Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SentryEvent::SentryEvent__ctor
            ((SentryEvent *)this,exceptionType,tags,extra,breadcrumbs,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
  pSVar1 = (ScaleAnimationBase *)func_?(TypeInfo__Sentry__ExceptionSpec);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)breadcrumbs);
  (pSVar1->fields)._._._._.m_CachedPtr = exceptionType;
  (pSVar1->fields).state = 0;
  method_00 = TypeInfo__Sentry__StackTraceContainer;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this_01->fields)._._._._.m_CachedPtr = stackTrace;
  (pSVar1->fields).originalScale.x = (float)this_01;
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pSVar1,
               MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
              );
    method_01 = TypeInfo__Sentry__ExceptionContainer;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
    (pSVar1->fields)._._._._.m_CachedPtr = this_00;
    this_01[1].fields.originalScale.x = (float)pSVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

