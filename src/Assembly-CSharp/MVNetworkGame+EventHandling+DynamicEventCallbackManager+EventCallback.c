
/* Void Notify(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_subscribers_to_event_data);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnEventData != (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    pAVar1 = (this->fields).OnEventData;
    if (pAVar1 != (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,eventData,(pAVar1->fields)._._.method);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = StringLiteral_No_subscribers_to_event_data;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Subscribe(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_Subscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  a = (this->fields).OnEventData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
      if (pAVar4 == (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pMVar1->OnEventData;
    bVar7 = a == pAVar6;
    if (bVar7) {
      pMVar1->OnEventData = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pMVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Boolean UnSubscribe(Action`1[ExitGames.Client.Photon.EventData]) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_UnSubscribe
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  source = (this->fields).OnEventData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    if (pDVar1 == (Delegate *)0x0) {
      pAVar3 = (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_ExitGames_Client_Photon_EventData_ *)
               FUN_?(pDVar1,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
      if (pAVar3 == (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
    }
    LOCK();
    pAVar6 = (this->fields).OnEventData;
    bVar7 = source == pAVar6;
    if (bVar7) {
      (this->fields).OnEventData = pAVar3;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar3 = source;
    if (!bVar7) {
      pAVar3 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar3 != source;
    source = pAVar3;
  } while (bVar7);
  return (this->fields).OnEventData != (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
}


/* Void remove_OnEventData(Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager+EventCallback::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_remove_OnEventData
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback *this,
               Action_1_ExitGames_Client_Photon_EventData_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  source = (this->fields).OnEventData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_ExitGames_Client_Photon_EventData_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
      if (pAVar4 == (Action_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pMVar1->OnEventData;
    bVar7 = source == pAVar6;
    if (bVar7) {
      pMVar1->OnEventData = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pMVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

