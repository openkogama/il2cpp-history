
/* IInputSignalReceiver CreateInputSignalReceiver(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
          (MVWorldObject *worldObject,bool defaultInput,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputSignalReceiverClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicEvaluateInputSignalsOr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  logicEvaluateSignalComponentBase =
       (LogicEvaluateSignalComponentBase *)FUN_?(TypeInfo__LogicEvaluateInputSignalsOr);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    logicObjectManager = (LogicObjectManager *)(pMVar2->fields)._LogicObjectManager_k__BackingField;
    this = (InputSignalReceiverClient *)FUN_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this,worldObject,logicEvaluateSignalComponentBase,defaultInput,logicObjectManager,
               (MethodInfo *)0x0);
    if (this != (InputSignalReceiverClient *)0x0) {
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      pAVar4 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      if (pDVar3 == (Delegate *)0x0) {
        (this->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      }
      else {
        pAVar5 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
                 FUN_?(pDVar3,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (pAVar5 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
          FUN_?(pDVar3,pAVar4);
          pcVar6 = (code *)swi(3);
          pIVar7 = (IInputSignalReceiver *)(*pcVar6)();
          return pIVar7;
        }
        (this->fields)._.OnSignal = pAVar5;
        pAVar4 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        lVar8 = FUN_?(pDVar3,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (lVar8 == 0) {
          FUN_?(pDVar3,pAVar4);
          pcVar6 = (code *)swi(3);
          pIVar7 = (IInputSignalReceiver *)(*pcVar6)();
          return pIVar7;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(this->fields)._.OnSignal >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      return (IInputSignalReceiver *)this;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IInputSignalReceiver *)(*pcVar6)();
  return pIVar7;
}


/* IInputSignalReceiver CreateInputSignalReceiverAnd(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiverAnd
          (MVWorldObject *worldObject,bool defaultSignal,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputSignalReceiverClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicEvaluateInputSignalsAnd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  logicEvaluateSignalComponentBase =
       (LogicEvaluateSignalComponentBase *)FUN_?(TypeInfo__LogicEvaluateInputSignalsAnd);
  bVar1 = cRam_? == '\0';
  *(undefined1 *)&logicEvaluateSignalComponentBase[1].klass = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    logicObjectManager = (LogicObjectManager *)(pMVar3->fields)._LogicObjectManager_k__BackingField;
    this = (InputSignalReceiverClient *)FUN_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this,worldObject,logicEvaluateSignalComponentBase,defaultSignal,logicObjectManager,
               (MethodInfo *)0x0);
    if (this != (InputSignalReceiverClient *)0x0) {
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      pAVar5 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      if (pDVar4 == (Delegate *)0x0) {
        (this->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      }
      else {
        pAVar6 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
                 FUN_?(pDVar4,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (pAVar6 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
          FUN_?(pDVar4,pAVar5);
          pcVar7 = (code *)swi(3);
          pIVar8 = (IInputSignalReceiver *)(*pcVar7)();
          return pIVar8;
        }
        (this->fields)._.OnSignal = pAVar6;
        pAVar5 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        lVar9 = FUN_?(pDVar4,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (lVar9 == 0) {
          FUN_?(pDVar4,pAVar5);
          pcVar7 = (code *)swi(3);
          pIVar8 = (IInputSignalReceiver *)(*pcVar7)();
          return pIVar8;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(this->fields)._.OnSignal >> 0xc);
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
      return (IInputSignalReceiver *)this;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (IInputSignalReceiver *)(*pcVar7)();
  return pIVar8;
}


/* IInputSignalReceiver CreateStateChangeInputSignalReceiver(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager], Action`2[LogicInputState,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::
LogicClientsideFactory_CreateStateChangeInputSignalReceiver
          (MVWorldObject *worldObject,bool defaultInput,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,
          Action_2_LogicInputState_LogicObjectManager_ *inputStateUpdateCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputSignalReceiverClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicEvaluateInputSignalsOr);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SignalReceiverStateChangeCallbacks);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  logicEvaluateSignalComponentBase =
       (LogicEvaluateSignalComponentBase *)FUN_?(TypeInfo__LogicEvaluateInputSignalsOr);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    logicObjectManager = (LogicObjectManager *)(pMVar2->fields)._LogicObjectManager_k__BackingField;
    pIVar3 = (IInputSignalReceiver__Class *)FUN_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              ((InputSignalReceiverClient *)pIVar3,worldObject,logicEvaluateSignalComponentBase,
               defaultInput,logicObjectManager,(MethodInfo *)0x0);
    pIVar4 = (IInputSignalReceiver *)FUN_?(TypeInfo__SignalReceiverStateChangeCallbacks);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SignalReceiverStateChangeCallbacks__HandleOnSignal_bool__bool__LogicObjectManager_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar5 = iRam_? != 0;
    pIVar4[1].klass = pIVar3;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(pIVar4 + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pIVar3 = pIVar4[1].klass;
    if (pIVar3 != (IInputSignalReceiver__Class *)0x0) {
      pDVar10 = *(Delegate **)&(pIVar3->_0).byval_arg.attrs;
      b = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
      FUN_?(b,pIVar4);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar10,b,(MethodInfo *)0x0);
      pAVar11 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      if (pDVar10 == (Delegate *)0x0) {
        (pIVar3->_0).byval_arg.attrs = 0;
        (pIVar3->_0).byval_arg.type = 0;
        *(undefined5 *)&(pIVar3->_0).byval_arg.field_0xb = 0;
      }
      else {
        lVar7 = FUN_?(pDVar10,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (lVar7 == 0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
          return pIVar4;
        }
        (pIVar3->_0).byval_arg.attrs = (short)lVar7;
        pAVar11 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        (pIVar3->_0).byval_arg.type = (char)((ulonglong)lVar7 >> 0x10);
        *(int5 *)&(pIVar3->_0).byval_arg.field_0xb = (int5)((ulonglong)lVar7 >> 0x18);
        lVar7 = FUN_?(pDVar10,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
        if (lVar7 == 0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
          return pIVar4;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pIVar3->_0).byval_arg.attrs >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if (signalCallback != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar4[1].monitor,(Delegate *)signalCallback,
                             (MethodInfo *)0x0);
        pAVar11 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        if (pDVar10 == (Delegate *)0x0) {
          pIVar4[1].monitor = (MonitorData *)0x0;
        }
        else {
          pMVar13 = (MonitorData *)
                    FUN_?(pDVar10,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
          if (pMVar13 == (MonitorData *)0x0) {
            FUN_?(pDVar10,pAVar11);
            pcVar12 = (code *)swi(3);
            pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
            return pIVar4;
          }
          pIVar4[1].monitor = pMVar13;
          pAVar11 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
          lVar7 = FUN_?(pDVar10,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
          if (lVar7 == 0) {
            FUN_?(pDVar10,pAVar11);
            pcVar12 = (code *)swi(3);
            pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
            return pIVar4;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pIVar4[1].monitor >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
      }
      if (inputStateUpdateCallback != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar4[2].klass,(Delegate *)inputStateUpdateCallback,
                             (MethodInfo *)0x0);
        pAVar14 = TypeInfo__System__Action<LogicInputState,_LogicObjectManager>;
        if (pDVar10 == (Delegate *)0x0) {
          pIVar4[2].klass = (IInputSignalReceiver__Class *)0x0;
        }
        else {
          pIVar3 = (IInputSignalReceiver__Class *)
                   FUN_?(pDVar10,
                                 TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          if (pIVar3 == (IInputSignalReceiver__Class *)0x0) {
            FUN_?(pDVar10,pAVar14);
            pcVar12 = (code *)swi(3);
            pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
            return pIVar4;
          }
          pIVar4[2].klass = pIVar3;
          pAVar14 = TypeInfo__System__Action<LogicInputState,_LogicObjectManager>;
          lVar7 = FUN_?(pDVar10,
                                 TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          if (lVar7 == 0) {
            FUN_?(pDVar10,pAVar14);
            pcVar12 = (code *)swi(3);
            pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
            return pIVar4;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)(pIVar4 + 2) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
      }
      return pIVar4;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pIVar4 = (IInputSignalReceiver *)(*pcVar12)();
  return pIVar4;
}

