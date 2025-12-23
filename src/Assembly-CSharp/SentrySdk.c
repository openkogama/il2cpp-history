
/* Void AddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_AddBreadcrumb(String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SentrySdk *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 == (SentrySdk *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SentrySdk_DoAddBreadcrumb(pSVar1,message,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void CaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_CaptureEvent(SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SentrySdk *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 == (SentrySdk *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SentrySdk_DoCaptureEvent(pSVar1,event,(MethodInfo *)0x0);
    }
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SentrySdk *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 != (SentrySdk *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Sentry__SentryEvent);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__SentrySdk);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_sending_message_to_sentry_);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_info);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar2 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar2 != (SentrySdk *)0x0) {
          if ((pSVar2->fields).Debug != 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
          }
          breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar1,(MethodInfo *)0x0);
          this = (SentryEvent *)FUN_?(TypeInfo__Sentry__SentryEvent);
          Sentry::SentryEvent::SentryEvent__ctor
                    (this,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
          if (this != (SentryEvent *)0x0) {
            bVar3 = iRam_? != 0;
            (this->fields).level = StringLiteral_info;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(this->fields).level >> 0xc);
              puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar6 = *puVar5;
                LOCK();
                uVar7 = *puVar5;
                if (uVar6 == uVar7) {
                  *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (uVar6 != uVar7);
            }
            SentrySdk_DoCaptureEvent(pSVar1,this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* IEnumerator`1[UnityEngine.Networking.UnityWebRequestAsyncOperation]
   ContinueSendingEvent[Object](Object) */

IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_ContinueSendingEvent
          (SentrySdk *this,Object *event,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pIVar2 = (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)
           FUN_?(pvVar1);
  *(undefined4 *)&pIVar2[1].klass = 0;
  pIVar2[2].klass =
       (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation___Class *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)(pIVar2 + 2) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  pIVar2[2].monitor = (MonitorData *)event;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&pIVar2[2].monitor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return pIVar2;
}


/* Void DoAddBreadcrumb(String) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoAddBreadcrumb
               (SentrySdk *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__Breadcrumb);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cannot_AddBreadcrumb_if_we_are_n);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._initialized == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Cannot_AddBreadcrumb_if_we_are_n;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar1 = StringLiteral_yyyy_MM_ddTHH__mm__ss;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pBVar4 = (this->fields)._breadcrumbs;
  uVar5 = (this->fields)._lastBreadcrumbPos;
  pBVar6 = (Breadcrumb *)FUN_?(TypeInfo__Sentry__Breadcrumb);
  (pBVar6->fields).timestamp = pSVar1;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pBVar6->fields >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  iVar12 = iRam_?;
  (pBVar6->fields).message = message;
  if (iVar12 != 0) {
    uVar7 = (uint)((ulonglong)&(pBVar6->fields).message >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (pBVar4 == (Breadcrumb__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = FUN_?(pBVar6,(pBVar4->klass->_0).element_class);
  if (lVar8 == 0) {
    uVar13 = FUN_?();
    FUN_?(uVar13,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((uint)pBVar4->max_length <= uVar5) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = iRam_? != 0;
  pBVar4->vector[(int)uVar5] = pBVar6;
  if (bVar11) {
    uVar5 = (uint)((ulonglong)(pBVar4->vector + (int)uVar5) >> 0xc);
    lVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  (this->fields)._lastBreadcrumbPos = ((this->fields)._lastBreadcrumbPos + 1) % 100;
  if ((this->fields)._noBreadcrumbs < 100) {
    piVar14 = &(this->fields)._noBreadcrumbs;
    *piVar14 = *piVar14 + 1;
  }
  return;
}


/* Void DoCaptureEvent(SentryEvent) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_DoCaptureEvent
               (SentrySdk *this,SentryEvent *event,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sending_event_to_sentry_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields).Debug != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_sending_event_to_sentry_,(MethodInfo *)0x0);
  }
  pIVar3 = SentrySdk_ContinueSendingEvent
                     (this,(Object *)event,
                      System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
                     );
  if (pIVar3 == (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)0x0) {
    uVar4 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar4);
    pSVar5 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar5,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar4);
    pSVar5 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (SentrySdk *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar7 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar7,pIVar3);
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__SentryEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sending_message_to_sentry_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_info);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    if ((pSVar1->fields).Debug != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
    }
    breadcrumbs = SentrySdk_GetBreadcrumbs(this,(MethodInfo *)0x0);
    this_00 = (SentryEvent *)FUN_?(TypeInfo__Sentry__SentryEvent);
    Sentry::SentryEvent::SentryEvent__ctor
              (this_00,message,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
    if (this_00 != (SentryEvent *)0x0) {
      bVar2 = iRam_? != 0;
      (this_00->fields).level = StringLiteral_info;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this_00->fields).level >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,this_00,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SentrySdk);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_sending_event_to_sentry_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 == (SentrySdk *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pSVar1->fields).Debug != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_sending_event_to_sentry_,(MethodInfo *)0x0);
      }
      pIVar8 = SentrySdk_ContinueSendingEvent
                         (this,(Object *)this_00,
                          System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryEvent>_Sentry__SentryEvent_
                         );
      if (pIVar8 == (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)0x0) {
        uVar9 = func_?(&TypeInfo__System__NullReferenceException);
        this_01 = (NullReferenceException *)func_?(uVar9);
        pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_01,pSVar10,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_01,uVar9);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        uVar9 = func_?(&TypeInfo__System__ArgumentException);
        this_02 = (InvalidEnumArgumentException *)func_?(uVar9);
        pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_02,pSVar10,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_02,uVar9);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (SentrySdk *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar12 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar12,pIVar8);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* List`1[Sentry.Breadcrumb] GetBreadcrumbs() */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetBreadcrumbs(SentrySdk *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._breadcrumbs;
  iVar2 = (this->fields)._lastBreadcrumbPos;
  capacity = (this->fields)._noBreadcrumbs;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
            (this_00,capacity,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  iVar2 = ((iVar2 - capacity) + 100) % 100;
  if (0 < capacity) {
    iVar3 = iVar2;
    if (pBVar1 == (Breadcrumb__Array *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pLVar5 = (List_1_Sentry_Breadcrumb_ *)(*pcVar4)();
      return pLVar5;
    }
    do {
      pMVar6 = 
      MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_;
      if ((uint)pBVar1->max_length <= (uint)(iVar3 % 100)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pLVar5 = (List_1_Sentry_Breadcrumb_ *)(*pcVar4)();
        return pLVar5;
      }
      item = pBVar1->vector[iVar3 % 100];
      if (this_00 ==
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) goto code_?;
      piVar7 = &(this_00->fields)._version;
      *piVar7 = *piVar7 + 1;
      pRVar8 = (this_00->fields)._items;
      if (pRVar8 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
      goto code_?;
      uVar9 = (this_00->fields)._size;
      if (uVar9 < (uint)pRVar8->max_length) {
        (this_00->fields)._size = uVar9 + 1;
        FUN_?(pRVar8,(longlong)(int)uVar9,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)item,
                   pMVar6->klass->rgctx_data[0xe].method);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 - iVar2 < capacity);
  }
  return (List_1_Sentry_Breadcrumb_ *)this_00;
}


/* IEnumerable`1[Sentry.StackTraceSpec] GetStackTraces(String) */

IEnumerable_1_Sentry_StackTraceSpec_ *
Assembly-CSharp.dll::SentrySdk::SentrySdk_GetStackTraces(String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SentrySdk___GetStackTraces_d__20);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerable_1_Sentry_StackTraceSpec_ *)FUN_?();
  *(undefined4 *)&pIVar1[1].klass = 0xfffffffe;
  iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                    ((MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  *(int32_t *)&pIVar1[2].klass = iVar2;
  pIVar1[3].klass = (IEnumerable_1_Sentry_StackTraceSpec___Class *)stackTrace;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pIVar1 + 3) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pIVar1;
}


/* Void Initialize(SentryConfig) */

void Assembly-CSharp.dll::SentrySdk::SentrySdk_Initialize
               (SentrySdk *this,SentryConfig *sentryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__Breadcrumb);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__Dsn);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_client_Sentry_SDK_is_disable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sentryConfig->isEnabled == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_The_client_Sentry_SDK_is_disable,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SentrySdk *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (this != (SentrySdk *)0x0) {
        pvVar2 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  this_00 = (Dsn *)FUN_?(TypeInfo__Sentry__Dsn);
  Sentry::Dsn::Dsn__ctor(this_00,sentryConfig->dns,(MethodInfo *)0x0);
  (this->fields)._dsn = this_00;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._dsn >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pBVar10 = (Breadcrumb__Array *)FUN_?(TypeInfo__Sentry__Breadcrumb);
  (this->fields)._breadcrumbs = pBVar10;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._breadcrumbs >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)this,(MethodInfo *)0x0);
  TypeInfo__SentrySdk->static_fields->_instance = this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__SentrySdk->static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  (this->fields)._initialized = 1;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SentrySdk *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if (pSVar1 == (SentrySdk *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((pSVar1->fields)._initialized != 0) &&
          ((type & ~(LogType__Enum_Exception|LogType__Enum_Assert)) == LogType__Enum_Error)) &&
         (type != (LogType__Enum_Exception|LogType__Enum_Assert))) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar1 == (SentrySdk *)0x0) goto code_?;
        if (_UNK_? < fVar4 - (pSVar1->fields)._timeLastError) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (pSVar1->fields)._timeLastError = fVar4;
          if ((type == LogType__Enum_Exception) || (type == LogType__Enum_Assert)) {
            pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
            if (pSVar1 == (SentrySdk *)0x0) goto code_?;
            SentrySdk_ScheduleException
                      (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
          }
          else if (type == LogType__Enum_Error) {
            pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
            if (pSVar1 == (SentrySdk *)0x0) goto code_?;
            SentrySdk_ScheduleError
                      (pSVar1,condition,stackTrace,extraSentryData,tags,(MethodInfo *)0x0);
          }
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
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
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
        bVar5 = iRam_? == 0;
        (pDVar3->fields).name = pSVar4;
        if (bVar5) {
          return;
        }
        uVar6 = (uint)((ulonglong)&pDVar3->fields >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__SentryErrorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryErrorEvent>_Sentry__SentryErrorEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sending_exception_to_sentry_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_condition___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stackTrace___0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) goto code_?;
  if ((pSVar1->fields).Debug != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
    pOVar2 = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    if ((condition != (String *)0x0) &&
       (lVar3 = FUN_?(condition,(pOVar2->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pOVar2,0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_condition___0_,pOVar2,(MethodInfo *)0x0);
    pOVar2 = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    if ((stackTrace != (String *)0x0) &&
       (lVar3 = FUN_?(stackTrace,(pOVar2->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pOVar2,0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_stackTrace___0_,pOVar2,(MethodInfo *)0x0);
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 != (SentrySdk *)0x0) {
    breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar1,(MethodInfo *)0x0);
    this_01 = (SentryEvent *)FUN_?(TypeInfo__Sentry__SentryErrorEvent);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_error_stack_trace);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    Sentry::SentryEvent::SentryEvent__ctor
              (this_01,condition,tags,extraSentryData,breadcrumbs,(MethodInfo *)0x0);
    this_00 = (this_01->fields).extra;
    if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_error_stack_trace,(Object *)stackTrace,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)extraSentryData >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pIVar6 = SentrySdk_ContinueSendingEvent
                         (this,(Object *)this_01,
                          System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryErrorEvent>_Sentry__SentryErrorEvent_
                         );
      if (pIVar6 == (IEnumerator_1_UnityEngine_Networking_UnityWebRequestAsyncOperation_ *)0x0) {
        uVar4 = func_?(&TypeInfo__System__NullReferenceException);
        this_02 = (NullReferenceException *)func_?(uVar4);
        pSVar7 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_02,pSVar7,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_02,uVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        uVar4 = func_?(&TypeInfo__System__ArgumentException);
        this_03 = (InvalidEnumArgumentException *)func_?(uVar4);
        pSVar7 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_03,pSVar7,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_03,uVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (SentrySdk *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar9 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar9,pIVar6);
      return;
    }
  }
code_?:
  FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<Sentry::StackTraceSpec>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__Add_Sentry__StackTraceSpec_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__SentryExceptionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryExceptionEvent>_Sentry__SentryExceptionEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentrySdk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sending_exception_to_sentry_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_condition___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stackTrace___0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
  if (pSVar1 == (SentrySdk *)0x0) goto code_?;
  if ((pSVar1->fields).Debug != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_sending_exception_to_sentry_,(MethodInfo *)0x0);
    pOVar2 = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    if ((condition != (String *)0x0) &&
       (lVar3 = FUN_?(condition,(pOVar2->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(pOVar2,0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_condition___0_,pOVar2,(MethodInfo *)0x0);
    pOVar2 = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    if ((stackTrace != (String *)0x0) &&
       (lVar3 = FUN_?(stackTrace,(pOVar2->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    FUN_?(pOVar2,0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
              (StringLiteral_stackTrace___0_,pOVar2,(MethodInfo *)0x0);
  }
  stackTrace_00 =
       (List_1_Sentry_StackTraceSpec_ *)
       FUN_?(TypeInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)stackTrace_00,
             MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__List__);
  pLStack_6 = stackTrace_00;
  lVar3 = FUN_?(TypeInfo__System__Char,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined2 *)(lVar3 + 0x20) = 0x3a;
    if (condition != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7._8_8_ = auStack_7._8_8_ & 0xffffffff;
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      auStack_7._0_8_ = lVar3 + 0x20;
      auStack_7._8_4_ = *(undefined4 *)(lVar3 + 0x18);
      pSVar8 = mscorlib.dll::System::String::String_SplitInternal
                          (condition,(ReadOnlySpan_1_Char_ *)auStack_7,2,
                           StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      if (pSVar8 != (String__Array *)0x0) {
        if (((int)pSVar8->max_length == 0) ||
           (exceptionType = pSVar8->vector[0], pSStack_9 = exceptionType,
           (uint)pSVar8->max_length < 2)) goto code_?;
        pSVar10 = pSVar8->vector[1];
        if (pSVar10 != (String *)0x0) {
          pSVar10 = mscorlib.dll::System::String::String_Substring_1
                              (pSVar10,1,(pSVar10->fields)._stringLength + -1,(MethodInfo *)0x0);
          pSStack_11 = pSVar10;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__SentrySdk___GetStackTraces_d__20);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar3 = FUN_?();
          *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
          iVar12 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                             ((MethodInfo *)0x0);
          *(int32_t *)(lVar3 + 0x20) = iVar12;
          *(String **)(lVar3 + 0x30) = stackTrace;
          if (iRam_? != 0) {
            uVar13 = (uint)(lVar3 + 0x30U >> 0xc);
            puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar15 = *puVar14;
              LOCK();
              uVar16 = *puVar14;
              if (uVar15 == uVar16) {
                *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (uVar15 != uVar16);
          }
          plStack_17 = (longlong *)
                       FUN_?(0,
                                     TypeInfo__System__Collections__Generic__IEnumerable<Sentry::StackTraceSpec>
                                     ,lVar3);
          auStack_7._0_8_ = (void *)0x0;
          auStack_7._8_8_ = &plStack_17;
          while (plStack_17 != (longlong *)0x0) {
            cVar18 = FUN_?(0);
            plVar19 = plStack_17;
            if (cVar18 == '\0') {
              if (plStack_17 != (longlong *)0x0) {
                FUN_?(0,TypeInfo__System__IDisposable,plStack_17);
              }
              pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
              if (pSVar1 != (SentrySdk *)0x0) {
                breadcrumbs = SentrySdk_GetBreadcrumbs(pSVar1,(MethodInfo *)0x0);
                this_00 = (SentryExceptionEvent *)
                          FUN_?(TypeInfo__Sentry__SentryExceptionEvent);
                Sentry::SentryExceptionEvent::SentryExceptionEvent__ctor
                          (this_00,exceptionType,pSVar10,breadcrumbs,stackTrace_00,tags,
                           extraSentryData,(MethodInfo *)0x0);
                routine = (IEnumerator *)
                          SentrySdk_ContinueSendingEvent
                                    (this,(Object *)this_00,
                                     System__Collections__Generic__IEnumerator<UnityEngine::Networking::UnityWebRequestAsyncOperation>_MethodInfo__SentrySdk__ContinueSendingEvent<Sentry::SentryExceptionEvent>_Sentry__SentryExceptionEvent_
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            if (plStack_17 == (longlong *)0x0) goto code_?;
            lVar3 = *plStack_17;
            uVar20 = 0;
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              do {
                if (*(IEnumerator_1_Sentry_StackTraceSpec___Class **)
                     (*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                    TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>) {
                  puVar21 = (undefined8 *)
                            ((longlong)
                             *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) *
                             0x10 + 0x138 + lVar3);
                  goto code_?;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar21 = (undefined8 *)
                      FUN_?(plStack_17,
                                    TypeInfo__System__Collections__Generic__IEnumerator<Sentry::StackTraceSpec>
                                    ,0);
code_?:
            item = (Object *)(*(code *)*puVar21)(plVar19,puVar21[1]);
            pMVar22 = 
            MethodInfo__System__Collections__Generic__List<Sentry::StackTraceSpec>__Add_Sentry__StackTraceSpec_
            ;
            if (stackTrace_00 == (List_1_Sentry_StackTraceSpec_ *)0x0) goto code_?;
            piVar23 = &(stackTrace_00->fields)._version;
            *piVar23 = *piVar23 + 1;
            pSVar24 = (stackTrace_00->fields)._items;
            uVar13 = (stackTrace_00->fields)._size;
            if (pSVar24 == (StackTraceSpec__Array *)0x0) goto code_?;
            if (uVar13 < (uint)pSVar24->max_length) {
              (stackTrace_00->fields)._size = uVar13 + 1;
              FUN_?(pSVar24,(longlong)(int)uVar13,item);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)stackTrace_00,item,
                         pMVar22->klass->rgctx_data[0xe].method);
            }
          }
code_?:
          FUN_?();
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SentrySdk() */

void Assembly-CSharp.dll::SentrySdk::SentrySdk__ctor(SentrySdk *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).sendDefaultPii = 1;
  (this->fields).Debug = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

