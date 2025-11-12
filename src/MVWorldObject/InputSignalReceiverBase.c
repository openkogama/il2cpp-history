
/* Void HandleInputLinkChanged(List`1[MV.WorldObject.Link]) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_HandleInputLinkChanged
               (InputSignalReceiverBase *this,List_1_MV_WorldObject_Link_ *inputLinkRefs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (inputLinkRefs == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  iVar2 = (inputLinkRefs->fields)._size;
  if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar1->fields).signalsToEvaluate == 0) {
    if (iVar2 == 0) {
code_?:
      if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
      if ((pLVar1->fields).signalsToEvaluate != 0) {
        pLVar3 = (this->fields).logicObjectManager;
        if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
        LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                  (pLVar3,(this->fields).woID,(IInputSignalReceiver *)this,(MethodInfo *)0x0);
      }
    }
    else {
      pLVar3 = (this->fields).logicObjectManager;
      if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
      LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                (pLVar3,(this->fields).woID,(MethodInfo *)0x0);
    }
  }
  else if (iVar2 == 0) goto code_?;
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar1->fields).signalsToEvaluate = iVar2;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if (pLVar2 == (LogicObjectManager *)0x0) goto code_?;
      LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                (pLVar2,(this->fields).woID,(MethodInfo *)0x0);
    }
  }
  else if (newNumberOfSignals == 0) goto code_?;
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar1->fields).signalsToEvaluate = newNumberOfSignals;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      bVar2 = (*(this->klass->vtable).__unknown.methodPtr)
                        (this,(this->klass->vtable).__unknown.method);
      (*(this->klass->vtable).__unknown_1.methodPtr)
                (this,(ulonglong)isHot,(this->klass->vtable).__unknown_1.method);
      if ((this->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        pAVar3 = (this->fields).OnSignal;
        bVar4 = isHot ^ 1;
        if ((this->fields).firstFrame == 0) {
          bVar4 = bVar2;
        }
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,isHot,bVar4,(this->fields).logicObjectManager,
                   (pAVar3->fields)._._.method);
      }
      if ((this->fields).firstFrame != 0) {
        (this->fields).firstFrame = 0;
      }
      return;
    }
    item = (this->fields).woID;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(pLVar1->fields).updatedIds;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,item,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar5 != 0) {
        uVar6 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar6);
        message = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
        uVar6 = func_?(&MethodInfo__LogicObjectManager__DebugAddId_int_);
        FUN_?(this_02,uVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = (pLVar1->fields).updatedIds;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_UpdateSignal
               (InputSignalReceiverBase *this,bool isHot,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000011,isHot);
  pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar2->fields).signalsToEvaluate != 0) {
    (*(pLVar2->klass->vtable).__unknown_1.methodPtr)
              (pLVar2,uVar1,(pLVar2->klass->vtable).__unknown_1.method);
    pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pLVar4 = &pLVar2->fields;
    pLVar4->evaluatedSignals = pLVar4->evaluatedSignals + 1;
    pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    if ((pLVar2->fields).evaluatedSignals != (pLVar2->fields).signalsToEvaluate) {
      return;
    }
    (pLVar2->fields).evaluatedSignals = 0;
    pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    bVar5 = (*(pLVar2->klass->vtable).__unknown.methodPtr)
                      (pLVar2,(pLVar2->klass->vtable).__unknown.method);
    uVar1 = (ulonglong)bVar5;
  }
  pLVar6 = (this->fields).logicObjectManager;
  if (pLVar6 != (LogicObjectManager *)0x0) {
    if ((pLVar6->fields).trackLoops == 0) {
code_?:
      bVar5 = (*(this->klass->vtable).__unknown.methodPtr)
                        (this,(this->klass->vtable).__unknown.method);
      (*(this->klass->vtable).__unknown_1.methodPtr)
                (this,uVar1 & 0xff,(this->klass->vtable).__unknown_1.method);
      if ((this->fields).OnSignal != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
        pAVar7 = (this->fields).OnSignal;
        bVar8 = (byte)uVar1 ^ 1;
        if ((this->fields).firstFrame == 0) {
          bVar8 = bVar5;
        }
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,uVar1 & 0xff,bVar8,
                   (this->fields).logicObjectManager,(pAVar7->fields)._._.method);
      }
      if ((this->fields).firstFrame != 0) {
        (this->fields).firstFrame = 0;
      }
      return;
    }
    item = (this->fields).woID;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_,uVar1,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(pLVar6->fields).updatedIds;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,item,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar9 != 0) {
        uVar10 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar10);
        message = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
        uVar10 = func_?(&MethodInfo__LogicObjectManager__DebugAddId_int_);
        FUN_?(this_02,uVar10);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (pLVar6->fields).updatedIds;
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
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InputSignalReceiverBase__HandleInputLinkChanged_System__Collections__Generic__List<MV::WorldObject::Link>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).woID = -1;
  (this->fields).firstFrame = 1;
  (this->fields).trackloops = 1;
  if (worldObject != (MVWorldObject *)0x0) {
    pAVar1 = (worldObject->fields).OnInputLinkChanged;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__InputSignalReceiverBase__HandleInputLinkChanged_System__Collections__Generic__List<MV::WorldObject::Link>_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>;
    if (pDVar2 == (Delegate *)0x0) {
      (worldObject->fields).OnInputLinkChanged =
           (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0;
    }
    else {
      pAVar1 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                            );
      if (pAVar1 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (worldObject->fields).OnInputLinkChanged = pAVar1;
      pAVar3 = TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>;
      lVar5 = FUN_?(pDVar2,
                            TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                           );
      if (lVar5 == 0) {
        FUN_?(pDVar2,pAVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(worldObject->fields).OnInputLinkChanged >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    iVar10 = iRam_?;
    iVar11 = (worldObject->fields).id;
    (this->fields).logicObjectManager = logicObjectManager;
    (this->fields).woID = iVar11;
    if (iVar10 != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).logicObjectManager >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
        iVar10 = iRam_?;
      } while (!bVar9);
    }
    (this->fields).logicEvaluateSignalComponentBase = logicEvaluateSignalComponentBase;
    if (iVar10 != 0) {
      uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pLVar12 = (worldObject->fields).inputLinkRefs;
    if ((pLVar12 != (List_1_MV_WorldObject_Link_ *)0x0) &&
       (logicEvaluateSignalComponentBase != (LogicEvaluateSignalComponentBase *)0x0)) {
      iVar10 = (pLVar12->fields)._size;
      (logicEvaluateSignalComponentBase->fields).signalsToEvaluate = iVar10;
      if (iVar10 == 0) {
        if (logicObjectManager == (LogicObjectManager *)0x0) goto code_?;
        LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                  (logicObjectManager,(this->fields).woID,(IInputSignalReceiver *)this,
                   (MethodInfo *)0x0);
      }
      (this->fields)._DefaultInput_k__BackingField = defaultInput;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

