
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>d__23`1[System::Object]::
     SentrySdk_ContinueSendingEvent_d_23_1_System_Object__MoveNext
               (SentrySdk_ContinueSendingEvent_d_23_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_X_Sentry_Auth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POST);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sentry_sent_back__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sentry_sentry_version_5_sentry_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error_sending_request_to_sentry_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pSVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    pOVar3 = (this->fields).event;
    (this->fields).__1__state = -1;
    if (pSVar2 == (SentrySdk *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SentrySdk);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar4 = TypeInfo__SentrySdk->static_fields->_instance;
    if (pSVar4 == (SentrySdk *)0x0) goto code_?;
    if ((pSVar4->fields).sendDefaultPii != 0) {
      if ((pOVar3 == (Object *)0x0) || (pMVar5 = pOVar3[4].monitor, pMVar5 == (MonitorData *)0x0))
      goto code_?;
      lVar6 = *(longlong *)(pMVar5 + 0x28);
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceName
                          ((MethodInfo *)0x0);
      if (lVar6 == 0) goto code_?;
      bVar8 = iRam_? != 0;
      *(String **)(lVar6 + 0x10) = pSVar7;
      if (bVar8) {
        uVar9 = (uint)(lVar6 + 0x10U >> 0xc);
        lVar6 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar11 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar8 = uVar10 == *puVar11;
          if (bVar8) {
            *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    pOVar3 = (this->fields).event;
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                        (pOVar3,(MethodInfo *)0x0);
    pDVar12 = (pSVar2->fields)._dsn;
    if (pDVar12 == (Dsn *)0x0) goto code_?;
    pSVar13 = (pDVar12->fields).secretKey;
    pSVar14 = (pDVar12->fields).publicKey;
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    pSVar15 = StringLiteral_yyyy_MM_ddTHH__mm__ss;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTimeFormat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
      FUN_?();
    }
    arg0 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar15,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar15 = StringLiteral_Sentry_sentry_version_5_sentry_c;
    PStack_16._arg0 = (Object *)0x0;
    PStack_16._arg1 = (Object *)0x0;
    PStack_16._arg2 = (Object *)0x0;
    PStack_16._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
              (&PStack_16,(Object *)arg0,(Object *)pSVar14,(Object *)pSVar13,(MethodInfo *)0x0);
    PStack_17._arg0 = PStack_16._arg0;
    PStack_17._arg1 = PStack_16._arg1;
    PStack_17._arg2 = PStack_16._arg2;
    PStack_17._args = PStack_16._args;
    pSVar13 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar15,&PStack_17,(MethodInfo *)0x0);
    pDVar12 = (pSVar2->fields)._dsn;
    if ((pDVar12 == (Dsn *)0x0) || (pUVar18 = (pDVar12->fields).callUri, pUVar18 == (Uri *)0x0))
    goto code_?;
    pSVar14 = (String *)
              (*(pUVar18->klass->vtable).ToString.methodPtr)
                        (pUVar18,(pUVar18->klass->vtable).ToString.method);
    pUVar19 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
    pcVar20 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21,0);
      pcVar20 = (code *)swi(3);
      bVar22 = (*pcVar20)();
      return bVar22;
    }
    pcRam_? = pcVar20;
    pvVar23 = (void *)(*pcRam_?)();
    (pUVar19->fields).m_Ptr = pvVar23;
    (pUVar19->fields)._disposeDownloadHandlerOnDispose_k__BackingField = 1;
    (pUVar19->fields)._disposeUploadHandlerOnDispose_k__BackingField = 1;
    (pUVar19->fields)._disposeCertificateHandlerOnDispose_k__BackingField = 1;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_set_url(pUVar19,pSVar14,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields)._www_5__2 = pUVar19;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields)._www_5__2 >> 0xc);
      lVar6 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar11 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar8 = uVar10 == *puVar11;
        if (bVar8) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pUVar19 = (this->fields)._www_5__2;
    if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_set_method(pUVar19,StringLiteral_POST,(MethodInfo *)0x0);
    pUVar19 = (this->fields)._www_5__2;
    if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_SetRequestHeader(pUVar19,StringLiteral_X_Sentry_Auth,pSVar13,(MethodInfo *)0x0);
    pUVar19 = (this->fields)._www_5__2;
    pEVar24 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar24 == (Encoding *)0x0) goto code_?;
    data = (Byte__Array *)(*(pEVar24->klass->vtable).GetBytes_1.methodPtr)(pEVar24,pSVar7);
    this_00 = (UploadHandlerRaw *)FUN_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw)
    ;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
    UploadHandlerRaw__ctor(this_00,data,(MethodInfo *)0x0);
    if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_set_uploadHandler(pUVar19,(UploadHandler *)this_00,(MethodInfo *)0x0);
    pUVar19 = (this->fields)._www_5__2;
    this_01 = (DownloadHandlerBuffer *)
              FUN_?(TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandlerBuffer::
    DownloadHandlerBuffer__ctor(this_01,(MethodInfo *)0x0);
    if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_set_downloadHandler(pUVar19,(DownloadHandler *)this_01,(MethodInfo *)0x0);
    pUVar19 = (this->fields)._www_5__2;
    if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
    pUVar25 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_SendWebRequest(pUVar19,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields).__2__current = pUVar25;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar6 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar11 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar8 = uVar10 == *puVar11;
        if (bVar8) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    (this->fields).__1__state = 1;
code_?:
    bVar22 = 1;
  }
  else {
    if ((iVar1 == 1) || (iVar1 == 2)) {
      pUVar19 = (this->fields)._www_5__2;
      (this->fields).__1__state = -1;
      if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
      pvVar23 = (pUVar19->fields).m_Ptr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar19,(MethodInfo *)0x0);
        pcVar20 = (code *)swi(3);
        bVar22 = (*pcVar20)();
        return bVar22;
      }
      pcVar20 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar20 = (code *)swi(3);
        bVar22 = (*pcVar20)();
        return bVar22;
      }
      pcRam_? = pcVar20;
      iVar1 = (*pcRam_?)(pvVar23);
      if (iVar1 == 0) {
        bVar8 = iRam_? != 0;
        (this->fields).__2__current = (UnityWebRequestAsyncOperation *)0x0;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          lVar6 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar11 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar8 = uVar10 == *puVar11;
            if (bVar8) {
              *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        (this->fields).__1__state = 2;
        goto code_?;
      }
      pUVar19 = (this->fields)._www_5__2;
      if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
      pvVar23 = (pUVar19->fields).m_Ptr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar19,(MethodInfo *)0x0);
        pcVar20 = (code *)swi(3);
        bVar22 = (*pcVar20)();
        return bVar22;
      }
      pcVar20 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar20 = (code *)swi(3);
        bVar22 = (*pcVar20)();
        return bVar22;
      }
      pcRam_? = pcVar20;
      iVar1 = (*pcRam_?)(pvVar23);
      if (iVar1 != 2) {
        pUVar19 = (this->fields)._www_5__2;
        if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
        pvVar23 = (pUVar19->fields).m_Ptr;
        if (pvVar23 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar19,(MethodInfo *)0x0);
          pcVar20 = (code *)swi(3);
          bVar22 = (*pcVar20)();
          return bVar22;
        }
        pcVar20 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
          uVar21 = func_?(&UNK_?);
          FUN_?(uVar21,0);
          pcVar20 = (code *)swi(3);
          bVar22 = (*pcVar20)();
          return bVar22;
        }
        pcRam_? = pcVar20;
        iVar1 = (*pcRam_?)(pvVar23);
        if (iVar1 != 4) {
          pUVar19 = (this->fields)._www_5__2;
          if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
          UVar26 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_get_result(pUVar19,(MethodInfo *)0x0);
          if (UVar26 != UnityWebRequest_Result__Enum_ProtocolError) {
            pUVar19 = (this->fields)._www_5__2;
            if (pUVar19 == (UnityWebRequest *)0x0) goto code_?;
            iVar27 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                     ::UnityWebRequest_get_responseCode(pUVar19,(MethodInfo *)0x0);
            if (iVar27 == 200) {
              if (pSVar2 == (SentrySdk *)0x0) goto code_?;
              if ((pSVar2->fields).Debug != 0) {
                pUVar19 = (this->fields)._www_5__2;
                if ((pUVar19 != (UnityWebRequest *)0x0) &&
                   (pDVar28 = (pUVar19->fields).m_DownloadHandler, pDVar28 != (DownloadHandler *)0x0))
                {
                  pSVar7 = (String *)
                            (*(pDVar28->klass->vtable).GetText.methodPtr)
                                      (pDVar28,(pDVar28->klass->vtable).GetText.method);
                  pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                      (StringLiteral_Sentry_sent_back__,pSVar7,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)pSVar7,(MethodInfo *)0x0);
                  return 0;
                }
                goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
      pUVar19 = (this->fields)._www_5__2;
      if (pUVar19 == (UnityWebRequest *)0x0) {
code_?:
        FUN_?();
        pcVar20 = (code *)swi(3);
        bVar22 = (*pcVar20)();
        return bVar22;
      }
      pSVar7 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_get_error(pUVar19,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_error_sending_request_to_sentry_,pSVar7,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar7,(MethodInfo *)0x0);
    }
code_?:
    bVar22 = 0;
  }
  return bVar22;
}

