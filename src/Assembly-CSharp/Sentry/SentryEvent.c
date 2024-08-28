
/* SentryEvent(String, Dictionary`2[System.String,System.String],
   Dictionary`2[System.String,System.Object], List`1[Sentry.Breadcrumb]) */

void Assembly-CSharp.dll::Sentry::SentryEvent::SentryEvent__ctor
               (SentryEvent *this,String *message,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Sentry__Context);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__Sentry__SdkVersion);
    func_?(&StringLiteral_csharp);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    func_?(&StringLiteral_N);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).platform;
  *ppSVar1 = StringLiteral_csharp;
  func_?(ppSVar1,StringLiteral_csharp);
  value = (SdkVersion *)func_?(TypeInfo__Sentry__SdkVersion);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sentry_unity_lite);
    func_?(&StringLiteral__0_0_4);
    cRam_? = '\x01';
  }
  (value->fields).name = StringLiteral_sentry_unity_lite;
  func_?(&value->fields,StringLiteral_sentry_unity_lite);
  pMVar2 = (MethodInfo *)&(value->fields).version;
  *(String **)pMVar2 = StringLiteral__0_0_4;
  func_?(pMVar2,StringLiteral__0_0_4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar2);
  pMVar2 = (MethodInfo *)&(this->fields).sdk;
  *(SdkVersion **)pMVar2 = value;
  func_?(pMVar2,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  mscorlib.dll::System::Guid::Guid_NewGuid((Guid *)auStack_3,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::Guid::Guid_ToString_1
                     ((Guid *)&stack0xffffffe4,StringLiteral_N,(MethodInfo *)0x0);
  (this->fields).event_id = pSVar4;
  func_?(&this->fields,pSVar4);
  (this->fields).message = message;
  func_?();
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uStack_5 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     ((DateTime *)&uStack_5,StringLiteral_yyyy_MM_ddTHH__mm__ss,(MethodInfo *)0x0);
  (this->fields).timestamp = pSVar4;
  func_?();
  ppSStack_6 = &(this->fields).level;
  *ppSStack_6 = StringLiteral_error;
  func_?();
  auStack_3._4_4_ = &(this->fields).breadcrumbs;
  pLStack_7 = breadcrumbs;
  *(List_1_Sentry_Breadcrumb_ **)auStack_3._4_4_ = breadcrumbs;
  auStack_3._0_4_ = &UNK_?;
  func_?();
  auStack_3._0_4_ = TypeInfo__Sentry__Context;
  this_00 = (Context *)func_?();
  Context::Context__ctor(this_00,(MethodInfo *)0x0);
  ppCVar8 = &(this->fields).contexts;
  *ppCVar8 = this_00;
  func_?(ppCVar8,this_00);
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_version
                     ((MethodInfo *)0x0);
  (this->fields).release = pSVar4;
  func_?();
  uStack_5._4_4_ = &(this->fields).tags;
  *uStack_5._4_4_ = tags;
  uStack_5._0_4_ = (Dictionary_2_System_String_System_Object_ *)&UNK_?;
  func_?();
  uStack_5._0_4_ = extra;
  (this->fields).extra = extra;
  func_?();
  return;
}

