
/* Boolean AddLogToLogContext(String, LogType) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_AddLogToLogContext
               (DebugLogHandler *this,String *logString,LogType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__LogType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Enqueue_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Count__
                   );
    func_?(&StringLiteral_Frame);
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
  }
  this_00 = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      ((HashSet_1_System_Object_ *)this_00,(Object *)logString,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    if ((((bVar1 == 0) || (type != LogType__Enum_Error)) && (type != LogType__Enum_Warning)) &&
       (type != LogType__Enum_Log)) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                );
      iStack_2 = (this->fields).timeFrameCount;
      value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)StringLiteral_Frame,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      key = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)key,(Object *)logString,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pQVar3 = (this->fields).logContextQueue;
      if (pQVar3 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)pQVar3,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Enqueue_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                  );
        pQVar3 = (this->fields).logContextQueue;
        if (pQVar3 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
          if ((this->fields).maxLogContextQueueCount < (pQVar3->fields)._size) {
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Dequeue
                      ((Queue_1_System_Object_ *)(this->fields).logContextQueue,
                       MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dequeue__
                      );
          }
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* String CleanStackTrace(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_CleanStackTrace
                   (String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_UnityEngine_Debug_LogError_Objec);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,1);
  if (pSVar1 == (String__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((StringLiteral_UnityEngine_Debug_LogError_Objec == (String *)0x0) ||
          (iVar2 = func_?(StringLiteral_UnityEngine_Debug_LogError_Objec,
                                   (pSVar1->klass->_0).element_class), iVar2 != 0)) {
    pSVar3 = StringLiteral_UnityEngine_Debug_LogError_Objec;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_UnityEngine_Debug_LogError_Objec;
    func_?(pSVar1->vector,pSVar3);
    if ((stackTrace != (String *)0x0) &&
       (pSVar1 = mscorlib.dll::System::String::String_Split_4
                           (stackTrace,pSVar1,StringSplitOptions__Enum_RemoveEmptyEntries,
                            (MethodInfo *)0x0), pSVar1 != (String__Array *)0x0)) {
      if (pSVar1->max_length != 2) {
        return stackTrace;
      }
      if (1 < pSVar1->max_length) {
        return pSVar1->vector[1];
      }
      goto code_?;
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Destroy
               (DebugLogHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffd8;
  puVar5 = &stack0xffffffd8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                   );
    func_?(&
                    MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                   );
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    func_?(&TypeInfo__UnityEngine__Application__LogCallback);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Clear__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).logContextQueue;
  (this->fields).errorCount = 0;
  (this->fields).logErrorHasBeenSendOnce = 0;
  if (this_00 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::
  Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
  Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
            (this_00,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Clear__
            );
  (this->fields).isSampling = 0;
  if ((this->fields).isInBrokenState != 0) {
    (this->fields).isInBrokenState = 0;
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uStack_1 = 0;
  if ((this->fields).kogamaLogHandler != (ProxyLogHandler *)0x0) {
    pPVar6 = (this->fields).kogamaLogHandler;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar7 == (ILogger_1 *)0x0) goto code_?;
    func_?(1,TypeInfo__UnityEngine__ILogger,pIVar7,(pPVar6->fields).defaultLogHandler);
    pPVar6 = (this->fields).kogamaLogHandler;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (pPVar6 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
              (pPVar6,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_01,(MethodInfo *)0x0);
    (this->fields).kogamaLogHandler = (ProxyLogHandler *)0x0;
    func_?();
  }
  this_02 = (Application_LogCallback *)func_?();
  if (this_02 != (Application_LogCallback *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
               ,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
              (this_02,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uStack_8 = func_?();
  func_?(&uStack_8,&UNK_?);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* String GenerateSystemInfoString(Dictionary`2[System.String,System.String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GenerateSystemInfoString
                   (Dictionary_2_System_String_System_String_ *systemInfo,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                   );
    func_?(&StringLiteral__0____1_u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pSStack_8 = ::StringLiteral__;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  if (systemInfo != (Dictionary_2_System_String_System_String_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_System_Object_System_Object_ *)systemInfo,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                        );
      if (bVar12 == 0) break;
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1_u000A,DStack_7._current.key,DStack_7._current.value,
                        (MethodInfo *)0x0);
      in_stack_13 = (MethodInfo *)&UNK_?;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
               ,in_stack_13);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar15)();
  return pSVar6;
}


/* String GetBrowserInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetBrowserInfo(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__0___version___1_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  pSVar1 = TypeInfo__BrowserComm->static_fields->browserName;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  iStack_2 = TypeInfo__BrowserComm->static_fields->browserVersion;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0___version___1_,(Object *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Dictionary`2[System.String,System.Object] GetExtraSentryData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetExtraSentryData
          (DebugLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DebugLogHandler__GetBrowserInfo__);
    func_?(&MethodInfo__DebugLogHandler__GetGameMode__);
    func_?(&MethodInfo__DebugLogHandler__GetIsTouristSession__);
    func_?(&MethodInfo__DebugLogHandler__GetJoinState__);
    func_?(&MethodInfo__DebugLogHandler__GetLogContext__);
    func_?(&MethodInfo__DebugLogHandler__GetPendingPlayersCount__);
    func_?(&MethodInfo__DebugLogHandler__GetPlanetID__);
    func_?(&MethodInfo__DebugLogHandler__GetPlayersCount__);
    func_?(&MethodInfo__DebugLogHandler__GetProfileID__);
    func_?(&MethodInfo__DebugLogHandler__GetSystemInfo__);
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&TypeInfo__System__Func<System::String>);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__RuntimePlatform);
    func_?(&StringLiteral_Time_frameCount);
    func_?(&StringLiteral_SystemInfo);
    func_?(&StringLiteral_BrowserInfo);
    func_?(&StringLiteral_First_Error);
    func_?(&StringLiteral_PlanetID);
    func_?(&StringLiteral_ProfileID);
    func_?(&StringLiteral_RuntimePlatform);
    func_?(&StringLiteral_GameMode);
    func_?(&StringLiteral_Sanitized_Error_Data);
    func_?(&StringLiteral_Is_tourist_session);
    func_?(&StringLiteral_PlayersCount);
    func_?(&StringLiteral_PendingPlayersCount);
    func_?(&StringLiteral_Log_Context);
    func_?(&StringLiteral_JoinState);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    iStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                         ((MethodInfo *)0x0);
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_Time_frameCount,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
             func_?(TypeInfo__System__Func<System::String>);
    if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetBrowserInfo__,
                 (MethodInfo *)0x0);
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_BrowserInfo,(Object *)pSVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)func_?();
      if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
        RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                  (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetGameMode__,(MethodInfo *)0x0
                  );
        pSVar4 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_GameMode,(Object *)pSVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  );
        pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                 func_?(TypeInfo__System__Func<System::String>);
        if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
          RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                    (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetJoinState__,
                     (MethodInfo *)0x0);
          pSVar4 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_JoinState,(Object *)pSVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                    );
          pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                   func_?(TypeInfo__System__Func<System::String>);
          if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
            RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                      (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlayersCount__,
                       (MethodInfo *)0x0);
            pSVar4 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_PlayersCount,(Object *)pSVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                      );
            pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                     func_?(TypeInfo__System__Func<System::String>);
            if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
              mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
              RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                        (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetPendingPlayersCount__,
                         (MethodInfo *)0x0);
              pSVar4 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pRVar3,(MethodInfo *)0x0)
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                         (Object *)StringLiteral_PendingPlayersCount,(Object *)pSVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                        );
              pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                       func_?(TypeInfo__System__Func<System::String>);
              if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]
                ::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                          (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetIsTouristSession__,
                           (MethodInfo *)0x0);
                pSVar4 = DebugLogHandler_TryGetExtraString
                                   ((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                           (Object *)StringLiteral_Is_tourist_session,(Object *)pSVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                          );
                pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                         func_?(TypeInfo__System__Func<System::String>);
                if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                  mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::
                  Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                            (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetProfileID__,
                             (MethodInfo *)0x0);
                  pSVar4 = DebugLogHandler_TryGetExtraString
                                     ((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                             (Object *)StringLiteral_ProfileID,(Object *)pSVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                            );
                  pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                           func_?(TypeInfo__System__Func<System::String>);
                  if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::
                    Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                              (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlanetID__,
                               (MethodInfo *)0x0);
                    pSVar4 = DebugLogHandler_TryGetExtraString
                                       ((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                               (Object *)StringLiteral_PlanetID,(Object *)pSVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                              );
                    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_platform
                              ((MethodInfo *)0x0);
                    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                               (Object *)StringLiteral_RuntimePlatform,(Object *)pSVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                              );
                    pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)func_?();
                    if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::
                      Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                                (pRVar3,(Object *)0x0,MethodInfo__DebugLogHandler__GetSystemInfo__,
                                 (MethodInfo *)0x0);
                      pSVar4 = DebugLogHandler_TryGetExtraString
                                         ((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                                 (Object *)StringLiteral_SystemInfo,(Object *)pSVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                                );
                      pRVar3 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                               func_?(TypeInfo__System__Func<System::String>);
                      if (pRVar3 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
                        mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System
                        ::Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                                  (pRVar3,(Object *)this,
                                   MethodInfo__DebugLogHandler__GetLogContext__,(MethodInfo *)0x0);
                        pSVar4 = DebugLogHandler_TryGetExtraString
                                           ((Func_1_String_ *)pRVar3,(MethodInfo *)0x0);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                                   (Object *)StringLiteral_Log_Context,(Object *)pSVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                                  );
                        bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                          ((this->fields).sanitizedString,(MethodInfo *)0x0);
                        if (bVar5 == 0) {
                          pSVar4 = (this->fields).sanitizedString;
                          if (pSVar4 == (String *)0x0) goto code_?;
                          mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                                     (Object *)StringLiteral_Sanitized_Error_Data,
                                     (Object *)(this->fields).sanitizedString,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                                    );
                        }
                        if ((this->fields).errorCount == 0x32) {
                          if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__DebugLogHandler);
                          }
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                                     (Object *)StringLiteral_First_Error,
                                     (Object *)TypeInfo__DebugLogHandler->static_fields->firstError,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                                    );
                        }
                        return pDVar1;
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)(*pcVar6)();
  return pDVar1;
}


/* String GetGameMode() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetGameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__MVGameMode);
    cRam_? = '\x01';
  }
  MStack_1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  EStack_2.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
  EStack_2.monitor = (MonitorData *)0xffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  return pSVar3;
}


/* String GetIsTouristSession() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetIsTouristSession
                   (MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&stack0xfffffffb,(IFormatProvider *)0x0,
                      (MethodInfo *)CONCAT13(bVar1,(int3)extraout_var));
  return pSVar2;
}


/* String GetJoinState() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetJoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVJoinState);
    func_?(&StringLiteral_MVGameController_Game_is_null);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                       ((Enum *)&stack0xfffffff0,(MethodInfo *)TypeInfo__MVJoinState);
    return pSVar2;
  }
  return StringLiteral_MVGameController_Game_is_null;
}


/* String GetLogContext() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetLogContext
                   (DebugLogHandler *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__GetEnumerator__
                   );
    func_?(&StringLiteral_u000A);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0____1__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  QStack_7._q = (Queue_1_System_Object_ *)0x0;
  QStack_7._version = 0;
  QStack_7._index = 0;
  QStack_7._currentElement = (Object *)0x0;
  pSStack_8 = ::StringLiteral__;
  this_00 = (this->fields).logContextQueue;
  DStack_9._current.value = (Object *)0x0;
  DStack_9._getEnumeratorRetType = 0;
  DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_9._version = 0;
  DStack_9._index = 0;
  DStack_9._current.key = (Object *)0x0;
  if (this_00 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
    pQVar10 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__GetEnumerator
                       (&QStack_11,(Queue_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__GetEnumerator__
                       );
    uStack_12 = 0;
    QStack_7._q = pQVar10->_q;
    QStack_7._version = pQVar10->_version;
    QStack_7._index = pQVar10->_index;
    QStack_7._currentElement = pQVar10->_currentElement;
    pQStack_13 = &QStack_7;
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
              Queue_1_T_Enumerator_System_Object__MoveNext
                        (&QStack_7,
                         MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
        Queue_1_T_Enumerator_System_Object__Dispose
                  (pQStack_13,
                   MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dispose__
                  );
        *unaff_FS_OFFSET = uStack_3;
        return pSVar6;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
                Queue_1_T_Enumerator_System_Object__get_Current
                          (&QStack_7,
                           MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Current__
                          );
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff88,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                         );
      QStack_11._index = 0;
      DStack_9._dictionary = pDVar15->_dictionary;
      DStack_9._version = pDVar15->_version;
      DStack_9._index = pDVar15->_index;
      DStack_9._current.key = (pDVar15->_current).key;
      DStack_9._16_8_ = *(undefined8 *)&(pDVar15->_current).value;
      uStack_1._0_1_ = 3;
      QStack_11._currentElement = (Object *)&DStack_9;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                          );
        if (bVar14 == 0) break;
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1__,DStack_9._current.key,DStack_9._current.value,
                          (MethodInfo *)0x0);
        in_stack_16 = (MethodInfo *)&UNK_?;
        pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
        pSStack_8 = pSVar6;
      }
      uStack_1._0_1_ = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 ,in_stack_16);
      uStack_1._0_1_ = 1;
      in_stack_16 = (MethodInfo *)StringLiteral_u000A;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar6,StringLiteral_u000A,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar18)();
  return pSVar6;
}


/* String GetPendingPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPendingPlayersCount
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_MVGameController_WOCM_is_null);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this = (pMVar2->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
      MVPlayerContainer::MVPlayerContainer_get_PendingPlayersCount(this,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      return pSVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  return StringLiteral_MVGameController_WOCM_is_null;
}


/* String GetPlanetID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPlanetID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar1->fields).planetID,(MethodInfo *)0x0);
    return pSVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String GetPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPlayersCount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_MVGameController_WOCM_is_null);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this = (pMVar2->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
      MVPlayerContainer::MVPlayerContainer_get_Count(this,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      return pSVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  return StringLiteral_MVGameController_WOCM_is_null;
}


/* String GetProfileID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetProfileID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar1->fields).profileID,(MethodInfo *)0x0);
    return pSVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String GetSystemInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetSystemInfo(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeRef__UnityEngine__RenderTextureFormat);
    func_?(&TypeInfo__UnityEngine__RenderTextureFormat);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_graphicsShaderLevel);
    func_?(&StringLiteral_processorCount);
    func_?(&StringLiteral_graphicsDeviceName);
    func_?(&StringLiteral_systemMemorySize);
    func_?(&StringLiteral_supportsShadows);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_graphicsDeviceVendor);
    func_?(&StringLiteral_supportedRenderTargetCount);
    func_?(&StringLiteral_processorType);
    func_?(&StringLiteral_graphicsDeviceVendorID);
    func_?(&StringLiteral_supportsImageEffects);
    func_?(&StringLiteral_graphicsDeviceVersion);
    func_?(&StringLiteral_graphicsDeviceID);
    func_?(&StringLiteral_operatingSystem);
    func_?(&StringLiteral_Vivante_Corporation);
    func_?(&StringLiteral_graphicsMemorySize);
    func_?(&StringLiteral_supportedRenderTextureFormats);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (IEnumerator *)0x0;
  iStack_7 = 0;
  systemInfo = (Dictionary_2_System_String_System_String_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  pDStack_8 = systemInfo;
  if (systemInfo != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)systemInfo,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    pDStack_9 = systemInfo;
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_operatingSystem,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_processorType,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorCount
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_processorCount,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_systemMemorySize,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsMemorySize
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsMemorySize,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceName
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsDeviceName,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                       ((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsDeviceVendor,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceID
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsDeviceID,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendorID
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsDeviceVendorID,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
             SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsDeviceVersion,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_graphicsShaderLevel,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    BStack_12.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_SupportsShadows
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       (&BStack_12,(IFormatProvider *)0x0,in_stack_13);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_supportsShadows,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    BStack_12.m_value =
         System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
         Single,System::Object]::
         SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__get_IsReadOnly
                   ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                    in_stack_14);
    pSVar10 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       (&BStack_12,(IFormatProvider *)0x0,in_stack_15);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_supportsImageEffects,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_SupportedRenderTargetCount
                   ((MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)systemInfo,
               (Object *)StringLiteral_supportedRenderTargetCount,(Object *)pSVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                       ((MethodInfo *)0x0);
    bVar16 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar10,StringLiteral_Vivante_Corporation,(MethodInfo *)0x0);
    pSVar10 = ::StringLiteral__;
    handle = TypeRef__UnityEngine__RenderTextureFormat;
    if (bVar16 == 0) {
code_?:
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar10 = DebugLogHandler_GenerateSystemInfoString(systemInfo,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar10;
    }
    pSStack_17 = ::StringLiteral__;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
    if (this != (Array *)0x0) {
      pIStack_6 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
      piStack_18 = &iStack_7;
      ppIStack_19 = &pIStack_6;
      uStack_20 = 0;
      uStack_1 = 1;
      while (pIStack_6 != (IEnumerator *)0x0) {
        cVar21 = func_?();
        if (cVar21 == '\0') {
          uStack_1 = 0xffffffff;
          iStack_7 = func_?();
          if (iStack_7 != 0) {
            func_?();
          }
          systemInfo = pDStack_8;
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_8,
                     (Object *)StringLiteral_supportedRenderTextureFormats,(Object *)pSVar10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    );
          goto code_?;
        }
        if (pIStack_6 == (IEnumerator *)0x0) break;
        uVar22 = 0;
        uVar23 = (pIStack_6->klass->_1).interface_offsets_count;
        if (uVar23 != 0) {
          do {
            if (pIStack_6->klass->interfaceOffsets[uVar22].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar24 = &(pIStack_6->klass->vtable).get_Current +
                       pIStack_6->klass->interfaceOffsets[uVar22].offset;
              goto code_?;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar23);
        }
        pVVar24 = (VirtualInvokeData *)func_?();
code_?:
        piVar25 = (int *)(*pVVar24->methodPtr)();
        if (piVar25 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar25 + 0x20) !=
            (TypeInfo__UnityEngine__RenderTextureFormat->_0).element_class) {
          func_?();
          break;
        }
        pRVar26 = (RenderTextureFormat__Enum *)func_?();
        format = *pRVar26;
        bVar16 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                SystemInfo_SupportsRenderTextureFormat(format,(MethodInfo *)0x0);
        if (bVar16 != 0) {
          bVar16 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            EStack_27.klass = (Enum__Class *)TypeInfo__UnityEngine__RenderTextureFormat;
            EStack_27.monitor = (MonitorData *)0xffffffff;
            RStack_28 = format;
            pSVar29 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_27,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_4
                               (pSVar10,::StringLiteral__,pSVar29,(MethodInfo *)0x0);
            pSStack_17 = pSVar10;
          }
          else {
            EStack_30.klass = (Enum__Class *)TypeInfo__UnityEngine__RenderTextureFormat;
            EStack_30.monitor = (MonitorData *)0xffffffff;
            RStack_31 = format;
            pSVar29 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_30,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar10,pSVar29,(MethodInfo *)0x0)
            ;
            pSStack_17 = pSVar10;
          }
        }
      }
    }
  }
  func_?();
  pcVar32 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar32)();
  return pSVar10;
}


/* Dictionary`2[System.String,System.String] GetTags() */

Dictionary_2_System_String_System_String_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetTags(MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__MVJoinState);
    func_?(&StringLiteral_ReleaseName);
    func_?(&StringLiteral_standalone);
    func_?(&StringLiteral_Source);
    func_?(&StringLiteral_Version);
    func_?(&StringLiteral_JoinState);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_System_String_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                          );
  if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      pSVar3 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                         (pKVar2,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Version
                 ,(Object *)pSVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                );
      pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
      if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
        pSVar3 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                           (pKVar2,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ReleaseName,(Object *)pSVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  );
        MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
        value = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffd4,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_JoinState,(Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Source,(Object *)StringLiteral_standalone,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  );
        *unaff_FS_OFFSET = pSVar3;
        return pDVar1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_String_System_String_ *)(*pcVar4)();
  return pDVar1;
}


/* Void HandleLog(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_HandleLog
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffd4;
  puVar5 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                   );
    func_?(&TypeInfo__UnityEngine__Application__LogCallback);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pAVar6 = (Application_LogCallback *)
           func_?(TypeInfo__UnityEngine__Application__LogCallback);
  if (pAVar6 != (Application_LogCallback *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
              (pAVar6,(Object *)this,
               MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
               ,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
              (pAVar6,(MethodInfo *)0x0);
    puStack_1 = (undefined *)0x0;
    DebugLogHandler_HandleLogExecute(this,logString,stackTrace,type,(MethodInfo *)0x0);
    pAVar6 = (Application_LogCallback *)func_?();
    if (pAVar6 != (Application_LogCallback *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::
      Application_LogCallback__ctor
                (pAVar6,(Object *)this,
                 MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                 ,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
                (pAVar6,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  auStack_7[0] = func_?();
  func_?(auStack_7,&UNK_?);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleLogExecute(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_HandleLogExecute
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&StringLiteral__Ongoing_error__);
    cRam_? = '\x01';
  }
  bVar1 = DebugLogHandler_AddLogToLogContext(this,logString,type,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (type == LogType__Enum_Error) {
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DebugLogHandler);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__String);
      func_?(&StringLiteral_UnityEngine_Debug_LogError_Objec);
      cRam_? = '\x01';
    }
    type = func_?(TypeInfo__System__String,1);
    if ((String__Array *)type == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_UnityEngine_Debug_LogError_Objec == (String *)0x0) ||
       (iVar2 = func_?(), iVar2 != 0)) {
      if (((String__Array *)type)->max_length == 0) goto code_?;
      ((String__Array *)type)->vector[0] = StringLiteral_UnityEngine_Debug_LogError_Objec;
      func_?();
      if (stackTrace != (String *)0x0) {
        logString = (String *)&UNK_?;
        pSVar3 = mscorlib.dll::System::String::String_Split_4
                           (stackTrace,(String__Array *)type,
                            StringSplitOptions__Enum_RemoveEmptyEntries,(MethodInfo *)0x0);
        if (pSVar3 != (String__Array *)0x0) {
          if (pSVar3->max_length == 2) {
            if (pSVar3->max_length < 2) goto code_?;
            stackTrace = pSVar3->vector[1];
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  else {
code_?:
    piVar4 = &(this->fields).errorCount;
    *piVar4 = *piVar4 + 1;
    if ((this->fields).logErrorHasBeenSendOnce == 0) {
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DebugLogHandler);
      }
      TypeInfo__DebugLogHandler->static_fields->firstError = logString;
      func_?(&TypeInfo__DebugLogHandler->static_fields->firstError,logString);
      if ((this->fields).logErrorHasBeenSendOnce != 0) goto code_?;
    }
    else {
code_?:
      if ((this->fields).errorCount != 0x32) {
        return;
      }
    }
    onGoingErrorDetected = (this->fields).errorCount == 0x32;
    (this->fields).logErrorHasBeenSendOnce = 1;
    if (onGoingErrorDetected) {
      logString = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral__Ongoing_error__,logString,(MethodInfo *)0x0);
    }
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DebugLogHandler);
    }
    DebugLogHandler_SendToConsole(logString,stackTrace,(MethodInfo *)0x0);
    bVar1 = 0;
    DebugLogHandler_ReportError(this,logString,stackTrace,type,(MethodInfo *)0x0);
    this_00 = (this->fields).statHatErrorCount;
    if (this_00 != (DebugLogHandler_StatHatErrorCount *)0x0) {
      DebugLogHandler+StatHatErrorCount::DebugLogHandler_StatHatErrorCount_Increment
                (this_00,bVar1,onGoingErrorDetected,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(DebugLogHandlerConfig, SentryConfig) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Initialize
               (DebugLogHandler *this,DebugLogHandlerConfig debugLogHandlerConfig,
               SentryConfig sentryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                   );
    func_?(&
                    MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                   );
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    func_?(&TypeInfo__UnityEngine__Application__LogCallback);
    func_?(&TypeInfo__ProxyLogHandler);
    cRam_? = '\x01';
  }
  (this->fields).maxLogContextQueueCount = debugLogHandlerConfig.maxLogContextQueueCount;
  if (debugLogHandlerConfig.useProxyLogHandler != 0) {
    pPVar1 = (ProxyLogHandler *)func_?(TypeInfo__ProxyLogHandler);
    if (pPVar1 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler__ctor(pPVar1,(MethodInfo *)0x0);
    (this->fields).kogamaLogHandler = pPVar1;
    func_?(&(this->fields).kogamaLogHandler,pPVar1);
    pPVar1 = (this->fields).kogamaLogHandler;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (pPVar1 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
              (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_01,(MethodInfo *)0x0);
    pPVar1 = (this->fields).kogamaLogHandler;
    if (pPVar1 == (ProxyLogHandler *)0x0) goto code_?;
    (pPVar1->fields).filterLogTypeConsoleWrite =
         debugLogHandlerConfig.proxyLogHandlerConfig.filterLogTypeConsoleWrite;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt(0,0x65,(MethodInfo *)0x0)
  ;
  (this->fields).isSampling = 1;
  this_02 = (Application_LogCallback *)
            func_?(TypeInfo__UnityEngine__Application__LogCallback);
  if (this_02 != (Application_LogCallback *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
               ,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
              (this_02,(MethodInfo *)0x0);
    this_00 = (this->fields).sentrySdk;
    if (this_00 != (SentrySdk *)0x0) {
      SentrySdk::SentrySdk_Initialize(this_00,sentryConfig,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsIgnored(String) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_IsIgnored
               (String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (this != (HashSet_1_System_String_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      ((HashSet_1_System_Object_ *)this,(Object *)logString,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_KogamaLogHandlerOnOnLogReceived
               (DebugLogHandler *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                   );
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).kogamaLogHandler;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           func_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  if (pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (pPVar1 != (ProxyLogHandler *)0x0) {
      ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
                (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,(MethodInfo *)0x0);
      if (e != (ProxyLogHandler_LogFormatData *)0x0) {
        logString = mscorlib.dll::System::String::String_Format_3
                              ((e->fields).format,(e->fields).args,(MethodInfo *)0x0);
        DebugLogHandler_AddLogToLogContext(this,logString,(e->fields).LogType,(MethodInfo *)0x0);
        pPVar1 = (this->fields).kogamaLogHandler;
        pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if (pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                     ,(MethodInfo *)0x0);
          if (pPVar1 != (ProxyLogHandler *)0x0) {
            ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
                      (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReportError(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_ReportError
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
  }
  if (TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer == 0) {
    pSVar1 = (this->fields).sentrySdk;
    pDVar2 = DebugLogHandler_GetExtraSentryData(this,(MethodInfo *)0x0);
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DebugLogHandler);
    }
    pDVar3 = DebugLogHandler_GetTags((MethodInfo *)0x0);
    if (pSVar1 != (SentrySdk *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&TypeInfo__SentrySdk);
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
        if (pSVar1 == (SentrySdk *)0x0) goto code_?;
        if (((pSVar1->fields)._initialized != 0) &&
           (((type == LogType__Enum_Error || (type == LogType__Enum_Exception)) ||
            (type == LogType__Enum_Assert)))) {
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
          if (pSVar1 == (SentrySdk *)0x0) goto code_?;
          if (_UNK_? < fVar5 - (pSVar1->fields)._timeLastError) {
            pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (pSVar1->fields)._timeLastError = fVar5;
            if ((type == LogType__Enum_Exception) || (type == LogType__Enum_Assert)) {
              pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
              if (pSVar1 != (SentrySdk *)0x0) {
                SentrySdk::SentrySdk_ScheduleException
                          (pSVar1,logString,stackTrace,pDVar2,pDVar3,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            if (type == LogType__Enum_Error) {
              pSVar1 = TypeInfo__SentrySdk->static_fields->_instance;
              if (pSVar1 == (SentrySdk *)0x0) goto code_?;
              SentrySdk::SentrySdk_ScheduleError
                        (pSVar1,logString,stackTrace,pDVar2,pDVar3,(MethodInfo *)0x0);
            }
          }
        }
      }
      return;
    }
  }
  else {
    if ((this->fields).isSampling == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__DebugLogHandler);
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    index = 0;
    while( true ) {
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        this = (DebugLogHandler *)&UNK_?;
        func_?();
      }
      pLVar6 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if (pLVar6 == (List_1_System_String_ *)0x0) goto code_?;
      value = (RegexCharClass_SingleRange)logString;
      if ((pLVar6->fields)._size <= index) goto code_?;
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DebugLogHandler);
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (value = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            ), logString == (String *)0x0)) goto code_?;
      bVar4 = mscorlib.dll::System::String::String_Contains
                        (logString,(String *)value,(MethodInfo *)0x0);
      if (bVar4 != 0) break;
      index = index + 1;
    }
    startIndex = mscorlib.dll::System::String::String_IndexOf_3
                           (logString,(String *)value,(MethodInfo *)0x0);
    if (value != (RegexCharClass_SingleRange)0x0) {
      this = (DebugLogHandler *)&UNK_?;
      _UNK_? =
           mscorlib.dll::System::String::String_Remove
                     (logString,startIndex,*(int32_t *)((int)value + 8),(MethodInfo *)0x0);
      type = (LogType__Enum)&UNK_?;
      stackTrace = (String *)&UNK_?;
      func_?();
code_?:
      pDVar2 = DebugLogHandler_GetExtraSentryData(this,(MethodInfo *)0x0);
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DebugLogHandler);
      }
      pDVar3 = DebugLogHandler_GetTags((MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendClientLog
                  (this_01,(String *)value,stackTrace,type,pDVar2,pDVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String SanitizeLogStringForUniqueErrors(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_SanitizeLogStringForUniqueErrors
                   (DebugLogHandler *this,String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DebugLogHandler);
    }
    pLVar1 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size <= index) {
      return logString;
    }
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DebugLogHandler);
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (value = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                          ), logString == (String *)0x0)) goto code_?;
    bVar2 = mscorlib.dll::System::String::String_Contains
                      (logString,(String *)value,(MethodInfo *)0x0);
    if (bVar2 != 0) break;
    index = index + 1;
  }
  startIndex = mscorlib.dll::System::String::String_IndexOf_3
                         (logString,(String *)value,(MethodInfo *)0x0);
  if (value != (RegexCharClass_SingleRange)0x0) {
    pSVar3 = mscorlib.dll::System::String::String_Remove
                       (logString,startIndex,*(int32_t *)((int)value + 8),(MethodInfo *)0x0);
    *(String **)&logString[2].fields._firstChar = pSVar3;
    func_?();
    return (String *)value;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void SendToConsole(String, String) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_SendToConsole
               (String *logString,String *stackTrace,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  this = mscorlib.dll::System::String::String_Concat_4
                   (logString,::StringLiteral___,stackTrace,(MethodInfo *)0x0);
  if (this != (String *)0x0) {
    if (0x400 < (this->fields)._stringLength) {
      this = mscorlib.dll::System::String::String_Substring_1(this,0,0x400,(MethodInfo *)0x0);
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_Warning,this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String TryGetExtraString(Func`1[String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_TryGetExtraString
                   (Func_1_String_ *getFunc,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  if (getFunc != (Func_1_String_ *)0x0) {
    pSVar4 = (String *)
             (*(getFunc->fields)._._.invoke_impl)
                       ((getFunc->fields)._._.method_code,(getFunc->fields)._._.method);
    *unaff_FS_OFFSET = uStack_2;
    return pSVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void Update() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Update
               (DebugLogHandler *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).timeFrameCount = iVar1;
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Could_not_allocate_memory__Syste);
    func_?(&StringLiteral_Fullscreen_mode_can_only_be_enab);
    func_?(&StringLiteral_Failed_to_update_dynamic_font);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Screen_position_out_of_view_frus);
    cRam_? = '\x01';
  }
  this = (List_1_System_String_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,
               (Object *)StringLiteral_Could_not_allocate_memory__Syste,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,(Object *)StringLiteral_Failed_to_update_dynamic_font,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,
               (Object *)StringLiteral_Screen_position_out_of_view_frus,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings = this;
    func_?(TypeInfo__DebugLogHandler->static_fields,this);
    this_00 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)this_00,
                 (Object *)StringLiteral_Fullscreen_mode_can_only_be_enab,
                 MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                );
      TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings =
           (HashSet_1_System_String_ *)this_00;
      func_?(&TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings,this_00);
      TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 0;
      TypeInfo__DebugLogHandler->static_fields->firstError = ::StringLiteral__;
      func_?(&TypeInfo__DebugLogHandler->static_fields->firstError,::StringLiteral__);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler__ctor
               (DebugLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>
                   );
    func_?(&TypeInfo__DebugLogHandler__StatHatErrorCount);
    cRam_? = '\x01';
  }
  (this->fields).maxLogContextQueueCount = 4;
  value = (DebugLogHandler_StatHatErrorCount *)
          func_?(TypeInfo__DebugLogHandler__StatHatErrorCount);
  if (value != (DebugLogHandler_StatHatErrorCount *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields).statHatErrorCount = value;
    func_?(&(this->fields).statHatErrorCount,value);
    this_00 = (Queue_1_Dictionary_2_System_String_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>
                             );
    if (this_00 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Queue__
                );
      (this->fields).logContextQueue = this_00;
      func_?(&(this->fields).logContextQueue,this_00);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_DidConnectToGameServer() */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_get_DidConnectToGameServer
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
  }
  return TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer;
}


/* Boolean get_SendOnGoingError() */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_get_SendOnGoingError
               (DebugLogHandler *this,MethodInfo *method)

{
  return (this->fields).errorCount == 0x32;
}


/* Void set_DidConnectToGameServer(Boolean) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_set_DidConnectToGameServer
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DebugLogHandler);
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = value;
    return;
  }
  TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = value;
  return;
}

