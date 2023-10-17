
/* Void Disable() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_Disable
               (ProxyLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_1__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    pIStack_2 = (ILogger_1 *)&TypeInfo__UnityEngine__ILogger;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_1__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    pDStack_1 = (Debug_1__Class *)(this->fields).defaultLogHandler;
    pIStack_4 = TypeInfo__UnityEngine__ILogger;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pDStack_1 = (Debug_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LogException(Exception, Object) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogException
               (ProxyLogHandler *this,Exception *exception,Object_1 *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ILogHandler);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).defaultLogHandler;
  if (pIVar1 == (ILogHandler *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (pIVar1->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__ILogHandler) {
        ppIVar5 = &(&(pIVar1->klass->vtable).LogException)
                   [pIVar1->klass->interfaceOffsets[uVar3].offset].methodPtr;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppIVar5 = (Il2CppMethodPointer *)func_?(pIVar1,TypeInfo__UnityEngine__ILogHandler,1);
code_?:
  (**ppIVar5)(pIVar1,exception,context,(MethodInfo *)ppIVar5[1]);
  return;
}


/* Void LogFormat(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogFormat
               (ProxyLogHandler *this,LogType__Enum logType,Object_1 *context,String *format,
               Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ILogHandler);
    func_?(&TypeInfo__ProxyLogHandler__LogFormatData);
    cRam_? = '\x01';
  }
  if ((logType == LogType__Enum_Exception) ||
     ((int)logType <= (this->fields).filterLogTypeConsoleWrite)) {
    pIVar1 = (this->fields).defaultLogHandler;
    if (pIVar1 != (ILogHandler *)0x0) {
      uVar2 = 0;
      uVar3 = (pIVar1->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__ILogHandler) {
            pVVar4 = &(pIVar1->klass->vtable).LogFormat +
                     pIVar1->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)func_?(pIVar1,TypeInfo__UnityEngine__ILogHandler,0);
code_?:
      (*pVVar4->methodPtr)(pIVar1,logType,context,format,args,pVVar4->method);
      return;
    }
  }
  else {
    if ((this->fields).OnLogReceived == (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
      return;
    }
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__ProxyLogHandler__LogFormatData)
    ;
    if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
      (this_00->fields).m_Tween = (IEnumerator *)context;
      (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)logType;
      func_?(&(this_00->fields).m_Tween,context);
      this_00[1].klass = (TweenRunner_1_FloatTween___Class *)format;
      func_?(this_00 + 1,format);
      this_00[1].monitor = (MonitorData *)args;
      func_?(&this_00[1].monitor,args);
      pEVar5 = (this->fields).OnLogReceived;
      if (pEVar5 != (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
        (*(pEVar5->fields)._._.invoke_impl)
                  ((pEVar5->fields)._._.method_code,this,this_00,(pEVar5->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ProxyLogHandler() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler__ctor
               (ProxyLogHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__ILogger);
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
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 != (ILogger_1 *)0x0) {
    pIVar2 = (ILogHandler *)func_?(0,TypeInfo__UnityEngine__ILogger,pIVar1);
    (this->fields).defaultLogHandler = pIVar2;
    method_00 = (MethodInfo *)&UNK_?;
    func_?(&this->fields,pIVar2);
    (this->fields).filterLogTypeConsoleWrite = 3;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar1 != (ILogger_1 *)0x0) {
      func_?(1,TypeInfo__UnityEngine__ILogger,pIVar1,this);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_OnLogReceived(EventHandler`1[ProxyLogHandler+LogFormatData]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
               (ProxyLogHandler *this,EventHandler_1_ProxyLogHandler_LogFormatData_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnLogReceived;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)
             func_?(&(this->fields).OnLogReceived,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
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
    func_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnLogReceived;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)
             func_?(&(this->fields).OnLogReceived,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

