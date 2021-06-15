
/* Void Dequeue(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Dequeue
               (MVNetworkGame_LogicEventQueue *this,int32_t timestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicEvents;
  if (this_00 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,timestamp,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).logicEvents;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,timestamp,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                          );
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).logicEvents;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar2,timestamp,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    ), this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0)) {
        while (pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                                  ), 0 < (int)pIVar3) {
          photonEvent = System.dll::System::Collections::Generic::
                        Queue`1[SmoothPhysicsMovement+Package]::
                        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame_LogicEventQueue_HandleEvent(this,(EventData *)photonEvent,(MethodInfo *)0x0)
          ;
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Enqueue(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Enqueue
               (MVNetworkGame_LogicEventQueue *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x23,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      key = *piVar3;
      pDVar4 = (this->fields).logicEvents;
      if (pDVar4 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                          );
        if (bVar5 == 0) {
          pDVar4 = (this->fields).logicEvents;
          pQVar6 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                  );
          System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
          Queue_1_SmoothPhysicsMovement_Package___ctor
                    (pQVar6,
                     MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                    );
          if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,(Object *)pQVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                    );
        }
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).logicEvents;
        if (this_00 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          pQVar6 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                             );
          if (pQVar6 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
            System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
            Queue_1_SmoothPhysicsMovement_Package__Enqueue
                      (pQVar6,(SmoothPhysicsMovement_Package *)eventData,
                       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
               (MVNetworkGame_LogicEventQueue *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IIsLogicObjectFiringEventHandler__Class *)photonEvent;
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?(0);
code_?:
    func_?(unaff_EDI,this_00);
    pBVar1 = extraout_ECX;
code_?:
    func_?(this_00,pBVar1);
code_?:
    uVar2 = func_?(unaff_EDI,unaff_EBX);
code_?:
    func_?(uVar2);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    uVar4 = (photonEvent->fields).Code;
    if (uVar4 == 0x50) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      unaff_EDI = (Int32__Array__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)this_00,0x16,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar5);
      if ((unaff_EDI == (Int32__Array__Class *)0x0) || (pOVar5 == (Object *)0x0))
      goto code_?;
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar6 = (int32_t *)func_?(pOVar5);
        unaff_EDI = (Int32__Array__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              ((MVWorldObjectClientManager *)unaff_EDI,*piVar6,(MethodInfo *)0x0);
        this_00 = (IIsLogicObjectFiringEventHandler__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)this_00,0xcc,(MethodInfo *)0x0);
        unaff_EBX = TypeInfo__IIsLogicObjectFiringEventHandler;
        if (unaff_EDI == (Int32__Array__Class *)0x0) goto code_?;
        iVar7 = func_?(unaff_EDI,TypeInfo__IIsLogicObjectFiringEventHandler);
        if (iVar7 != 0) {
          if (this_00 == (IIsLogicObjectFiringEventHandler__Class *)0x0) goto code_?;
          pBVar1 = TypeInfo__System__Boolean;
          if ((Il2CppClass *)((this_00->_0).image)->codeGenModule ==
              (TypeInfo__System__Boolean->_0).element_class) {
            unaff_EBX = (IIsLogicObjectFiringEventHandler__Class *)func_?(this_00);
            this_00 = TypeInfo__IIsLogicObjectFiringEventHandler;
            iVar7 = func_?(unaff_EDI,TypeInfo__IIsLogicObjectFiringEventHandler);
            if (iVar7 != 0) {
              func_?(0,TypeInfo__IIsLogicObjectFiringEventHandler,iVar7,
                              *(undefined1 *)&(unaff_EBX->_0).image);
              return;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (uVar4 != 0x52) {
      photonEvent = (EventData *)CONCAT13(uVar4,photonEvent._0_3_);
      pOVar5 = (Object *)func_?(TypeInfo__MV__Common__MVEventCodes,(int)&photonEvent + 3);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Unknown_logic_event__,pOVar5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
    this_00 = (IIsLogicObjectFiringEventHandler__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Int32;
    if (this_00 == (IIsLogicObjectFiringEventHandler__Class *)0x0) goto code_?;
    iVar7 = func_?(this_00,TypeInfo__System__Int32);
    if (iVar7 == 0) goto code_?;
    if (*(uint *)(iVar7 + 0xc) == 0) goto code_?;
    unaff_EDI = *(Int32__Array__Class **)(iVar7 + 0x10);
    if (1 < *(uint *)(iVar7 + 0xc)) {
      this_00 = *(IIsLogicObjectFiringEventHandler__Class **)(iVar7 + 0x14);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        this_00 = (IIsLogicObjectFiringEventHandler__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(int32_t)this_00,(MethodInfo *)0x0);
        iVar7 = func_?(this_00,TypeInfo__CollectTheItemDropOff);
        if (iVar7 != 0) {
          method_00 = (MethodInfo *)0x0;
          this_02 = (CollectTheItemDropOff *)
                    func_?(this_00,TypeInfo__CollectTheItemDropOff);
          CollectTheItemDropOff::CollectTheItemDropOff_DropWoId
                    (this_02,(int32_t)unaff_EDI,method_00);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  func_?(this_00,unaff_EDI);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVNetworkGame+LogicEventQueue() */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue__ctor
               (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
            );
  (this->fields).logicEvents = this_00;
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_get_Count
                  (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicEvents;
  if (this_00 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

