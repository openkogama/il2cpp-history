
/* Boolean IsDynamicEvent(MVEventCodes) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
            (this->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Notify(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).eventCallbacks;
  if (this_00 !=
      (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
       *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             MVEventCodes,System::Object]::
             Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                       ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)this_00,eventCode,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar1[1].klass == (Object__Class *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_No_subscribers_to_event_data,(MethodInfo *)0x0);
        return;
      }
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                 pOVar1[1].klass,(Dictionary_2_System_String_System_Object_ *)eventData,
                 MethodInfo__System__Action<ExitGames::Client::Photon::EventData>__Invoke_ExitGames__Client__Photon__EventData_
                );
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
            (this->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar1 == 0) goto code_?;
    pDVar2 = (this->fields).eventCallbacks;
    if (pDVar2 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                   *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              MVEventCodes,System::Object]::
              Dictionary_2_MV_Common_MVEventCodes_System_Object__ContainsKey
                        ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar2,eventCode,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                        );
      if (bVar1 == 0) {
        pDVar2 = (this->fields).eventCallbacks;
        this_01 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
        if (pDVar2 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System::
        Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Add
                  ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar2,eventCode,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  );
      }
      pDVar2 = (this->fields).eventCallbacks;
      if (pDVar2 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 MVEventCodes,System::Object]::
                 Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                           ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar2,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
        if (pOVar3 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar3[1].klass;
          do {
            pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
            if (pDVar4 != (Delegate *)0x0) {
              pDVar5 = (Delegate *)0x0;
              if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar4->klass ==
                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
                pDVar5 = pDVar4;
              }
              if (pDVar5 == (Delegate *)0x0) goto code_?;
            }
            pOVar6 = (Object__Class *)func_?(pOVar3 + 1);
            bVar7 = pOVar6 == a;
            a = pOVar6;
            if (bVar7) {
              return;
            }
          } while( true );
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Event_not_handled_by_dynamic_eve,(MethodInfo *)0x0);
  func_?(this_02);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).eventCallbacks;
  if (pDVar1 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             MVEventCodes,System::Object]::
             Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                       ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar1,eventCode,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                       );
    if (pOVar2 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      source = pOVar2[1].klass;
      do {
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        pDVar4 = (Delegate *)0x0;
        if (pDVar3 != (Delegate *)0x0) {
          if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar3->klass ==
              TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
            pDVar4 = pDVar3;
          }
          pAVar5 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          if (pDVar4 == (Delegate *)0x0) goto code_?;
        }
        pOVar6 = (Object__Class *)func_?(pOVar2 + 1,pDVar4,source);
        bVar7 = pOVar6 != source;
        source = pOVar6;
      } while (bVar7);
      if (pOVar2[1].klass == (Object__Class *)0x0) {
        pDVar1 = (this->fields).eventCallbacks;
        if (pDVar1 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System::
        Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Remove
                  ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar1,eventCode,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pDVar3 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pDVar3,pAVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVNetworkGame+EventHandling+DynamicEventCallbackManager() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  (this->fields).eventCallbacks = this_00;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_01,
               MVOperationCodes__Enum_SetGamePassTierToSeenOperation,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    (this->fields).eventsHandledByDynamicEventCallbackManager =
         (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

