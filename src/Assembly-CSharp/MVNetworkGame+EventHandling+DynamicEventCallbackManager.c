
/* Boolean IsDynamicEvent(MVEventCodes) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Notify(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).eventCallbacks;
  if (this_00 !=
      (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
       *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,eventCode,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&StringLiteral_No_subscribers_to_event_data);
        cRam_? = '\x01';
      }
      if (pOVar1[1].klass == (Object__Class *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_subscribers_to_event_data,(MethodInfo *)0x0);
        return;
      }
      pOVar2 = pOVar1[1].klass;
      if (pOVar2 != (Object__Class *)0x0) {
        (*(code *)(pOVar2->_0).namespaze)((pOVar2->_0).element_class,eventData);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_SubscribeToEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,Action_1_ExitGames_Client_Photon_EventData_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                   );
    func_?(&
                    TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                   );
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    pMVar1 = (MethodInfo *)&UNK_?;
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar2 == 0) goto code_?;
    pDVar3 = (this->fields).eventCallbacks;
    if (pDVar3 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                   *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                        ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar3,eventCode,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                        );
      if (bVar2 == 0) {
        pDVar3 = (this->fields).eventCallbacks;
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOVar4,ExceptionArgument__Enum_obj,pMVar1);
        if (pDVar3 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,eventCode,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  );
      }
      pDVar3 = (this->fields).eventCallbacks;
      if (pDVar3 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
        if (pOVar4 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar4[1].klass;
          do {
            pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
            if (pDVar5 != (Delegate *)0x0) {
              iVar6 = func_?();
              if (iVar6 == 0) goto code_?;
            }
            pOVar7 = (Object__Class *)func_?(a);
            bVar8 = pOVar7 == a;
            a = pOVar7;
            if (bVar8) {
              return;
            }
          } while( true );
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  uVar9 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar9);
  pMVar1 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Event_not_handled_by_dynamic_eve);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar1);
  func_?(&
                  MethodInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager__SubscribeToEvent_MV__Common__MVEventCodes__System__Action<ExitGames::Client::Photon::EventData>_
                 );
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnSubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_UnSubscribeToEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,Action_1_ExitGames_Client_Photon_EventData_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).eventCallbacks;
  if (pDVar1 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,eventCode,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                       );
    unaff_EBX = (Action_1_ExitGames_Client_Photon_EventData___Class *)0x0;
    if (pOVar2 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        cRam_? = '\x01';
      }
      source = (Action_1_ExitGames_Client_Photon_EventData___Class *)pOVar2[1].klass;
      do {
        unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        unaff_EBX = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
        iVar3 = 0;
        if (unaff_EDI != (Delegate *)0x0) {
          iVar3 = func_?(unaff_EDI,
                                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          if (iVar3 == 0) goto code_?;
        }
        unaff_EDI = (Delegate *)(pOVar2 + 1);
        unaff_EBX = source;
        pAVar4 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
                 func_?((Delegate *)(pOVar2 + 1),iVar3,source);
        bVar5 = pAVar4 != source;
        source = pAVar4;
      } while (bVar5);
      if (pOVar2[1].klass == (Object__Class *)0x0) {
        pDVar1 = (this->fields).eventCallbacks;
        if (pDVar1 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,eventCode,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVNetworkGame+EventHandling+DynamicEventCallbackManager() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  (this->fields).eventCallbacks =
       (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
        *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (HashSet_1_System_ByteEnum_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_01 != (HashSet_1_System_ByteEnum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_01,0x6a,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    method_00 = (MethodInfo *)&(this->fields).eventsHandledByDynamicEventCallbackManager;
    (this->fields).eventsHandledByDynamicEventCallbackManager =
         (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

