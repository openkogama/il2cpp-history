
/* Void HandleOnSignal(Boolean, Boolean, LogicObjectManager) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_HandleOnSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,bool wasHot,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  uVar1 = 3;
  if ((isHot != 0) && (wasHot == 0)) {
    uVar1 = 0;
  }
  if ((wasHot & isHot) != 0) {
    uVar1 = 1;
  }
  if ((wasHot & (isHot ^ 1)) != 0) {
    uVar1 = 2;
  }
  if ((isHot == 0) && (wasHot == 0)) {
    uVar1 = 3;
  }
  pAVar2 = (this->fields).OnInputStateUpdate;
  if (pAVar2 != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,uVar1,logicObjectManager,(pAVar2->fields)._._.method
              );
  }
  pAVar3 = (this->fields).OnSignal;
  if (pAVar3 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
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
    (*(code *)(pLVar1->klass->vtable).__unknown_1.method)(pLVar1,_isHot,pLVar1->klass[1]._0.image);
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
          isHot_00 = (*(code *)(pLVar1->klass->vtable).__unknown.method)
                               (pLVar1,(pLVar1->klass->vtable).__unknown_1.methodPtr);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
  pSVar1 = &this->fields;
  pSVar1->_inputSignalReceiverBase = _inputSignalReceiverBase;
  func_?(pSVar1,_inputSignalReceiverBase);
  pIVar2 = pSVar1->_inputSignalReceiverBase;
  if (pIVar2 == (InputSignalReceiverBase *)0x0) {
    func_?();
  }
  else {
    pAVar3 = (pIVar2->fields).OnSignal;
    ppAVar4 = &(pIVar2->fields).OnSignal;
    this_00 = (Action_3_Boolean_Boolean_Object_ *)
              func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::Action_3_Boolean_Boolean_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__SignalReceiverStateChangeCallbacks__HandleOnSignal_bool__bool__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pAStack5 =
         (Action_3_Boolean_Boolean_LogicObjectManager___Class *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
    if (pAStack5 == (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
      *ppAVar4 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      func_?();
      return;
    }
    pAStack5 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
    pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)func_?();
    if (pAVar3 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
      *ppAVar4 = pAVar3;
      unaff_EDI = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      pAStack5 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      pAStack5 = (Action_3_Boolean_Boolean_LogicObjectManager___Class *)func_?();
      if (pAStack5 != (Action_3_Boolean_Boolean_LogicObjectManager___Class *)0x0) {
        func_?();
        return;
      }
    }
  }
  pAStack5 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_CurrentlyIsHot() */

bool MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_get_CurrentlyIsHot
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pIStack_2 = (this->fields)._inputSignalReceiverBase;
  if (pIStack_2 != (InputSignalReceiverBase *)0x0) {
    pIStack_1 = (pIStack_2->klass->vtable).__unknown_1.methodPtr;
    bVar3 = (*(code *)(pIStack_2->klass->vtable).__unknown.method)();
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

