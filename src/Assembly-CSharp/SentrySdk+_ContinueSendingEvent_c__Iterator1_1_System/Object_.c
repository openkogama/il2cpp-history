
/* Void Dispose() */

void Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>c__Iterator1`1[System::Object]::
     SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object__Dispose
               (SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object_ *this,MethodInfo *method
               )

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>c__Iterator1`1[System::Object]::
     SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object__MoveNext
               (SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object_ *this,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pSVar2 = (this->fields)._this;
    if (pSVar2 != (SentrySdk *)0x0) {
      SentrySdk::SentrySdk_PrepareEvent
                (pSVar2,(SentryEvent *)(this->fields).event,(MethodInfo *)0x0);
      value = (this->fields).event;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject(value,(MethodInfo *)0x0);
      pSVar2 = (this->fields)._this;
      (this->fields)._s___0 = pSVar3;
      if ((((pSVar2 != (SentrySdk *)0x0) && (pDVar4 = (pSVar2->fields)._dsn, pDVar4 != (Dsn *)0x0))
          && ((this->fields)._sentryKey___0 = (pDVar4->fields).publicKey, pSVar2 != (SentrySdk *)0x0
             )) && (pDVar4 = (pSVar2->fields)._dsn, pDVar4 != (Dsn *)0x0)) {
        (this->fields)._sentrySecret___0 = (pDVar4->fields).secretKey;
        if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__DateTime);
        }
        mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                  ((DateTime *)&stack0xffffffdc,(MethodInfo *)0x0);
        arg0 = (String *)func_?(&stack0xffffffec,StringLiteral_yyyy_MM_ddTHH__mm__ss,0);
        pSVar3 = (this->fields)._sentryKey___0;
        arg2 = (this->fields)._sentrySecret___0;
        (this->fields)._timestamp___0 = arg0;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar3 = mscorlib.dll::System::String::String_Format_2
                           (StringLiteral_Sentry_sentry_version_5_sentry_c,(Object *)arg0,
                            (Object *)pSVar3,(Object *)arg2,(MethodInfo *)0x0);
        (this->fields)._authString___0 = pSVar3;
        pSVar2 = (this->fields)._this;
        if (((pSVar2 != (SentrySdk *)0x0) && (pDVar4 = (pSVar2->fields)._dsn, pDVar4 != (Dsn *)0x0))
           && (pUVar5 = (pDVar4->fields).callUri, pUVar5 != (Uri *)0x0)) {
          pSVar3 = (String *)
                   (*(code *)(pUVar5->klass->vtable).ToString.method)
                             (pUVar5,(pUVar5->klass->vtable).
                                     System_Runtime_Serialization_ISerializable_GetObjectData.
                                     methodPtr);
          pUVar6 = (UnityWebRequest *)
                   func_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest__ctor(pUVar6,pSVar3,(MethodInfo *)0x0);
          (this->fields)._www___0 = pUVar6;
          if (pUVar6 != (UnityWebRequest *)0x0) {
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_set_method(pUVar6,StringLiteral_POST,(MethodInfo *)0x0);
            pUVar6 = (this->fields)._www___0;
            if (pUVar6 != (UnityWebRequest *)0x0) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_SetRequestHeader
                        (pUVar6,StringLiteral_X_Sentry_Auth,(this->fields)._authString___0,
                         (MethodInfo *)0x0);
              pUVar6 = (this->fields)._www___0;
              if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Text__Encoding);
              }
              pEVar7 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
              if (pEVar7 != (Encoding *)0x0) {
                data = (Byte__Array *)
                       (*(code *)(pEVar7->klass->vtable).GetBytes_1.method)
                                 (pEVar7,(this->fields)._s___0,
                                  (pEVar7->klass->vtable).GetBytes_2.methodPtr);
                this_01 = (UploadHandlerRaw *)
                          func_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
                UploadHandlerRaw__ctor(this_01,data,(MethodInfo *)0x0);
                if (pUVar6 != (UnityWebRequest *)0x0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_set_uploadHandler
                            (pUVar6,(UploadHandler *)this_01,(MethodInfo *)0x0);
                  pUVar6 = (this->fields)._www___0;
                  this_02 = (DownloadHandlerBuffer *)
                            func_?(TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer
                                           );
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                  DownloadHandlerBuffer::DownloadHandlerBuffer__ctor(this_02,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityWebRequest *)0x0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                    ::UnityWebRequest_set_downloadHandler
                              (pUVar6,(DownloadHandler *)this_02,(MethodInfo *)0x0);
                    pUVar6 = (this->fields)._www___0;
                    if (pUVar6 != (UnityWebRequest *)0x0) {
                      pUVar8 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                                UnityWebRequest::UnityWebRequest_SendWebRequest
                                          (pUVar6,(MethodInfo *)0x0);
                      (this->fields)._current = pUVar8;
                      if ((this->fields)._disposing != 0) {
                        return 1;
                      }
                      (this->fields)._PC = 1;
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
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    pUVar6 = (this->fields)._www___0;
    if (pUVar6 == (UnityWebRequest *)0x0) goto code_?;
    bVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_isDone(pUVar6,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      (this->fields)._current = (UnityWebRequestAsyncOperation *)0x0;
      if ((this->fields)._disposing != 0) {
        return 1;
      }
      (this->fields)._PC = 2;
      return 1;
    }
    pUVar6 = (this->fields)._www___0;
    if (pUVar6 == (UnityWebRequest *)0x0) goto code_?;
    bVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_isNetworkError(pUVar6,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      pUVar6 = (this->fields)._www___0;
      if (pUVar6 == (UnityWebRequest *)0x0) goto code_?;
      bVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_isHttpError(pUVar6,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        pUVar6 = (this->fields)._www___0;
        if (pUVar6 == (UnityWebRequest *)0x0) goto code_?;
        iVar10 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                 UnityWebRequest_get_responseCode(pUVar6,(MethodInfo *)0x0);
        if (iVar10 == 200) {
          pSVar2 = (this->fields)._this;
          if (pSVar2 == (SentrySdk *)0x0) goto code_?;
          if ((pSVar2->fields).Debug != 0) {
            pUVar6 = (this->fields)._www___0;
            if ((pUVar6 != (UnityWebRequest *)0x0) &&
               (this_00 = (ActDetectorBase *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pUVar6,(MethodInfo *)0x0), this_00 != (ActDetectorBase *)0x0))
            {
              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
              ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar3 = mscorlib.dll::System::String::String_Concat_2
                                 (StringLiteral_Sentry_sent_back__,str1,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar3,(MethodInfo *)0x0);
              (this->fields)._PC = -1;
              return 0;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    pUVar6 = (this->fields)._www___0;
    if (pUVar6 != (UnityWebRequest *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(pUVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_error_sending_request_to_sentry_,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
code_?:
      (this->fields)._PC = -1;
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::SentrySdk+<ContinueSendingEvent>c__Iterator1`1[System::Object]::
     SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object__Reset
               (SentrySdk_ContinueSendingEvent_c_Iterator1_1_System_Object_ *this,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

