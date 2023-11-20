
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
       (LogicEvaluateSignalComponentBase *)func_?(TypeInfo__LogicEvaluateInputSignalsOr);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)logicEvaluateSignalComponentBase
             ,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    logicObjectManager = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField;
    this = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this,worldObject,logicEvaluateSignalComponentBase,defaultInput,logicObjectManager,
               (MethodInfo *)0x0);
    if (this != (InputSignalReceiverClient *)0x0) {
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (this->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
        func_?();
        return (IInputSignalReceiver *)this;
      }
      pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
      if (pAVar3 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        (this->fields)._.OnSignal = pAVar3;
        iVar4 = func_?();
        if (iVar4 != 0) {
          func_?();
          return (IInputSignalReceiver *)this;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
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
  this = (LogicEvaluateInputSignalsAnd *)func_?(TypeInfo__LogicEvaluateInputSignalsAnd);
  MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
            (this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    logicObjectManager = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField;
    this_00 = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this_00,worldObject,(LogicEvaluateSignalComponentBase *)this,defaultSignal,
               logicObjectManager,(MethodInfo *)0x0);
    if (this_00 != (InputSignalReceiverClient *)0x0) {
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_00->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (this_00->fields)._.OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
        func_?();
        return (IInputSignalReceiver *)this_00;
      }
      pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
      if (pAVar3 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        (this_00->fields)._.OnSignal = pAVar3;
        iVar4 = func_?();
        if (iVar4 != 0) {
          func_?();
          return (IInputSignalReceiver *)this_00;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
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
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)logicEvaluateSignalComponentBase
             ,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    logicObjectManager = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField;
    this = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this,worldObject,logicEvaluateSignalComponentBase,defaultInput,logicObjectManager,
               (MethodInfo *)0x0);
    this_00 = (SignalReceiverStateChangeCallbacks *)
              func_?(TypeInfo__SignalReceiverStateChangeCallbacks);
    MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks__ctor
              (this_00,(InputSignalReceiverBase *)this,(MethodInfo *)0x0);
    if (signalCallback != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
      if (this_00 == (SignalReceiverStateChangeCallbacks *)0x0) goto code_?;
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_00->fields).OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (this_00->fields).OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      }
      else {
        pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
        if (pAVar3 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
        (this_00->fields).OnSignal = pAVar3;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
    }
    if (inputStateUpdateCallback == (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
      return (IInputSignalReceiver *)this_00;
    }
    if (this_00 != (SignalReceiverStateChangeCallbacks *)0x0) {
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_00->fields).OnInputStateUpdate,
                          (Delegate *)inputStateUpdateCallback,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (this_00->fields).OnInputStateUpdate = (Action_2_LogicInputState_LogicObjectManager_ *)0x0;
        func_?();
        return (IInputSignalReceiver *)this_00;
      }
      pAVar5 = (Action_2_LogicInputState_LogicObjectManager_ *)func_?();
      if (pAVar5 != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
        (this_00->fields).OnInputStateUpdate = pAVar5;
        iVar4 = func_?();
        if (iVar4 != 0) {
          func_?();
          return (IInputSignalReceiver *)this_00;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar7 = (IInputSignalReceiver *)(*pcVar6)();
  return pIVar7;
}

