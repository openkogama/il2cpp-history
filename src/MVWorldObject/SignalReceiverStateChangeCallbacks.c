
/* Void HandleOnSignal(Boolean, Boolean, LogicObjectManager) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_HandleOnSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,bool wasHot,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isHot == 0) {
    arg1 = (wasHot == 0) + 2;
  }
  else {
    arg1 = (uint)wasHot;
  }
  this_00 = (Action_2_Int32_Object_ *)(this->fields).OnInputStateUpdate;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,arg1,(Object *)logicObjectManager,
               MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Invoke_LogicInputState__LogicObjectManager_
              );
  }
  this_01 = (Action_3_Boolean_Boolean_Object_ *)(this->fields).OnSignal;
  if (this_01 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
    System.Core.dll::System::Action`3[Boolean,Boolean,Object]::
    Action_3_Boolean_Boolean_Object__Invoke
              (this_01,isHot,wasHot,(Object *)logicObjectManager,
               MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Invoke_bool__bool__LogicObjectManager_
              );
  }
  return;
}


/* Void Reset() */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks_Reset
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._inputSignalReceiverBase;
  if (pIVar1 != (InputSignalReceiverBase *)0x0) {
    (pIVar1->fields).firstFrame = 1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_UpdateSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,MethodInfo *method)

{
  this_00 = (this->fields)._inputSignalReceiverBase;
  if (this_00 == (InputSignalReceiverBase *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pLVar2 = (this_00->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
    if ((pLVar2->fields).signalsToEvaluate == 0) {
      InputSignalReceiverBase::InputSignalReceiverBase_SendSignal(this_00,isHot,(MethodInfo *)0x0);
      return;
    }
    if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
      (*(code *)(pLVar2->klass->vtable).__unknown_1.method)(pLVar2,_isHot,pLVar2->klass[1]._0.image)
      ;
      pLVar2 = (this_00->fields).logicEvaluateSignalComponentBase;
      if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
        pLVar3 = &pLVar2->fields;
        pLVar3->evaluatedSignals = pLVar3->evaluatedSignals + 1;
        pLVar2 = (this_00->fields).logicEvaluateSignalComponentBase;
        if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
          if ((pLVar2->fields).evaluatedSignals != (pLVar2->fields).signalsToEvaluate) {
            return;
          }
          if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
            (pLVar2->fields).evaluatedSignals = 0;
            pLVar2 = (this_00->fields).logicEvaluateSignalComponentBase;
            if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
              isHot_00 = (*(code *)(pLVar2->klass->vtable).__unknown.method)
                                   (pLVar2,(pLVar2->klass->vtable).__unknown_1.methodPtr);
              InputSignalReceiverBase::InputSignalReceiverBase_SendSignal
                        (this_00,isHot_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SignalReceiverStateChangeCallbacks(InputSignalReceiverBase) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks__ctor
               (SignalReceiverStateChangeCallbacks *this,
               InputSignalReceiverBase *_inputSignalReceiverBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._inputSignalReceiverBase = _inputSignalReceiverBase;
  if (_inputSignalReceiverBase != (InputSignalReceiverBase *)0x0) {
    pAVar1 = (_inputSignalReceiverBase->fields).OnSignal;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__SignalReceiverStateChangeCallbacks__HandleOnSignal_bool__bool__LogicObjectManager_
               ,
               MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
              );
    pAStack2 =
         (Action_3_Boolean_Boolean_LogicObjectManager_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
    if (pAStack2 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
      if (pAStack2->klass == TypeInfo__System__Action<bool,_bool,_LogicObjectManager>) {
        pAVar1 = pAStack2;
      }
      pAStack3 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
      if (pAVar1 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
    }
    (_inputSignalReceiverBase->fields).OnSignal = pAVar1;
    return;
  }
  func_?(0);
  pAStack2 = extraout_ECX;
  pAStack3 = extraout_EDX;
code_?:
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
  pIVar1 = (this->fields)._inputSignalReceiverBase;
  if (pIVar1 != (InputSignalReceiverBase *)0x0) {
    bVar2 = (*(code *)(pIVar1->klass->vtable).__unknown.method)
                      (pIVar1,(pIVar1->klass->vtable).__unknown_1.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_DefaultInput() */

bool MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_get_DefaultInput
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._inputSignalReceiverBase;
  if (pIVar1 != (InputSignalReceiverBase *)0x0) {
    return (pIVar1->fields)._DefaultInput_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

