
/* Void Notify(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_No_subscribers_to_event_data);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).OnEventData;
  if (pAVar1 == (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_subscribers_to_event_data,(MethodInfo *)0x0);
    return;
  }
  (*(pAVar1->fields)._._.invoke_impl)
            ((pAVar1->fields)._._.method_code,eventData,(pAVar1->fields)._._.method);
  return;
}


/* Void Subscribe(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Subscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnEventData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_ExitGames_Client_Photon_EventData_ *)func_?(&this->fields,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Boolean UnSubscribe(Action`1[ExitGames.Client.Photon.EventData]) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_UnSubscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  source = pMVar1->OnEventData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>)
      ;
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
    }
    pAVar7 = (Action_1_ExitGames_Client_Photon_EventData_ *)func_?(pMVar1,iVar4,source);
    bVar8 = pAVar7 != source;
    source = pAVar7;
  } while (bVar8);
  return pMVar1->OnEventData != (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
}


/* Void remove_OnEventData(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_remove_OnEventData
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnEventData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_ExitGames_Client_Photon_EventData_ *)
             func_?(&this->fields,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

