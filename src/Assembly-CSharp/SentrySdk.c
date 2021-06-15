
/* Void AddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_AddBreadcrumb(String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    iStack_5 = 0;
    uStack_6 = 0;
    if ((pSVar1->fields)._initialized == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Cannot_AddBreadcrumb_if_we_are_n,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar7 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                       ((DateTime *)&stack0xffffffd4,(MethodInfo *)0x0);
    uStack_3 = (undefined4)(pDVar7->ticks)._ticks;
    uStack_4 = *(undefined4 *)((int)&(pDVar7->ticks)._ticks + 4);
    iStack_5 = pDVar7->kind;
    uStack_6 = *(undefined4 *)&pDVar7->field_0xc;
    pSVar8 = (String *)func_?(&uStack_3,StringLiteral_yyyy_MM_ddTHH__mm__ss,0);
    pBVar9 = (pSVar1->fields)._breadcrumbs;
    uStack_10 = (pSVar1->fields)._lastBreadcrumbPos;
    pSStack_11 = (ScaleAnimationBase *)func_?(TypeInfo__Sentry__Breadcrumb);
    ScaleAnimationBase::ScaleAnimationBase_Play(pSStack_11,0.0,in_stack_12);
    (pSStack_11->fields)._._._._.m_CachedPtr = pSVar8;
    (pSStack_11->fields).state = (int32_t)message;
    if (pBVar9 != (Breadcrumb__Array *)0x0) {
      iVar13 = func_?(pSStack_11);
      if (iVar13 == 0) {
        uVar14 = func_?(0);
        func_?(uVar14);
      }
      else if (uStack_10 < pBVar9->max_length) {
        pBVar9->vector[uStack_10] = (Breadcrumb *)pSStack_11;
        iVar13 = (pSVar1->fields)._noBreadcrumbs;
        (pSVar1->fields)._lastBreadcrumbPos = ((pSVar1->fields)._lastBreadcrumbPos + 1) % 100;
        if (99 < iVar13) {
          return;
        }
        (pSVar1->fields)._noBreadcrumbs = iVar13 + 1;
        return;
      }
      uVar14 = func_?(0);
      func_?(uVar14);
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void CaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_CaptureEvent(SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
      func_?();
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
      func_?(TypeInfo__SentrySdk);
    }
    pSVar3 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar3 != (SentrySdk *)0x0) {
      if ((pSVar3->fields).Debug != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
      }
      breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar1,(MethodInfo *)0x0);
      this = (SentryEvent *)func_?(TypeInfo__Sentry__SentryEvent);
      Sentry::SentryEvent::SentryEvent__ctor
                (this,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
      if (this != (SentryEvent *)0x0) {
        (this->fields).level = StringLiteral_info;
        SentrySdk_DoCaptureEvent(pSVar1,this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator`1[UnityEngine.Networking.UnityWebRequestAsyncOperation]
   ContinueSendingEvent[SentryExceptionEvent](SentryExceptionEvent) */

IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_ContinueSendingEvent_3
          (SentrySdk *this,SentryExceptionEvent *event,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pIVar2 = (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)
           func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pIVar2,method->parameters[1]);
  if (pIVar2 != (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)0x0) {
    pIVar2[1].klass =
         (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation___Class *)event;
    pIVar2[4].monitor = (MonitorData *)this;
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)(*pcVar3)();
  return pIVar2;
}


/* Void DoAddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoAddBreadcrumb
               (SentrySdk *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((this->fields)._initialized == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Cannot_AddBreadcrumb_if_we_are_n,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)apIStack_6,(MethodInfo *)0x0);
  uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
  uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
  iStack_3 = pDVar5->kind;
  uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
  pvVar7 = (void *)func_?(&uStack_1,StringLiteral_yyyy_MM_ddTHH__mm__ss,0);
  pBVar8 = (this->fields)._breadcrumbs;
  uStack_9 = (this->fields)._lastBreadcrumbPos;
  method_00 = TypeInfo__Sentry__Breadcrumb;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields)._._._._.m_CachedPtr = pvVar7;
  (this_00->fields).state = (int32_t)message;
  if (pBVar8 != (Breadcrumb__Array *)0x0) {
    apIStack_6[0] = (pBVar8->klass->_0).element_class;
    iVar10 = func_?(this_00);
    if (iVar10 == 0) {
      apIStack_6[0] = (Il2CppClass *)0x0;
      uVar11 = func_?(0);
      func_?(uVar11);
    }
    else if (uStack_9 < pBVar8->max_length) {
      pBVar8->vector[uStack_9] = (Breadcrumb *)this_00;
      iVar10 = (this->fields)._noBreadcrumbs;
      (this->fields)._lastBreadcrumbPos = ((this->fields)._lastBreadcrumbPos + 1) % 100;
      if (99 < iVar10) {
        return;
      }
      (this->fields)._noBreadcrumbs = iVar10 + 1;
      return;
    }
    apIStack_6[0] = (Il2CppClass *)0x0;
    uVar11 = func_?(0);
    func_?(uVar11);
  }
  apIStack_6[0] = (Il2CppClass *)0x0;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DoCaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoCaptureEvent
               (SentrySdk *this,SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields).Debug != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_sending_event_to_sentry_,(MethodInfo *)0x0);
  }
  SentrySdk_ContinueSendingEvent_3
            (this,(SentryExceptionEvent *)event,
             System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (in_stack_3 == 0) {
    this_00 = (NullReferenceException *)func_?();
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,StringLiteral_routine_is_null,(MethodInfo *)0x0);
    func_?();
code_?:
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
  }
  else {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) goto code_?;
    pcRam_? = pcVar2;
    cVar5 = (*pcRam_?)();
    if (cVar5 == '\0') goto code_?;
    pcVar2 = pcRam_?;
    if ((pcRam_? != (code *)0x0) ||
       (pcVar2 = (code *)func_?(), pcVar2 != (code *)0x0)) {
      pcRam_? = pcVar2;
      (*pcRam_?)(in_stack_6);
      return;
    }
  }
  uVar4 = func_?(&UNK_?,0);
  func_?(uVar4);
code_?:
  this_01 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_01,StringLiteral_Coroutines_can_only_be_stopped_o,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields).Debug != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
    }
    breadcrumbs = SentrySdk_GetBreadcrumbs(this,(MethodInfo *)0x0);
    this_00 = (SentryEvent *)func_?(TypeInfo__Sentry__SentryEvent);
    Sentry::SentryEvent::SentryEvent__ctor
              (this_00,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
    if (this_00 != (SentryEvent *)0x0) {
      (this_00->fields).level = StringLiteral_info;
      SentrySdk_DoCaptureEvent(this,this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[Sentry.Breadcrumb] GetBreadcrumbs() */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetBreadcrumbs(SentrySdk *this,MethodInfo *method)

{
  iVar1 = (this->fields)._lastBreadcrumbPos;
  capacity = (this->fields)._noBreadcrumbs;
  pBVar2 = (this->fields)._breadcrumbs;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,capacity,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  iVar3 = 0;
  if (0 < capacity) {
    do {
      if (pBVar2 == (Breadcrumb__Array *)0x0) {
code_?:
        func_?(0);
code_?:
        uVar4 = func_?(0,0);
        func_?(uVar4);
        pcVar5 = (code *)swi(3);
        pLVar6 = (List_1_Sentry_Breadcrumb_ *)(*pcVar5)();
        return pLVar6;
      }
      uVar7 = (((iVar1 - capacity) + 100) % 100 + iVar3) % 100;
      if (pBVar2->max_length <= uVar7) goto code_?;
      if (this_00 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pBVar2->vector[uVar7],
                 MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                );
      iVar3 = iVar3 + 1;
    } while (iVar3 < capacity);
  }
  return (List_1_Sentry_Breadcrumb_ *)this_00;
}


/* IEnumerable`1[Sentry.StackTraceSpec] GetStackTraces(String) */

IEnumerable_1_Sentry_StackTraceSpec_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetStackTraces(String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SentrySdk___GetStackTraces_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = stackTrace;
    this[1].fields.state = -2;
    return (IEnumerable_1_Sentry_StackTraceSpec_ *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Sentry_StackTraceSpec_ *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(SentryConfig) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_Initialize
               (SentrySdk *this,SentryConfig sentryConfig,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  pSStack_2 = (SentrySdk__Class *)&DAT_?;
  puStack_3 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (sentryConfig.isEnabled == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_The_client_Sentry_SDK_is_disable,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
      func_?(TypeInfo__SentrySdk);
    }
    x = TypeInfo__SentrySdk->static_fields->_instance;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      uStack_1 = 0;
      this_00 = (Dsn *)func_?();
      Sentry::Dsn::Dsn__ctor(this_00,sentryConfig.dns,(MethodInfo *)0x0);
      uStack_1 = 0xffffffff;
      (this->fields)._dsn = this_00;
      pBVar5 = (Breadcrumb__Array *)func_?();
      (this->fields)._breadcrumbs = pBVar5;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
                ((Object_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        pSStack_2 = TypeInfo__SentrySdk;
        func_?();
      }
      TypeInfo__SentrySdk->static_fields->_instance = this;
      (this->fields)._initialized = 1;
      *unaff_FS_OFFSET = puStack_3;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = puStack_3;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields)._initialized == 0) {
      return;
    }
    if (((type != LogType__Enum_Error) && (type != LogType__Enum_Exception)) &&
       (type != LogType__Enum_Assert)) {
      return;
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar1 != (SentrySdk *)0x0) {
      if (fVar3 - (pSVar1->fields)._timeLastError <= _UNK_?) {
        return;
      }
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        func_?(TypeInfo__SentrySdk);
      }
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pSVar1 != (SentrySdk *)0x0) {
        (pSVar1->fields)._timeLastError = fVar3;
        if ((type == LogType__Enum_Exception) || (type == LogType__Enum_Assert)) {
          if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
          if (pSVar1 != (SentrySdk *)0x0) {
            SentrySdk_ScheduleException
                      (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          if (type != LogType__Enum_Error) {
            return;
          }
          if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
          if (pSVar1 != (SentrySdk *)0x0) {
            SentrySdk_ScheduleError
                      (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PrepareEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_PrepareEvent
               (SentrySdk *this,SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields).sendDefaultPii == 0) {
      return;
    }
    if ((event != (SentryEvent *)0x0) &&
       (pCVar2 = (event->fields).contexts, pCVar2 != (Context_2 *)0x0)) {
      pDVar3 = (pCVar2->fields).device;
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceName
                         ((MethodInfo *)0x0);
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).name = pSVar4;
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if ((pSVar1->fields).Debug == 0) {
code_?:
      if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
        func_?(TypeInfo__SentrySdk);
      }
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 != (SentrySdk *)0x0) {
        breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar1,(MethodInfo *)0x0);
        event = (SentryExceptionEvent *)func_?(TypeInfo__Sentry__SentryErrorEvent);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        Sentry::SentryEvent::SentryEvent__ctor
                  ((SentryEvent *)event,condition,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0
                  );
        this_00 = (event->fields)._.extra;
        if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_00,StringLiteral_error_stack_trace,
                     (CrossPlatformInputManager_VirtualButton *)stackTrace,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                    );
          routine = (IEnumerator *)
                    SentrySdk_ContinueSendingEvent_3
                              (this,event,
                               System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryErrorEvent>_Sentry__SentryErrorEvent_
                              );
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
    pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if (condition != (String *)0x0) {
      iVar4 = func_?(condition,(pOVar3->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pOVar3->max_length == 0) goto code_?;
    pOVar3->vector[0] = (Object *)condition;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
              (StringLiteral_condition___0_,pOVar3,(MethodInfo *)0x0);
    pOVar3 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if (stackTrace == (String *)0x0) {
code_?:
      if (pOVar3->max_length == 0) goto code_?;
      pOVar3->vector[0] = (Object *)stackTrace;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                (StringLiteral_stackTrace___0_,pOVar3,(MethodInfo *)0x0);
      goto code_?;
    }
    iVar4 = func_?(stackTrace,(pOVar3->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar4 = (MethodInfo *)&stack0xffffffc4;
  func_?();
  method_01 = (MethodInfo *)&stack0xffffffc4;
  if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (method_01 = (MethodInfo *)&stack0xffffffc4, (TypeInfo__SentrySdk->_1).cctor_started == 0)) {
    func_?(TypeInfo__SentrySdk);
    method_01 = pMVar4;
  }
  pSVar5 = TypeInfo__SentrySdk->static_fields->_instance;
  pSVar6 = unaff_EBX;
  if (pSVar5 == (SentrySdk *)0x0) goto code_?;
  if ((pSVar5->fields).Debug == 0) {
code_?:
    _Var8.genericMethod =
         (Il2CppGenericMethod *)
         func_?(TypeInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)_Var8.genericMethod,
               MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__List__);
    separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
    pSVar6 = stackTrace;
    if (separator == (Char__Array *)0x0) goto code_?;
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = 0x3a;
    if ((condition == (String *)0x0) ||
       (pSVar7 = mscorlib.dll::System::String::String_Split_1
                           (condition,separator,2,in_stack_8), pSVar7 == (String__Array *)0x0
       )) goto code_?;
    if (pSVar7->max_length != 0) {
      message = pSVar7->vector[0];
      if (pSVar7->max_length < 2) goto code_?;
      pMVar4 = (MethodInfo *)pSVar7->vector[1];
      if (pMVar4 != (MethodInfo *)0x0) {
        pSVar9 = mscorlib.dll::System::String::String_Substring
                            ((String *)pMVar4,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar10 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar10,0.0,pMVar4);
        if (pSVar10 != (ScaleAnimationBase *)0x0) {
          (pSVar10->fields)._._._._.m_CachedPtr = stackTrace;
          pSVar10[1].fields.state = -2;
          piVar11 = (int *)func_?(0,
                                           TypeInfo__System__Collections__Generic__IEnumerable<Sentry::StackTraceSpec>
                                           ,pSVar10);
          uStack_1 = 0;
          while (pSVar6 = stackTrace, piVar11 != (int *)0x0) {
            cVar12 = func_?();
            stackTrace = (String *)0x0;
            if (cVar12 == '\0') {
              uStack_1 = 0xffffffff;
              if (piVar11 != (int *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,piVar11);
              }
              if ((((uint)(TypeInfo__SentrySdk->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__SentrySdk->_1).cctor_started == 0)) {
                func_?(TypeInfo__SentrySdk);
              }
              pSVar5 = TypeInfo__SentrySdk->static_fields->_instance;
              pSVar6 = stackTrace;
              if (pSVar5 != (SentrySdk *)0x0) {
                breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar5,(MethodInfo *)0x0);
                event = (SentryExceptionEvent *)
                        func_?(TypeInfo__Sentry__SentryExceptionEvent);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pMVar4 = (MethodInfo *)&UNK_?;
                Sentry::SentryEvent::SentryEvent__ctor
                          ((SentryEvent *)event,message,tags,extraSentryData,breadcrumbs,
                           (MethodInfo *)0x0);
                this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
                List_1_UnityEngine_Vector4___ctor
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__
                          );
                pSVar10 = (ScaleAnimationBase *)func_?();
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pvVar13 = (void *)0x0;
                ScaleAnimationBase::ScaleAnimationBase_Play(pSVar10,0.0,method_01);
                (pSVar10->fields)._._._._.m_CachedPtr = pvVar13;
                (pSVar10->fields).state = (int32_t)pSVar9;
                _Var8.genericMethod = (Il2CppGenericMethod *)&UNK_?;
                this_01 = (ScaleAnimationBase *)func_?();
                ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,pMVar4);
                (this_01->fields)._._._._.m_CachedPtr = (void *)_Var8;
                (pSVar10->fields).originalScale.x = (float)this_01;
                pSVar6 = (String *)0x0;
                if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pSVar10,
                             MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
                            );
                  method_00 = TypeInfo__Sentry__ExceptionContainer;
                  pSVar10 = (ScaleAnimationBase *)func_?();
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar10,0.0,(MethodInfo *)method_00);
                  (pSVar10->fields)._._._._.m_CachedPtr = this_00;
                  (event->fields).exception = (ExceptionContainer *)pSVar10;
                  routine = (IEnumerator *)
                            SentrySdk_ContinueSendingEvent_3
                                      (this,event,
                                       System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryExceptionEvent>_Sentry__SentryExceptionEvent_
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0)
                  ;
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
              break;
            }
            uVar14 = 0;
            uVar15 = *(ushort *)(*piVar11 + 0xb6);
            if (uVar15 != 0) {
              stackTrace = *(String **)(*piVar11 + 0x58);
              do {
                if ((&stackTrace->klass)[(uint)uVar14 * 2] ==
                    (String__Class *)
                    TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>) {
                  puVar16 = (undefined4 *)
                            (*piVar11 + (int)((&stackTrace->monitor)[(uint)uVar14 * 2] + 0x18) * 8);
                  goto code_?;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar15);
            }
            puVar16 = (undefined4 *)
                      func_?(piVar11,
                                      TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>
                                      ,0);
code_?:
            item = (*(code *)*puVar16)(piVar11,puVar16[1]);
            pSVar6 = stackTrace;
            if ((List_1_UnityEngine_Vector4_ *)_Var8.genericMethod ==
                (List_1_UnityEngine_Vector4_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)_Var8.genericMethod,item,
                       MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__Add_Sentry__StackTraceSpec_
                      );
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
    pOVar17 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar6 = unaff_EBX;
    if (pOVar17 == (Object__Array *)0x0) goto code_?;
    if ((condition == (String *)0x0) ||
       (iVar18 = func_?(condition,(pOVar17->klass->_0).element_class), iVar18 != 0)) {
      if (pOVar17->max_length == 0) goto code_?;
      pOVar17->vector[0] = (Object *)condition;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                (StringLiteral_condition___0_,pOVar17,(MethodInfo *)0x0);
      pOVar17 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      pSVar6 = unaff_EBX;
      if (pOVar17 == (Object__Array *)0x0) goto code_?;
      if ((stackTrace != (String *)0x0) &&
         (iVar18 = func_?(stackTrace,(pOVar17->klass->_0).element_class), iVar18 == 0))
      goto code_?;
      pSVar6 = stackTrace;
      if (pOVar17->max_length != 0) {
        pOVar17->vector[0] = (Object *)stackTrace;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral_stackTrace___0_,pOVar17,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      uVar19 = func_?(0,0);
      func_?(uVar19);
code_?:
      uVar19 = func_?(0);
      func_?(uVar19);
      stackTrace = unaff_EBX;
code_?:
      uVar19 = func_?(0,0);
      func_?(uVar19);
      pSVar6 = stackTrace;
    }
    uVar19 = func_?(0);
    func_?(uVar19);
code_?:
    func_?(0);
code_?:
    uVar19 = func_?(0);
    func_?(uVar19);
  }
  uVar19 = func_?(0);
  func_?(uVar19);
code_?:
  uVar19 = func_?(0);
  func_?(uVar19);
  func_?(pSVar6,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* SentrySdk() */

void Assembly-CSharp.dll::SentrySdk::SentrySdk__ctor(SentrySdk *this,MethodInfo *method)

{
  (this->fields).sendDefaultPii = 1;
  (this->fields).Debug = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

