
/* Void Disable() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_Disable
               (ProxyLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  pIVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                     ((MethodInfo *)0x0);
  if (pIVar1 != (ILogger *)0x0) {
    func_?(1,TypeInfo__UnityEngine__ILogger,pIVar1,(this->fields).defaultLogHandler);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LogException(Exception, Object) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogException
               (ProxyLogHandler *this,Exception *exception,Object_1 *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).defaultLogHandler;
  if (pIVar1 == (ILogHandler *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__ILogHandler) {
        ppMVar6 = &(&(pIVar1->klass->vtable).LogException)[pIVar3->interfaceOffsets[uVar4].offset].
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)func_?(pIVar1,TypeInfo__UnityEngine__ILogHandler,1);
code_?:
  (*(code *)*ppMVar6)(pIVar1,exception,context,ppMVar6[1]);
  return;
}


/* Void LogFormat(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogFormat
               (ProxyLogHandler *this,LogType__Enum logType,Object_1 *context,String *format,
               Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((logType != LogType__Enum_Exception) &&
     ((this->fields).filterLogTypeConsoleWrite < (int)logType)) {
    if ((this->fields).OnLogReceived != (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
      this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__ProxyLogHandler__LogFormatData);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__EventArgs);
      }
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
      (this_01->fields)._current = (Object *)context;
      *(String **)&(this_01->fields)._disposing = format;
      (this_01->fields)._this = (WinningConditionDebriefing *)logType;
      (this_01->fields)._PC = (int32_t)args;
      this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnLogReceived;
      if (this_00 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
      goto code_?;
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
                 MethodInfo__System__EventHandler<ProxyLogHandler::LogFormatData>__Invoke_System__Object__ProxyLogHandler__LogFormatData_
                );
    }
    return;
  }
  pIVar1 = (this->fields).defaultLogHandler;
  if (pIVar1 != (ILogHandler *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__ILogHandler) {
          ppMVar5 = &(&(pIVar1->klass->vtable).LogFormat)
                     [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__UnityEngine__ILogHandler,0);
code_?:
    (*(code *)*ppMVar5)(pIVar1,logType,context,format,args,ppMVar5[1]);
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ProxyLogHandler() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler__ctor
               (ProxyLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  pIVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                     ((MethodInfo *)0x0);
  if (pIVar1 != (ILogger *)0x0) {
    pIVar2 = (ILogHandler *)func_?(0,TypeInfo__UnityEngine__ILogger,pIVar1);
    (this->fields).defaultLogHandler = pIVar2;
    (this->fields).filterLogTypeConsoleWrite = 3;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_3);
    pIVar1 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                       ((MethodInfo *)0x0);
    if (pIVar1 != (ILogger *)0x0) {
      func_?(1,TypeInfo__UnityEngine__ILogger,pIVar1,this);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_OnLogReceived(EventHandler`1[ProxyLogHandler+LogFormatData]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
               (ProxyLogHandler *this,EventHandler_1_ProxyLogHandler_LogFormatData_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnLogReceived;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ProxyLogHandler_LogFormatData___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Boolean isAllowed(LogType) */

bool Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_isAllowed
               (ProxyLogHandler *this,LogType__Enum logType,MethodInfo *method)

{
  if ((logType != LogType__Enum_Exception) &&
     ((this->fields).filterLogTypeConsoleWrite < (int)logType)) {
    return 0;
  }
  return 1;
}


/* Void remove_OnLogReceived(EventHandler`1[ProxyLogHandler+LogFormatData]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_remove_OnLogReceived
               (ProxyLogHandler *this,EventHandler_1_ProxyLogHandler_LogFormatData_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnLogReceived;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ProxyLogHandler_LogFormatData___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)func_?(ppEVar1,pDVar3,source)
    ;
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

