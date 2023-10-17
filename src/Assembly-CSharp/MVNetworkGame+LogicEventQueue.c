
/* Void Dequeue(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Dequeue
               (MVNetworkGame_LogicEventQueue *this,int32_t timestamp,MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).logicEvents;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)timestamp,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).logicEvents;
    if (pDVar2 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      this_01 = (Queue_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,timestamp,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                          );
      pDVar2 = (this->fields).logicEvents;
      if ((pDVar2 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,timestamp,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    ), this_01 != (Queue_1_System_Object_ *)0x0)) {
        while (0 < (this_01->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame_LogicEventQueue_HandleEvent(this,photonEvent,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enqueue(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Enqueue
               (MVNetworkGame_LogicEventQueue *this,EventData *eventData,MethodInfo *method)

{
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
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x23,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar2 = (undefined4 *)func_?(pOVar1);
      pOVar1 = (Object *)*puVar2;
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).logicEvents
      ;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).logicEvents;
          this_03 = (Stack_1_System_Object_ *)func_?();
          if (this_03 != (Stack_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
            Stack_1_System_Object___ctor
                      (this_03,
                       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                      );
            if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_01,pOVar1,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
              goto code_?;
            }
          }
        }
        else {
code_?:
          this_02 = (this->fields).logicEvents;
          if (this_02 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0
             ) {
            this_04 = (Queue_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                 (Int32Enum__Enum)pOVar1,
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
  pOVar1 = (Object *)func_?();
code_?:
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
               (MVNetworkGame_LogicEventQueue *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IIsLogicObjectFiringEventHandler);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__MVEventCodes);
    func_?(&StringLiteral_Unknown_logic_event__);
    cRam_? = '\x01';
  }
  id = (CollectTheItemDropOff__Class *)photonEvent;
  if (photonEvent == (EventData *)0x0) goto code_?;
  uVar1 = (photonEvent->fields).Code;
  if (uVar1 == 0x50) {
    unaff_EDI = (Int32__Array__Class *)
                MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x16,(MethodInfo *)0x0);
    if ((unaff_EDI == (Int32__Array__Class *)0x0) || (pOVar2 == (Object *)0x0))
    goto code_?;
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar3 = (int32_t *)func_?();
      unaff_EDI = (Int32__Array__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)unaff_EDI,*piVar3,(MethodInfo *)0x0);
      id = (CollectTheItemDropOff__Class *)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xcc,(MethodInfo *)0x0);
      if (unaff_EDI == (Int32__Array__Class *)0x0) goto code_?;
      iVar4 = func_?(unaff_EDI);
      if (iVar4 != 0) {
        if (id == (CollectTheItemDropOff__Class *)0x0) goto code_?;
        if ((Il2CppClass *)((id->_0).image)->codeGenModule ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar5 = (byte *)func_?();
          id = (CollectTheItemDropOff__Class *)TypeInfo__IIsLogicObjectFiringEventHandler;
          photonEvent = (EventData *)(uint)*pbVar5;
          piVar6 = (int *)func_?(unaff_EDI,TypeInfo__IIsLogicObjectFiringEventHandler);
          if (piVar6 != (int *)0x0) {
            uVar7 = 0;
            uVar8 = *(ushort *)(*piVar6 + 0xb2);
            if (uVar8 != 0) {
              do {
                if (*(IIsLogicObjectFiringEventHandler__Class **)
                     (*(int *)(*piVar6 + 0x58) + (uint)uVar7 * 8) ==
                    TypeInfo__IIsLogicObjectFiringEventHandler) {
                  puVar9 = (undefined4 *)
                           (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar7 * 8) * 8 + 0xbc +
                           *piVar6);
                  goto code_?;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            puVar9 = (undefined4 *)
                     func_?(piVar6,TypeInfo__IIsLogicObjectFiringEventHandler);
code_?:
            (*(code *)*puVar9)(piVar6,photonEvent);
            return;
          }
          goto code_?;
        }
code_?:
        func_?(id);
      }
      func_?(unaff_EDI);
    }
    func_?();
    this_01 = extraout_EDX;
code_?:
    func_?(this_01);
  }
  else {
    if (uVar1 != 0x52) {
      pSVar10 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unknown_logic_event__,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
      return;
    }
    id = (CollectTheItemDropOff__Class *)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Int32;
    if (id == (CollectTheItemDropOff__Class *)0x0) goto code_?;
    iVar4 = func_?(id);
    if (iVar4 == 0) goto code_?;
    if ((*(int *)(iVar4 + 0xc) != 0) &&
       (unaff_EDI = *(Int32__Array__Class **)(iVar4 + 0x10), 1 < *(uint *)(iVar4 + 0xc))) {
      id = *(CollectTheItemDropOff__Class **)(iVar4 + 0x14);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
        func_?();
code_?:
        func_?(unaff_EDI);
        goto code_?;
      }
      this_01 = (CollectTheItemDropOff *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(int32_t)id,(MethodInfo *)0x0);
      id = TypeInfo__CollectTheItemDropOff;
      if (this_01 == (CollectTheItemDropOff *)0x0) goto code_?;
      if (((TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
           (this_01->klass->_1).typeHierarchyDepth) &&
         ((CollectTheItemDropOff__Class *)
          (this_01->klass->_1).typeHierarchy
          [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
          TypeInfo__CollectTheItemDropOff)) {
        CollectTheItemDropOff::CollectTheItemDropOff_DropWoId
                  (this_01,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(id,unaff_EDI);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVNetworkGame+LogicEventQueue() */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue__ctor
               (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
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
  if (this_00 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).logicEvents = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_get_Count
                  (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).logicEvents;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}

