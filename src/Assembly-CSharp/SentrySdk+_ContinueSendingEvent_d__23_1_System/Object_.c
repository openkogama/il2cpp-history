
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>d__23`1[System::Object]::
     SentrySdk_ContinueSendingEvent_d_23_1_System_Object__MoveNext
               (SentrySdk_ContinueSendingEvent_d_23_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    func_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    func_?(&StringLiteral_X_Sentry_Auth);
    func_?(&StringLiteral_POST);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    func_?(&StringLiteral_Sentry_sent_back__);
    func_?(&StringLiteral_Sentry_sentry_version_5_sentry_c);
    func_?(&StringLiteral_error_sending_request_to_sentry_);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (SentrySdk *)0x0) {
      SentrySdk::SentrySdk_PrepareEvent
                (this_00,(SentryEvent *)(this->fields).event,(MethodInfo *)0x0);
      value = (this->fields).event;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pSVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject(value,(MethodInfo *)0x0);
      pDVar3 = (this_00->fields)._dsn;
      if (pDVar3 != (Dsn *)0x0) {
        pSVar4 = (pDVar3->fields).secretKey;
        pSVar5 = (pDVar3->fields).publicKey;
        if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
        arg0 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                         ((DateTime *)&stack0xfffffff0,StringLiteral_yyyy_MM_ddTHH__mm__ss,
                          (MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Format_2
                           (StringLiteral_Sentry_sentry_version_5_sentry_c,(Object *)arg0,
                            (Object *)pSVar5,(Object *)pSVar4,(MethodInfo *)0x0);
        pDVar3 = (this_00->fields)._dsn;
        if ((pDVar3 != (Dsn *)0x0) && (pUVar6 = (pDVar3->fields).callUri, pUVar6 != (Uri *)0x0)) {
          pSVar5 = (String *)
                   (*(pUVar6->klass->vtable).ToString.methodPtr)
                             (pUVar6,(pUVar6->klass->vtable).ToString.method);
          pUVar7 = (UnityWebRequest *)
                   func_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
          if (pUVar7 != (UnityWebRequest *)0x0) {
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest__ctor(pUVar7,pSVar5,(MethodInfo *)0x0);
            (this->fields)._www_5__2 = pUVar7;
            func_?(&(this->fields)._www_5__2,pUVar7);
            pUVar7 = (this->fields)._www_5__2;
            if (pUVar7 != (UnityWebRequest *)0x0) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_set_method(pUVar7,StringLiteral_POST,(MethodInfo *)0x0);
              pUVar7 = (this->fields)._www_5__2;
              if (pUVar7 != (UnityWebRequest *)0x0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_SetRequestHeader
                          (pUVar7,StringLiteral_X_Sentry_Auth,pSVar4,(MethodInfo *)0x0);
                pUVar7 = (this->fields)._www_5__2;
                pEVar8 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0)
                ;
                if (pEVar8 != (Encoding *)0x0) {
                  data = (Byte__Array *)
                         (*(pEVar8->klass->vtable).GetBytes_1.methodPtr)
                                   (pEVar8,pSVar2,(pEVar8->klass->vtable).GetBytes_1.method);
                  this_02 = (UploadHandlerRaw *)
                            func_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
                  if ((this_02 != (UploadHandlerRaw *)0x0) &&
                     (UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                      UploadHandlerRaw::UploadHandlerRaw__ctor(this_02,data,(MethodInfo *)0x0),
                     pUVar7 != (UnityWebRequest *)0x0)) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                    ::UnityWebRequest_set_uploadHandler
                              (pUVar7,(UploadHandler *)this_02,(MethodInfo *)0x0);
                    pUVar7 = (this->fields)._www_5__2;
                    this_03 = (DownloadHandlerBuffer *)
                              func_?(
                                             TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer
                                             );
                    if ((this_03 != (DownloadHandlerBuffer *)0x0) &&
                       (UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                        DownloadHandlerBuffer::DownloadHandlerBuffer__ctor
                                  (this_03,(MethodInfo *)0x0), pUVar7 != (UnityWebRequest *)0x0)) {
                      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                      UnityWebRequest::UnityWebRequest_set_downloadHandler
                                (pUVar7,(DownloadHandler *)this_03,(MethodInfo *)0x0);
                      pUVar7 = (this->fields)._www_5__2;
                      if (pUVar7 != (UnityWebRequest *)0x0) {
                        pUVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                                  UnityWebRequest::UnityWebRequest_SendWebRequest
                                            (pUVar7,(MethodInfo *)0x0);
                        (this->fields).__2__current = pUVar9;
                        func_?(&(this->fields).__2__current,pUVar9);
                        (this->fields).__1__state = 1;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    pUVar7 = (this->fields)._www_5__2;
    (this->fields).__1__state = -1;
    if (pUVar7 != (UnityWebRequest *)0x0) {
      bVar10 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_isDone(pUVar7,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        (this->fields).__2__current = (UnityWebRequestAsyncOperation *)0x0;
        func_?(&(this->fields).__2__current,0);
        (this->fields).__1__state = 2;
        return 1;
      }
      pUVar7 = (this->fields)._www_5__2;
      if (pUVar7 != (UnityWebRequest *)0x0) {
        bVar10 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_get_isNetworkError(pUVar7,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          pUVar7 = (this->fields)._www_5__2;
          if (pUVar7 == (UnityWebRequest *)0x0) goto code_?;
          bVar10 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_get_isHttpError(pUVar7,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            pUVar7 = (this->fields)._www_5__2;
            if (pUVar7 == (UnityWebRequest *)0x0) goto code_?;
            iVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                     ::UnityWebRequest_get_responseCode(pUVar7,(MethodInfo *)0x0);
            if (iVar11 == 200) {
              if (this_00 != (SentrySdk *)0x0) {
                if ((this_00->fields).Debug == 0) {
                  return 0;
                }
                pUVar7 = (this->fields)._www_5__2;
                if ((pUVar7 != (UnityWebRequest *)0x0) &&
                   (this_01 = (DownloadHandler *)
                              mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System
                              ::Object]::ValueListBuilder_1_System_Object__1_get_Length
                                        ((ValueListBuilder_1_System_Object__1 *)pUVar7,
                                         (MethodInfo *)0x0), this_01 != (DownloadHandler *)0x0)) {
                  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                           DownloadHandler::DownloadHandler_get_text(this_01,(MethodInfo *)0x0);
                  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Sentry_sent_back__,pSVar2,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)pSVar2,(MethodInfo *)0x0);
                  return 0;
                }
              }
              goto code_?;
            }
          }
        }
        pUVar7 = (this->fields)._www_5__2;
        if (pUVar7 != (UnityWebRequest *)0x0) {
          pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_get_error(pUVar7,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_error_sending_request_to_sentry_,pSVar2,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar2,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar10 = (*pcVar12)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>d__23`1[System::Object]::
     SentrySdk_ContinueSendingEvent_d_23_1_System_Object__System_Collections_IEnumerator_Reset
               (SentrySdk_ContinueSendingEvent_d_23_1_System_Object_ *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__SentrySdk___ContinueSendingEvent_d__23<System::Object>__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

