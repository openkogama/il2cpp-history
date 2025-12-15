
/* Boolean AddLogToLogContext(String, LogType) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_AddLogToLogContext
               (DebugLogHandler *this,String *logString,LogType__Enum type,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler,logString,CONCAT44(in_register_00000084,type),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__LogType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Enqueue_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Frame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      ((HashSet_1_System_Object_ *)this_00,(Object *)logString,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                      );
    if ((((bVar2 == 0) || (type != LogType__Enum_Error)) && (type != LogType__Enum_Warning)) &&
       (type != LogType__Enum_Log)) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    aiStackX_10[0] = (this->fields).timeFrameCount;
    value = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      behavior = CONCAT31((int3)((uint)uVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_Frame,
                 value,behavior,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      EStack_3.klass = (Enum__Class *)TypeInfo__UnityEngine__LogType;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      LStack_4 = type;
      key = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                 (Object *)logString,CONCAT31((int3)(behavior >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pQVar5 = (this->fields).logContextQueue;
      if (pQVar5 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)pQVar5,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Enqueue_System__Collections__Generic__Dictionary<System::String,_System::Object>_
                  );
        pQVar5 = (this->fields).logContextQueue;
        if (pQVar5 != (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
          if ((this->fields).maxLogContextQueueCount < (pQVar5->fields)._size) {
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Dequeue
                      ((Queue_1_System_Object_ *)pQVar5,
                       MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dequeue__
                      );
          }
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* String CleanStackTrace(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_CleanStackTrace
                   (String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnityEngine_Debug_LogError_Objec);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String);
  if (pSVar1 != (String__Array *)0x0) {
    FUN_?(pSVar1,0,StringLiteral_UnityEngine_Debug_LogError_Objec);
    if (stackTrace != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_SplitInternal_1
                         (stackTrace,(String *)0x0,pSVar1,0x7fffffff,
                          StringSplitOptions__Enum_RemoveEmptyEntries,(MethodInfo *)0x0);
      if (pSVar1 != (String__Array *)0x0) {
        if ((int)pSVar1->max_length != 2) {
          return stackTrace;
        }
        if (1 < (uint)pSVar1->max_length) {
          return pSVar1->vector[1];
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Destroy
               (DebugLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Application__LogCallback);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).errorCount = 0;
  (this->fields).logErrorHasBeenSendOnce = 0;
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).logContextQueue;
  if (this_00 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    FUN_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Clear__
              );
    (this->fields).isSampling = 0;
    if ((this->fields).isInBrokenState != 0) {
      (this->fields).isInBrokenState = 0;
      return;
    }
    if ((this->fields).kogamaLogHandler == (ProxyLogHandler *)0x0) {
code_?:
      this_03 = (Application_LogCallback *)
                FUN_?(TypeInfo__UnityEngine__Application__LogCallback);
      UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::
      Application_LogCallback__ctor
                (this_03,(Object *)this,
                 MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
                (this_03,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
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
    if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger == (ILogger_1 *)0x0)
    goto code_?;
    FUN_?(1,TypeInfo__UnityEngine__ILogger);
    this_01 = (this->fields).kogamaLogHandler;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (this_01 != (ProxyLogHandler *)0x0) {
      ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
                (this_01,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_02,(MethodInfo *)0x0)
      ;
      (this->fields).kogamaLogHandler = (ProxyLogHandler *)0x0;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&(this->fields).kogamaLogHandler >> 0xc);
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String GenerateSystemInfoString(Dictionary`2[System.String,System.String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GenerateSystemInfoString
                   (Dictionary_2_System_String_System_String_ *systemInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (systemInfo == (Dictionary_2_System_String_System_String_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar2)();
    return pSVar1;
  }
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&PStack_3 >> 0xc);
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
  PStack_3._arg1 = (Object *)(ulonglong)(uint)(systemInfo->fields)._version;
  uStack_8 = 2;
  auStack_9._8_8_ = PStack_3._arg1;
  pOStack_10 = (Object *)0x0;
  pOStack_11 = (Object *)0x0;
  uStack_12._0_4_ = 2;
  uStack_12._4_4_ = 0;
  uStack_13 = 0;
  puStack_14 = auStack_9;
  PStack_3._arg0 = (Object *)systemInfo;
  auStack_9._0_8_ = systemInfo;
  while (bVar15 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            auStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                           ), pSVar16 = StringLiteral__0____1_u000A, bVar15 != 0) {
    PStack_17._arg0 = (Object *)0x0;
    PStack_17._arg1 = (Object *)0x0;
    PStack_17._arg2 = (Object *)0x0;
    PStack_17._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_17,pOStack_10,pOStack_11,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_17._arg0;
    PStack_3._arg1 = PStack_17._arg1;
    PStack_3._arg2 = PStack_17._arg2;
    PStack_3._args = PStack_17._args;
    pSVar16 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar16,&PStack_3,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar16,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* String GetBrowserInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetBrowserInfo(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___version___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__BrowserComm->static_fields->browserName;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_10[0] = TypeInfo__BrowserComm->static_fields->browserVersion;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  format = StringLiteral__0___version___1_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,(Object *)pSVar1,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Dictionary`2[System.String,System.Object] GetExtraSentryData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetExtraSentryData
          (DebugLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetBrowserInfo__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetGameMode__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetIsTouristSession__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetJoinState__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetLogContext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetPendingPlayersCount__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetPlanetID__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetPlayersCount__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetProfileID__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DebugLogHandler__GetSystemInfo__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RuntimePlatform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_frameCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SystemInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BrowserInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_First_Error);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlanetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProfileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RuntimePlatform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sanitized_Error_Data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Is_tourist_session);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PendingPlayersCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Log_Context);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_String_System_Object_ *)(*pcVar1)();
    return pDVar3;
  }
  pcRam_? = pcVar1;
  auStackX_18[0] = (*pcRam_?)();
  value = (Object *)FUN_?(uRam_?,auStackX_18);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_String_System_Object_ *)(*pcVar1)();
    return pDVar3;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_Time_frameCount,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetBrowserInfo__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_BrowserInfo,(Object *)pSVar5,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetGameMode__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_GameMode,
             (Object *)pSVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetJoinState__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_JoinState,
             (Object *)pSVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlayersCount__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_PlayersCount,(Object *)pSVar5,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPendingPlayersCount__,
             (MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_PendingPlayersCount,(Object *)pSVar5,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetIsTouristSession__,
             (MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_Is_tourist_session,(Object *)pSVar5,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetProfileID__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_ProfileID,
             (Object *)pSVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetPlanetID__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_PlanetID,
             (Object *)pSVar5,(InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_String_System_Object_ *)(*pcVar1)();
    return pDVar3;
  }
  pcRam_? = pcVar1;
  uStack_6 = (*pcRam_?)();
  EStack_7.klass = (Enum__Class *)TypeInfo__UnityEngine__RuntimePlatform;
  EStack_7.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_RuntimePlatform,(Object *)pSVar5,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)0x0,MethodInfo__DebugLogHandler__GetSystemInfo__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_SystemInfo
             ,(Object *)pSVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pFVar4 = (Func_1_UnityEngine_Vector2Int_ *)FUN_?(TypeInfo__System__Func<System::String>);
  uVar2 = 0;
  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
            (pFVar4,(Object *)this,MethodInfo__DebugLogHandler__GetLogContext__,(MethodInfo *)0x0);
  pSVar5 = DebugLogHandler_TryGetExtraString((Func_1_String_ *)pFVar4,(MethodInfo *)0x0);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_Log_Context,(Object *)pSVar5,(InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  pSVar5 = (this->fields).sanitizedString;
  if ((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength != 0)) {
    mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
              (pSVar5,String_TrimType__Enum_Both,(MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Sanitized_Error_Data,(Object *)(this->fields).sanitizedString
               ,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  if ((this->fields).errorCount == 0x32) {
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DebugLogHandler);
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_First_Error,
               (Object *)TypeInfo__DebugLogHandler->static_fields->firstError,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  return (Dictionary_2_System_String_System_Object_ *)this_00;
}


/* String GetGameMode() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetGameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    EStack_2.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
    iStack_3 = (pGVar1->fields).gameMode;
    EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    return pSVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String GetIsTouristSession() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetIsTouristSession
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    iVar2 = (pGVar1->fields).profileID;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar3 = StringLiteral_False;
    if (iVar2 < 1) {
      pSVar3 = StringLiteral_True;
    }
    return pSVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String GetJoinState() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetJoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVJoinState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVGameController_Game_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return StringLiteral_MVGameController_Game_is_null;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      EStack_2.klass = (Enum__Class *)TypeInfo__MVJoinState;
      iStack_3 = (pMVar1->fields)._joinState;
      EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String GetLogContext() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetLogContext
                   (DebugLogHandler *this,MethodInfo *method)

{
  ppSVar1 = (String **)this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    ppSVar1 = &StringLiteral__0____1__;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = ::StringLiteral__;
  DStack_3._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_3._version = 0;
  DStack_3._index = 0;
  DStack_3._current.key = (Object *)0x0;
  DStack_3._current.value = (Object *)0x0;
  DStack_3._getEnumeratorRetType = 0;
  DStack_3._36_4_ = 0;
  pQVar4 = (this->fields).logContextQueue;
  if (pQVar4 == (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0) {
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pQStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    uStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                CONCAT44(0xffffffff,(pQVar4->fields)._version);
    uStack_12 = 0;
    auStack_13._8_8_ = uStack_11;
    pDStack_14 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    uStack_15 = 0;
    puStack_16 = auStack_13;
    pQStack_6 = pQVar4;
    auStack_13._0_8_ = pQVar4;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
              Queue_1_T_Enumerator_System_Object__MoveNext
                        ((Queue_1_T_Enumerator_System_Object_ *)auStack_13,
                         MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__MoveNext__
                        );
      if (bVar17 == 0) {
        return pSVar2;
      }
      ppSVar1 = (String **)
                MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__get_Current__
      ;
      if ((longlong)auStack_13._8_8_ < 0) break;
      if (pDStack_14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      uStack_18 = 0;
      uStack_19 = 0;
      pDStack_20 = pDStack_14;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_20 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_21 = (ulonglong)(uint)(pDStack_14->fields)._version;
      uStack_22 = 2;
      DStack_3._dictionary = pDStack_14;
      DStack_3._version = (undefined4)uStack_21;
      DStack_3._index = uStack_21._4_4_;
      DStack_3._current.key = (Object *)0x0;
      DStack_3._current.value = (Object *)0x0;
      DStack_3._getEnumeratorRetType = 2;
      DStack_3._36_4_ = 0;
      pQStack_6 = (Queue_1_Dictionary_2_System_String_System_Object_ *)0x0;
      uStack_11 = &DStack_3;
      while (bVar17 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_3,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                               ), bVar17 != 0) {
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1__,DStack_3._current.key,DStack_3._current.value,
                          (MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,str1,(MethodInfo *)0x0);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
    }
  }
  lVar7 = func_?(*(Il2CppClass **)
                               &(((DebugLogHandler *)ppSVar1)->fields).maxLogContextQueueCount);
  uVar23 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(auStack_13,uVar23);
  FUN_?();
  pcVar24 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar24)();
  return pSVar2;
}


/* String GetPendingPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPendingPlayersCount
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    return StringLiteral_MVGameController_WOCM_is_null;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar5 = (pMVar4->fields).pendingPlayers;
    if (pDVar5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      iVar6 = (pDVar5->fields)._count;
      iVar7 = (pDVar5->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._pointer._value = (void *)0x0;
      aRStack_8[0]._length = 0;
      aRStack_8[0]._12_4_ = 0;
      pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar6 - iVar7,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* String GetPlanetID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPlanetID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    value = (pGVar1->fields).planetID;
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_2[0]._pointer._value = (void *)0x0;
    aRStack_2[0]._length = 0;
    aRStack_2[0]._12_4_ = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    return pSVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String GetPlayersCount() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetPlayersCount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    return StringLiteral_MVGameController_WOCM_is_null;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar5 = (pMVar4->fields).players;
    if (pDVar5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      iVar6 = (pDVar5->fields)._count;
      iVar7 = (pDVar5->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._pointer._value = (void *)0x0;
      aRStack_8[0]._length = 0;
      aRStack_8[0]._12_4_ = 0;
      pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar6 - iVar7,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* String GetProfileID() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetProfileID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    value = (pGVar1->fields).profileID;
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_2[0]._pointer._value = (void *)0x0;
    aRStack_2[0]._length = 0;
    aRStack_2[0]._12_4_ = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    return pSVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String GetSystemInfo() */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetSystemInfo(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
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
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__RenderTextureFormat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTextureFormat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsShaderLevel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_processorCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsDeviceName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_systemMemorySize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_supportsShadows);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsDeviceVendor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_supportedRenderTargetCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_processorType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsDeviceVendorID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsDeviceVersion);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsDeviceID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_operatingSystem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vivante_Corporation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_graphicsMemorySize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_supportedRenderTextureFormats);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)0x0;
  pIStackX_18 = (IEnumerator *)0x0;
  alStack_2[0] = 0;
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_operatingSystem,(Object *)pSVar3,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                     ((MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_processorType
             ,(Object *)pSVar3,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value = (void *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_processorCount,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value = (void *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_systemMemorySize,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value = (void *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsMemorySize,(Object *)pSVar3,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceName
                     ((MethodInfo *)0x0);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsDeviceName,(Object *)pSVar3,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                     ((MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsDeviceVendor,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value = (void *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsDeviceID,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value = (void *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsDeviceVendorID,(Object *)pSVar3,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVersion
                     ((MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsDeviceVersion,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._pointer._value =
       (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
        *)0x0;
  RStack_7._length = 0;
  RStack_7._12_4_ = 0;
  uVar5 = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_graphicsShaderLevel,(Object *)pSVar3,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  pcRam_? = pcVar4;
  cVar8 = (*pcRam_?)();
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_False;
  if (cVar8 != '\0') {
    pSVar3 = StringLiteral_True;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_supportsShadows,(Object *)pSVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
code_?:
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
code_?:
    uVar5 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar5);
    pSVar3 = (String *)func_?(&StringLiteral_Failed_SupportsRenderTextureForm);
    pRVar9 = (RenderTextureFormat__Enum__Class *)0x0;
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                 MethodInfo__UnityEngine__SystemInfo__SupportsRenderTextureFormat_UnityEngine__RenderTextureFormat_
                                );
    plVar1 = (longlong *)FUN_?(this_01,uVar5);
code_?:
    FUN_?(plVar1,pRVar9);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar4;
    iVar6 = (*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_7._pointer._value = (void *)0x0;
    RStack_7._length = 0;
    RStack_7._12_4_ = 0;
    uVar5 = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pIVar10 = (IEnumerator__Class *)CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,
               (Object *)StringLiteral_supportedRenderTargetCount,(Object *)pSVar3,
               (InsertionBehavior__Enum)pIVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    RStack_7._pointer._value = this;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                       ((MethodInfo *)0x0);
    if (pSVar3 != StringLiteral_Vivante_Corporation) {
      if (((pSVar3 == (String *)0x0) || (StringLiteral_Vivante_Corporation == (String *)0x0)) ||
         ((pSVar3->fields)._stringLength !=
          (StringLiteral_Vivante_Corporation->fields)._stringLength)) {
code_?:
        if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = DebugLogHandler_GenerateSystemInfoString
                           ((Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
        return pSVar3;
      }
      pIVar10 = (IEnumerator__Class *)0x0;
      bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_Vivante_Corporation->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
    }
    pIVar12 = TypeRef__UnityEngine__RenderTextureFormat;
    pSVar3 = ::StringLiteral__;
    pSStackX_20 = ::StringLiteral__;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar12 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar13 = FUN_?(pIVar12,1);
      plVar1 = (longlong *)FUN_?(lVar13 + 0x20);
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (plVar1 == (longlong *)0x0) {
      uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
      this_02 = (ArgumentNullException *)func_?(uVar5);
      pSVar3 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_02,pSVar3,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(this_02,uVar5);
      pcVar4 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar4)();
      return pSVar3;
    }
    this_00 = (Array *)(**(code **)(*plVar1 + 0x888))(plVar1);
    if (this_00 == (Array *)0x0) goto code_?;
    pIStackX_18 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
    uStack_14 = 0;
    ppIStack_15 = &pIStackX_18;
    plStack_16 = alStack_2;
    while (pIStackX_18 != (IEnumerator *)0x0) {
      cVar8 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      pIVar17 = pIStackX_18;
      if (cVar8 == '\0') {
        alStack_2[0] = FUN_?(pIStackX_18,TypeInfo__System__IDisposable);
        if (alStack_2[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,
                   (Object *)StringLiteral_supportedRenderTextureFormats,(Object *)pSVar3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   ->klass->rgctx_data[0x22].method);
        goto code_?;
      }
      if (pIStackX_18 == (IEnumerator *)0x0) goto code_?;
      pIVar18 = pIStackX_18->klass;
      uVar19 = 0;
      uVar20._0_1_ = (pIVar18->_1).rank;
      uVar20._1_1_ = (pIVar18->_1).minimumAlignment;
      pIVar10 = TypeInfo__System__Collections__IEnumerator;
      if (uVar20 != 0) {
        do {
          if (pIVar18->interfaceOffsets[uVar19].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar21 = &(pIVar18->vtable).MoveNext + (pIVar18->interfaceOffsets[uVar19].offset + 1);
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
      pVVar21 = (VirtualInvokeData *)
                FUN_?(pIStackX_18,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      plVar1 = (longlong *)(*pVVar21->methodPtr)(pIVar17,pVVar21->method);
      if (plVar1 == (longlong *)0x0) goto code_?;
      pRVar9 = TypeInfo__UnityEngine__RenderTextureFormat;
      if (*(Il2CppClass **)(*plVar1 + 0x40) !=
          (TypeInfo__UnityEngine__RenderTextureFormat->_0).element_class) goto code_?;
      lVar13 = plVar1[2];
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__RenderTextureFormat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      value = (Enum *)FUN_?(TypeInfo__UnityEngine__RenderTextureFormat);
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_IsValidEnumValue
                        (value,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar4;
      cVar8 = (*pcRam_?)();
      if (cVar8 != '\0') {
        uStack_22 = (int)lVar13;
        if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0)) {
          EStack_23.klass = (Enum__Class *)TypeInfo__UnityEngine__RenderTextureFormat;
          EStack_23.monitor = (MonitorData *)0xffffffffffffffff;
          pSVar24 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_23,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar24,(MethodInfo *)0x0);
          pSStackX_20 = pSVar3;
        }
        else {
          EStack_23.klass = (Enum__Class *)TypeInfo__UnityEngine__RenderTextureFormat;
          EStack_23.monitor = (MonitorData *)0xffffffffffffffff;
          pSVar24 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_23,(MethodInfo *)0x0);
          pIVar10 = (IEnumerator__Class *)0x0;
          pSVar3 = mscorlib.dll::System::String::String_Concat_5
                             (pSVar3,::StringLiteral__,pSVar24,(MethodInfo *)0x0);
          pSStackX_20 = pSVar3;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Dictionary`2[System.String,System.String] GetTags() */

Dictionary_2_System_String_System_String_ *
Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_GetTags(MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJoinState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ReleaseName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_standalone);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Source);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__3_5_13_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    IVar1 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_Version,
               (Object *)StringLiteral__3_5_13_0,IVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Maintenance);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ReleaseName
               ,(Object *)StringLiteral_Maintenance,IVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      EStack_3.klass = (Enum__Class *)TypeInfo__MVJoinState;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      iStack_4 = (pMVar2->fields)._joinState;
      value = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_JoinState
                 ,(Object *)value,IVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 ->klass->rgctx_data[0x22].method);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_Source,
                 (Object *)StringLiteral_standalone,CONCAT31((int3)(IVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 ->klass->rgctx_data[0x22].method);
      return (Dictionary_2_System_String_System_String_ *)this;
    }
    FUN_?();
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_String_System_String_ *)(*pcVar5)();
  return pDVar6;
}


/* Void HandleLog(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_HandleLog
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Application__LogCallback);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Application_LogCallback *)FUN_?(TypeInfo__UnityEngine__Application__LogCallback)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
            (pAVar1,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_remove_logMessageReceived
            (pAVar1,(MethodInfo *)0x0);
  DebugLogHandler_HandleLogExecute(this,logString,stackTrace,type,(MethodInfo *)0x0);
  pAVar1 = (Application_LogCallback *)FUN_?(TypeInfo__UnityEngine__Application__LogCallback)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
            (pAVar1,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
            (pAVar1,(MethodInfo *)0x0);
  return;
}


/* Void HandleLogExecute(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_HandleLogExecute
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Ongoing_error__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = DebugLogHandler_AddLogToLogContext(this,logString,type,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (type == LogType__Enum_Error) {
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__String);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_UnityEngine_Debug_LogError_Objec);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar2 = (String__Array *)FUN_?(TypeInfo__System__String);
      if (((pSVar2 == (String__Array *)0x0) ||
          (FUN_?(pSVar2,0,StringLiteral_UnityEngine_Debug_LogError_Objec),
          stackTrace == (String *)0x0)) ||
         (pSVar2 = mscorlib.dll::System::String::String_SplitInternal_1
                             (stackTrace,(String *)0x0,pSVar2,0x7fffffff,
                              StringSplitOptions__Enum_RemoveEmptyEntries,(MethodInfo *)0x0),
         pSVar2 == (String__Array *)0x0)) goto DAT_?;
      if ((int)pSVar2->max_length == 2) {
        if ((uint)pSVar2->max_length < 2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        stackTrace = pSVar2->vector[1];
      }
    }
    piVar4 = &(this->fields).errorCount;
    *piVar4 = *piVar4 + 1;
    bVar1 = 0;
    if ((this->fields).logErrorHasBeenSendOnce == 0) {
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DebugLogHandler);
      }
      TypeInfo__DebugLogHandler->static_fields->firstError = logString;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&TypeInfo__DebugLogHandler->static_fields->firstError >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      bVar1 = 1;
    }
    if (((this->fields).logErrorHasBeenSendOnce == 0) || ((this->fields).errorCount == 0x32)) {
      (this->fields).logErrorHasBeenSendOnce = 1;
      onGoingErrorDetected = (this->fields).errorCount == 0x32;
      if (onGoingErrorDetected) {
        logString = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral__Ongoing_error__,logString,(MethodInfo *)0x0);
      }
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      DebugLogHandler_SendToConsole(logString,stackTrace,(MethodInfo *)0x0);
      DebugLogHandler_ReportError(this,logString,stackTrace,type,(MethodInfo *)0x0);
      this_00 = (this->fields).statHatErrorCount;
      if (this_00 == (DebugLogHandler_StatHatErrorCount *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      DebugLogHandler+StatHatErrorCount::DebugLogHandler_StatHatErrorCount_Increment
                (this_00,bVar1,onGoingErrorDetected,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(DebugLogHandlerConfig, SentryConfig) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Initialize
               (DebugLogHandler *this,DebugLogHandlerConfig *debugLogHandlerConfig,
               SentryConfig *sentryConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Application__LogCallback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ProxyLogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = debugLogHandlerConfig->useProxyLogHandler;
  (this->fields).maxLogContextQueueCount = debugLogHandlerConfig->maxLogContextQueueCount;
  if (bVar1 != 0) {
    pPVar2 = (ProxyLogHandler *)FUN_?(TypeInfo__ProxyLogHandler);
    ProxyLogHandler::ProxyLogHandler__ctor(pPVar2,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).kogamaLogHandler = pPVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).kogamaLogHandler >> 0xc);
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
    pPVar2 = (this->fields).kogamaLogHandler;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (pPVar2 == (ProxyLogHandler *)0x0) goto code_?;
    ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
              (pPVar2,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_01,(MethodInfo *)0x0);
    pPVar2 = (this->fields).kogamaLogHandler;
    if (pPVar2 == (ProxyLogHandler *)0x0) goto code_?;
    (pPVar2->fields).filterLogTypeConsoleWrite =
         (debugLogHandlerConfig->proxyLogHandlerConfig).filterLogTypeConsoleWrite;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(0,0x65);
  (this->fields).isSampling = 1;
  this_02 = (Application_LogCallback *)
            FUN_?(TypeInfo__UnityEngine__Application__LogCallback);
  UnityEngine.CoreModule.dll::UnityEngine::Application+LogCallback::Application_LogCallback__ctor
            (this_02,(Object *)this,
             MethodInfo__DebugLogHandler__HandleLog_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
            (this_02,(MethodInfo *)0x0);
  this_00 = (this->fields).sentrySdk;
  if (this_00 != (SentrySdk *)0x0) {
    SStack_10.dns = sentryConfig->dns;
    SStack_10.isEnabled = sentryConfig->isEnabled;
    SStack_10._9_7_ = *(undefined7 *)&sentryConfig->field_0x9;
    SentrySdk::SentrySdk_Initialize(this_00,&SStack_10,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsIgnored(String) */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_IsIgnored
               (String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DebugLogHandler);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_;
  pHVar2 = TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings;
  if (pHVar2 == (HashSet_1_System_String_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pHVar2->fields)._buckets != (Int32__Array *)0x0) {
    iVar5 = 0;
    if (logString == (String *)0x0) {
      uVar6 = 0;
    }
    else {
      pIVar7 = (pHVar2->fields)._comparer;
      if (pIVar7 == (IEqualityComparer_1_System_String_ *)0x0) goto code_?;
      pvVar8 = (MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                 ->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
        pvVar8 = (void *)FUN_?(pvVar8);
      }
      uVar6 = FUN_?(1,pvVar8,pIVar7,logString);
      uVar6 = uVar6 & 0x7fffffff;
    }
    pIVar9 = (pHVar2->fields)._buckets;
    pHVar10 = (pHVar2->fields)._slots;
    if (pIVar9 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar11 = (int)uVar6 % (int)pIVar9->max_length;
    if ((uint)pIVar9->max_length <= uVar11) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar11 = pIVar9->vector[(int)uVar11] - 1;
    if (-1 < (int)uVar11) {
      if (pHVar10 == (HashSet_1_T_Slot_System_String___Array *)0x0) goto code_?;
      do {
        if ((uint)pHVar10->max_length <= uVar11) goto code_?;
        if (pHVar10->vector[(int)uVar11].hashCode == uVar6) {
          pIVar7 = (pHVar2->fields)._comparer;
          pSVar12 = pHVar10->vector[(int)uVar11].value;
          if (pIVar7 == (IEqualityComparer_1_System_String_ *)0x0) goto code_?;
          pvVar8 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
            pvVar8 = (void *)FUN_?(pvVar8);
          }
          cVar13 = FUN_?(0,pvVar8,pIVar7,pSVar12,logString);
          if (cVar13 != '\0') {
            return 1;
          }
        }
        if ((int)pHVar10->max_length <= iVar5) {
          uVar14 = func_?(&TypeInfo__System__InvalidOperationException);
          this = (ProtocolViolationException *)func_?(uVar14);
          pSVar12 = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this,pSVar12,(MethodInfo *)0x0);
          FUN_?(this,pMVar1);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        iVar5 = iVar5 + 1;
        if ((uint)pHVar10->max_length <= uVar11) goto code_?;
        uVar11 = pHVar10->vector[(int)uVar11].next;
      } while (-1 < (int)uVar11);
    }
  }
  return 0;
}


/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_KogamaLogHandlerOnOnLogReceived
               (DebugLogHandler *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).kogamaLogHandler;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
             ,(MethodInfo *)0x0);
  if ((pPVar1 != (ProxyLogHandler *)0x0) &&
     (ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
                (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)pUVar2,(MethodInfo *)0x0),
     e != (ProxyLogHandler_LogFormatData *)0x0)) {
    logString = ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData_get_Message
                          (e,(MethodInfo *)0x0);
    DebugLogHandler_AddLogToLogContext(this,logString,(e->fields).LogType,(MethodInfo *)0x0);
    pPVar1 = (this->fields).kogamaLogHandler;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
             FUN_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__DebugLogHandler__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
               ,(MethodInfo *)0x0);
    if (pPVar1 != (ProxyLogHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppEVar3 = &(pPVar1->fields).OnLogReceived;
      a = (pPVar1->fields).OnLogReceived;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pEVar5 = TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>;
        if (pDVar4 == (Delegate *)0x0) {
          pEVar6 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0;
        }
        else {
          pEVar6 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)
                   FUN_?(pDVar4,
                                 TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
          if (pEVar6 == (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
            FUN_?(pDVar4,pEVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pEVar8 = *ppEVar3;
        bVar9 = a == pEVar8;
        if (bVar9) {
          *ppEVar3 = pEVar6;
          pEVar8 = a;
        }
        UNLOCK();
        pEVar6 = a;
        if (!bVar9) {
          pEVar6 = pEVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppEVar3 >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = pEVar6 != a;
        a = pEVar6;
      } while (bVar9);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReportError(String, String, LogType) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_ReportError
               (DebugLogHandler *this,String *logString,String *stackTrace,LogType__Enum type,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer == 0) {
    this_00 = (this->fields).sentrySdk;
    pDVar1 = DebugLogHandler_GetExtraSentryData(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    pDVar2 = DebugLogHandler_GetTags((MethodInfo *)0x0);
    if (this_00 == (SentrySdk *)0x0) goto code_?;
    SentrySdk::SentrySdk_OnLogMessageReceived
              (this_00,logString,stackTrace,type,pDVar1,pDVar2,(MethodInfo *)0x0);
  }
  else if ((this->fields).isSampling != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DebugLogHandler);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar3 = 0;
    lVar4 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar5 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if (pLVar5 == (List_1_System_String_ *)0x0) goto code_?;
      value = logString;
      if ((pLVar5->fields)._size <= (int)uVar3) goto code_?;
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar5 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
      if (pLVar5 == (List_1_System_String_ *)0x0) goto code_?;
      if ((uint)(pLVar5->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar5->fields)._items;
      if (pSVar7 == (String__Array *)0x0) goto code_?;
      if ((uint)pSVar7->max_length <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (logString == (String *)0x0) goto code_?;
      value = *(String **)((longlong)pSVar7->vector + lVar4 + -0x20);
      bVar8 = mscorlib.dll::System::String::String_Contains(logString,value,(MethodInfo *)0x0);
      if (bVar8 != 0) break;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    }
    startIndex = mscorlib.dll::System::String::String_IndexOf_7
                           (logString,value,0,(logString->fields)._stringLength,
                            StringComparison__Enum_CurrentCulture,(MethodInfo *)0x0);
    if (value != (String *)0x0) {
      pSVar9 = mscorlib.dll::System::String::String_Remove
                         (logString,startIndex,(value->fields)._stringLength,(MethodInfo *)0x0);
      (this->fields).sanitizedString = pSVar9;
      func_?(&(this->fields).sanitizedString);
code_?:
      pDVar1 = DebugLogHandler_GetExtraSentryData(this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar2 = DebugLogHandler_GetTags((MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendClientLog
                  (this_01,value,stackTrace,type,pDVar1,pDVar2,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}


/* String SanitizeLogStringForUniqueErrors(String) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_SanitizeLogStringForUniqueErrors
                   (DebugLogHandler *this,String *logString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DebugLogHandler);
    }
    pLVar3 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if (pLVar3 == (List_1_System_String_ *)0x0) goto code_?;
    if ((pLVar3->fields)._size <= (int)uVar1) {
      return logString;
    }
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DebugLogHandler);
    }
    pLVar3 = TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings;
    if (pLVar3 == (List_1_System_String_ *)0x0) goto code_?;
    if ((uint)(pLVar3->fields)._size <= uVar1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pSVar5 = (String *)(*pcVar4)();
      return pSVar5;
    }
    pSVar6 = (pLVar3->fields)._items;
    if (pSVar6 == (String__Array *)0x0) goto code_?;
    if ((uint)pSVar6->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar5 = (String *)(*pcVar4)();
      return pSVar5;
    }
    if (logString == (String *)0x0) goto code_?;
    pSVar5 = *(String **)((longlong)pSVar6->vector + lVar2 + -0x20);
    bVar7 = mscorlib.dll::System::String::String_Contains(logString,pSVar5,(MethodInfo *)0x0);
    if (bVar7 != 0) break;
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  startIndex = mscorlib.dll::System::String::String_IndexOf_7
                         (logString,pSVar5,0,(logString->fields)._stringLength,
                          StringComparison__Enum_CurrentCulture,(MethodInfo *)0x0);
  if (pSVar5 != (String *)0x0) {
    pSVar8 = mscorlib.dll::System::String::String_Remove
                       (logString,startIndex,(pSVar5->fields)._stringLength,(MethodInfo *)0x0);
    (this->fields).sanitizedString = pSVar8;
    func_?(&(this->fields).sanitizedString);
    return pSVar5;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Void SendToConsole(String, String) */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_SendToConsole
               (String *logString,String *stackTrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (logString,::StringLiteral___,stackTrace,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar2 = (pSVar1->fields)._stringLength;
    if (0x400 < iVar2) {
      if (iVar2 + -0x400 < 0) goto code_?;
      if (iVar2 != 0x400) {
        pSVar1 = mscorlib.dll::System::String::String_InternalSubString
                           (pSVar1,0,0x400,(MethodInfo *)0x0);
      }
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_Warning,pSVar1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this = (ArgumentOutOfRangeException *)func_?(uVar3);
  pSVar1 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
  paramName = (String *)func_?(&StringLiteral_length);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this,paramName,pSVar1,(MethodInfo *)0x0);
  uVar3 = func_?(&MethodInfo__System__String__Substring_int__int_);
  FUN_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String TryGetExtraString(Func`1[String]) */

String * Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_TryGetExtraString
                   (Func_1_String_ *getFunc,MethodInfo *method)

{
  if (getFunc != (Func_1_String_ *)0x0) {
    pSVar1 = (String *)
             (*(getFunc->fields)._._.invoke_impl)
                       ((getFunc->fields)._._.method_code,(getFunc->fields)._._.method);
    return pSVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_Update
               (DebugLogHandler *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  (this->fields).timeFrameCount = iVar3;
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_allocate_memory__Syste);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_mode_can_only_be_enab);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_update_dynamic_font);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screen_position_out_of_view_frus);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_System_String_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  pSVar2 = StringLiteral_Could_not_allocate_memory__Syste;
  if (this != (List_1_System_String_ *)0x0) {
    piVar3 = &(this->fields)._version;
    *piVar3 = *piVar3 + 1;
    pSVar4 = (this->fields)._items;
    if (pSVar4 != (String__Array *)0x0) {
      uVar5 = (this->fields)._size;
      if (uVar5 < (uint)pSVar4->max_length) {
        (this->fields)._size = uVar5 + 1;
        FUN_?(pSVar4,(longlong)(int)uVar5,pSVar2);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this,(Object *)pSVar2,
                   pMVar1->klass->rgctx_data[0xe].method);
      }
      pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      pSVar2 = StringLiteral_Failed_to_update_dynamic_font;
      piVar3 = &(this->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar4 = (this->fields)._items;
      if (pSVar4 != (String__Array *)0x0) {
        uVar5 = (this->fields)._size;
        if (uVar5 < (uint)pSVar4->max_length) {
          (this->fields)._size = uVar5 + 1;
          FUN_?(pSVar4,(longlong)(int)uVar5,pSVar2);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this,(Object *)pSVar2,
                     pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        pSVar2 = StringLiteral_Screen_position_out_of_view_frus;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pSVar4 = (this->fields)._items;
        if (pSVar4 != (String__Array *)0x0) {
          uVar5 = (this->fields)._size;
          if (uVar5 < (uint)pSVar4->max_length) {
            (this->fields)._size = uVar5 + 1;
            FUN_?(pSVar4,(longlong)(int)uVar5,pSVar2);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this,(Object *)pSVar2,
                       pMVar1->klass->rgctx_data[0xe].method);
          }
          TypeInfo__DebugLogHandler->static_fields->sanitizeLogSubstrings = this;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)TypeInfo__DebugLogHandler->static_fields >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          this_00 = (HashSet_1_System_String_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object___ctor
                    ((HashSet_1_System_Object_ *)this_00,
                     MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
          if (this_00 != (HashSet_1_System_String_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__AddIfNotPresent
                      ((HashSet_1_System_Object_ *)this_00,
                       (Object *)StringLiteral_Fullscreen_mode_can_only_be_enab,
                       MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                       ->klass->rgctx_data[0x15].method);
            TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings = this_00;
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)&TypeInfo__DebugLogHandler->static_fields->ignoreLogStrings
                            >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 0;
            TypeInfo__DebugLogHandler->static_fields->firstError = ::StringLiteral__;
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)&TypeInfo__DebugLogHandler->static_fields->firstError >> 0xc
                            );
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* DebugLogHandler() */

void Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler__ctor
               (DebugLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DebugLogHandler__StatHatErrorCount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).maxLogContextQueueCount = 4;
  pDVar1 = (DebugLogHandler_StatHatErrorCount *)
           FUN_?(TypeInfo__DebugLogHandler__StatHatErrorCount);
  bVar2 = iRam_? != 0;
  (this->fields).statHatErrorCount = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).statHatErrorCount >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Queue_1_Dictionary_2_System_String_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>
                         );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::Dictionary<System::String,_System::Object>_>__Queue__
            );
  bVar2 = iRam_? != 0;
  (this->fields).logContextQueue = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).logContextQueue >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
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
  return;
}


/* Boolean get_DidConnectToGameServer() */

bool Assembly-CSharp.dll::DebugLogHandler::DebugLogHandler_get_DidConnectToGameServer
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DebugLogHandler);
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
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DebugLogHandler);
  }
  TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = value;
  return;
}

