
/* SentryEvent(String, Dictionary`2[System.String,System.String],
   Dictionary`2[System.String,System.Object], List`1[Sentry.Breadcrumb]) */

void Assembly-CSharp.dll::Sentry::SentryEvent::SentryEvent__ctor
               (SentryEvent *this,String *message,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__Context);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__Sentry__SdkVersion);
    func_?(&StringLiteral_csharp);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    func_?(&StringLiteral_N);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  (this->fields).platform = StringLiteral_csharp;
  func_?(&(this->fields).platform,StringLiteral_csharp);
  value = (SdkVersion *)func_?(TypeInfo__Sentry__SdkVersion);
  if (value != (SdkVersion *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_sentry_unity_lite);
      func_?(&StringLiteral__0_0_4);
      cRam_? = '\x01';
    }
    (value->fields).name = StringLiteral_sentry_unity_lite;
    func_?(&value->fields,StringLiteral_sentry_unity_lite);
    (value->fields).version = StringLiteral__0_0_4;
    pMVar1 = (MethodInfo *)&(value->fields).version;
    func_?(pMVar1,StringLiteral__0_0_4);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
    pMVar1 = (MethodInfo *)&(this->fields).sdk;
    (this->fields).sdk = value;
    func_?(pMVar1,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    mscorlib.dll::System::Guid::Guid_NewGuid((Guid *)auStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::Guid::Guid_ToString_1
                       ((Guid *)&stack0xffffffe4,StringLiteral_N,(MethodInfo *)0x0);
    (this->fields).event_id = pSVar3;
    func_?(&this->fields,pSVar3);
    (this->fields).message = message;
    func_?();
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    DStack_4 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                       (&DStack_4,StringLiteral_yyyy_MM_ddTHH__mm__ss,(MethodInfo *)0x0);
    (this->fields).timestamp = pSVar3;
    func_?();
    (this->fields).level = StringLiteral_error;
    ppSStack_5 = &(this->fields).level;
    func_?();
    pLStack_6 = breadcrumbs;
    (this->fields).breadcrumbs = breadcrumbs;
    auStack_2._4_4_ = &(this->fields).breadcrumbs;
    auStack_2._0_4_ = &UNK_?;
    func_?();
    auStack_2._0_4_ = TypeInfo__Sentry__Context;
    this_00 = (Context *)func_?();
    if (this_00 != (Context *)0x0) {
      Context::Context__ctor(this_00,(MethodInfo *)0x0);
      (this->fields).contexts = this_00;
      func_?(&(this->fields).contexts,this_00);
      pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_version
                         ((MethodInfo *)0x0);
      (this->fields).release = pSVar3;
      func_?(&(this->fields).release,pSVar3);
      (this->fields).tags = tags;
      func_?(&(this->fields).tags,tags);
      (this->fields).extra = extra;
      func_?(&(this->fields).extra,extra);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

