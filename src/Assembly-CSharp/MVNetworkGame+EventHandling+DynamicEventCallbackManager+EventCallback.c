
/* Void Notify(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnEventData;
  if (this_00 ==
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_No_subscribers_to_event_data,(MethodInfo *)0x0);
    return;
  }
  mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System::
  Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
            (this_00,(Dictionary_2_System_String_System_Object_ *)eventData,
             MethodInfo__System__Action<ExitGames::Client::Photon::EventData>__Invoke_ExitGames__Client__Photon__EventData_
            );
  return;
}


/* Void Subscribe(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Subscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnEventData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar1->klass ==
          TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Boolean UnSubscribe(Action`1[ExitGames.Client.Photon.EventData]) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_UnSubscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  source = pMVar1->OnEventData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar2->klass ==
          TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
    }
    pAVar6 = (Action_1_ExitGames_Client_Photon_EventData_ *)func_?(pMVar1,pDVar3,source);
    bVar7 = pAVar6 == source;
    source = pAVar6;
    if (bVar7) {
      return pMVar1->OnEventData != (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
    }
  } while( true );
}


/* Void remove_OnEventData(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_remove_OnEventData
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnEventData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar1->klass ==
          TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)
             func_?(&this->fields,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

