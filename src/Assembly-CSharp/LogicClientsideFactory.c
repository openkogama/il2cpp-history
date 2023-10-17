
/* IInputSignalReceiver CreateInputSignalReceiver(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
          (MVWorldObject *worldObject,bool defaultInput,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__InputSignalReceiverClient);
    func_?(&TypeInfo__LogicEvaluateInputSignalsOr);
    cRam_? = '\x01';
  }
  logicEvaluateSignalComponentBase =
       (Delegate *)func_?(TypeInfo__LogicEvaluateInputSignalsOr);
  if (logicEvaluateSignalComponentBase != (Delegate *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor
              ((TweenRunner_1_FloatTween_ *)logicEvaluateSignalComponentBase,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      unaff_EBX = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)
                  (pMVar1->fields)._LogicObjectManager_k__BackingField;
      this = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
      if (this != (InputSignalReceiverClient *)0x0) {
        InputSignalReceiverClient::InputSignalReceiverClient__ctor
                  (this,worldObject,
                   (LogicEvaluateSignalComponentBase *)logicEvaluateSignalComponentBase,defaultInput
                   ,(LogicObjectManager *)unaff_EBX,(MethodInfo *)0x0);
        logicEvaluateSignalComponentBase =
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)(this->fields)._.OnSignal,(Delegate *)signalCallback,
                        (MethodInfo *)0x0);
        unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        if (logicEvaluateSignalComponentBase == (Delegate *)0x0) {
          (this->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
          pDStack2 = (Delegate *)&(this->fields)._.OnSignal;
          pAStack3 =
               (Action_3_Boolean_Boolean_LogicObjectManager___Class *)
               logicEvaluateSignalComponentBase;
          func_?();
          return (IInputSignalReceiver *)this;
        }
        pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        pDStack2 = logicEvaluateSignalComponentBase;
        pAVar4 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
        if (pAVar4 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
          (this->fields)._.OnSignal = pAVar4;
          unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
          pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
          pDStack2 = logicEvaluateSignalComponentBase;
          pAStack3 = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)func_?()
          ;
          if (pAStack3 != (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
            pDStack2 = (Delegate *)&(this->fields)._.OnSignal;
            func_?();
            return (IInputSignalReceiver *)this;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pDStack2 = logicEvaluateSignalComponentBase;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IInputSignalReceiver *)(*pcVar5)();
  return pIVar6;
}


/* IInputSignalReceiver CreateInputSignalReceiverAnd(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiverAnd
          (MVWorldObject *worldObject,bool defaultSignal,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__InputSignalReceiverClient);
    func_?(&TypeInfo__LogicEvaluateInputSignalsAnd);
    cRam_? = '\x01';
  }
  this = (Delegate *)func_?(TypeInfo__LogicEvaluateInputSignalsAnd);
  if (this != (Delegate *)0x0) {
    MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
              ((LogicEvaluateInputSignalsAnd *)this,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      unaff_EBX = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)
                  (pMVar1->fields)._LogicObjectManager_k__BackingField;
      this_00 = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
      if (this_00 != (InputSignalReceiverClient *)0x0) {
        InputSignalReceiverClient::InputSignalReceiverClient__ctor
                  (this_00,worldObject,(LogicEvaluateSignalComponentBase *)this,defaultSignal,
                   (LogicObjectManager *)unaff_EBX,(MethodInfo *)0x0);
        this = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_00->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
        unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        if (this == (Delegate *)0x0) {
          (this_00->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
          pDStack2 = (Delegate *)&(this_00->fields)._.OnSignal;
          pAStack3 = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)this;
          func_?();
          return (IInputSignalReceiver *)this_00;
        }
        pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        pDStack2 = this;
        pAVar4 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
        if (pAVar4 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
          (this_00->fields)._.OnSignal = pAVar4;
          unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
          pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
          pDStack2 = this;
          pAStack3 = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)func_?()
          ;
          if (pAStack3 != (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
            pDStack2 = (Delegate *)&(this_00->fields)._.OnSignal;
            func_?();
            return (IInputSignalReceiver *)this_00;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pDStack2 = this;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IInputSignalReceiver *)(*pcVar5)();
  return pIVar6;
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
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__InputSignalReceiverClient);
    func_?(&TypeInfo__LogicEvaluateInputSignalsOr);
    func_?(&TypeInfo__SignalReceiverStateChangeCallbacks);
    cRam_? = '\x01';
  }
  logicEvaluateSignalComponentBase =
       (LogicEvaluateSignalComponentBase *)func_?(TypeInfo__LogicEvaluateInputSignalsOr);
  if (logicEvaluateSignalComponentBase != (LogicEvaluateSignalComponentBase *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor
              ((TweenRunner_1_FloatTween_ *)logicEvaluateSignalComponentBase,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      logicObjectManager =
           (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField;
      this = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
      if (this != (InputSignalReceiverClient *)0x0) {
        InputSignalReceiverClient::InputSignalReceiverClient__ctor
                  (this,worldObject,logicEvaluateSignalComponentBase,defaultInput,logicObjectManager
                   ,(MethodInfo *)0x0);
        this_00 = (SignalReceiverStateChangeCallbacks *)
                  func_?(TypeInfo__SignalReceiverStateChangeCallbacks);
        if (this_00 != (SignalReceiverStateChangeCallbacks *)0x0) {
          MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
          SignalReceiverStateChangeCallbacks__ctor
                    (this_00,(InputSignalReceiverBase *)this,(MethodInfo *)0x0);
          if (signalCallback != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
            pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)(this_00->fields).OnSignal,(Delegate *)signalCallback,
                                (MethodInfo *)0x0);
            if (pDVar2 == (Delegate *)0x0) {
              (this_00->fields).OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
              inputStateUpdateCallback = (Action_2_LogicInputState_LogicObjectManager_ *)0x0;
            }
            else {
              pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
              if (pAVar3 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0)
              goto code_?;
              (this_00->fields).OnSignal = pAVar3;
              inputStateUpdateCallback =
                   (Action_2_LogicInputState_LogicObjectManager_ *)func_?();
              if (inputStateUpdateCallback == (Action_2_LogicInputState_LogicObjectManager_ *)0x0)
              goto code_?;
            }
            func_?();
          }
          if (inputStateUpdateCallback == (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
            return (IInputSignalReceiver *)this_00;
          }
          pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)(this_00->fields).OnInputStateUpdate,
                              (Delegate *)inputStateUpdateCallback,(MethodInfo *)0x0);
          if (pDVar2 == (Delegate *)0x0) {
            (this_00->fields).OnInputStateUpdate =
                 (Action_2_LogicInputState_LogicObjectManager_ *)0x0;
            func_?();
            return (IInputSignalReceiver *)this_00;
          }
          pAVar4 = (Action_2_LogicInputState_LogicObjectManager_ *)func_?();
          if (pAVar4 != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
            (this_00->fields).OnInputStateUpdate = pAVar4;
            iVar5 = func_?();
            if (iVar5 != 0) {
              func_?();
              return (IInputSignalReceiver *)this_00;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IInputSignalReceiver *)(*pcVar6)();
  return pIVar7;
}

