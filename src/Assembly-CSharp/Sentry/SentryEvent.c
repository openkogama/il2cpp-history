
/* SentryEvent(String, Dictionary`2[System.String,System.String],
   Dictionary`2[System.String,System.Object], List`1[Sentry.Breadcrumb]) */

void Assembly-CSharp.dll::Sentry::SentryEvent::SentryEvent__ctor
               (SentryEvent *this,String *message,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  (this->fields).platform = StringLiteral_csharp;
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Sentry__SdkVersion);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this_00->fields)._._._._.m_CachedPtr = StringLiteral_sentry_unity_lite;
  (this_00->fields).state = (int32_t)StringLiteral__0_0_4;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  (this->fields).sdk = (SdkVersion *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__System__Guid->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Guid->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar5 = mscorlib.dll::System::Guid::Guid_NewGuid((Guid *)&stack0xffffffcc,(MethodInfo *)0x0);
  iStack_1 = pGVar5->_a;
  uStack_2._0_2_ = pGVar5->_b;
  uStack_2._2_2_ = pGVar5->_c;
  uStack_3._0_1_ = pGVar5->_d;
  uStack_3._1_1_ = pGVar5->_e;
  uStack_3._2_1_ = pGVar5->_f;
  uStack_3._3_1_ = pGVar5->_g;
  uStack_4._0_1_ = pGVar5->_h;
  uStack_4._1_1_ = pGVar5->_i;
  uStack_4._2_1_ = pGVar5->_j;
  uStack_4._3_1_ = pGVar5->_k;
  pSVar6 = (String *)func_?(&iStack_1);
  (this->fields).event_id = pSVar6;
  (this->fields).message = message;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::DateTime::DateTime_get_UtcNow
            ((DateTime *)&stack0xffffffcc,(MethodInfo *)0x0);
  pSVar6 = (String *)func_?();
  (this->fields).timestamp = pSVar6;
  (this->fields).level = StringLiteral_error;
  (this->fields).breadcrumbs = breadcrumbs;
  this_01 = (Context_2 *)func_?();
  Context::Context_2__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).contexts = this_01;
  pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_version
                     ((MethodInfo *)0x0);
  (this->fields).release = pSVar6;
  (this->fields).tags = tags;
  (this->fields).extra = extra;
  return;
}

