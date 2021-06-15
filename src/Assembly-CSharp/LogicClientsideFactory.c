
/* IInputSignalReceiver CreateInputSignalReceiver(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
          (MVWorldObject *worldObject,bool defaultInput,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
         func_?(TypeInfo__LogicEvaluateInputSignalsOr);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    logicObjectManager =
         (LogicObjectManager *)
         System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
         Object]::
         Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                   ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                    (MethodInfo *)0x0);
    this_01 = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this_01,worldObject,(LogicEvaluateSignalComponentBase *)this,defaultInput,
               logicObjectManager,(MethodInfo *)0x0);
    if (this_01 != (InputSignalReceiverClient *)0x0) {
      pAVar1 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_01->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      pAVar2 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      if (pAVar1 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
code_?:
        (this_01->fields)._.OnSignal = pAVar2;
        return (IInputSignalReceiver *)this_01;
      }
      if (pAVar1->klass == TypeInfo__System__Action<bool,_bool,_LogicObjectManager>) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputSignalReceiver *)(*pcVar3)();
  return pIVar4;
}


/* IInputSignalReceiver CreateInputSignalReceiverAnd(MVWorldObject, Boolean,
   Action`3[Boolean,Boolean,LogicObjectManager]) */

IInputSignalReceiver *
Assembly-CSharp.dll::LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiverAnd
          (MVWorldObject *worldObject,bool defaultSignal,
          Action_3_Boolean_Boolean_LogicObjectManager_ *signalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (AvatarLimbManager_AvatarHeadRotationHandler *)
         func_?(TypeInfo__LogicEvaluateInputSignalsAnd);
  AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler__ctor
            (this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    logicObjectManager =
         (LogicObjectManager *)
         System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
         Object]::
         Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                   ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                    (MethodInfo *)0x0);
    this_01 = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this_01,worldObject,(LogicEvaluateSignalComponentBase *)this,defaultSignal,
               logicObjectManager,(MethodInfo *)0x0);
    if (this_01 != (InputSignalReceiverClient *)0x0) {
      pAVar1 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_01->fields)._.OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      pAVar2 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      if (pAVar1 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
code_?:
        (this_01->fields)._.OnSignal = pAVar2;
        return (IInputSignalReceiver *)this_01;
      }
      if (pAVar1->klass == TypeInfo__System__Action<bool,_bool,_LogicObjectManager>) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputSignalReceiver *)(*pcVar3)();
  return pIVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
         func_?(TypeInfo__LogicEvaluateInputSignalsOr);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    logicObjectManager =
         (LogicObjectManager *)
         System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
         Object]::
         Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                   ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                    (MethodInfo *)0x0);
    this_01 = (InputSignalReceiverClient *)func_?(TypeInfo__InputSignalReceiverClient);
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this_01,worldObject,(LogicEvaluateSignalComponentBase *)this,defaultInput,
               logicObjectManager,(MethodInfo *)0x0);
    this_02 = (SignalReceiverStateChangeCallbacks *)
              func_?(TypeInfo__SignalReceiverStateChangeCallbacks);
    MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks__ctor
              (this_02,(InputSignalReceiverBase *)this_01,(MethodInfo *)0x0);
    if (signalCallback != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
      if (this_02 == (SignalReceiverStateChangeCallbacks *)0x0) goto code_?;
      pAVar1 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_02->fields).OnSignal,(Delegate *)signalCallback,
                          (MethodInfo *)0x0);
      pAVar2 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      if (pAVar1 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        if (pAVar1->klass == TypeInfo__System__Action<bool,_bool,_LogicObjectManager>) {
          pAVar2 = pAVar1;
        }
        if (pAVar2 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
      }
      (this_02->fields).OnSignal = pAVar2;
    }
    if (inputStateUpdateCallback == (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
      return (IInputSignalReceiver *)this_02;
    }
    if (this_02 != (SignalReceiverStateChangeCallbacks *)0x0) {
      pAVar3 = (Action_2_LogicInputState_LogicObjectManager_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_02->fields).OnInputStateUpdate,
                          (Delegate *)inputStateUpdateCallback,(MethodInfo *)0x0);
      pAVar4 = (Action_2_LogicInputState_LogicObjectManager_ *)0x0;
      if (pAVar3 == (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
code_?:
        (this_02->fields).OnInputStateUpdate = pAVar4;
        return (IInputSignalReceiver *)this_02;
      }
      if (pAVar3->klass == TypeInfo__System__Action<LogicInputState,_LogicObjectManager>) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IInputSignalReceiver *)(*pcVar5)();
  return pIVar6;
}

