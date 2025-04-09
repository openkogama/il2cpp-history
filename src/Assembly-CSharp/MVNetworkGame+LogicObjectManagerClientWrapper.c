
/* Void EnqueueLogicEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,EventData *eventData,
               MethodInfo *method)

{
  pMVar1 = (this->fields).logicEventQueue;
  if (pMVar1 != (MVNetworkGame_LogicEventQueue *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                     );
      cRam_? = '\x01';
    }
    if (eventData != (EventData *)0x0) {
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x23,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        key = *piVar4;
        pDVar5 = (pMVar1->fields).logicEvents;
        if (pDVar5 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                            );
          if (bVar6 == 0) {
            pDVar5 = (pMVar1->fields).logicEvents;
            this_00 = (ReadOnlyCollectionBuilder_1_System_Object_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                     );
            System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::
            Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                      (this_00,
                       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                      );
            if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)
                          0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,(Object *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                      );
          }
          pDVar5 = (pMVar1->fields).logicEvents;
          if (pDVar5 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          {
            this_01 = (Queue_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                );
            if (this_01 != (Queue_1_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_01,(Object *)eventData,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ExecuteRemainingFrames() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while ((pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
           pLVar2 != (LogicObjectManagerClient *)0x0 &&
           (pMVar3 = (this->fields).updateEvaluatorStep,
           pMVar3 != (MVNetworkGame_UpdateEvaluator *)0x0))) {
      if ((pMVar3->fields).stepTimestamp <= (pLVar2->fields)._._TimeStamp_k__BackingField) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
         pLVar2 == (LogicObjectManagerClient *)0x0)) break;
      this_00 = (this->fields).logicEventQueue;
      key = (pLVar2->fields)._._TimeStamp_k__BackingField;
      if (this_00 == (MVNetworkGame_LogicEventQueue *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pDVar4 = (this_00->fields).logicEvents;
      if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
      break;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar5 != 0) {
        pDVar4 = (this_00->fields).logicEvents;
        if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_02 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar4 = (this_00->fields).logicEvents;
        if ((pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
           || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                          (int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                         ), this_02 == (Queue_1_System_Object_ *)0x0)) break;
        while (0 < (this_02->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_02,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_01 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_01 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_01,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void FastForward(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,int32_t timestamp,
               MethodInfo *method)

{
  pMVar1 = (this->fields).fastFordwardUpdateEvaluator;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    (pMVar1->fields).stepTimestamp = timestamp;
    iVar2 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (pMVar1->fields).lastUpdateTick = iVar2;
    (pMVar1->fields).accumulatedTime = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FastForwardImmediately(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,int32_t timestamp,
               MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
          pLVar2 != (LogicObjectManagerClient *)0x0) {
      if (timestamp <= (pLVar2->fields)._._TimeStamp_k__BackingField) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
         pLVar2 == (LogicObjectManagerClient *)0x0)) break;
      this_00 = (this->fields).logicEventQueue;
      key = (pLVar2->fields)._._TimeStamp_k__BackingField;
      if (this_00 == (MVNetworkGame_LogicEventQueue *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (this_00->fields).logicEvents;
      if (pDVar3 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
      break;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        pDVar3 = (this_00->fields).logicEvents;
        if (pDVar3 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_02 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar3 = (this_00->fields).logicEvents;
        if ((pDVar3 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
           || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                          (int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                         ), this_02 == (Queue_1_System_Object_ *)0x0)) break;
        while (0 < (this_02->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_02,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_01 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_01 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_01,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_Reset
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_logic_event_queue_not_cleared_on);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    piVar2 = &(pMVar1->fields).stepTimestamp;
    *piVar2 = *piVar2 + 1000;
    iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (pMVar1->fields).lastUpdateTick = iVar3;
    (pMVar1->fields).accumulatedTime = 0;
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this,(MethodInfo *)0x0);
    pMVar4 = (this->fields).logicEventQueue;
    if (pMVar4 != (MVNetworkGame_LogicEventQueue *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pMVar4->fields).logicEvents;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                          );
        if (iVar3 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_logic_event_queue_not_cleared_on,(MethodInfo *)0x0);
        }
        pMVar5 = (this->fields).networkGame;
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (this_01 = (LogicObjectManager *)(pMVar5->fields)._LogicObjectManager_k__BackingField,
           this_01 != (LogicObjectManager *)0x0)) {
          MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Reset(this_01,(MethodInfo *)0x0)
          ;
          pMVar1 = (this->fields).updateEvaluatorStep;
          if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar1->fields).stepTimestamp = 0;
            iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
            (pMVar1->fields).lastUpdateTick = iVar3;
            (pMVar1->fields).accumulatedTime = 0;
            pMVar1 = (this->fields).fastFordwardUpdateEvaluator;
            if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
              (pMVar1->fields).stepTimestamp = 0;
              iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
              (pMVar1->fields).lastUpdateTick = iVar3;
              (pMVar1->fields).accumulatedTime = 0;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Step() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_Step
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    piVar2 = &(pMVar1->fields).stepTimestamp;
    *piVar2 = *piVar2 + 1000;
    iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (pMVar1->fields).lastUpdateTick = iVar3;
    (pMVar1->fields).accumulatedTime = 0;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_Update
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  pMVar2 = (this->fields).fastFordwardUpdateEvaluator;
  while ((pMVar1 != (MVNetworkGame *)0x0 &&
         (pLVar3 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
         pMVar2 != (MVNetworkGame_UpdateEvaluator *)0x0))) {
    iVar4 = WaitForTicksLocal::WaitForTicksLocal_Diff
                      ((pMVar2->fields).lastUpdateTick,(MethodInfo *)0x0);
    iVar5 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    iVar6 = (pMVar2->fields).accumulatedTime + iVar4;
    (pMVar2->fields).lastUpdateTick = iVar5;
    (pMVar2->fields).accumulatedTime = iVar6;
    if (iVar6 < (pMVar2->fields).updateInterval) {
code_?:
      pMVar1 = (this->fields).networkGame;
      pMVar2 = (this->fields).updateEvaluatorStep;
      goto joined_?;
    }
    if (pLVar3 == (LogicObjectManagerClient *)0x0) break;
    if ((pMVar2->fields).stepTimestamp <= (pLVar3->fields)._._TimeStamp_k__BackingField)
    goto code_?;
    (pMVar2->fields).accumulatedTime = iVar6 - (pMVar2->fields).updateInterval;
    MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager(this,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    pMVar2 = (this->fields).fastFordwardUpdateEvaluator;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
joined_?:
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pLVar3 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
     pMVar2 == (MVNetworkGame_UpdateEvaluator *)0x0)) goto code_?;
  iVar4 = WaitForTicksLocal::WaitForTicksLocal_Diff
                    ((pMVar2->fields).lastUpdateTick,(MethodInfo *)0x0);
  iVar5 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar6 = (pMVar2->fields).accumulatedTime + iVar4;
  (pMVar2->fields).lastUpdateTick = iVar5;
  (pMVar2->fields).accumulatedTime = iVar6;
  if (iVar6 < (pMVar2->fields).updateInterval) {
    return;
  }
  if (pLVar3 == (LogicObjectManagerClient *)0x0) goto code_?;
  if ((pMVar2->fields).stepTimestamp <= (pLVar3->fields)._._TimeStamp_k__BackingField) {
    return;
  }
  (pMVar2->fields).accumulatedTime = iVar6 - (pMVar2->fields).updateInterval;
  MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).networkGame;
  pMVar2 = (this->fields).updateEvaluatorStep;
  goto joined_?;
}


/* Void UpdateLogicObjectManager() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
     pLVar2 != (LogicObjectManagerClient *)0x0)) {
    this_00 = (this->fields).logicEventQueue;
    key = (pLVar2->fields)._._TimeStamp_k__BackingField;
    if (this_00 != (MVNetworkGame_LogicEventQueue *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pDVar3 = (this_00->fields).logicEvents;
      if (pDVar3 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                          );
        if (bVar4 != 0) {
          pDVar3 = (this_00->fields).logicEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          this_01 = (Queue_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                              );
          pDVar3 = (this_00->fields).logicEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          unaff_EBX = &UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                     (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    );
          if (this_01 == (Queue_1_System_Object_ *)0x0) goto code_?;
          while (0 < (this_01->fields)._size) {
            photonEvent = (EventData *)
                          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                          Queue_1_System_Object__Dequeue
                                    (this_01,
                                     MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                    );
            MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                      (this_00,photonEvent,(MethodInfo *)0x0);
          }
        }
        pMVar1 = (this->fields).networkGame;
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           ((pMVar1->fields)._LogicObjectManager_k__BackingField != (LogicObjectManagerClient *)0x0)
           ) {
          uVar5 = *unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &stack0xffffffe4;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
                           );
            func_?(&TypeInfo__IInputSignalReceiver);
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                           );
            cRam_? = '\x01';
          }
          DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
          DStack_6._index = 0;
          DStack_6._version = 0;
          DStack_6._currentValue = (Object *)0x0;
          if ((*(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 **)(unaff_EBX + 8) !=
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0) &&
             (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (*(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                     **)(unaff_EBX + 8),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                                  ),
             this_02 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                (&DStack_8,this_02,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                                );
            DStack_8._currentValue = (Object *)&DStack_6;
            DStack_6._dictionary =
                 (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
            DStack_6._index = pDVar7->_index;
            DStack_6._version = pDVar7->_version;
            DStack_6._currentValue = pDVar7->_currentValue;
            DStack_8._version = 0;
code_?:
            bVar4 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                              );
            pOVar9 = DStack_6._currentValue;
            if (bVar4 != 0) {
              if (DStack_6._currentValue == (Object *)0x0) goto code_?;
              pOStack_10 = (DStack_6._currentValue)->klass;
              uVar11 = 0;
              uVar12._0_1_ = (pOStack_10->_1).rank;
              uVar12._1_1_ = (pOStack_10->_1).minimumAlignment;
              uStack_13 = (uint)uVar12;
              pOVar14 = DStack_6._currentValue;
              if (uVar12 != 0) {
                do {
                  if (pOStack_10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                    ppMVar15 = &(&((DStack_6._currentValue)->klass->vtable).GetHashCode)
                                [(DStack_6._currentValue)->klass->interfaceOffsets[uVar11].offset].
                                method;
                    goto code_?;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar12);
              }
              ppMVar15 = (MethodInfo **)
                         func_?(DStack_6._currentValue,TypeInfo__IInputSignalReceiver,2);
code_?:
              uVar16 = (*(code *)*ppMVar15)(pOVar9,ppMVar15[1]);
              uVar12 = 0;
              pMStack_17 = (MethodInfo *)CONCAT31(pMStack_17._1_3_,uVar16);
              pOStack_10 = pOVar9->klass;
              uStack_13 = 0;
              sVar18._0_1_ = (pOStack_10->_1).rank;
              sVar18._1_1_ = (pOStack_10->_1).minimumAlignment;
              if (sVar18 != 0) {
                do {
                  if (pOStack_10->interfaceOffsets[uVar12].interfaceType ==
                      (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                    pOVar19 = pOVar14->klass;
                    iVar20 = pOVar19->interfaceOffsets[uVar12].offset;
                    method_00 = pMStack_17;
                    (*(code *)(&(pOVar19->vtable).Equals)[iVar20].method)
                              (pOVar14,pMStack_17,(&(pOVar19->vtable).Finalize)[iVar20].methodPtr);
                    goto code_?;
                  }
                  uVar12 = uVar12 + 1;
                  uVar11._0_1_ = (pOVar14->klass->_1).rank;
                  uVar11._1_1_ = (pOVar14->klass->_1).minimumAlignment;
                  pOVar9 = pOVar14;
                } while (uVar12 < uVar11);
              }
              puVar21 = (undefined4 *)func_?(pOVar9,TypeInfo__IInputSignalReceiver,0);
              method_00 = pMStack_17;
              (*(code *)*puVar21)(pOVar9,pMStack_17,puVar21[1]);
              goto code_?;
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                       ,method_00);
            *(int *)(unaff_EBX + 0x10) = *(int *)(unaff_EBX + 0x10) + 100;
            if (unaff_EBX[0xc] != '\0') {
              if (cRam_? == '\0') {
                func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
                cRam_? = '\x01';
              }
              if (*(HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
                   (unaff_EBX + 0x14) ==
                  (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
              goto code_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                        (*(HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
                          (unaff_EBX + 0x14),
                         MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
            }
            *unaff_FS_OFFSET = uVar5;
            return;
          }
code_?:
          func_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* MVNetworkGame+LogicObjectManagerClientWrapper(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper__ctor
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MVNetworkGame *networkGame,
               int32_t stepTimestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame__LogicEventQueue);
    func_?(&TypeInfo__MVNetworkGame__UpdateEvaluator);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVNetworkGame__UpdateEvaluator;
  pMVar2 = (MVNetworkGame_UpdateEvaluator *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar1);
  (pMVar2->fields).updateInterval = 100;
  (this->fields).updateEvaluatorStep = pMVar2;
  func_?(&(this->fields).updateEvaluatorStep,pMVar2);
  pMVar1 = TypeInfo__MVNetworkGame__UpdateEvaluator;
  pMVar2 = (MVNetworkGame_UpdateEvaluator *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar1);
  method_00 = (MethodInfo *)&(this->fields).fastFordwardUpdateEvaluator;
  (pMVar2->fields).updateInterval = 10;
  (this->fields).fastFordwardUpdateEvaluator = pMVar2;
  func_?(method_00,pMVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  pMVar2 = (this->fields).updateEvaluatorStep;
  if (pMVar2 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    (pMVar2->fields).stepTimestamp = stepTimestamp;
    iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (pMVar2->fields).lastUpdateTick = iVar3;
    (pMVar2->fields).accumulatedTime = 0;
    value = (MVNetworkGame_LogicEventQueue *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
              );
    (value->fields).logicEvents =
         (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)this_00;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)&value->fields);
    (this->fields).logicEventQueue = value;
    func_?(&this->fields);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

