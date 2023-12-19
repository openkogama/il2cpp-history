
/* Void HandleActorReadyMetric() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_HandleActorReadyMetric
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__MV__Common__MVGameType);
    func_?(&TypeInfo__MVJoinState);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral_CompleteJoinTime_);
    func_?(&StringLiteral_SessionType_Embedded);
    func_?(&StringLiteral_SessionType_TouristEmbedded);
    func_?(&StringLiteral_CompleteJoinTime_);
    func_?(&StringLiteral_SessionType_Tourist);
    func_?(&StringLiteral_JoinTime_);
    func_?(&StringLiteral_SessionType_);
    func_?(&StringLiteral_JoinAndInitializationTime);
    func_?(&StringLiteral_JoinAndInitializationTime_);
    func_?(&StringLiteral_JoinAndInitializationTime_);
    func_?(&StringLiteral_CompleteJoinTime);
    func_?(&StringLiteral_JoinTime);
    cRam_? = '\x01';
  }
  SStack_1.m_value = 0.0;
  SStack_2.m_value = 0.0;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  DStack_4 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0.0;
  mscorlib.dll::System::DateTime::DateTime__ctor_6
            ((DateTime *)&uStack_5,0x7b2,1,1,0,0,0,DateTimeKind__Enum_Utc,(MethodInfo *)0x0);
  value._dateData._4_4_ = 0;
  value._dateData._0_4_ = uStack_5._4_4_;
  mscorlib.dll::System::DateTime::DateTime_Subtract(&DStack_4,value,in_stack_6);
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_7 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalMilliseconds
                        ((TimeSpan *)&stack0xffffffd4,(MethodInfo *)0x0);
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).DOMReady) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    SStack_1.m_value = (float)(dStack_7 - (pLVar8->fields).DOMReady);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    uStack_5._4_4_ = SStack_1.m_value;
    if ((0.0 < SStack_1.m_value) && (SStack_1.m_value < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_CompleteJoinTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,SStack_1.m_value,(MethodInfo *)0x0);
    }
  }
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).PluginInit) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    SStack_2.m_value = (float)(dStack_7 - (pLVar8->fields).PluginInit);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString(&SStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    uStack_5._4_4_ = SStack_2.m_value;
    if ((0.0 < SStack_2.m_value) && (SStack_2.m_value < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinAndInitializationTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,SStack_2.m_value,(MethodInfo *)0x0);
    }
  }
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).GameStartTime) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    uStack_5._4_4_ = (float)(dStack_7 - (pLVar8->fields).GameStartTime);
    if ((0.0 < uStack_5._4_4_) && (uStack_5._4_4_ < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_JoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,uStack_5._4_4_,(MethodInfo *)0x0);
    }
  }
  bVar9 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar9 == 0) {
    if (_UNK_? == 0) goto code_?;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_SessionType_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar10 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar10->fields).embedded != 0) {
      if (_UNK_? == 0) goto code_?;
      str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_Embedded;
code_?:
      pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (_UNK_? == 0) goto code_?;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_SessionType_Tourist,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar10 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar10->fields).embedded != 0) {
      if (_UNK_? == 0) goto code_?;
      str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_TouristEmbedded;
      goto code_?;
    }
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_JoinCompleted,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pEStack_3 = (ElitePromotionSettings *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pEStack_3;
  pCStack_4 = (CustomTouristPromotionSettings *)&stack0xffffff6c;
  pCVar5 = (CustomTouristPromotionSettings *)&stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    pCVar5 = pCStack_4;
  }
  pCStack_4 = pCVar5;
  pEVar6 = photonEvent;
  pMStack_7 = (MVPlayer *)0x0;
  BStack_8.m_value = 0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    pMVar9 = (this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
       && (pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  (pMVar9,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (pMVar13 = (MVGameCoinManager *)(pWVar12->fields)._.worldObjectClientManager,
       pMStack_14 = pMVar13, photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x12,(MethodInfo *)0x0);
      if (pMVar13 != (MVGameCoinManager *)0x0) {
        if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          if (((pDVar15->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar15->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar16) {
            pDVar17 = pDVar15;
          }
          if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          goto code_?;
        }
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          if (*(Il2CppClass **)(*(int *)eventCode + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)pMStack_14,*piVar11,pDVar17,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pMVar18 = (MVEventCodes__Enum *)func_?();
      MVar19 = *pMVar18;
      eventCode = MVar19;
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x12,(MethodInfo *)0x0);
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
        pMVar9 = (this->fields).networkGame;
        if (((pMVar9 != (MVNetworkGame *)0x0) &&
            (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
           (pMVar20 = (pWVar12->fields)._.worldObjectClientManager,
           pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                    (pMVar20,MVar19,pDVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
        break;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      MVar19 = eventCode;
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pMVar18 = (MVEventCodes__Enum *)func_?();
      MVar19 = *pMVar18;
      eventCode = MVar19;
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x13,(MethodInfo *)0x0);
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        if (((pDVar15->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar15->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar16) {
          pDVar17 = pDVar15;
        }
        MVar19 = eventCode;
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pMVar9 = (this->fields).networkGame;
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
         (pMVar20 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar20,MVar19,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateNetworkInput:
  case MVEventCodes__Enum_RegisterPrototype:
  case MVEventCodes__Enum_UpdateTerrain:
  case MVEventCodes__Enum_Clone:
  case MVEventCodes__Enum_BlueprintCreationDone:
  case MVEventCodes__Enum_SyncAvatarStatus:
  case MVEventCodes__Enum_SwitchAvatar:
  case MVEventCodes__Enum_StartRewardCountDown:
  case MVEventCodes__Enum_RewardIsReady:
  case MVEventCodes__Enum_NumberOfPendingRewards:
  case MVEventCodes__Enum_XPRewardedAdReady:
code_?:
    pMVar21 = (this->fields).dynamicEventCallbackManager;
    if (pMVar21 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      bVar22 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
               MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                         (pMVar21,eventCode,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        pSVar23 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
        pSVar23 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Unknown_event__,pSVar23,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar21 = (this->fields).dynamicEventCallbackManager;
      if (pMVar21 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar21,eventCode,photonEvent,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    pMVar9 = (this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
       && (pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?();
      pWVar12 = (pMVar9->fields).worldNetwork;
      if ((pWVar12 != (WorldNetwork *)0x0) &&
         (pMVar24 = (pWVar12->fields)._.worldInventory, pMVar24 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar24,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar12->fields)._.worldInventory,
       photonEvent != (EventData *)0x0)) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar25 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x31,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMStack_26 = (MVNetworkGame *)TypeInfo__System__Byte;
        pMVar13 = (MVGameCoinManager *)0x0;
        if ((pOVar25 != (Object *)0x0) &&
           (pMVar13 = (MVGameCoinManager *)func_?(), pMStack_14 = pMVar13,
           pMVar13 == (MVGameCoinManager *)0x0)) goto code_?;
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                      ((MVWorldInventory *)eventCode,*piVar11,(Byte__Array *)pMVar13,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar12->fields)._.worldInventory,
       photonEvent != (EventData *)0x0)) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar25 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x22,(MethodInfo *)0x0);
      MVar19 = eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar25 != (Object *)0x0)) {
        if ((pOVar25->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pMVar18 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar18;
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                      ((MVWorldInventory *)MVar19,*piVar11,(float)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    pMVar9 = (this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      pMStack_14 = (MVGameCoinManager *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x3a,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        pMStack_27 = (MVPlayer *)*piVar11;
        puVar28 = (undefined4 *)func_?();
        pMStack_26 = (MVNetworkGame *)*puVar28;
        piVar29 = (int *)func_?();
        pMStack_14 = (MVGameCoinManager *)*piVar29;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        eventCode = MVEventCodes__Enum_NoCodeSet;
        pLVar30 = (Link *)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(pLVar30,(MethodInfo *)0x0);
        if (pLVar30 != (Link *)0x0) {
          (pLVar30->fields).outputWOID = (int32_t)pMStack_14;
          (pLVar30->fields).inputWOID = (int32_t)pMStack_26;
          (pLVar30->fields).id = (int32_t)pMStack_27;
          pWVar12 = (pMVar9->fields).worldNetwork;
          if (pWVar12 != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddLink_1(pWVar12,pLVar30,(MethodInfo *)0x0);
            pLVar31 = (pMVar9->fields)._LogicObjectManager_k__BackingField;
            pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pLVar31 != (LogicObjectManagerClient *)0x0) {
              eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                    (pLVar31,pLVar30,(IWorldObjectManager *)pMVar32,(MethodInfo *)0x0
                                    );
              pSVar23 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&eventCode,(MethodInfo *)0x0);
              pSVar23 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_reset_count_,pSVar23,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar23,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pEStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pWVar12 = (pMVar9->fields).worldNetwork;
      eventCode = MVEventCodes__Enum_NoCodeSet;
      if (pWVar12 != (WorldNetwork *)0x0) {
        pLVar30 = WorldNetwork::WorldNetwork_RemoveLink(pWVar12,iVar33,(MethodInfo *)0x0);
        if (pLVar30 == (Link *)0x0) goto code_?;
        pLVar31 = (pMVar9->fields)._LogicObjectManager_k__BackingField;
        pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pLVar31 != (LogicObjectManagerClient *)0x0) {
          eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                (pLVar31,pLVar30,(IWorldObjectManager *)pMVar32,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&eventCode,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_reset_count_,pSVar23,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) &&
         (pPVar34 = (PlayerShopInventoryRepository *)func_?(),
         pPVar34 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveItemFromInventory(pPVar34,iVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xb,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar18;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x35,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pFVar35 = (pMVar9->fields)._Friends_k__BackingField, pFVar35 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar35,iVar33,eventCode,*piVar11,FriendStatus__Enum_Pending,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xb,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar18;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x36,(MethodInfo *)0x0);
      pFVar36 = (FriendStatus__Enum *)func_?();
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pFVar35 = (pMVar9->fields)._Friends_k__BackingField, pFVar35 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend(pFVar35,iVar33,eventCode,*pFVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar9,*piVar11,iVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar9,*piVar11,iVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      MVar19 = *pMVar18;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xfe,(MethodInfo *)0x0);
      piVar29 = (int *)func_?();
      pMStack_14 = (MVGameCoinManager *)*piVar29;
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 == (MVNetworkGame *)0x0) break;
      eventCode = MVar19;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
        pMVar32 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pWVar12 = (pMVar9->fields).worldNetwork;
        if (pWVar12 == (WorldNetwork *)0x0) break;
        pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
      }
      if (pMVar32 == (MVWorldObjectClientManager *)0x0) break;
      pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar32,eventCode,(MethodInfo *)0x0);
      if (pMVar37 == (MVWorldObject *)0x0) {
        pSVar38 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar23 = StringLiteral_OnTriggerBoxStayBegin_received__;
        pSVar39 = StringLiteral__does_not_exist;
      }
      else {
        iVar40 = func_?();
        if (iVar40 != 0) {
          func_?();
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
        pSVar38 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar23 = StringLiteral_OnTriggerBoxStayBegin_received__;
        pSVar39 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
      }
code_?:
      pSVar23 = mscorlib.dll::System::String::String_Concat_4
                          (pSVar23,pSVar38,pSVar39,(MethodInfo *)0x0);
code_?:
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar41 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        eventCode = *pMVar18;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar32 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar12 = (pMVar9->fields).worldNetwork;
          if (pWVar12 == (WorldNetwork *)0x0) break;
          pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
        }
        if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
          pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar32,eventCode,(MethodInfo *)0x0);
          if (pMVar37 == (MVWorldObject *)0x0) {
            pSVar23 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar23,
                                 StringLiteral__does_not_exist,(MethodInfo *)0x0);
            uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
            goto joined_?;
          }
          iVar40 = func_?();
          if (iVar40 != 0) {
            func_?();
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          pSVar38 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&eventCode,(MethodInfo *)0x0);
          pSVar23 = StringLiteral_OnTriggerBoxStayEnd_received__bu;
          pSVar39 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar6 = photonEvent;
      pWVar12 = (pMVar9->fields).worldNetwork;
      if ((pWVar12 != (WorldNetwork *)0x0) &&
         (eventCode = (MVEventCodes__Enum)(pWVar12->fields)._.worldObjectClientManager,
         photonEvent != (EventData *)0x0)) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
        pOVar25 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x14,(MethodInfo *)0x0);
        MVar19 = eventCode;
        if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar25 != (Object *)0x0)) {
          if ((pOVar25->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar18 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar18;
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?();
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                        ((MVWorldObjectClientManagerNetwork *)MVar19,*piVar11,eventCode,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = pEStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar9 = (this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x2f,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        piVar11 = (int32_t *)func_?();
        pWVar12 = (pMVar9->fields).worldNetwork;
        if ((pWVar12 != (WorldNetwork *)0x0) &&
           (pMVar24 = (pWVar12->fields)._.worldInventory, pMVar24 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar24,*piVar11,iVar33,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar9 = (this->fields).networkGame;
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       (pMVar9 = (MVNetworkGame *)(pMVar9->fields)._NetworkGameStateListener_k__BackingField,
       pMStack_26 = pMVar9, photonEvent != (EventData *)0x0)) {
      pMStack_14 = (MVGameCoinManager *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x42,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar42 = *piVar11;
        pMVar43 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)pMStack_26,*pMVar43,iVar42,iVar33,0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                (iVar33,(IWorldObjectManager *)pMVar32,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
         pMVar44 != (MVLocalPlayer *)0x0)) {
        iVar40 = (pMVar44->fields)._._ActorNr_k__BackingField;
        piVar29 = (int *)func_?();
        if (*piVar29 == iVar40) goto code_?;
        pMVar9 = (this->fields).networkGame;
        if ((pMVar9 != (MVNetworkGame *)0x0) &&
           (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
          pMVar13 = (MVGameCoinManager *)(pWVar12->fields)._.worldObjectClientManager;
          pMStack_14 = pMVar13;
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (pEVar6,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (pEVar6,0x46,(MethodInfo *)0x0);
          if (pMVar13 != (MVGameCoinManager *)0x0) {
            pDVar15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)pMStack_14,*piVar11,pDVar15,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar9 = (this->fields).networkGame;
    pMStack_26 = pMVar9;
    if (photonEvent != (EventData *)0x0) {
      pMStack_14 = (MVGameCoinManager *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xfe,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar42 = *piVar11;
        pPVar45 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  (pMStack_26,*pPVar45,iVar42,iVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pMStack_26 = (MVNetworkGame *)*puVar28;
      piVar29 = (int *)func_?();
      pMStack_14 = (MVGameCoinManager *)*piVar29;
      pMVar18 = (MVEventCodes__Enum *)func_?();
      pEVar6 = photonEvent;
      eventCode = *pMVar18;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pfVar46 = (float *)func_?();
      pIStack_47 = (Int32__Array__Class *)*pfVar46;
      puVar28 = (undefined4 *)func_?();
      pIStack_48 = (Int32__Array *)*puVar28;
      piVar11 = (int32_t *)func_?();
      pMStack_27 = (MVPlayer *)*piVar11;
      pMVar9 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pIVar49 = pIStack_48;
      pMVar50 = pMStack_27;
      pIVar51 = pIStack_47;
      VStack_52.x = (float)eventCode;
      VStack_52.y = (float)pMStack_14;
      VStack_52.z = (float)pMStack_26;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar32 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar12 = (pMVar9->fields).worldNetwork;
          if (pWVar12 == (WorldNetwork *)0x0) break;
          pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
        }
        if (((pMVar32 != (MVWorldObjectClientManager *)0x0) &&
            (pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar32,iVar33,(MethodInfo *)0x0), pMVar37 != (MVWorldObject *)0x0
            )) && (this_00 = pMVar37[1].fields.inputLinkRefs,
                  this_00 != (List_1_MV_WorldObject_Link_ *)0x0)) {
          this_06 = (MVPickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              ((GameObject *)this_00,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)this_06,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          if (this_06 != (MVPickupOwner *)0x0) {
            lookOrigin.y = VStack_52.y;
            lookOrigin.x = VStack_52.x;
            lookOrigin.z = VStack_52.z;
            lookDirection.y = (float)pIVar49;
            lookDirection.x = (float)pMVar50;
            lookDirection.z = (float)pIVar51;
            MVPickupOwner::MVPickupOwner_SetLineOfFire
                      (this_06,lookOrigin,lookDirection,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pEStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x58,(MethodInfo *)0x0);
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar53 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar53,pDVar15,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      pIStack_47 = (Int32__Array__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar11 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3(enumType,*piVar11,(MethodInfo *)0x0);
      MVar19 = eventCode;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar54 = (MVTeam__Enum *)func_?();
        team = *pMVar54;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar19,*piVar11,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar9 = (this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      pIStack_47 = (Int32__Array__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x3a,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        puVar28 = (undefined4 *)func_?();
        pMStack_26 = (MVNetworkGame *)*puVar28;
        piVar29 = (int *)func_?();
        pMStack_14 = (MVGameCoinManager *)*piVar29;
        pMVar18 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar18;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_07 = (ObjectLink *)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  (this_07,(MethodInfo *)0x0);
        if (this_07 != (ObjectLink *)0x0) {
          (this_07->fields).objectConnectorWOID = eventCode;
          (this_07->fields).objectWOID = (int32_t)pMStack_14;
          (this_07->fields).id = (int32_t)pMStack_26;
          pWVar12 = (pMVar9->fields).worldNetwork;
          if (pWVar12 != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1(pWVar12,this_07,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      piVar11 = (int32_t *)func_?();
      pWVar12 = (pMVar9->fields).worldNetwork;
      if (pWVar12 != (WorldNetwork *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink(pWVar12,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 == (MVNetworkGame *)0x0) break;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pEVar6 = photonEvent;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar10 == (Object *)0x0)) break;
    if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar18 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar18;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,0x48,(MethodInfo *)0x0);
    pIStack_47 = TypeInfo__System__Int32;
    if (pOVar10 == (Object *)0x0) {
      pIVar49 = (Int32__Array *)0x0;
code_?:
      pWVar12 = (pMVar9->fields).worldNetwork;
      if ((pWVar12 != (WorldNetwork *)0x0) &&
         (pMVar20 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (pMVar20,eventCode,pIVar49,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      break;
    }
    pIVar49 = (Int32__Array *)func_?();
    if (pIVar49 != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,99,(MethodInfo *)0x0), pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?();
        this_01 = (pMVar9->fields).gameDataQueryManager;
        if (this_01 != (MVNetworkGame_GameDataQueryManager *)0x0) {
          MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                    (this_01,*piVar11,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (pMVar9->fields)._WinningConditionManager_k__BackingField;
      if (this_02 != (WinningConditionManager *)0x0) {
        if ((this_02->fields)._WinningConditionFound_k__BackingField == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
        }
        else {
          if ((this_02 == (WinningConditionManager *)0x0) ||
             (this_08 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        MVWorldObject.dll::WinningConditionManager::
                        WinningConditionManager_GetForfilledWinningConditions
                                  (this_02,(MethodInfo *)0x0),
             this_08 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          break;
          if ((this_08->fields)._size == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          if (1 < (this_08->fields)._size) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (this_08,0,
                     MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                    );
        }
        if ((pMVar9->fields).OnWinningConditionFulfilled == (Action_1_IWinningCondition_ *)0x0)
        goto code_?;
        pAVar55 = (pMVar9->fields).OnWinningConditionFulfilled;
        if (pAVar55 != (Action_1_IWinningCondition_ *)0x0) {
          (*(pAVar55->fields)._._.invoke_impl)();
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar9 = (this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x28,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        piVar11 = (int32_t *)func_?();
        pWVar12 = (pMVar9->fields).worldNetwork;
        if ((pWVar12 != (WorldNetwork *)0x0) &&
           (pMVar20 = (pWVar12->fields)._.worldObjectClientManager,
           pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar20,*piVar11,iVar33,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar18;
      pOVar10 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x81,(MethodInfo *)0x0);
      pfVar46 = (float *)func_?();
      pIStack_47 = (Int32__Array__Class *)*pfVar46;
      pOVar25 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar25,
                           (MethodInfo *)0x0);
code_?:
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar41 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar56 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar10 = (Object *)func_?();
      if (pDVar56 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar28 = (undefined4 *)func_?();
        pMStack_26 = (MVNetworkGame *)*puVar28;
        uStack_57 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar29 = (int *)func_?();
        pMStack_14 = (MVGameCoinManager *)*piVar29;
        pMVar9 = (this->fields).networkGame;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          pMVar58 = (pMVar9->fields)._PlayerController_k__BackingField;
          pIStack_47 = (Int32__Array__Class *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (pEVar6,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (pEVar6,0x8d,(MethodInfo *)0x0);
          if (pMVar58 != (MVLocalObjectController *)0x0) {
            pbVar59 = (byte *)func_?();
            bVar60 = *pbVar59;
            piVar11 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar58,*piVar11,(int32_t)pMStack_26,(int32_t)pMStack_14,(uint)bVar60,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar32 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar12 = (pMVar9->fields).worldNetwork;
          if (pWVar12 == (WorldNetwork *)0x0) break;
          pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
        }
        if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
          pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar32,*piVar11,(MethodInfo *)0x0);
          if ((pMVar37 == (MVWorldObject *)0x0) || (iVar40 = func_?(), iVar40 == 0))
          goto code_?;
          iVar40 = func_?();
          if (iVar40 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar56 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar10 = (Object *)func_?();
      if (pDVar56 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pfVar46 = (float *)func_?();
        pIStack_47 = (Int32__Array__Class *)*pfVar46;
        uStack_57 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar28 = (undefined4 *)func_?();
        pMStack_61 = (MVLocalPlayer *)*puVar28;
        pMVar9 = (this->fields).networkGame;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar32 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar12 = (pMVar9->fields).worldNetwork;
            if (pWVar12 == (WorldNetwork *)0x0) break;
            pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
          }
          if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar32,(int32_t)pIStack_47,(MethodInfo *)0x0);
            pMVar62 = (MVWorldObjectSpawner *)func_?();
            if (pMVar62 != (MVWorldObjectSpawner *)0x0) {
              pMStack_26 = (MVNetworkGame *)(pMVar62->fields).spawnWorldObjectID;
              uStack_63 = 3;
              pOVar10 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar56,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar28 = (undefined4 *)func_?();
              pIStack_48 = (Int32__Array *)*puVar28;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,0xfe,(MethodInfo *)0x0);
              puVar28 = (undefined4 *)func_?();
              pMStack_27 = (MVPlayer *)*puVar28;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,0x3a,(MethodInfo *)0x0);
              puVar28 = (undefined4 *)func_?();
              pMStack_14 = (MVGameCoinManager *)*puVar28;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,0x5c,(MethodInfo *)0x0);
              pfVar46 = (float *)func_?();
              pIStack_47 = (Int32__Array__Class *)*pfVar46;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,0x23,(MethodInfo *)0x0);
              puVar28 = (undefined4 *)func_?();
              VStack_52.z = (float)*puVar28;
              pMVar9 = (this->fields).networkGame;
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
                WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                          (pWVar12,(int32_t)pMStack_27,0,1,(int32_t)pMStack_26,(int32_t)pIStack_48,
                           (int32_t)pMStack_14,(int32_t)pIStack_47,(MethodInfo *)0x0);
                pMVar9 = (this->fields).networkGame;
                if (pMVar9 != (MVNetworkGame *)0x0) {
                  if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
                    pMVar32 = (MVWorldObjectClientManager *)0x0;
                  }
                  else {
                    pWVar12 = (pMVar9->fields).worldNetwork;
                    if (pWVar12 == (WorldNetwork *)0x0) break;
                    pMVar32 = (MVWorldObjectClientManager *)
                              (pWVar12->fields)._.worldObjectClientManager;
                  }
                  if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
                    pIStack_47 = (Int32__Array__Class *)
                                 MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObject
                                           (pMVar32,(int32_t)pIStack_48,(MethodInfo *)0x0);
                    if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    if (TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 ==
                        (MVWorldObjectClient_CallBackDelegate *)0x0) {
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                      this_09 = (MVWorldObjectClient_CallBackDelegate *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                      VideoCapture+OnVideoCaptureResourceCreatedCallback::
                      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_09,
                                 (Object *)object,
                                 MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 = this_09
                      ;
                      func_?();
                      pEVar6 = photonEvent;
                    }
                    if (pIStack_47 != (Int32__Array__Class *)0x0) {
                      func_?();
                      pMVar9 = (this->fields).networkGame;
                      if (pMVar9 != (MVNetworkGame *)0x0) {
                        pMVar58 = (pMVar9->fields)._PlayerController_k__BackingField;
                        pIStack_47 = (Int32__Array__Class *)
                                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                     EventData_get_Item(pEVar6,0xfe,(MethodInfo *)0x0);
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (pEVar6,0x8d,(MethodInfo *)0x0);
                        if (pMVar58 != (MVLocalObjectController *)0x0) {
                          pbVar59 = (byte *)func_?();
                          bVar60 = *pbVar59;
                          piVar11 = (int32_t *)func_?();
                          MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                    (pMVar58,*piVar11,(int32_t)pIStack_48,(int32_t)pMStack_61,
                                     (uint)bVar60,(MethodInfo *)0x0);
                          MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                    (pMVar62,(int32_t)VStack_52.z,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pEStack_3;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_Reward:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x91,(MethodInfo *)0x0);
      puVar64 = (undefined1 *)func_?();
      eventCode = CONCAT13(*puVar64,(undefined3)eventCode);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x90,(MethodInfo *)0x0);
      pfVar46 = (float *)func_?();
      pIVar65 = (ItemCategories *)*pfVar46;
      pMStack_61 = (MVLocalPlayer *)func_?();
      uStack_63 = eventCode._3_1_;
      pOVar10 = (Object *)func_?();
      VStack_52.z = (float)pIVar65;
      pOVar25 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_61,
                           pOVar10,pOVar25,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?();
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
        this_03 = (pWVar12->fields)._.runtimeEventManagerNetwork;
        pBVar66 = (BytePacker *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (pBVar66,(Byte__Array *)eventCode,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create(pBVar66,(MethodInfo *)0x0);
        if (this_03 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_03,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar9->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (this_04 = (RuntimeEventManager *)(pWVar12->fields)._.runtimeEventManagerNetwork,
       this_04 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_04,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar33 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x59,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pMStack_26 = (MVNetworkGame *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0x9f,(MethodInfo *)0x0);
      puVar64 = (undefined1 *)func_?();
      pMStack_14 = (MVGameCoinManager *)CONCAT31(pMStack_14._1_3_,*puVar64);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa0,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pIStack_48 = (Int32__Array *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa1,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pMStack_27 = (MVPlayer *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa2,(MethodInfo *)0x0);
      puVar64 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar64);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa3,(MethodInfo *)0x0);
      pcVar67 = (char *)func_?();
      pMVar9 = (this->fields).networkGame;
      if (*pcVar67 == '\0') {
        if ((pMVar9 != (MVNetworkGame *)0x0) &&
           (pGVar68 = (pMVar9->fields).gameStatCounterManager,
           pGVar68 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar68,(GameStatCounterType__Enum)pMStack_14,iVar33,(MVTeam__Enum)pMStack_26,
                     (int32_t)pIStack_48,(int32_t)pMStack_27,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
      else if ((pMVar9 != (MVNetworkGame *)0x0) &&
              (pGVar68 = (pMVar9->fields).gameStatCounterManager,
              pGVar68 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar68,(GameStatCounterType__Enum)pMStack_14,(MVTeam__Enum)pMStack_26,iVar33,
                   (int32_t)pIStack_48,(int32_t)pMStack_27,(bool)eventCode,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar69 = (Byte__Array *)func_?();
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pGVar68 = (pMVar9->fields).gameStatCounterManager,
         pGVar68 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar68,pBVar69,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar18 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar18;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa5,(MethodInfo *)0x0);
      pBVar66 = (BytePacker *)func_?();
      pMVar70 = (MethodInfo *)0x0;
      pBVar69 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(pBVar66,pBVar69,pMVar70);
      this_10 = (MvAvatarMetaData *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                (this_10,pBVar66,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)this_10,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pMVar71 = (pMVar9->fields)._AvatarMetaDataWoMap_k__BackingField,
         pMVar71 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (pMVar71,eventCode,this_10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar9 = (this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xa9,(MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        pMVar18 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar18;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        pMVar72 = (pMVar9->fields).playerContainer;
        if ((pMVar72 != (MVPlayerContainer *)0x0) &&
           (pMVar50 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (pMVar72,eventCode,(MethodInfo *)0x0), pMVar50 != (MVPlayer *)0x0))
        {
          MVPlayer::MVPlayer_set_Level(pMVar50,iVar33,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar73 = (bool *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*pbVar73);
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pMVar13 = (pMVar9->fields)._GameCoinManager_k__BackingField,
         pMVar13 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar13,*pbVar73,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), pOVar10 == (Object *)0x0)) break;
    if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar18 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar18;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar6,200,(MethodInfo *)0x0);
    if (pOVar10 == (Object *)0x0) {
code_?:
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar74 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        if (pMVar74 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar74->fields)._._.invoke_impl)();
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
      break;
    }
    if (((pOVar10->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar10->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    pOVar25 = (Object *)0x0;
    if (bVar16) {
      pOVar25 = pOVar10;
    }
    if (pOVar25 != (Object *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), pMVar9 == (MVNetworkGame *)0x0))
    break;
    if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    if (((pDVar15->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar15->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar16) {
      pDVar17 = pDVar15;
    }
    if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse(pMVar9,pDVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(pMVar9,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0)) {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories(pMVar9,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar9,photonEvent,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar9,pEVar6,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pIStack_48 = (Int32__Array *)func_?();
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (pOVar10 == (Object *)0x0) {
      pBVar69 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pIStack_48,pBVar69,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,0x85,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          goto code_?;
        }
        puVar64 = (undefined1 *)func_?();
        pMStack_14 = (MVGameCoinManager *)CONCAT31(pMStack_14._1_3_,*puVar64);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,100,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          puVar64 = (undefined1 *)func_?();
          pMVar9 = (this->fields).networkGame;
          eventCode = CONCAT13(*puVar64,(undefined3)eventCode);
          pMStack_26 = pMVar9;
          if (pMVar9 != (MVNetworkGame *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if ((pMVar9->fields).gameDataQuery ==
                (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
              pMVar72 = (pMVar9->fields).playerContainer;
              if ((pMVar72 != (MVPlayerContainer *)0x0) &&
                 (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar72,(MethodInfo *)0x0), pMVar44 != (MVLocalPlayer *)0x0))
              {
                iVar33 = (pMVar44->fields)._._ActorNr_k__BackingField;
                pMVar75 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          ((DefaultBinder_BinderState *)pMVar75,pIStack_48,iVar33,(bool)pMStack_14,
                           (MethodInfo *)0x0);
                pMVar9 = pMStack_26;
                (pMStack_26->fields).gameDataQuery = pMVar75;
                func_?();
code_?:
                if (eventCode._3_1_ != MVEventCodes__Enum_NoCodeSet >> 0x18) goto code_?;
                pMVar76 = (pMVar9->fields).eventHandling;
                if (pMVar76 != (MVNetworkGame_EventHandling *)0x0) {
                  (pMVar76->fields).cacheEvents = 1;
                  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  StatHatWrapper::StatHatWrapper_Count
                            (StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0);
                  this_11 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_11,(Object *)pMVar9,MethodInfo__MVNetworkGame__CreateGame__,
                             (MethodInfo *)0x0);
                  coroutine = WaitForFrames::WaitForFrames_Frames
                                        (3,(UnityAction *)this_11,(MethodInfo *)0x0);
                  Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pEStack_3;
                  return;
                }
              }
            }
            else {
              pMVar75 = (pMVar9->fields).gameDataQuery;
              pMVar72 = (pMVar9->fields).playerContainer;
              if ((pMVar72 != (MVPlayerContainer *)0x0) &&
                 (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar72,(MethodInfo *)0x0), pMVar44 != (MVLocalPlayer *)0x0))
              {
                iVar33 = (pMVar44->fields)._._ActorNr_k__BackingField;
                VStack_52.z = (float)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          ((DefaultBinder_BinderState *)VStack_52.z,pIStack_48,iVar33,
                           (bool)pMStack_14,(MethodInfo *)0x0);
                if (pMVar75 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
                  MVNetworkGame+GameDataQueryManager+GameDataQuery::
                  MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                            (pMVar75,(MVNetworkGame_GameDataQueryManager_GameDataQuery *)VStack_52.z
                             ,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      break;
    }
    pBVar69 = (Byte__Array *)func_?();
    if (pBVar69 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
          pMVar44 != (MVLocalPlayer *)0x0)) &&
         (eventCode = (pMVar44->fields)._._ActorNr_k__BackingField, pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pMVar18 = (MVEventCodes__Enum *)func_?();
        if (*pMVar18 == eventCode) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar9 = (this->fields).networkGame;
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar13 = (pMVar9->fields)._GameCoinManager_k__BackingField,
             pMVar13 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar13,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar9 = (this->fields).networkGame;
            if ((pMVar9 != (MVNetworkGame *)0x0) &&
               (pMVar77 = (pMVar9->fields).operationRequests,
               pMVar77 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_StartSessionTime
                        (pMVar77,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          break;
        }
code_?:
        iStack_1 = 0;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar9 == (MVNetworkGame *)0x0) break;
        eventCode = (MVEventCodes__Enum)(pMVar9->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0xfe,(MethodInfo *)0x0);
        pOVar25 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0xd0,(MethodInfo *)0x0);
        MVar19 = eventCode;
        if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (pOVar25 == (Object *)0x0)) break;
        if ((pOVar25->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          puVar64 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar64 >> 8),*puVar64);
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?();
              MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                        ((MVPlayerContainer *)MVar19,*piVar11,(bool)eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pEStack_3;
              return;
            }
            goto code_?;
          }
          break;
        }
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
    {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(pMVar9,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
    {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse(pMVar9,pDVar17,(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    if (photonEvent != (EventData *)0x0) {
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar6,7,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pcVar67 = (char *)func_?();
        cVar78 = *pcVar67;
        if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          if (((pDVar15->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar15->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar16) {
            pDVar17 = pDVar15;
          }
          if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        eventCode = (MVEventCodes__Enum)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar40 = func_?();
          if (iVar40 == 0) {
            pPVar34 = (PlayerShopInventoryRepository *)func_?();
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor(pPVar34,(MethodInfo *)0x0);
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
               (IEditModeUI *)0x0) &&
             (pPVar34 = (PlayerShopInventoryRepository *)func_?(),
             pPVar34 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_AddShopItems
                      (pPVar34,pDVar17,cVar78 == '\0',(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
    {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData(pMVar9,pDVar17,(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar9 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
    {
      if (pDVar15 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  (pMVar9,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      if (((pDVar15->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar15->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar17 = pDVar15;
      }
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  (pMVar9,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (pOVar10 == (Object *)0x0) {
      pBVar69 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      pBVar66 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar66,pBVar69,(MethodInfo *)0x0);
      pMVar71 = (MvAvatarMetaDataWoMap *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                (pMVar71,pBVar66,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(MvAvatarMetaDataWoMap **)(eventCode + 0x9c) = pMVar71;
        func_?();
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      break;
    }
    pBVar69 = (Byte__Array *)func_?();
    if (pBVar69 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    pMVar9 = (this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), pMVar9 != (MVNetworkGame *)0x0))
       && (pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?();
      if ((pMVar9->fields).OnActiveAvatar == (Action_1_Int32_ *)0x0) goto code_?;
      pAVar79 = (pMVar9->fields).OnActiveAvatar;
      if (pAVar79 != (Action_1_Int32_ *)0x0) {
        (*(pAVar79->fields)._._.invoke_impl)();
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar77 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar77 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar77,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    this_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_12,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    pOVar10 = (Object *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar25 = (Object *)func_?();
      if (this_12 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_12,pOVar10,pOVar25,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)this_12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar9 = (this->fields).networkGame;
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       (pMVar80 = (pMVar9->fields).logicObjectManagerClientWrapper,
       pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                (pMVar80,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar9 = (this->fields).networkGame;
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       (pMVar80 = (pMVar9->fields).logicObjectManagerClientWrapper,
       pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar80,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pMVar80 = (pMVar9->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0),
       pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForward(pMVar80,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pMVar80 = (pMVar9->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0),
       pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                (pMVar80,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    iVar40 = func_?();
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 == (MVNetworkGame *)0x0) break;
    if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar32 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar12 = (pMVar9->fields).worldNetwork;
      if (pWVar12 == (WorldNetwork *)0x0) break;
      pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
    }
    if (iVar40 == 0) break;
    if (*(int *)(iVar40 + 0xc) != 0) {
      if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar32,*(int32_t *)(iVar40 + 0x10),(MethodInfo *)0x0);
        pMVar9 = (this->fields).networkGame;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar32 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar12 = (pMVar9->fields).worldNetwork;
            if (pWVar12 == (WorldNetwork *)0x0) break;
            pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
          }
          if (*(uint *)(iVar40 + 0xc) < 2) goto code_?;
          if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
            pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar32,*(int32_t *)(iVar40 + 0x14),(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (pMVar37 != (MVWorldObject *)0x0) {
              if ((pMVar37->fields).groupId !=
                  *(int *)(eventCode + MVEventCodes__Enum_RegisterPrototype)) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar40 = func_?();
              if (iVar40 != 0) {
                bVar22 = 0x8c;
                this_13 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_13,bVar22,(MethodInfo *)pMVar37);
                pMVar9 = (this->fields).networkGame;
                if ((pMVar9 != (MVNetworkGame *)0x0) &&
                   (pMVar58 = (pMVar9->fields)._PlayerController_k__BackingField,
                   pMVar58 != (MVLocalObjectController *)0x0)) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  (pMVar58->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
                  func_?();
                  *unaff_FS_OFFSET = pEStack_3;
                  return;
                }
              }
            }
          }
        }
      }
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_XPReward:
    pMVar9 = (this->fields).networkGame;
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
       pEVar6 = photonEvent, pMStack_61 = pMVar44, photonEvent != (EventData *)0x0)) {
      VStack_52.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xdb,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xd1,(MethodInfo *)0x0);
      if (pMVar44 != (MVLocalPlayer *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar42 = *piVar11;
        puVar64 = (undefined1 *)func_?();
        eventCode = CONCAT31((int3)((uint)puVar64 >> 8),*puVar64);
        piVar11 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  (pMStack_61,*piVar11,eventCode,iVar42,iVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar64 = (undefined1 *)func_?();
      eventCode = CONCAT13(*puVar64,(undefined3)eventCode);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField =
           eventCode._3_1_;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField == 0
         ) goto code_?;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar6,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar23 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar23,pMVar70);
        eventCode = (MVEventCodes__Enum)pOVar10[2].monitor;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = (float)eventCode;
        pGVar81 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar6,0xc4,(MethodInfo *)0x0);
        if (pGVar81 != (GoldRewardManager *)0x0) {
          pbVar73 = (bool *)func_?();
          (pGVar81->fields).isGoldRewardGame = *pbVar73;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (pEVar6,0xc4,(MethodInfo *)0x0);
          pbVar73 = (bool *)func_?();
          BStack_8.m_value = *pbVar73;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar23 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_8,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar23,
                               (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar23,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar40 = func_?();
      pMVar70 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar23 = StringLiteral_V;
      if (iVar40 != 0) {
        pDVar56 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,(Object *)pSVar23,pMVar70);
        puVar64 = (undefined1 *)func_?();
        eventCode = CONCAT31(eventCode._1_3_,*puVar64);
        pMVar9 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (pMVar9 != (MVNetworkGame *)0x0) {
          func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar82 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (pAVar82 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar82->fields)._._.invoke_impl)();
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)func_?();
      bVar22 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if (bVar22 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      if (pOVar10 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar10[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar10[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      playerPlanetData =
           (PlayerPlanetData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar23,pMVar70);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)playerPlanetData,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                (playerPlanetData,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pMVar72 = (pMVar9->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0)) &&
         (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar72,(MethodInfo *)0x0),
         pMVar44 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar44,playerPlanetData,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar23 = (String *)func_?();
      message = (PlayerPlanetDataRemote *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar9->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar6,0xfe,(MethodInfo *)0x0);
        MVar19 = eventCode;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar11 = (int32_t *)func_?();
          pMVar50 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)MVar19,*piVar11,(MethodInfo *)0x0);
          if (pMVar50 != (MVPlayer *)0x0) {
            (pMVar50->fields).playerPlanetDataRemote = message;
            func_?();
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      if (((pOVar10 != (Object *)0x0) &&
          (pMVar9 = (this->fields).networkGame, pMVar9 != (MVNetworkGame *)0x0)) &&
         (pLVar83 = (pMVar9->fields).levelRewardsManager, pLVar83 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar83,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      pMVar9 = (this->fields).networkGame;
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pLVar83 = (pMVar9->fields).levelRewardsManager, pOVar10 != (Object *)0x0)) &&
         (pLVar83 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar83,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar23 = (String *)func_?();
      message_00 = (PlayerTierStateCalculator *)
                   Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2(pSVar23,pMVar70);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message_00,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message_00;
code_?:
      func_?();
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar23 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar23,pMVar70);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pKVar84 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar70);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar84;
      func_?();
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar11 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar11,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar9,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pEStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar9,photonEvent,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar9,pEVar6,(MethodInfo *)0x0),
         (this->fields).networkGame != (MVNetworkGame *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        eventCode = (MVEventCodes__Enum)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar40 = func_?();
          if (iVar40 == 0) {
            pPVar34 = (PlayerShopInventoryRepository *)func_?();
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor(pPVar34,(MethodInfo *)0x0);
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
               (IEditModeUI *)0x0) &&
             (pPVar34 = (PlayerShopInventoryRepository *)func_?(),
             pPVar34 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_Setup(pPVar34,pEVar6,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    if (photonEvent != (EventData *)0x0) {
      pVVar85 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_52,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar86 = pVVar85->x;
      uVar87 = pVVar85->y;
      position.y = (float)uVar87;
      position.x = (float)uVar86;
      eventCode = (MVEventCodes__Enum)pVVar85->z;
      pQVar88 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(pEVar6->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar89 = pQVar88->x;
      VStack_52.x = pQVar88->y;
      VStack_52.y = pQVar88->z;
      VStack_52.z = pQVar88->w;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        pMVar72 = (pMVar9->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar6,0xfe,(MethodInfo *)0x0);
        if (pMVar72 != (MVPlayerContainer *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar50 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar72,*piVar11,(MethodInfo *)0x0);
          if (pMVar50 != (MVPlayer *)0x0) {
            this_05 = (pMVar50->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (pEVar6,0xbf,(MethodInfo *)0x0);
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar11 = (int32_t *)func_?();
              position.z = (float)eventCode;
              rotation.y = VStack_52.x;
              rotation.x = fVar89;
              rotation.z = VStack_52.y;
              rotation.w = VStack_52.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar11,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pEStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar70 = 
      MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar23,pMVar70);
      this_14 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_14,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        pMVar72 = (pMVar9->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0xfe,(MethodInfo *)0x0);
        if ((pMVar72 != (MVPlayerContainer *)0x0) && (pOVar10 != (Object *)0x0)) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          pMVar50 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (pMVar72,*piVar11,(MethodInfo *)0x0);
          if (pMVar50 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar50,(ISpawnRoleChangeHandler *)this_14,(SpawnRolesRuntimeData *)eventCode
                       ,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    if (photonEvent != (EventData *)0x0) {
      pSVar23 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar39 = (String *)0x0;
      if (pSVar23 != (String *)0x0) {
        if (pSVar23->klass == TypeInfo__System__String) {
          pSVar39 = pSVar23;
        }
        if (pSVar39 == (String *)0x0) goto code_?;
      }
      spawnRoleBodySwitchData =
           (SpawnRoleBodySwitchData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar39,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) &&
         (pMVar32 != (MVWorldObjectClientManager *)0x0)) {
        pMVar37 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar32,(spawnRoleBodySwitchData->fields).spawnRoleCreatorWoId,
                             (MethodInfo *)0x0);
        pMVar9 = (this->fields).networkGame;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar9,(spawnRoleBodySwitchData->fields).deletedProtoBodyWoId,
                     (MethodInfo *)0x0);
          pMVar9 = (this->fields).networkGame;
          if (pMVar9 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar9,(spawnRoleBodySwitchData->fields).deletedBodyWoId,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              puVar64 = (undefined1 *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*puVar64);
              if (pMVar37 != (MVWorldObject *)0x0) {
                if (((pMVar37->klass->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (pMVar37->klass->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar16 = false;
                }
                else {
                  bVar16 = true;
                }
                pMVar90 = (MVWorldObject *)0x0;
                if (bVar16) {
                  pMVar90 = pMVar37;
                }
                if (pMVar90 != (MVWorldObject *)0x0) {
                  pMVar70 = (MethodInfo *)0x0;
                  MVar19 = eventCode;
                  this_15 = (MVAvatarSpawnRoleCreator *)func_?();
                  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                            (this_15,spawnRoleBodySwitchData,(bool)MVar19,pMVar70);
                  *unaff_FS_OFFSET = pEStack_3;
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar56 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar10 = (Object *)func_?();
      if (pDVar56 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar11 = (int32_t *)func_?();
        iVar33 = *piVar11;
        uStack_63 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar56,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar9 = (this->fields).networkGame;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          if ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar32 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar12 = (pMVar9->fields).worldNetwork;
            if (pWVar12 == (WorldNetwork *)0x0) break;
            pMVar32 = (MVWorldObjectClientManager *)(pWVar12->fields)._.worldObjectClientManager;
          }
          if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar32,iVar33,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (pEVar6,0x23,(MethodInfo *)0x0);
            piVar11 = (int32_t *)func_?();
            iVar33 = *piVar11;
            iVar40 = func_?();
            if (iVar40 != 0) {
              pMVar70 = (MethodInfo *)0x0;
              pMVar62 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar62,iVar33,pMVar70);
              *unaff_FS_OFFSET = pEStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar9 = (this->fields).networkGame;
    if (((pMVar9 != (MVNetworkGame *)0x0) &&
        (pMVar72 = (pMVar9->fields).playerContainer, photonEvent != (EventData *)0x0)) &&
       (iVar33 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0), pMVar72 != (MVPlayerContainer *)0x0)) {
      bVar22 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         (pMVar72,iVar33,&pMStack_7,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pEStack_3;
        return;
      }
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar6,0xde,(MethodInfo *)0x0);
      puVar91 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar91);
      if (pMStack_7 != (MVPlayer *)0x0) {
        if ((pMStack_7->fields).playerState != *puVar91) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_7,eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  default:
    switch(eventCode & MVEventCodes__Enum_Join) {
    case MVEventCodes__Enum_Handshake:
      if (photonEvent != (EventData *)0x0) {
        pSVar23 = (String *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pSVar39 = (String *)0x0;
        if (pSVar23 != (String *)0x0) {
          if (pSVar23->klass == TypeInfo__System__String) {
            pSVar39 = pSVar23;
          }
          if (pSVar39 == (String *)0x0) goto code_?;
        }
        pSVar23 = MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                  SecurityHelper_Encrypt(pSVar39,(MethodInfo *)0x0);
        pMVar77 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar77 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar77,pSVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pEStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if (photonEvent != (EventData *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfb,(MethodInfo *)0x0);
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          if (((((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)eventCode)->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)eventCode)->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar92 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar16) {
            pDVar92 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          eventCode = (MVEventCodes__Enum)pDVar92;
          if (pDVar92 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar70 = (MethodInfo *)&UNK_?;
          this_16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_16 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar93 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_16,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            VStack_52.y = 0.0;
            pEVar94 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pDVar93->_currentValue;
            iStack_1 = 3;
            VStack_52.z = (float)&stack0xffffff88;
            do {
              bVar22 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar22 == 0) {
                iStack_1 = -1;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffff88,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar70);
                *unaff_FS_OFFSET = pEStack_3;
                return;
              }
              str0 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
              if (pEVar94 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                if ((String__Class *)pEVar94->klass == TypeInfo__System__String) {
                  str0 = pEVar94;
                }
                if (str0 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0)
                goto code_?;
              }
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar95 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)str0,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar70 = (MethodInfo *)::StringLiteral___;
              if (TVar95.m_Index == 0) {
                pSVar23 = (String *)0x0;
              }
              else {
                pSVar23 = (String *)func_?();
              }
              pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)str0,(String *)pMVar70,pSVar23,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar23,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar29 = (int *)func_?();
        iVar40 = *piVar29;
        pMVar9 = (this->fields).networkGame;
        if ((pMVar9 != (MVNetworkGame *)0x0) &&
           (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
           pMVar44 != (MVLocalPlayer *)0x0)) {
          if (iVar40 == (pMVar44->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return;
          }
          pMVar9 = (this->fields).networkGame;
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar72 = (pMVar9->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0)) {
            bVar22 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar72,iVar40,(MethodInfo *)0x0);
            if (bVar22 == 0) {
code_?:
              pMVar9 = (this->fields).networkGame;
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pMVar72 = (pMVar9->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove(pMVar72,iVar40,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pEStack_3;
                return;
              }
            }
            else {
              pMVar9 = (this->fields).networkGame;
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pMVar72 = (pMVar9->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0))
              {
                pMStack_27 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar72,iVar40,(MethodInfo *)0x0);
                pIStack_48 = (Int32__Array *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)pIStack_48,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                eventCode = eventCode & 0xffffff;
                VStack_52.z = (float)func_?();
                pOVar10 = (Object *)func_?();
                if (pIStack_48 != (Int32__Array *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                             (Object *)VStack_52.z,pOVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_63 = 3;
                  pOVar10 = (Object *)func_?();
                  if ((pMStack_27 != (MVPlayer *)0x0) &&
                     (pUVar96 = (pMStack_27->fields)._UserProfileData_k__BackingField,
                     pUVar96 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,pOVar10,
                               (Object *)(pUVar96->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_57 = 6;
                    VStack_52.z = (float)func_?();
                    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar9 != (MVNetworkGame *)0x0) &&
                       (pFVar35 = (pMVar9->fields)._Friends_k__BackingField,
                       pFVar35 != (FriendList *)0x0)) {
                      bStack_97 = FriendList::FriendList_IsFriend
                                            (pFVar35,(pMStack_27->fields)._ProfileID_k__BackingField,
                                             (MethodInfo *)0x0);
                      pOVar10 = (Object *)func_?();
                      puStackY_f4 = &UNK_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                                 (Object *)VStack_52.z,pOVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                                 (MethodInfo *)0x0);
                      pMVar9 = (this->fields).networkGame;
                      if ((pMVar9 != (MVNetworkGame *)0x0) &&
                         (pGVar68 = (pMVar9->fields).gameStatCounterManager,
                         pGVar68 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar68,iVar40,(pMStack_27->fields)._Team_k__BackingField,
                                   (MethodInfo *)0x0);
                        pMVar9 = (this->fields).networkGame;
                        if ((pMVar9 != (MVNetworkGame *)0x0) &&
                           (pGVar68 = (pMVar9->fields).gameStatCounterManager,
                           pGVar68 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar68,iVar40,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case MVEventCodes__Enum_Join:
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pfVar46 = (float *)func_?();
        pIStack_47 = (Int32__Array__Class *)*pfVar46;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar6,0xfe,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar18 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar18;
          pSVar39 = (String *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar6,0x9a,(MethodInfo *)0x0);
          pSVar23 = (String *)0x0;
          if (pSVar39 != (String *)0x0) {
            if (pSVar39->klass == TypeInfo__System__String) {
              pSVar23 = pSVar39;
            }
            if (pSVar23 == (String *)0x0) goto code_?;
          }
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar6,0xbc,(MethodInfo *)0x0);
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar64 = (undefined1 *)func_?();
            pMStack_61 = (MVLocalPlayer *)CONCAT31(pMStack_61._1_3_,*puVar64);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (pEVar6,0x59,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              piVar29 = (int *)func_?();
              pMStack_14 = (MVGameCoinManager *)*piVar29;
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (pEVar6,0xd0,(MethodInfo *)0x0);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar73 = (bool *)func_?();
                bVar22 = *pbVar73;
                pSVar39 = (String *)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(pEVar6,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pSVar38 = (String *)0x0;
                if (pSVar39 != (String *)0x0) {
                  if (pSVar39->klass == TypeInfo__System__String) {
                    pSVar38 = pSVar39;
                  }
                  if (pSVar38 == (String *)0x0) goto code_?;
                }
                VStack_52.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               (pSVar38,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar9 = (this->fields).networkGame;
                if ((pMVar9 != (MVNetworkGame *)0x0) &&
                   (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar9,(MethodInfo *)0x0), pMVar44 != (MVLocalPlayer *)0x0
                   )) {
                  if (eventCode == (pMVar44->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pEStack_3;
                    return;
                  }
                  pMVar50 = (MVPlayer *)func_?();
                  MVPlayer::MVPlayer__ctor
                            (pMVar50,eventCode,(int32_t)pIStack_47,pSVar23,
                             (BuildTarget__Enum)pMStack_61,(UserProfileData *)VStack_52.z,0,bVar22,
                             (MethodInfo *)0x0);
                  if (pMVar50 != (MVPlayer *)0x0) {
                    (pMVar50->fields)._Team_k__BackingField = (int32_t)pMStack_14;
                    pMVar9 = (this->fields).networkGame;
                    if ((pMVar9 != (MVNetworkGame *)0x0) &&
                       (pMVar72 = (pMVar9->fields).playerContainer,
                       pMVar72 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add(pMVar72,pMVar50,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pEStack_3;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    default:
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  uRam_? = in_SS;
  *(char *)(unaff_EBX + 0xd1050db) =
       *(char *)(unaff_EBX + 0xd1050db) + (in_stack_98 < extraout_CL) + -0x25 +
       (&stack0xffffff5c < (undefined1 *)0x50 ||
       &puStackY_f4 < (undefined **)(uint)(0x24 < (in_stack_98 < extraout_CL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_OnEvent
               (MVNetworkGame_EventHandling *this,EventData *photonEvent,MethodInfo *method)

{
  this_01 = this;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JoinUIUpdater);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields).cacheEvents == 0) {
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (photonEvent != (EventData *)0x0) {
      if (MVar6 != MVJoinState__Enum_Playing) {
        this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                  ((MVEventCodes__Enum)this,(MethodInfo *)0x0);
      }
      this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
      uStack_1 = 0;
      MVNetworkGame_EventHandling_HandleEvent
                (this_01,(MVEventCodes__Enum)this,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    this_00 = (this->fields).cachedEvents;
    if (this_00 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_00,(Object *)photonEvent,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  auStack_7[0] = func_?();
  func_?(auStack_7,&UNK_?);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_SubscribeToEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).dynamicEventCallbackManager;
  if (pMVar1 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_ByteEnum_ *)
              (pMVar1->fields).eventsHandledByDynamicEventCallbackManager;
    if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
      pMVar2 = (MethodInfo *)&UNK_?;
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (this_00,eventCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                        );
      if (bVar3 == 0) {
code_?:
        func_?();
        this_01 = (Exception *)func_?();
        pMVar2 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar2);
        func_?();
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar5 = (pMVar1->fields).eventCallbacks;
      if (pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar5,eventCode,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          );
        if (bVar3 == 0) {
          pDVar5 = (pMVar1->fields).eventCallbacks;
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar6,ExceptionArgument__Enum_obj,pMVar2);
          if (pDVar5 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,eventCode,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                    );
        }
        pDVar5 = (pMVar1->fields).eventCallbacks;
        if ((pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                        *)0x0) &&
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                               ), pOVar6 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar6[1].klass;
          while ((pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0),
                 pDVar7 == (Delegate *)0x0 || (iVar8 = func_?(), iVar8 != 0))) {
            pOVar9 = (Object__Class *)func_?();
            bVar10 = pOVar9 == a;
            a = pOVar9;
            if (bVar10) {
              return;
            }
          }
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xffffffec);
  func_?(uVar11);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_UnSubscribeToEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).dynamicEventCallbackManager;
  if (pMVar1 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).eventCallbacks;
    if ((pDVar2 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                    *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           ), pOVar3 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      source = pOVar3[1].klass;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        if ((pDVar4 != (Delegate *)0x0) && (iVar5 = func_?(), iVar5 == 0)) {
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pOVar7 = (Object__Class *)func_?();
        bVar8 = pOVar7 != source;
        source = pOVar7;
      } while (bVar8);
      if (pOVar3[1].klass == (Object__Class *)0x0) {
        pDVar2 = (pMVar1->fields).eventCallbacks;
        if (pDVar2 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,eventCode,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  uVar9 = func_?(&stack0xffffffe0);
  func_?(uVar9);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UncacheEventsFromJoin() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_UncacheEventsFromJoin
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cachedEvents;
  (this->fields).cacheEvents = 0;
  while (pQVar1 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      return;
    }
    pQVar1 = (this->fields).cachedEvents;
    if (pQVar1 == (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) break;
    photonEvent = (EventData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar1,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                            );
    MVNetworkGame_EventHandling_OnEvent(this,photonEvent,(MethodInfo *)0x0);
    pQVar1 = (this->fields).cachedEvents;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVNetworkGame+EventHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor
               (MVNetworkGame_EventHandling *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)
            func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
  MVNetworkGame+EventHandling+DynamicEventCallbackManager::
  MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).dynamicEventCallbackManager = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
            );
  method_00 = (MethodInfo *)&(this->fields).cachedEvents;
  (this->fields).cachedEvents = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  return;
}

