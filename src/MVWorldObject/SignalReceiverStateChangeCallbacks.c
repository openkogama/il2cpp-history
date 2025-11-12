
/* Void HandleOnSignal(Boolean, Boolean, LogicObjectManager) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_HandleOnSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,bool wasHot,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  uVar1 = 3;
  if ((isHot != 0) && (uVar1 = 3, wasHot == 0)) {
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
  if ((this->fields).OnInputStateUpdate != (Action_2_LogicInputState_LogicObjectManager_ *)0x0) {
    pAVar2 = (this->fields).OnInputStateUpdate;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,uVar1,logicObjectManager,(pAVar2->fields)._._.method
              );
  }
  if ((this->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
    pAVar3 = (this->fields).OnSignal;
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,isHot,wasHot,logicObjectManager,
               (pAVar3->fields)._._.method);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_UpdateSignal
               (SignalReceiverStateChangeCallbacks *this,bool isHot,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000011,isHot);
  pIVar2 = (this->fields)._inputSignalReceiverBase;
  if ((pIVar2 == (InputSignalReceiverBase *)0x0) ||
     (pLVar3 = (pIVar2->fields).logicEvaluateSignalComponentBase,
     pLVar3 == (LogicEvaluateSignalComponentBase *)0x0)) goto code_?;
  if ((pLVar3->fields).signalsToEvaluate != 0) {
    (*(pLVar3->klass->vtable).__unknown_1.methodPtr)
              (pLVar3,uVar1,(pLVar3->klass->vtable).__unknown_1.method);
    pLVar3 = (pIVar2->fields).logicEvaluateSignalComponentBase;
    if (pLVar3 == (LogicEvaluateSignalComponentBase *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pLVar5 = &pLVar3->fields;
    pLVar5->evaluatedSignals = pLVar5->evaluatedSignals + 1;
    pLVar3 = (pIVar2->fields).logicEvaluateSignalComponentBase;
    if (pLVar3 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    if ((pLVar3->fields).evaluatedSignals != (pLVar3->fields).signalsToEvaluate) {
      return;
    }
    (pLVar3->fields).evaluatedSignals = 0;
    pLVar3 = (pIVar2->fields).logicEvaluateSignalComponentBase;
    if (pLVar3 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    bVar6 = (*(pLVar3->klass->vtable).__unknown.methodPtr)
                      (pLVar3,(pLVar3->klass->vtable).__unknown.method);
    uVar1 = (ulonglong)bVar6;
  }
  pLVar7 = (pIVar2->fields).logicObjectManager;
  if (pLVar7 != (LogicObjectManager *)0x0) {
    if ((pLVar7->fields).trackLoops == 0) {
code_?:
      bVar6 = (*(pIVar2->klass->vtable).__unknown.methodPtr)
                        (pIVar2,(pIVar2->klass->vtable).__unknown.method);
      (*(pIVar2->klass->vtable).__unknown_1.methodPtr)
                (pIVar2,uVar1 & 0xff,(pIVar2->klass->vtable).__unknown_1.method);
      if ((pIVar2->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        pAVar8 = (pIVar2->fields).OnSignal;
        bVar9 = (byte)uVar1 ^ 1;
        if ((pIVar2->fields).firstFrame == 0) {
          bVar9 = bVar6;
        }
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,uVar1 & 0xff,bVar9,
                   (pIVar2->fields).logicObjectManager,(pAVar8->fields)._._.method);
      }
      if ((pIVar2->fields).firstFrame != 0) {
        (pIVar2->fields).firstFrame = 0;
      }
      return;
    }
    item = (pIVar2->fields).woID;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_,uVar1,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(pLVar7->fields).updatedIds;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,item,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar10 != 0) {
        uVar11 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar11);
        message = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__LogicObjectManager__DebugAddId_int_);
        FUN_?(this_02,uVar11);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = (pLVar7->fields).updatedIds;
      if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__AddIfNotPresent
                  (this_01,item,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                   rgctx_data[0x15].method);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SignalReceiverStateChangeCallbacks(InputSignalReceiverBase) */

void MVWorldObject.dll::SignalReceiverStateChangeCallbacks::SignalReceiverStateChangeCallbacks__ctor
               (SignalReceiverStateChangeCallbacks *this,
               InputSignalReceiverBase *_inputSignalReceiverBase,MethodInfo *method)

{
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
  bVar1 = iRam_? != 0;
  (this->fields)._inputSignalReceiverBase = _inputSignalReceiverBase;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar6 = (this->fields)._inputSignalReceiverBase;
  if (pIVar6 == (InputSignalReceiverBase *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar8 = (pIVar6->fields).OnSignal;
  pDVar9 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  FUN_?(pDVar9,this);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar8,pDVar9,(MethodInfo *)0x0);
  pAVar10 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
  if (pDVar9 == (Delegate *)0x0) {
    (pIVar6->fields).OnSignal = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
  }
  else {
    pAVar8 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
             FUN_?(pDVar9,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    if (pAVar8 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
      FUN_?(pDVar9,pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (pIVar6->fields).OnSignal = pAVar8;
    pAVar10 = TypeInfo__System__Action<bool,_bool,_LogicObjectManager>;
    lVar3 = FUN_?(pDVar9,TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    if (lVar3 == 0) {
      FUN_?(pDVar9,pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pIVar6->fields).OnSignal >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Boolean get_CurrentlyIsHot() */

bool MVWorldObject.dll::SignalReceiverStateChangeCallbacks::
     SignalReceiverStateChangeCallbacks_get_CurrentlyIsHot
               (SignalReceiverStateChangeCallbacks *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._inputSignalReceiverBase;
  if (pIVar1 != (InputSignalReceiverBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pIVar1->klass->vtable).__unknown.methodPtr)
                      (pIVar1,(pIVar1->klass->vtable).__unknown.method);
    return bVar2;
  }
  FUN_?();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

