
/* Void SendMessage(String) */

void Assembly-CSharp.dll::SentryTest::SentryTest_SendMessage
               (SentryTest *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__SentryEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Extra_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Event_message);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_this_is_a_message2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Extra_key);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tag_key);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tag_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_assert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_exception);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_message);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_event);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (message == StringLiteral_exception) {
DAT_?:
    uVar1 = func_?(&TypeInfo__System__DivideByZeroException);
    this_00 = (DivideByZeroException *)func_?(uVar1);
    mscorlib.dll::System::DivideByZeroException::DivideByZeroException__ctor
              (this_00,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__SentryTest__SendMessage_System__String_);
    FUN_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((message != (String *)0x0) && (StringLiteral_exception != (String *)0x0)) &&
     ((message->fields)._stringLength == (StringLiteral_exception->fields)._stringLength)) {
    in_R9 = 0;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(message->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_exception->fields)._firstChar,
                       (longlong)(message->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 != 0) goto DAT_?;
  }
  if (message == StringLiteral_assert) {
    return;
  }
  if (((message != (String *)0x0) && (StringLiteral_assert != (String *)0x0)) &&
     ((message->fields)._stringLength == (StringLiteral_assert->fields)._stringLength)) {
    in_R9 = 0;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(message->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_assert->fields)._firstChar,
                       (longlong)(message->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
  }
  if (message == StringLiteral_message) {
DAT_?:
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
      uVar1 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_Extra_key,(Object *)StringLiteral_Extra_value,
                 (InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                );
      if (pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar5,
                   (Object *)StringLiteral_Tag_key,(Object *)StringLiteral_Tag_value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   ->klass->rgctx_data[0x22].method);
        message_00 = StringLiteral_this_is_a_message2;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pDVar4,pDVar5,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__SentrySdk);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
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
        if (pSVar6 != (SentrySdk *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
            if (pSVar6 != (SentrySdk *)0x0) {
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
              pSVar7 = TypeInfo__SentrySdk->static_fields->_instance;
              if (pSVar7 != (SentrySdk *)0x0) {
                if ((pSVar7->fields).Debug != 0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)StringLiteral_sending_message_to_sentry_,(MethodInfo *)0x0);
                }
                breadcrumbs = SentrySdk::SentrySdk_GetBreadcrumbs(pSVar6,(MethodInfo *)0x0);
                pSVar8 = (SentryEvent *)FUN_?(TypeInfo__Sentry__SentryEvent);
                Sentry::SentryEvent::SentryEvent__ctor
                          (pSVar8,message_00,(Dictionary_2_System_String_System_String_ *)pDVar5,
                           (Dictionary_2_System_String_System_Object_ *)pDVar4,breadcrumbs,
                           (MethodInfo *)0x0);
                if (pSVar8 != (SentryEvent *)0x0) {
                  bVar9 = iRam_? != 0;
                  (pSVar8->fields).level = StringLiteral_info;
                  if (bVar9) {
                    uVar10 = (uint)((ulonglong)&(pSVar8->fields).level >> 0xc);
                    puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar12 = *puVar11;
                      LOCK();
                      uVar13 = *puVar11;
                      if (uVar12 == uVar13) {
                        *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar12 != uVar13);
                  }
                  SentrySdk::SentrySdk_DoCaptureEvent(pSVar6,pSVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        return;
      }
    }
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((message != (String *)0x0) && (StringLiteral_message != (String *)0x0)) &&
     ((message->fields)._stringLength == (StringLiteral_message->fields)._stringLength)) {
    in_R9 = 0;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(message->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_message->fields)._firstChar,
                       (longlong)(message->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 != 0) goto DAT_?;
  }
  if ((message == StringLiteral_event) ||
     ((((message != (String *)0x0 && (StringLiteral_event != (String *)0x0)) &&
       ((message->fields)._stringLength == (StringLiteral_event->fields)._stringLength)) &&
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(message->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_event->fields)._firstChar,
                          (longlong)(message->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 != 0)))) {
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    pSVar8 = (SentryEvent *)FUN_?(TypeInfo__Sentry__SentryEvent);
    Sentry::SentryEvent::SentryEvent__ctor
              (pSVar8,StringLiteral_Event_message,
               (Dictionary_2_System_String_System_String_ *)pDVar4,
               (Dictionary_2_System_String_System_Object_ *)pDVar5,(List_1_Sentry_Breadcrumb_ *)0x0,
               (MethodInfo *)0x0);
    if (pSVar8 == (SentryEvent *)0x0) goto DAT_?;
    (pSVar8->fields).level = StringLiteral_debug;
    func_?(&(pSVar8->fields).level);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SentrySdk);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
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
    if (pSVar6 != (SentrySdk *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pSVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pSVar6 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar6 == (SentrySdk *)0x0) goto DAT_?;
        SentrySdk::SentrySdk_DoCaptureEvent(pSVar6,pSVar8,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryTest::SentryTest_Update(SentryTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Extra_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Extra_key);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_this_is_a_message_2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tag_key);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tag_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Frame_number__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._counter + 1;
  (this->fields)._counter = iVar1;
  if (iVar1 == (iVar1 / 100) * 100) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields)._counter,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Frame_number__,pSVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SentrySdk);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar3 = TypeInfo__SentrySdk->static_fields->_instance;
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
    if (pSVar3 != (SentrySdk *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pSVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pSVar3 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar3 == (SentrySdk *)0x0) goto code_?;
        SentrySdk::SentrySdk_DoAddBreadcrumb(pSVar3,pSVar2,(MethodInfo *)0x0);
      }
    }
  }
  if ((this->fields).SendMessageToSentry == 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Extra_key,(Object *)StringLiteral_Extra_value,
               (InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_Tag_key,(Object *)StringLiteral_Tag_value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 ->klass->rgctx_data[0x22].method);
      SentrySdk::SentrySdk_CaptureMessage
                (StringLiteral_this_is_a_message_2,
                 (Dictionary_2_System_String_System_Object_ *)this_00,
                 (Dictionary_2_System_String_System_String_ *)this_01,(MethodInfo *)0x0);
      (this->fields).SendMessageToSentry = 0;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

