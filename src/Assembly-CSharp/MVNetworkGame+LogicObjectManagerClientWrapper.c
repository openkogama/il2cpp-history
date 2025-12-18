
/* Void EnqueueLogicEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,EventData *eventData,
               MethodInfo *method)

{
  pMVar1 = (this->fields).logicEventQueue;
  if (pMVar1 != (MVNetworkGame_LogicEventQueue *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (eventData != (EventData *)0x0) {
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x24,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar1->fields).logicEvents;
        key = *(int32_t *)&pOVar2[1].klass;
        if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                            (this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                             ->klass->rgctx_data[0x21].method);
          if (iVar4 < 0) {
            pDVar5 = (pMVar1->fields).logicEvents;
            this_01 = (Stack_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                   );
            mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
            Stack_1_System_Object___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                      );
            if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)
                          0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,(Object *)this_01,
                       CONCAT31((int3)((uint)in_R9D >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                       ->klass->rgctx_data[0x22].method);
          }
          pDVar5 = (pMVar1->fields).logicEvents;
          if (pDVar5 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                               );
            if (pOVar2 != (Object *)0x0) {
              if (pOVar2[1].klass != (Object__Class *)0x0) {
                if (*(int *)&pOVar2[2].klass == *(int *)&((pOVar2[1].klass)->_0).namespaze) {
                  pOVar6 = pOVar2[1].klass;
                  iVar7 = *(int *)&(pOVar6->_0).namespaze * 2;
                  if (iVar7 < *(int *)&(pOVar6->_0).namespaze + 4) {
                    iVar7 = *(int *)&(pOVar6->_0).namespaze + 4;
                  }
                  FUN_?(pOVar2,iVar7,
                                MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                if (pOVar2[1].klass != (Object__Class *)0x0) {
                  FUN_?(pOVar2[1].klass,(longlong)*(int *)((longlong)&pOVar2[1].monitor + 4)
                                ,eventData);
                  if (pOVar2[1].klass != (Object__Class *)0x0) {
                    iVar8 = *(int *)((longlong)&pOVar2[1].monitor + 4) + 1;
                    iVar7 = 0;
                    if (iVar8 != *(int *)&((pOVar2[1].klass)->_0).namespaze) {
                      iVar7 = iVar8;
                    }
                    *(int *)((longlong)&pOVar2[1].monitor + 4) = iVar7;
                    *(int *)&pOVar2[2].klass = *(int *)&pOVar2[2].klass + 1;
                    piVar9 = (int *)((longlong)&pOVar2[2].klass + 4);
                    *piVar9 = *piVar9 + 1;
                    return;
                  }
                }
              }
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_00->fields).logicEvents;
      if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
        pDVar5 = (this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_03 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar5 = (this_00->fields).logicEvents;
        if ((pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
           || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,
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
  FUN_?();
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
    iVar2 = FUN_?();
    (pMVar1->fields).lastUpdateTick = iVar2;
    (pMVar1->fields).accumulatedTime = 0;
    return;
  }
  FUN_?();
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_00->fields).logicEvents;
      if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar4 = (this_00->fields).logicEvents;
        if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
        break;
        this_03 = (Queue_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar4 = (this_00->fields).logicEvents;
        if ((pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
           || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__Remove
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
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
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_logic_event_queue_not_cleared_on);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    piVar2 = &(pMVar1->fields).stepTimestamp;
    *piVar2 = *piVar2 + 1000;
    iVar3 = FUN_?();
    (pMVar1->fields).lastUpdateTick = iVar3;
    (pMVar1->fields).accumulatedTime = 0;
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this,(MethodInfo *)0x0);
    pMVar4 = (this->fields).logicEventQueue;
    if (pMVar4 != (MVNetworkGame_LogicEventQueue *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar5 = (pMVar4->fields).logicEvents;
      if (pDVar5 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        if ((pDVar5->fields)._count != (pDVar5->fields)._freeCount) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_logic_event_queue_not_cleared_on,(MethodInfo *)0x0);
        }
        pMVar6 = (this->fields).networkGame;
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (pLVar7 = (pMVar6->fields)._LogicObjectManager_k__BackingField,
           pLVar7 != (LogicObjectManagerClient *)0x0)) {
          (pLVar7->fields)._._TimeStamp_k__BackingField = 0;
          pMVar1 = (this->fields).updateEvaluatorStep;
          if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar1->fields).stepTimestamp = 0;
            iVar3 = FUN_?();
            (pMVar1->fields).lastUpdateTick = iVar3;
            (pMVar1->fields).accumulatedTime = 0;
            pMVar1 = (this->fields).fastFordwardUpdateEvaluator;
            if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
              (pMVar1->fields).stepTimestamp = 0;
              iVar3 = FUN_?();
              (pMVar1->fields).accumulatedTime = 0;
              (pMVar1->fields).lastUpdateTick = iVar3;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    iVar3 = FUN_?();
    (pMVar1->fields).lastUpdateTick = iVar3;
    (pMVar1->fields).accumulatedTime = 0;
    return;
  }
  FUN_?();
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
    iVar4 = (pMVar2->fields).lastUpdateTick;
    iVar5 = FUN_?();
    iVar6 = FUN_?();
    iVar4 = (pMVar2->fields).accumulatedTime + (iVar5 - iVar4);
    (pMVar2->fields).lastUpdateTick = iVar6;
    (pMVar2->fields).accumulatedTime = iVar4;
    if (iVar4 < (pMVar2->fields).updateInterval) {
code_?:
      pMVar1 = (this->fields).networkGame;
      pMVar2 = (this->fields).updateEvaluatorStep;
      goto joined_?;
    }
    if (pLVar3 == (LogicObjectManagerClient *)0x0) break;
    if ((pMVar2->fields).stepTimestamp <= (pLVar3->fields)._._TimeStamp_k__BackingField)
    goto code_?;
    (pMVar2->fields).accumulatedTime = iVar4 - (pMVar2->fields).updateInterval;
    MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager(this,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    pMVar2 = (this->fields).fastFordwardUpdateEvaluator;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
joined_?:
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pLVar3 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
     pMVar2 == (MVNetworkGame_UpdateEvaluator *)0x0)) goto code_?;
  iVar4 = (pMVar2->fields).lastUpdateTick;
  iVar5 = FUN_?();
  iVar6 = FUN_?();
  iVar4 = (pMVar2->fields).accumulatedTime + (iVar5 - iVar4);
  (pMVar2->fields).lastUpdateTick = iVar6;
  (pMVar2->fields).accumulatedTime = iVar4;
  if (iVar4 < (pMVar2->fields).updateInterval) {
    return;
  }
  if (pLVar3 == (LogicObjectManagerClient *)0x0) goto code_?;
  if ((pMVar2->fields).stepTimestamp <= (pLVar3->fields)._._TimeStamp_k__BackingField) {
    return;
  }
  (pMVar2->fields).accumulatedTime = iVar4 - (pMVar2->fields).updateInterval;
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_00->fields).logicEvents;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_01,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar3) {
          pDVar4 = (this_00->fields).logicEvents;
          if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          this_03 = (Queue_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                              );
          pDVar4 = (this_00->fields).logicEvents;
          if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    );
          if (this_03 == (Queue_1_System_Object_ *)0x0) goto code_?;
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
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
           pLVar2 != (LogicObjectManagerClient *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                          ,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__IInputSignalReceiver);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)(pLVar2->fields)._.logicWorldObjects;
          if ((this_02 ==
               (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0) ||
             (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                  (this_02,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                                  ),
             pDVar5 ==
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0)) {
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
            uVar6 = uStack_7;
code_?:
            uStack_7 = uVar6;
            FUN_?();
code_?:
            FUN_?();
code_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                      ((MethodInfo *)0x0);
          }
          else {
            uStack_8 = (pDVar5->fields)._dictionary;
            puStack_9 = (undefined4 *)0x0;
            puStack_10 = (undefined *)0x0;
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&uStack_8 >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
            if (uStack_8 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iStack_15 = (uStack_8->fields)._version;
            puStack_10 = (undefined *)0x0;
            uStack_8._4_4_ = (undefined4)((ulonglong)uStack_8 >> 0x20);
            uStack_16 = (undefined4)uStack_8;
            uStack_17 = uStack_8._4_4_;
            uStack_7 = 0;
            plStack_18 = (longlong *)0x0;
            uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0;
            puStack_9 = &uStack_16;
            while (lVar19 = CONCAT44(uStack_17,uStack_16), lVar19 != 0) {
              if (iStack_15 != *(int *)(lVar19 + 0x2c)) goto code_?;
              do {
                if (lVar19 == 0) goto code_?;
                if (*(uint *)(lVar19 + 0x20) <= uStack_7) {
                  uStack_7 = *(int *)(lVar19 + 0x20) + 1;
                  plStack_18 = (longlong *)0x0;
                  piVar20 = &(pLVar2->fields)._._TimeStamp_k__BackingField;
                  *piVar20 = *piVar20 + 100;
                  if ((pLVar2->fields)._.trackLoops != 0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pHVar21 = (pLVar2->fields)._.updatedIds;
                    if (pHVar21 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
                    if (0 < (pHVar21->fields)._lastIndex) {
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pHVar21->fields)._slots,0,(pHVar21->fields)._lastIndex,
                                 (MethodInfo *)0x0);
                      pIVar22 = (pHVar21->fields)._buckets;
                      if (pIVar22 == (Int32__Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pHVar21->fields)._buckets,0,(int32_t)pIVar22->max_length,
                                 (MethodInfo *)0x0);
                      (pHVar21->fields)._count = 0;
                      (pHVar21->fields)._lastIndex = 0;
                      (pHVar21->fields)._freeList = -1;
                    }
                    piVar20 = &(pHVar21->fields)._version;
                    *piVar20 = *piVar20 + 1;
                  }
                  return;
                }
                lVar23 = *(longlong *)(lVar19 + 0x18);
                lVar24 = (longlong)(int)uStack_7;
                uVar6 = uStack_7 + 1;
                if (lVar23 == 0) goto code_?;
                bVar25 = *(uint *)(lVar23 + 0x18) <= uStack_7;
                uStack_7 = uVar6;
                if (bVar25) goto code_?;
              } while (*(int *)(lVar23 + 0x20 + lVar24 * 0x18) < 0);
              plStack_18 = *(longlong **)(lVar23 + (lVar24 + 2) * 0x18);
              func_?();
              plVar26 = plStack_18;
              if (plStack_18 == (longlong *)0x0) goto code_?;
              lVar19 = *plStack_18;
              uVar27 = 0;
              if (*(ushort *)(lVar19 + 0x12e) != 0) {
                uVar28 = uVar27;
                do {
                  if (*(IInputSignalReceiver__Class **)
                       (*(longlong *)(lVar19 + 0xb0) + (ulonglong)uVar28 * 0x10) ==
                      TypeInfo__IInputSignalReceiver) {
                    puVar29 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar19 + 0xb0) + 8 + (ulonglong)uVar28 * 0x10)
                               + 2) * 0x10 + 0x138 + lVar19);
                    goto code_?;
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 < *(ushort *)(lVar19 + 0x12e));
              }
              puVar29 = (undefined8 *)FUN_?(plStack_18,TypeInfo__IInputSignalReceiver,2);
code_?:
              uVar30 = (*(code *)*puVar29)(plVar26,puVar29[1]);
              if (plVar26 == (longlong *)0x0) goto code_?;
              lVar19 = *plVar26;
              if (*(ushort *)(lVar19 + 0x12e) != 0) {
                do {
                  if (*(IInputSignalReceiver__Class **)
                       (*(longlong *)(lVar19 + 0xb0) + (ulonglong)uVar27 * 0x10) ==
                      TypeInfo__IInputSignalReceiver) {
                    puVar29 = (undefined8 *)
                              ((longlong)
                               *(int *)(*(longlong *)(lVar19 + 0xb0) + 8 + (ulonglong)uVar27 * 0x10)
                               * 0x10 + 0x138 + lVar19);
                    goto code_?;
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < *(ushort *)(lVar19 + 0x12e));
              }
              puVar29 = (undefined8 *)FUN_?(plVar26,TypeInfo__IInputSignalReceiver,0);
code_?:
              (*(code *)*puVar29)(plVar26,uVar30,puVar29[1]);
            }
          }
          FUN_?();
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MVNetworkGame+LogicObjectManagerClientWrapper(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper__ctor
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MVNetworkGame *networkGame,
               int32_t stepTimestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame__LogicEventQueue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__UpdateEvaluator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)FUN_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
  bVar2 = iRam_? != 0;
  (pMVar1->fields).updateInterval = 100;
  (this->fields).updateEvaluatorStep = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).updateEvaluatorStep >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)FUN_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
  (pMVar1->fields).updateInterval = 10;
  (this->fields).fastFordwardUpdateEvaluator = pMVar1;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).fastFordwardUpdateEvaluator >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = iRam_?;
  (this->fields).networkGame = networkGame;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).networkGame >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 == (MVNetworkGame_UpdateEvaluator *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (pMVar1->fields).stepTimestamp = stepTimestamp;
  iVar9 = FUN_?();
  (pMVar1->fields).lastUpdateTick = iVar9;
  (pMVar1->fields).accumulatedTime = 0;
  pMVar10 = (MVNetworkGame_LogicEventQueue *)FUN_?(TypeInfo__MVNetworkGame__LogicEventQueue);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
            );
  iVar7 = iRam_?;
  (pMVar10->fields).logicEvents =
       (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)this_00;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&pMVar10->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).logicEventQueue = pMVar10;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Int32 get_StepTimeStamp() */

int32_t Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_get_StepTimeStamp
                  (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    return (pMVar1->fields).stepTimestamp;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

