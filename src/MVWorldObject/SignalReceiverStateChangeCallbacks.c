
/* Void HandleOnSignal(Boolean, Boolean, LogicObjectManager) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_HandleOnSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,bool wasHot,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (isHot == 0) {
    cVar1 = (wasHot == 0) + '\x02';
  }
  else {
    cVar1 = wasHot != 0;
  }
  if ((this->fields).OnInputStateUpdate != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
    pAVar2 = (this->fields).OnInputStateUpdate;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,cVar1,logicObjectManager,(pAVar2->fields)._._.method
              );
  }
  if ((this->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
    pAVar3 = (this->fields).OnSignal;
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,_isHot,_wasHot,logicObjectManager,
               (pAVar3->fields)._._.method);
  }
  return;
}


/* Void Reset() */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks_Reset
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields)._inputSignalReceiverBase;
  if (pIVar2 != (InputSignalReceiverBase *)0x0) {
    (pIVar2->fields).firstFrame = 1;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_UpdateSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,MethodInfo *method)

{
  this_00 = (this->fields)._inputSignalReceiverBase;
  if ((this_00 != (InputSignalReceiverBase *)0x0) &&
     (pLVar1 = (this_00->fields).logicEvaluateSignalComponentBase,
     pLVar1 != (LogicEvaluateSignalComponentBase *)0x0)) {
    if ((pLVar1->fields).signalsToEvaluate == 0) {
      InputSignalReceiverBase::InputSignalReceiverBase_SendSignal(this_00,isHot,(MethodInfo *)0x0);
      return;
    }
    (*(pLVar1->klass->vtable).__unknown_1.methodPtr)
              (pLVar1,_isHot,(pLVar1->klass->vtable).__unknown_1.method);
    pLVar1 = (this_00->fields).logicEvaluateSignalComponentBase;
    if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
      pLVar2 = &pLVar1->fields;
      pLVar2->evaluatedSignals = pLVar2->evaluatedSignals + 1;
      pLVar1 = (this_00->fields).logicEvaluateSignalComponentBase;
      if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
        if ((pLVar1->fields).evaluatedSignals == (pLVar1->fields).signalsToEvaluate) {
          (pLVar1->fields).evaluatedSignals = 0;
          pLVar1 = (this_00->fields).logicEvaluateSignalComponentBase;
          if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
          isHot_00 = (*(pLVar1->klass->vtable).__unknown.methodPtr)
                               (pLVar1,(pLVar1->klass->vtable).__unknown.method);
          InputSignalReceiverBase::InputSignalReceiverBase_SendSignal
                    (this_00,isHot_00,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SignalReceiverStateChangeCallbacks(InputSignalReceiverBase) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks__ctor
               (SignalReceiverStateChangeCallbacks *this,
               InputSignalReceiverBase *_inputSignalReceiverBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&
                    MethodInfo__SignalReceiverStateChangeCallbacks__HandleOnSignal_bool__bool__LogicObjectManager_
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._inputSignalReceiverBase = _inputSignalReceiverBase;
  func_?(&this->fields,_inputSignalReceiverBase);
  pIVar1 = (this->fields)._inputSignalReceiverBase;
  if (pIVar1 != (InputSignalReceiverBase *)0x0) {
    pAVar2 = (pIVar1->fields).OnSignal;
    this_00 = (Action_3_Boolean_Boolean_Object_ *)
              func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    unaff_EBX = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0;
    if (this_00 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
      mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::Action_3_Boolean_Boolean_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__SignalReceiverStateChangeCallbacks__HandleOnSignal_bool__bool__LogicObjectManager_
                 ,(MethodInfo *)0x0);
      pAStack3 =
           (Action_3_Boolean_Boolean_LogicObjectManager___Class *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      if (pAStack3 == (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
        (pIVar1->fields).OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      pAVar2 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
      if (pAVar2 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        (pIVar1->fields).OnSignal = pAVar2;
        unaff_EBX = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
        pAStack3 = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)func_?();
        if (pAStack3 != (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pAStack3 = unaff_EBX;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_CurrentlyIsHot() */

bool MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_get_CurrentlyIsHot
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pIStack_2 = (this->fields)._inputSignalReceiverBase;
  if (pIStack_2 != (InputSignalReceiverBase *)0x0) {
    pMStack_1 = (pIStack_2->klass->vtable).__unknown.method;
    bVar3 = (*(pIStack_2->klass->vtable).__unknown.methodPtr)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean get_DefaultInput() */

bool MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_get_DefaultInput
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields)._inputSignalReceiverBase;
  if (pIVar2 != (InputSignalReceiverBase *)0x0) {
    return (pIVar2->fields)._DefaultInput_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

