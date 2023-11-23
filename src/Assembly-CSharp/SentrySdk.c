
/* Void AddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_AddBreadcrumb(String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SentrySdk);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Sentry__Breadcrumb);
      func_?(&TypeInfo__System__DateTime);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
      func_?(&StringLiteral_Cannot_AddBreadcrumb_if_we_are_n);
      cRam_? = '\x01';
    }
    if ((pSVar1->fields)._initialized == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Cannot_AddBreadcrumb_if_we_are_n,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    item1 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                      ((DateTime *)&stack0xffffffec,StringLiteral_yyyy_MM_ddTHH__mm__ss,
                       (MethodInfo *)0x0);
    pBVar3 = (pSVar1->fields)._breadcrumbs;
    uVar4 = (pSVar1->fields)._lastBreadcrumbPos;
    this = (Tuple_2_Object_Object_ *)func_?(TypeInfo__Sentry__Breadcrumb);
    mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
              (this,(Object *)item1,(Object *)message,(MethodInfo *)0x0);
    if (pBVar3 != (Breadcrumb__Array *)0x0) {
      if ((this == (Tuple_2_Object_Object_ *)0x0) ||
         (iVar5 = func_?(this,(pBVar3->klass->_0).element_class), iVar5 != 0)) {
        if (uVar4 < pBVar3->max_length) {
          pBVar3->vector[uVar4] = (Breadcrumb *)this;
          func_?(pBVar3->vector + uVar4,this);
          (pSVar1->fields)._lastBreadcrumbPos = ((pSVar1->fields)._lastBreadcrumbPos + 1) % 100;
          if (99 < (pSVar1->fields)._noBreadcrumbs) {
            return;
          }
          piVar6 = &(pSVar1->fields)._noBreadcrumbs;
          *piVar6 = *piVar6 + 1;
          return;
        }
      }
      else {
        uVar7 = func_?(0);
        func_?(uVar7);
      }
      func_?();
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_CaptureEvent(SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SentrySdk);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar1 == (SentrySdk *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SentrySdk_DoCaptureEvent(pSVar1,(SentryEvent *)0x0,(MethodInfo *)0x0);
  }
  return;
}


/* Void CaptureMessage(String, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_CaptureMessage
               (String *message,Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SentrySdk);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&TypeInfo__Sentry__SentryEvent);
      func_?(&TypeInfo__SentrySdk);
      func_?(&StringLiteral_sending_message_to_sentry_);
      func_?(&StringLiteral_info);
      cRam_? = '\x01';
    }
    pSVar3 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar3 != (SentrySdk *)0x0) {
      if ((pSVar3->fields).Debug != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
      }
      breadcrumbs = Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
                              ((pSVar1->fields)._breadcrumbs,(pSVar1->fields)._lastBreadcrumbPos,
                               (pSVar1->fields)._noBreadcrumbs,(MethodInfo *)0x0);
      this = (SentryEvent *)func_?(TypeInfo__Sentry__SentryEvent);
      Sentry::SentryEvent::SentryEvent__ctor
                (this,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
      if (this != (SentryEvent *)0x0) {
        (this->fields).level = StringLiteral_info;
        func_?(&(this->fields).level,StringLiteral_info);
        SentrySdk_DoCaptureEvent(pSVar1,this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator`1[UnityEngine.Networking.UnityWebRequestAsyncOperation]
   ContinueSendingEvent[Object](Object) */

IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_ContinueSendingEvent
          (SentrySdk *this,Object *event,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)func_?(pIVar1);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(method->field7_0x1c).rgctx_data[1].method);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    this_00[1].monitor = (MonitorData *)event;
    func_?(&this_00[1].monitor,event);
    return (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)(*pcVar2)();
  return pIVar3;
}


/* Void DoAddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoAddBreadcrumb
               (SentrySdk *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__Breadcrumb);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    func_?(&StringLiteral_Cannot_AddBreadcrumb_if_we_are_n);
    cRam_? = '\x01';
  }
  if ((this->fields)._initialized == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Cannot_AddBreadcrumb_if_we_are_n,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DStack_1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  item1 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                    (&DStack_1,StringLiteral_yyyy_MM_ddTHH__mm__ss,(MethodInfo *)0x0);
  pBVar2 = (this->fields)._breadcrumbs;
  puStack_3 = (undefined *)(this->fields)._lastBreadcrumbPos;
  this_00 = (Tuple_2_Object_Object_ *)func_?(TypeInfo__Sentry__Breadcrumb);
  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
            (this_00,(Object *)item1,(Object *)message,(MethodInfo *)0x0);
  if (pBVar2 == (Breadcrumb__Array *)0x0) goto code_?;
  if (this_00 == (Tuple_2_Object_Object_ *)0x0) {
code_?:
    if (puStack_3 < (undefined *)pBVar2->max_length) {
      pBVar2->vector[(int)puStack_3] = (Breadcrumb *)this_00;
      func_?();
      (this->fields)._lastBreadcrumbPos = ((this->fields)._lastBreadcrumbPos + 1) % 100;
      if (99 < (this->fields)._noBreadcrumbs) {
        return;
      }
      piVar4 = &(this->fields)._noBreadcrumbs;
      *piVar4 = *piVar4 + 1;
      return;
    }
  }
  else {
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
    func_?();
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DoCaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoCaptureEvent
               (SentrySdk *this,SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_sending_event_to_sentry_);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) {
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pSVar1->fields).Debug != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_sending_event_to_sentry_,(MethodInfo *)0x0);
  }
  SentrySdk_ContinueSendingEvent
            (this,(Object *)event,
             System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
            );
  if (in_stack_4 == 0) {
    func_?();
    this_00 = (NullReferenceException *)func_?();
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?();
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar6,pMVar5);
    func_?();
    func_?();
  }
  else {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    cVar7 = (*pcRam_?)();
    if (cVar7 != '\0') {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  this_01 = (ArgumentException *)func_?();
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_01,pSVar6,pMVar5);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DoCaptureMessage(String, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoCaptureMessage
               (SentrySdk *this,String *message,
               Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Sentry__SentryEvent);
    func_?(&TypeInfo__SentrySdk);
    func_?(&StringLiteral_sending_message_to_sentry_);
    func_?(&StringLiteral_info);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields).Debug != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
    }
    breadcrumbs = Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
                            ((this->fields)._breadcrumbs,(this->fields)._lastBreadcrumbPos,
                             (this->fields)._noBreadcrumbs,(MethodInfo *)0x0);
    this_00 = (SentryEvent *)func_?(TypeInfo__Sentry__SentryEvent);
    Sentry::SentryEvent::SentryEvent__ctor
              (this_00,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
    if (this_00 != (SentryEvent *)0x0) {
      (this_00->fields).level = StringLiteral_info;
      func_?(&(this_00->fields).level,StringLiteral_info);
      SentrySdk_DoCaptureEvent(this,this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[Sentry.Breadcrumb] GetBreadcrumbs() */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetBreadcrumbs(SentrySdk *this,MethodInfo *method)

{
  pLVar1 = Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
                     ((this->fields)._breadcrumbs,(this->fields)._lastBreadcrumbPos,
                      (this->fields)._noBreadcrumbs,(MethodInfo *)0x0);
  return pLVar1;
}


/* IEnumerable`1[Sentry.StackTraceSpec] GetStackTraces(String) */

IEnumerable_1_Sentry_StackTraceSpec_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetStackTraces(String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SentrySdk___GetStackTraces_d__20);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SentrySdk___GetStackTraces_d__20;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0xfffffffe;
  pOVar1 = (Object__Class *)
           mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                     ((MethodInfo *)0x0);
  value[2].klass = pOVar1;
  value[3].klass = (Object__Class *)stackTrace;
  func_?(value + 3,stackTrace);
  return (IEnumerable_1_Sentry_StackTraceSpec_ *)value;
}


/* Void Initialize(SentryConfig) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_Initialize
               (SentrySdk *this,SentryConfig sentryConfig,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__Breadcrumb);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Sentry__Dsn);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SentrySdk);
    func_?(&StringLiteral_The_client_Sentry_SDK_is_disable);
    cRam_? = '\x01';
  }
  if (sentryConfig.isEnabled == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_The_client_Sentry_SDK_is_disable,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  x = TypeInfo__SentrySdk->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uStack_1 = 0;
  this_00 = (Dsn *)func_?();
  Sentry::Dsn::Dsn__ctor(this_00,sentryConfig.dns,(MethodInfo *)0x0);
  (this->fields)._dsn = this_00;
  func_?();
  uStack_1 = 0xffffffff;
  pBVar5 = (Breadcrumb__Array *)func_?();
  (this->fields)._breadcrumbs = pBVar5;
  func_?();
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)this,(MethodInfo *)0x0);
  TypeInfo__SentrySdk->static_fields->_instance = this;
  func_?();
  (this->fields)._initialized = 1;
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void OnLogMessageReceived(String, String, LogType, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_OnLogMessageReceived
               (SentrySdk *this,String *condition,String *stackTrace,LogType__Enum type,
               Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SentrySdk);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar1 == (SentrySdk *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pSVar1->fields)._initialized != 0) &&
       (((type == LogType__Enum_Error || (type == LogType__Enum_Exception)) ||
        (type == LogType__Enum_Assert)))) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 == (SentrySdk *)0x0) goto code_?;
      if (_UNK_? < fVar4 - (pSVar1->fields)._timeLastError) {
        pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (pSVar1->fields)._timeLastError = fVar4;
        if ((type == LogType__Enum_Exception) || (type == LogType__Enum_Assert)) {
          pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
          if (pSVar1 != (SentrySdk *)0x0) {
            SentrySdk_ScheduleException
                      (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (type == LogType__Enum_Error) {
          pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
          if (pSVar1 == (SentrySdk *)0x0) goto code_?;
          SentrySdk_ScheduleError
                    (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void PrepareEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_PrepareEvent
               (SentrySdk *this,SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SentrySdk);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields).sendDefaultPii == 0) {
      return;
    }
    if ((event != (SentryEvent *)0x0) &&
       (pCVar2 = (event->fields).contexts, pCVar2 != (Context *)0x0)) {
      pDVar3 = (pCVar2->fields).device;
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceName
                         ((MethodInfo *)0x0);
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).name = pSVar4;
        func_?(&pDVar3->fields,pSVar4);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ScheduleError(String, String, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_ScheduleError
               (SentrySdk *this,String *condition,String *stackTrace,
               Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__Sentry__SentryErrorEvent);
    func_?(&
                    System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryErrorEvent>_Sentry__SentryErrorEvent_
                   );
    func_?(&TypeInfo__SentrySdk);
    func_?(&StringLiteral_sending_exception_to_sentry_);
    func_?(&StringLiteral_condition___0_);
    func_?(&StringLiteral_stackTrace___0_);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if ((pSVar1->fields).Debug == 0) {
code_?:
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 != (SentrySdk *)0x0) {
        breadcrumbs = Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
                                ((pSVar1->fields)._breadcrumbs,(pSVar1->fields)._lastBreadcrumbPos,
                                 (pSVar1->fields)._noBreadcrumbs,(MethodInfo *)0x0);
        this_00 = (SentryErrorEvent *)func_?(TypeInfo__Sentry__SentryErrorEvent);
        Sentry::SentryErrorEvent::SentryErrorEvent__ctor
                  (this_00,condition,breadcrumbs,stackTrace,tags,extraSentryData,(MethodInfo *)0x0);
        routine = (IEnumerator *)
                  SentrySdk_ContinueSendingEvent
                            (this,(Object *)this_00,
                             System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryErrorEvent>_Sentry__SentryErrorEvent_
                            );
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
    pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if ((condition != (String *)0x0) &&
       (iVar4 = func_?(condition,(pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (pOVar3->max_length == 0) goto code_?;
    pOVar3->vector[0] = (Object *)condition;
    func_?(pOVar3->vector,condition);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_condition___0_,pOVar3,(MethodInfo *)0x0);
    pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if ((stackTrace == (String *)0x0) ||
       (iVar4 = func_?(stackTrace,(pOVar3->klass->_0).element_class), iVar4 != 0)) {
      if (pOVar3->max_length == 0) goto code_?;
      pOVar3->vector[0] = (Object *)stackTrace;
      func_?(pOVar3->vector,stackTrace);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_stackTrace___0_,pOVar3,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ScheduleException(String, String, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_ScheduleException
               (SentrySdk *this,String *condition,String *stackTrace,
               Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<Sentry::StackTraceSpec>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__Add_Sentry__StackTraceSpec_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__Sentry__SentryExceptionEvent);
    func_?(&
                    System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryExceptionEvent>_Sentry__SentryExceptionEvent_
                   );
    func_?(&TypeInfo__SentrySdk);
    func_?(&StringLiteral_sending_exception_to_sentry_);
    func_?(&StringLiteral_condition___0_);
    func_?(&StringLiteral_stackTrace___0_);
    cRam_? = '\x01';
  }
  pSVar4 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar4 == (SentrySdk *)0x0) goto code_?;
  if ((pSVar4->fields).Debug == 0) {
code_?:
    stackTrace_00 =
         (List_1_Sentry_StackTraceSpec_ *)
         func_?(TypeInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)stackTrace_00,
               MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__List__);
    separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
    if (separator == (Char__Array *)0x0) goto code_?;
    if (separator->max_length != 0) {
      separator->vector[0] = 0x3a;
      if ((condition == (String *)0x0) ||
         (pSVar5 = mscorlib.dll::System::String::String_Split_2
                             (condition,separator,2,(MethodInfo *)0x0),
         pSVar5 == (String__Array *)0x0)) goto code_?;
      if ((pSVar5->max_length != 0) && (exceptionType = pSVar5->vector[0], 1 < pSVar5->max_length))
      {
        if (pSVar5->vector[1] != (String *)0x0) {
          exceptionValue =
               mscorlib.dll::System::String::String_Substring(pSVar5->vector[1],1,(MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          method_00 = TypeInfo__SentrySdk___GetStackTraces_d__20;
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          pOVar6[1].klass = (Object__Class *)0xfffffffe;
          pOVar7 = (Object__Class *)
                   mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                             ((MethodInfo *)0x0);
          pOVar6[2].klass = pOVar7;
          pOVar6[3].klass = (Object__Class *)stackTrace;
          func_?();
          piVar8 = (int *)func_?(0,
                                           TypeInfo__System__Collections__Generic__IEnumerable<Sentry::StackTraceSpec>
                                           ,pOVar6);
          uStack_1 = 1;
          while (piVar8 != (int *)0x0) {
            cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
            if (cVar9 == '\0') {
              uStack_1 = 0xffffffff;
              if (piVar8 != (int *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,piVar8);
              }
              uStack_1 = 0xffffffff;
              pSVar4 = TypeInfo__SentrySdk->static_fields->_instance;
              if (pSVar4 != (SentrySdk *)0x0) {
                breadcrumbs = Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
                                        ((pSVar4->fields)._breadcrumbs,
                                         (pSVar4->fields)._lastBreadcrumbPos,
                                         (pSVar4->fields)._noBreadcrumbs,(MethodInfo *)0x0);
                this_00 = (SentryExceptionEvent *)
                          func_?(TypeInfo__Sentry__SentryExceptionEvent);
                Sentry::SentryExceptionEvent::SentryExceptionEvent__ctor
                          (this_00,exceptionType,exceptionValue,breadcrumbs,stackTrace_00,tags,
                           extraSentryData,(MethodInfo *)0x0);
                routine = (IEnumerator *)
                          SentrySdk_ContinueSendingEvent
                                    (this,(Object *)this_00,
                                     System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryExceptionEvent>_Sentry__SentryExceptionEvent_
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              break;
            }
            if (piVar8 == (int *)0x0) break;
            uVar10 = 0;
            uVar11 = *(ushort *)(*piVar8 + 0xb6);
            piVar12 = piVar8;
            if (uVar11 != 0) {
              do {
                if (*(IEnumerator_1_Sentry_StackTraceSpec___Class **)
                     (*(int *)(*piVar8 + 0x58) + (uint)uVar10 * 8) ==
                    TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>) {
                  puVar13 = (undefined4 *)
                            (*piVar8 +
                            (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) * 8)
                  ;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            puVar13 = (undefined4 *)
                      func_?(piVar8,
                                      TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>
                                      ,0);
code_?:
            pOVar6 = (Object *)(*(code *)*puVar13)(piVar8,puVar13[1]);
            if (stackTrace_00 == (List_1_Sentry_StackTraceSpec_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)stackTrace_00,pOVar6,
                       MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__Add_Sentry__StackTraceSpec_
                      );
            piVar8 = piVar12;
          }
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
  pOVar14 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (pOVar14 == (Object__Array *)0x0) goto code_?;
  if ((condition == (String *)0x0) ||
     (iVar15 = func_?(condition,(pOVar14->klass->_0).element_class), iVar15 != 0)) {
    if (pOVar14->max_length == 0) {
code_?:
      func_?();
      goto code_?;
    }
    pOVar14->vector[0] = (Object *)condition;
    func_?(pOVar14->vector,condition);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_condition___0_,pOVar14,(MethodInfo *)0x0);
    pOVar14 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (pOVar14 == (Object__Array *)0x0) goto code_?;
    if ((stackTrace == (String *)0x0) ||
       (iVar15 = func_?(stackTrace,(pOVar14->klass->_0).element_class), iVar15 != 0)) {
      if (pOVar14->max_length != 0) {
        pOVar14->vector[0] = (Object *)stackTrace;
        func_?(pOVar14->vector,stackTrace);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                  (StringLiteral_stackTrace___0_,pOVar14,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar16 = func_?(0);
    func_?(uVar16);
  }
  uVar16 = func_?(0);
  func_?(uVar16);
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* SentrySdk() */

void Assembly-CSharp.dll::SentrySdk::SentrySdk__ctor(SentrySdk *this,MethodInfo *method)

{
  (this->fields).sendDefaultPii = 1;
  (this->fields).Debug = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

