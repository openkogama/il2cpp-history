
/* Void Disable() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_Disable
               (ProxyLogHandler *this,MethodInfo *method)

{
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
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (this->fields).defaultLogHandler;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__ILogger) {
        pVVar7 = &(pIVar5->vtable).get_logHandler + (pIVar5->interfaceOffsets[uVar4].offset + 1);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,pIVar3,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void LogException(Exception, Object) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogException
               (ProxyLogHandler *this,Exception *exception,Object_1 *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__ILogHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultLogHandler != (ILogHandler *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LogFormat(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_LogFormat
               (ProxyLogHandler *this,LogType__Enum logType,Object_1 *context,String *format,
               Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__ILogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ProxyLogHandler__LogFormatData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((logType == LogType__Enum_Exception) ||
     ((int)logType <= (this->fields).filterLogTypeConsoleWrite)) {
    if ((this->fields).defaultLogHandler == (ILogHandler *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?();
  }
  else if ((this->fields).OnLogReceived != (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
    lVar2 = FUN_?(TypeInfo__ProxyLogHandler__LogFormatData);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar3 = iRam_?;
    *(LogType__Enum *)(lVar2 + 0x10) = logType;
    *(Object_1 **)(lVar2 + 0x18) = context;
    if (iVar3 != 0) {
      uVar4 = (uint)(lVar2 + 0x18U >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    *(String **)(lVar2 + 0x20) = format;
    iVar9 = 0;
    if (iVar3 != 0) {
      uVar4 = (uint)(lVar2 + 0x20U >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar9 = iRam_?;
      } while (!bVar8);
    }
    *(Object__Array **)(lVar2 + 0x28) = args;
    if (iVar9 != 0) {
      uVar4 = (uint)(lVar2 + 0x28U >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pEVar10 = (this->fields).OnLogReceived;
    if (pEVar10 == (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) goto code_?;
    (*(pEVar10->fields)._._.invoke_impl)
              ((pEVar10->fields)._._.method_code,this,lVar2,(pEVar10->fields)._._.method);
  }
  return;
}


/* ProxyLogHandler() */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler__ctor
               (ProxyLogHandler *this,MethodInfo *method)

{
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
  if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger != (ILogger_1 *)0x0) {
    pIVar1 = (ILogHandler *)FUN_?(0,TypeInfo__UnityEngine__ILogger);
    bVar2 = iRam_? != 0;
    (this->fields).defaultLogHandler = pIVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
    bVar2 = cRam_? == '\0';
    (this->fields).filterLogTypeConsoleWrite = 3;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__Debug);
    }
    pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar7 != (ILogger_1 *)0x0) {
      uVar8 = 0;
      pIVar9 = pIVar7->klass;
      uVar10._0_1_ = (pIVar9->_1).rank;
      uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__ILogger) {
            pVVar11 = &(pIVar9->vtable).get_logHandler + (pIVar9->interfaceOffsets[uVar8].offset + 1)
            ;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      pVVar11 = (VirtualInvokeData *)FUN_?(pIVar7);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar11->methodPtr)(pIVar7,this,pVVar11->method,pVVar11->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void add_OnLogReceived(EventHandler`1[ProxyLogHandler+LogFormatData]) */

void Assembly-CSharp.dll::ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
               (ProxyLogHandler *this,EventHandler_1_ProxyLogHandler_LogFormatData_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnLogReceived;
  a = (this->fields).OnLogReceived;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
      if (pEVar4 == (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
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
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnLogReceived;
  source = (this->fields).OnLogReceived;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ProxyLogHandler_LogFormatData_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
      if (pEVar4 == (EventHandler_1_ProxyLogHandler_LogFormatData_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

