
/* Void EnqueueLogicEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,EventData *eventData,
               MethodInfo *method)

{
  pMVar1 = (this->fields).logicEventQueue;
  if (pMVar1 != (MVNetworkGame_LogicEventQueue *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
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
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                            );
          if (bVar6 == 0) {
            pDVar5 = (pMVar1->fields).logicEvents;
            pQVar7 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                    );
            System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
            Queue_1_SmoothPhysicsMovement_Package___ctor
                      (pQVar7,
                       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                      );
            if (pDVar5 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)
                          0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,key,(Object *)pQVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                      );
          }
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(pMVar1->fields).logicEvents;
          if (this_00 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            pQVar7 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (this_00,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                               );
            if (pQVar7 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Enqueue
                        (pQVar7,(SmoothPhysicsMovement_Package *)eventData,
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
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ExecuteRemainingFrames() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while (pKVar2 = (KogamaSettingNumericBase_1_System_Single_ *)
                    (pMVar1->fields)._LogicObjectManager_k__BackingField,
          pKVar2 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(pKVar2,(MethodInfo *)0x0)
      ;
      this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)(this->fields).updateEvaluatorStep;
      if (this_00 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) break;
      pOVar4 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if ((int)pOVar4 <= (int)pIVar3) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      this_01 = (this->fields).logicEventQueue;
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pKVar2 = (KogamaSettingNumericBase_1_System_Single_ *)
                    (pMVar1->fields)._LogicObjectManager_k__BackingField,
          pKVar2 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)) ||
         (pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             (pKVar2,(MethodInfo *)0x0),
         this_01 == (MVNetworkGame_LogicEventQueue *)0x0)) break;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this_01->fields).logicEvents;
      if (this_02 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
      break;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,(int32_t)pIVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar5 != 0) {
        pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_01->fields).logicEvents;
        if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        this_04 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar6,(int32_t)pIVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_01->fields).logicEvents;
        if (pDVar6 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar6,(int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                  );
        while( true ) {
          if (this_04 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
          pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_04,
                              MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                             );
          if ((int)pIVar3 < 1) break;
          photonEvent = System.dll::System::Collections::Generic::
                        Queue`1[SmoothPhysicsMovement+Package]::
                        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                                  (this_04,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_01,(EventData *)photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_03 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_03 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_03,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  func_?(0);
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
    while (pKVar2 = (KogamaSettingNumericBase_1_System_Single_ *)
                    (pMVar1->fields)._LogicObjectManager_k__BackingField,
          pKVar2 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(pKVar2,(MethodInfo *)0x0)
      ;
      if (timestamp <= (int)pIVar3) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      this_00 = (this->fields).logicEventQueue;
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pKVar2 = (KogamaSettingNumericBase_1_System_Single_ *)
                    (pMVar1->fields)._LogicObjectManager_k__BackingField,
          pKVar2 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)) ||
         (pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             (pKVar2,(MethodInfo *)0x0),
         this_00 == (MVNetworkGame_LogicEventQueue *)0x0)) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = (this_00->fields).logicEvents;
      if (this_01 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
      break;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)pIVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        this_03 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar5,(int32_t)pIVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar5,(int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                  );
        while( true ) {
          if (this_03 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
          pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_03,
                              MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                             );
          if ((int)pIVar3 < 1) break;
          photonEvent = System.dll::System::Collections::Generic::
                        Queue`1[SmoothPhysicsMovement+Package]::
                        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                                  (this_03,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,(EventData *)photonEvent,(MethodInfo *)0x0);
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
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_Reset
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).updateEvaluatorStep;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              ((MVNetworkGame_UpdateEvaluator *)this_00,(int32_t)(pOVar1 + 0x7d),(MethodInfo *)0x0);
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this,(MethodInfo *)0x0);
    pMVar2 = (this->fields).logicEventQueue;
    if (pMVar2 != (MVNetworkGame_LogicEventQueue *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (pMVar2->fields).logicEvents;
      if (this_01 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        pOVar1 = System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                           );
        if (pOVar1 != (Object *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            in_stack_3 = (MethodInfo *)&UNK_?;
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_logic_event_queue_not_cleared_on,(MethodInfo *)0x0);
        }
        pMVar4 = (this->fields).networkGame;
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (this_02 = (Notification *)(pMVar4->fields)._LogicObjectManager_k__BackingField,
           this_02 != (Notification *)0x0)) {
          Notification::Notification_Initialize
                    (this_02,(Dictionary_2_System_Object_System_Object_ *)0x0,in_stack_3);
          pMVar5 = (this->fields).updateEvaluatorStep;
          if (pMVar5 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                      (pMVar5,0,(MethodInfo *)0x0);
            pMVar5 = (this->fields).fastFordwardUpdateEvaluator;
            if (pMVar5 != (MVNetworkGame_UpdateEvaluator *)0x0) {
              MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                        (pMVar5,0,(MethodInfo *)0x0);
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
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).updateEvaluatorStep;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              ((MVNetworkGame_UpdateEvaluator *)this_00,(int32_t)(pOVar1 + 0x7d),(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_Update
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  pMVar2 = (this->fields).fastFordwardUpdateEvaluator;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while (pMVar2 != (MVNetworkGame_UpdateEvaluator *)0x0) {
      bVar3 = MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_DoUpdate
                        (pMVar2,(LogicObjectManager *)
                                (pMVar1->fields)._LogicObjectManager_k__BackingField,
                         (MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      if (bVar3 == 0) {
        pMVar2 = (this->fields).updateEvaluatorStep;
        if (pMVar1 != (MVNetworkGame *)0x0) goto code_?;
        break;
      }
      this_00 = (this->fields).logicEventQueue;
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (this_01 = (KogamaSettingNumericBase_1_System_Single_ *)
                     (pMVar1->fields)._LogicObjectManager_k__BackingField,
          this_01 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)) ||
         (pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             (this_01,(MethodInfo *)0x0),
         this_00 == (MVNetworkGame_LogicEventQueue *)0x0)) break;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this_00->fields).logicEvents;
      if (this_02 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
      break;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,(int32_t)pIVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        this_04 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar5,(int32_t)pIVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar5,(int32_t)
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                  );
        while( true ) {
          if (this_04 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
          pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_04,
                              MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                             );
          if ((int)pIVar4 < 1) break;
          photonEvent = System.dll::System::Collections::Generic::
                        Queue`1[SmoothPhysicsMovement+Package]::
                        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                                  (this_04,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,(EventData *)photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_03 = (LogicObjectManager *)(pMVar1->fields)._LogicObjectManager_k__BackingField,
         this_03 == (LogicObjectManager *)0x0)) break;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update(this_03,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      pMVar2 = (this->fields).fastFordwardUpdateEvaluator;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
  }
  goto code_?;
  while( true ) {
    bVar3 = MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_DoUpdate
                      (pMVar2,(LogicObjectManager *)
                              (pMVar1->fields)._LogicObjectManager_k__BackingField,(MethodInfo *)0x0
                      );
    if (bVar3 == 0) {
      return;
    }
    MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager(this,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    pMVar2 = (this->fields).updateEvaluatorStep;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
code_?:
    if (pMVar2 == (MVNetworkGame_UpdateEvaluator *)0x0) break;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateLogicObjectManager() */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields).networkGame;
  this_00 = (this->fields).logicEventQueue;
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_01 = (KogamaSettingNumericBase_1_System_Single_ *)
                 (pMVar1->fields)._LogicObjectManager_k__BackingField,
      this_01 != (KogamaSettingNumericBase_1_System_Single_ *)0x0)) &&
     (pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          (this_01,(MethodInfo *)0x0),
     this_00 != (MVNetworkGame_LogicEventQueue *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (this_00->fields).logicEvents;
    if (this_02 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      pIVar3 = pIVar2;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,(int32_t)pIVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        this_03 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar5,(int32_t)pIVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                            );
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).logicEvents;
        if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        unaff_retaddr = (IKogamaSetting *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar5,(int32_t)pIVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                  );
        if (this_03 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
        while( true ) {
          pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                              ((KogamaSettingNumericBase_1_System_Single_ *)this_03,
                               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                              );
          if ((int)pIVar2 < 1) break;
          photonEvent = System.dll::System::Collections::Generic::
                        Queue`1[SmoothPhysicsMovement+Package]::
                        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                                  (this_03,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
                    (this_00,(EventData *)photonEvent,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         ((pMVar1->fields)._LogicObjectManager_k__BackingField != (LogicObjectManagerClient *)0x0))
      {
        uVar6 = *unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &stack0xffffffec;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pWStack_7 = (WinningConditionType__Enum__Array *)0x0;
        pDStack_8 = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
        pMStack_9 = (MonitorData *)0x0;
        pIStack_10 = (Int32__Array *)0x0;
        pLStack_11 = (Link__Array *)0x0;
        func_?();
        puStack_12 = (undefined4 *)&stack0xffffff98;
        if ((unaff_retaddr[1].klass != (IKogamaSetting__Class *)0x0) &&
           (puStack_12 = (undefined4 *)&stack0xffffff98,
           this_04 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[WinningConditionType,System::Object]::
                     Dictionary_2_WinningConditionType_System_Object__get_Values
                               ((Dictionary_2_WinningConditionType_System_Object_ *)
                                unaff_retaddr[1].klass,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                               ),
           this_04 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pDVar13 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                              (&DStack_14,this_04,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                              );
          pDStack_8 = (Dictionary_2_WinningConditionType_System_Object___Class *)
                       (pDVar13->host_enumerator).dictionary;
          pMStack_9 = (MonitorData *)(pDVar13->host_enumerator).next;
          pIStack_10 = (Int32__Array *)(pDVar13->host_enumerator).stamp;
          pLStack_11 = (Link__Array *)(pDVar13->host_enumerator).current.key;
          pWStack_7 = (WinningConditionType__Enum__Array *)(pDVar13->host_enumerator).current.value
          ;
          pIVar3 = unaff_retaddr;
code_?:
          DStack_14.host_enumerator.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
          ;
          DStack_14.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_8;
          cVar15 = func_?();
          if (cVar15 != '\0') {
            DStack_14.host_enumerator.next =
                 (int32_t)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
            ;
            DStack_14.host_enumerator.dictionary =
                 (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_8;
            pIVar2 = pIVar3;
            pSVar16 = (SerializationInfo *)func_?();
            pIVar3 = (IKogamaSetting *)0x0;
            if (pSVar16 == (SerializationInfo *)0x0) goto code_?;
            pSVar17 = pSVar16->klass;
            uVar18 = 0;
            uVar19._0_1_ = (pSVar17->_1).rank;
            uVar19._1_1_ = (pSVar17->_1).minimumAlignment;
            puStack_20 = (undefined *)(uint)uVar19;
            pSVar21 = pSVar16;
            if (uVar19 != 0) {
              do {
                if (pSVar17->interfaceOffsets[uVar18].interfaceType ==
                    (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                  ppMVar22 = &(&(pSVar16->klass->vtable).GetHashCode)
                              [pSVar16->klass->interfaceOffsets[uVar18].offset].method;
                  pIVar3 = pIVar2;
                  goto code_?;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar19);
            }
            ppMVar22 = (MethodInfo **)func_?(pSVar16,TypeInfo__IInputSignalReceiver,2);
            pIVar3 = pIVar2;
code_?:
            uVar23 = (*(code *)*ppMVar22)(pSVar16,ppMVar22[1]);
            pSVar17 = pSVar16->klass;
            iStack_24 = CONCAT31(iStack_24._1_3_,uVar23);
            uVar19 = 0;
            uVar18._0_1_ = (pSVar17->_1).rank;
            uVar18._1_1_ = (pSVar17->_1).minimumAlignment;
            puStack_20 = (undefined *)0x0;
            if (uVar18 != 0) {
              do {
                if (pSVar17->interfaceOffsets[uVar19].interfaceType ==
                    (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
                  pSVar17 = pSVar21->klass;
                  iVar25 = pSVar17->interfaceOffsets[uVar19].offset;
                  (*(code *)(&(pSVar17->vtable).Equals)[iVar25].method)
                            (pSVar21,iStack_24,(&(pSVar17->vtable).Finalize)[iVar25].methodPtr);
                  goto code_?;
                }
                uVar19 = uVar19 + 1;
                pSVar16 = pSVar21;
              } while (uVar19 < uVar18);
            }
            puVar26 = (undefined4 *)func_?(pSVar16,TypeInfo__IInputSignalReceiver,0);
            (*(code *)*puVar26)(pSVar16,iStack_24,puVar26[1]);
            goto code_?;
          }
          *puStack_12 = 0x40;
          DStack_14.host_enumerator.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
          ;
          DStack_14.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_8;
          func_?();
          pIVar3[2].monitor = pIVar3[2].monitor + 100;
          if (*(char *)&pIVar3[1].monitor != '\0') {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (pIVar3[2].klass == (IKogamaSetting__Class *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
            HashSet_1_UnityEngine_Vector3__Clear
                      ((HashSet_1_UnityEngine_Vector3_ *)pIVar3[2].klass,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          }
          *unaff_FS_OFFSET = uVar6;
          return;
        }
code_?:
        func_?(0);
        func_?(pIVar3,0,0);
        pcVar27 = (code *)swi(3);
        (*pcVar27)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* MVNetworkGame+LogicObjectManagerClientWrapper(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicObjectManagerClientWrapper::
     MVNetworkGame_LogicObjectManagerClientWrapper__ctor
               (MVNetworkGame_LogicObjectManagerClientWrapper *this,MVNetworkGame *networkGame,
               int32_t stepTimestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)
           func_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
  MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor(pMVar1,100,(MethodInfo *)0x0);
  (this->fields).updateEvaluatorStep = pMVar1;
  method_01 = TypeInfo__MVNetworkGame__UpdateEvaluator;
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)func_?();
  MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor(pMVar1,10,(MethodInfo *)0x0);
  (this->fields).fastFordwardUpdateEvaluator = pMVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_01);
  (this->fields).networkGame = networkGame;
  pMVar1 = (this->fields).updateEvaluatorStep;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              (pMVar1,0,(MethodInfo *)0x0);
    this_00 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = 
    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
    ;
    this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
              );
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this->fields).logicEventQueue = (MVNetworkGame_LogicEventQueue *)this_00;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

