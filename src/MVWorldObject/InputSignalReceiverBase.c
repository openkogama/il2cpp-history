
/* Void HandleInputLinkChanged(List`1[MV.WorldObject.Link]) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_HandleInputLinkChanged
               (InputSignalReceiverBase *this,List_1_MV_WorldObject_Link_ *inputLinkRefs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (inputLinkRefs == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
  iVar1 = (inputLinkRefs->fields)._size;
  pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar2->fields).signalsToEvaluate == 0) {
    if (iVar1 == 0) {
code_?:
      if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
      if ((pLVar2->fields).signalsToEvaluate != 0) {
        pLVar3 = (this->fields).logicObjectManager;
        if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
        LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                  (pLVar3,(this->fields).woID,(IInputSignalReceiver *)this,(MethodInfo *)0x0);
      }
    }
    else {
      pLVar3 = (this->fields).logicObjectManager;
      key = (Object *)(this->fields).woID;
      if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pLVar3->fields).logicWorldObjects;
      if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        this_01 = (Dictionary_2_System_Int32_System_Object_ *)(pLVar3->fields).logicWorldObjects;
        if (this_01 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  (this_01,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                  );
      }
    }
  }
  else if (iVar1 == 0) goto code_?;
  pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar2->fields).signalsToEvaluate = iVar1;
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleSignalToEvaluateChange(Int32) */

void MVWorldObject.dll::InputSignalReceiverBase::
     InputSignalReceiverBase_HandleSignalToEvaluateChange
               (InputSignalReceiverBase *this,int32_t newNumberOfSignals,MethodInfo *method)

{
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar1->fields).signalsToEvaluate == 0) {
    if (newNumberOfSignals == 0) {
code_?:
      if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
      if ((pLVar1->fields).signalsToEvaluate != 0) {
        pLVar2 = (this->fields).logicObjectManager;
        if (pLVar2 == (LogicObjectManager *)0x0) goto code_?;
        LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                  (pLVar2,(this->fields).woID,(IInputSignalReceiver *)this,(MethodInfo *)0x0);
      }
    }
    else {
      pLVar2 = (this->fields).logicObjectManager;
      key = (Object *)(this->fields).woID;
      if (pLVar2 == (LogicObjectManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pLVar2->fields).logicWorldObjects;
      if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        this_01 = (Dictionary_2_System_Int32_System_Object_ *)(pLVar2->fields).logicWorldObjects;
        if (this_01 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  (this_01,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                  );
      }
    }
  }
  else if (newNumberOfSignals == 0) goto code_?;
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar1->fields).signalsToEvaluate = newNumberOfSignals;
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_Reset
               (InputSignalReceiverBase *this,MethodInfo *method)

{
  (this->fields).firstFrame = 1;
  return;
}


/* Void SendSignal(Boolean) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_SendSignal
               (InputSignalReceiverBase *this,bool isHot,MethodInfo *method)

{
  pLVar1 = (this->fields).logicObjectManager;
  if (pLVar1 != (LogicObjectManager *)0x0) {
    if ((pLVar1->fields).trackLoops == 0) {
code_?:
      pMVar2 = (this->klass->vtable).__unknown.method;
      (*(this->klass->vtable).__unknown.methodPtr)();
      (*(this->klass->vtable).__unknown_1.methodPtr)(this,pMVar2);
      if ((this->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        pAVar3 = (this->fields).OnSignal;
        (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code,pMVar2);
      }
      if ((this->fields).firstFrame != 0) {
        (this->fields).firstFrame = 0;
      }
      return;
    }
    item = (Object *)(this->fields).woID;
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      cRam_? = '\x01';
    }
    this_00 = (pLVar1->fields).updatedIds;
    if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__Contains
                        (this_00,(int32_t)item,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar4 != 0) goto code_?;
      this_01 = (HashSet_1_System_Object_ *)(pLVar1->fields).updatedIds;
      if (this_01 != (HashSet_1_System_Object_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  (this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__Exception);
  this_02 = (Exception *)func_?(uVar5);
  func_?(this_02);
  pMVar2 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,pMVar2);
  func_?(&MethodInfo__LogicObjectManager__DebugAddId_int_);
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_UpdateSignal
               (InputSignalReceiverBase *this,bool isHot,MethodInfo *method)

{
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    if ((pLVar1->fields).signalsToEvaluate == 0) {
      InputSignalReceiverBase_SendSignal(this,isHot,(MethodInfo *)0x0);
      return;
    }
    (*(pLVar1->klass->vtable).__unknown_1.methodPtr)
              (pLVar1,_isHot,(pLVar1->klass->vtable).__unknown_1.method);
    pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
      pLVar2 = &pLVar1->fields;
      pLVar2->evaluatedSignals = pLVar2->evaluatedSignals + 1;
      pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
      if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
        if ((pLVar1->fields).evaluatedSignals == (pLVar1->fields).signalsToEvaluate) {
          (pLVar1->fields).evaluatedSignals = 0;
          pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
          if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
          isHot_00 = (*(pLVar1->klass->vtable).__unknown.methodPtr)
                               (pLVar1,(pLVar1->klass->vtable).__unknown.method);
          InputSignalReceiverBase_SendSignal(this,isHot_00,(MethodInfo *)0x0);
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


/* InputSignalReceiverBase(MVWorldObject, LogicEvaluateSignalComponentBase, Boolean,
   LogicObjectManager) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase__ctor
               (InputSignalReceiverBase *this,MVWorldObject *worldObject,
               LogicEvaluateSignalComponentBase *logicEvaluateSignalComponentBase,bool defaultInput,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                   );
    func_?(&
                    MethodInfo__InputSignalReceiverBase__HandleInputLinkChanged_System__Collections__Generic__List<MV::WorldObject::Link>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    cRam_? = '\x01';
  }
  (this->fields).woID = -1;
  (this->fields).firstFrame = 1;
  (this->fields).trackloops = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (worldObject != (MVWorldObject *)0x0) {
    pAVar1 = (worldObject->fields).OnInputLinkChanged;
    this_01 = (Action_1_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                             );
    if (this_01 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__InputSignalReceiverBase__HandleInputLinkChanged_System__Collections__Generic__List<MV::WorldObject::Link>_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
        (worldObject->fields).OnInputLinkChanged =
             (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0;
        iVar3 = 0;
      }
      else {
        pAVar1 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)
                 func_?();
        if (pAVar1 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
        goto code_?;
        (worldObject->fields).OnInputLinkChanged = pAVar1;
        iVar3 = func_?();
        if (iVar3 == 0) goto code_?;
      }
      ppAVar4 = &(worldObject->fields).OnInputLinkChanged;
      func_?();
      (this->fields).woID = (worldObject->fields).id;
      (this->fields).logicObjectManager = logicObjectManager;
      func_?();
      (this->fields).logicEvaluateSignalComponentBase = (LogicEvaluateSignalComponentBase *)ppAVar4;
      func_?(&this->fields);
      pLVar5 = (worldObject->fields).inputLinkRefs;
      if ((pLVar5 != (List_1_MV_WorldObject_Link_ *)0x0) &&
         (ppAVar4 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ **)0x0)) {
        pMVar6 = (MonitorData *)(pLVar5->fields)._size;
        worldObject[1].monitor = pMVar6;
        if (pMVar6 != (MonitorData *)0x0) {
code_?:
          defaultInput = (bool)iVar3;
          (this->fields)._DefaultInput_k__BackingField = defaultInput;
          return;
        }
        key = (Object *)(this->fields).woID;
        if (logicObjectManager != (LogicObjectManager *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
                           );
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_System_Object_System_Object_ *)
                    (logicObjectManager->fields).logicWorldObjects;
          if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,key,(Object *)this,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
                      );
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

