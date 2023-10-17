
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
        puVar4 = (undefined4 *)func_?(pOVar2);
        pOVar2 = (Object *)*puVar4;
        this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (pMVar1->fields).logicEvents;
        if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_00,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                            );
          if (bVar5 == 0) {
            this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).logicEvents;
            this_03 = (Stack_1_System_Object_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                     );
            if (this_03 != (Stack_1_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
              Stack_1_System_Object___ctor
                        (this_03,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_01,pOVar2,(Object *)this_03,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                          );
                goto code_?;
              }
            }
          }
          else {
code_?:
            this_02 = (pMVar1->fields).logicEvents;
            if (this_02 !=
                (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
              this_04 = (Queue_1_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                   (Int32Enum__Enum)pOVar2,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                  );
              if (this_04 != (Queue_1_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Enqueue
                          (this_04,(Object *)eventData,
                           MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      key = (Object *)(pLVar2->fields)._._TimeStamp_k__BackingField;
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
      this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this_00->fields).logicEvents;
      if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        pDVar5 = (this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_03 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar5 = (this_00->fields).logicEvents;
        if ((pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
           || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,
                          (int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                         ), this_03 == (Queue_1_System_Object_ *)0x0)) break;
        while (0 < (this_03->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_03,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_02 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_02 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_02,(MethodInfo *)0x0);
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
      key = (Object *)(pLVar2->fields)._._TimeStamp_k__BackingField;
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
      this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this_00->fields).logicEvents;
      if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        pDVar4 = (this_00->fields).logicEvents;
        if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_03 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                             (Int32Enum__Enum)key,
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
                         ), this_03 == (Queue_1_System_Object_ *)0x0)) break;
        while (0 < (this_03->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_03,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_02 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_02 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_02,(MethodInfo *)0x0);
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
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(pMVar4->fields).logicEvents;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                          );
        if (iVar3 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    pOVar3 = (Object *)(pLVar2->fields)._._TimeStamp_k__BackingField;
    if (this_00 != (MVNetworkGame_LogicEventQueue *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this_00->fields).logicEvents;
      if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                          );
        if (bVar4 != 0) {
          pDVar5 = (this_00->fields).logicEvents;
          if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          this_02 = (Queue_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                               (Int32Enum__Enum)pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                              );
          pDVar5 = (this_00->fields).logicEvents;
          if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          unaff_EBX = &UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,
                     (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    );
          if (this_02 == (Queue_1_System_Object_ *)0x0) goto code_?;
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
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           ((pMVar1->fields)._LogicObjectManager_k__BackingField != (LogicObjectManagerClient *)0x0)
           ) {
          uVar6 = *unaff_FS_OFFSET;
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
          DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
          DStack_7._index = 0;
          DStack_7._version = 0;
          DStack_7._currentValue = (Object *)0x0;
          if ((*(Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 **)(unaff_EBX + 8) !=
               (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0) &&
             (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                  (*(Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                     **)(unaff_EBX + 8),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                                  ),
             this_03 !=
             (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            pDVar8 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                     Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                               (&DStack_9,this_03,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                               );
            DStack_9._currentValue = (Object *)&DStack_7;
            DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary
            ;
            DStack_7._index = pDVar8->_index;
            DStack_7._version = pDVar8->_version;
            DStack_7._currentValue = pDVar8->_currentValue;
            DStack_9._version = 0;
code_?:
            bVar4 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                              );
            pOVar3 = DStack_7._currentValue;
            if (bVar4 != 0) {
              if (DStack_7._currentValue == (Object *)0x0) goto code_?;
              pOStack_10 = (DStack_7._currentValue)->klass;
              uVar11 = 0;
              uVar12 = (pOStack_10->_1).interface_offsets_count;
              uStack_13 = (uint)uVar12;
              pOVar14 = DStack_7._currentValue;
              if (uVar12 != 0) {
                do {
                  if (pOStack_10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                    pVVar15 = &((DStack_7._currentValue)->klass->vtable).GetHashCode +
                             (DStack_7._currentValue)->klass->interfaceOffsets[uVar11].offset;
                    goto code_?;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar12);
              }
              pVVar15 = (VirtualInvokeData *)
                       func_?(DStack_7._currentValue,TypeInfo__IInputSignalReceiver,2);
code_?:
              uVar16 = (*pVVar15->methodPtr)(pOVar3,pVVar15->method);
              pMStack_17 = (MethodInfo *)CONCAT31(pMStack_17._1_3_,uVar16);
              if (pOVar3 == (Object *)0x0) goto code_?;
              pOStack_10 = pOVar3->klass;
              uVar11 = 0;
              uStack_13 = 0;
              uVar12 = (pOStack_10->_1).interface_offsets_count;
              if (uVar12 != 0) {
                do {
                  if (pOStack_10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                    pVVar15 = &(pOVar14->klass->vtable).Equals +
                             pOVar14->klass->interfaceOffsets[uVar11].offset;
                    method_00 = pMStack_17;
                    (*pVVar15->methodPtr)(pOVar14,pMStack_17,pVVar15->method);
                    goto code_?;
                  }
                  uVar11 = uVar11 + 1;
                  pOVar3 = pOVar14;
                } while (uVar11 < uVar12);
              }
              puVar18 = (undefined4 *)func_?(pOVar3,TypeInfo__IInputSignalReceiver,0);
              method_00 = pMStack_17;
              (*(code *)*puVar18)(pOVar3,pMStack_17,puVar18[1]);
              goto code_?;
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                       ,method_00);
            *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 100;
            if (unaff_EBX[0xc] != '\0') {
              if (cRam_? == '\0') {
                func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
                cRam_? = '\x01';
              }
              if (*(HashSet_1_UnityEngine_Vector3_ **)(unaff_EBX + 0x10) ==
                  (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
              HashSet_1_UnityEngine_Vector3__Clear
                        (*(HashSet_1_UnityEngine_Vector3_ **)(unaff_EBX + 0x10),
                         MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
            }
            *unaff_FS_OFFSET = uVar6;
            return;
          }
code_?:
          func_?();
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)
           func_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pMVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    (pMVar1->fields).updateInterval = 100;
    (this->fields).updateEvaluatorStep = pMVar1;
    func_?(&(this->fields).updateEvaluatorStep,pMVar1);
    pMVar1 = (MVNetworkGame_UpdateEvaluator *)
             func_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
    if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pMVar1,ExceptionArgument__Enum_obj,unaff_EDI);
      pMVar2 = (MethodInfo *)&(this->fields).fastFordwardUpdateEvaluator;
      (pMVar1->fields).updateInterval = 10;
      (this->fields).fastFordwardUpdateEvaluator = pMVar1;
      func_?(pMVar2,pMVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
      (this->fields).networkGame = networkGame;
      func_?(&(this->fields).networkGame,networkGame);
      pMVar1 = (this->fields).updateEvaluatorStep;
      if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar1->fields).stepTimestamp = stepTimestamp;
        iVar3 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar1->fields).lastUpdateTick = iVar3;
        (pMVar1->fields).accumulatedTime = 0;
        value = (MVNetworkGame_LogicEventQueue *)
                func_?(TypeInfo__MVNetworkGame__LogicEventQueue);
        if (value != (MVNetworkGame_LogicEventQueue *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                           );
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                                   );
          if (this_00 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0
             ) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
                      );
            pMVar2 = (MethodInfo *)&value->fields;
            (value->fields).logicEvents = this_00;
            func_?(pMVar2,this_00);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value,ExceptionArgument__Enum_obj,pMVar2);
            (this->fields).logicEventQueue = value;
            func_?(&this->fields,value);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 get_StepTimeStamp() */

int32_t Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_get_StepTimeStamp
                  (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).updateEvaluatorStep;
  if (pMVar2 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    return (pMVar2->fields).stepTimestamp;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

