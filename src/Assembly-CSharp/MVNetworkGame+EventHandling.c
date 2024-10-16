
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
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_5._4_4_ = 5.60519e-45;
    value_00 = (Object *)func_?();
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xbf,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar12 = (pMVar11->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar12 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar12->klass->vtable).SendOperation.method)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff6c;
  puVar5 = &stack0xffffff6c;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bVar6 = (byte)((uint)in_stack_7 >> 0x10);
  pMStack_8 = (MVPlayer *)0x0;
  BStack_9.m_value = 0;
  VStack_10.x = 0.0;
  VStack_10.y = 0.0;
  VStack_10.z = 0.0;
  pMVar11 = (MVAvatar__Class *)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, unaff_EDI = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pMVar11 = unaff_EDI;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar12,*piVar17,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar12->fields).worldNetwork;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pWVar18->fields)._.worldObjectClientManager;
        bVar13 = 0;
        pMStack_19 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)0x0);
          pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x12,(MethodInfo *)0x0);
          bVar13 = 0;
          if (unaff_EDI == (MVAvatar__Class *)0x0) break;
          unaff_EDI = (MVAvatar__Class *)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)pMStack_19,*piVar17,pDVar21,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          if (((pDVar20->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar20->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar22) {
            pDVar21 = pDVar20;
          }
          bVar13 = 0;
          if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pMVar11 = unaff_EDI;
        if (pIVar15 != pIVar16) goto code_?;
        piVar17 = (int32_t *)func_?();
        unaff_EDI = (MVAvatar__Class *)*piVar17;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x12,(MethodInfo *)0x0);
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pWVar18 = (pMVar12->fields).worldNetwork;
          bVar13 = 0;
          if (pWVar18 != (WorldNetwork *)0x0) {
            pMVar23 = (pWVar18->fields)._.worldObjectClientManager;
            bVar13 = 0;
            if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar23,(int32_t)unaff_EDI,pDVar20,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar12->fields).worldNetwork;
        bVar13 = 0;
        if (pWVar18 != (WorldNetwork *)0x0) {
          pMVar23 = (pWVar18->fields)._.worldObjectClientManager;
          bVar13 = 0;
          if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar23,(int32_t)unaff_EDI,pDVar20,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
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
    pMVar24 = (this->fields).dynamicEventCallbackManager;
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)this;
    if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_07 = (HashSet_1_System_ByteEnum_ *)
                (pMVar24->fields).eventsHandledByDynamicEventCallbackManager;
      bVar13 = 0;
      if (this_07 != (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (this_07,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar25 == 0) {
          pSVar26 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar26 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar26,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pMVar24 = (this->fields).dynamicEventCallbackManager;
        bVar13 = 0;
        if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_08 = (pMVar24->fields).eventCallbacks;
          bVar13 = 0;
          if (this_08 !=
              (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
               *)0x0) {
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_08,eventCode,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                );
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (pOVar14[1].klass == (Object__Class *)0x0) {
                pSVar26 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar26 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              bVar13 = 0;
              if (pOVar14[1].klass != (Object__Class *)0x0) {
                (*(code *)((pOVar14[1].klass)->_0).namespaze)();
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, unaff_EDI = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pMVar11 = unaff_EDI;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    (pMVar12,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar12->fields).worldNetwork;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        pMVar27 = (pWVar18->fields)._.worldInventory;
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x2f,(MethodInfo *)0x0);
          pMVar11 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x31,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = pMVar11;
          if (pMVar27 == (MVWorldInventory *)0x0) break;
          pMStack_28 = (MVAvatar__Class *)TypeInfo__System__Byte;
          if (pMVar11 == (MVAvatar__Class *)0x0) {
code_?:
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              iVar29 = *piVar17;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (pMVar27->fields).runtimePrototypes;
              bVar13 = 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar30 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar29,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                pBVar31 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (pBVar31,(Byte__Array *)unaff_EDI,(MethodInfo *)0x0);
                bVar13 = 0;
                if (pRVar30 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar30,pBVar31,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
            }
            break;
          }
          pBVar32 = TypeInfo__System__Byte;
          unaff_EDI = (MVAvatar__Class *)func_?();
          bVar6 = (byte)((uint)pBVar32 >> 0x10);
          bVar13 = 0;
          pMStack_19 = unaff_EDI;
          if (unaff_EDI != (MVAvatar__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar12->fields).worldNetwork;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        pMVar11 = (MVAvatar__Class *)(pWVar18->fields)._.worldInventory;
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar33 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = pMVar11;
          if ((pMVar11 != (MVAvatar__Class *)0x0) && (bVar13 = 0, pOVar33 != (Object *)0x0)) {
            pIVar15 = (pOVar33->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Single->_0).element_class;
            bVar13 = pIVar15 < pIVar16;
            if (pIVar15 != pIVar16) goto code_?;
            pfVar34 = (float *)func_?();
            bVar6 = (byte)((uint)pOVar33 >> 0x10);
            fVar35 = *pfVar34;
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              iVar29 = *piVar17;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_01 = ((MVNetworkGame__Fields *)&(pMVar11->_0).name)->ReceivedItemFromQuery;
              bVar13 = 0;
              if (this_01 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pRVar30 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar29,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar13 = 0;
                if (pRVar30 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar30->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar30->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar30->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar30,fVar35,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)pMStack_28,*piVar17,iVar36,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent(pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory(pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar29 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar12,(int32_t)unaff_EDI,iVar29,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar29 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar37 = (FriendStatus__Enum *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar12,(int32_t)unaff_EDI,iVar29,*pFVar37,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar12,*piVar17,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar12,*piVar17,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      unaff_EDI = (MVAvatar__Class *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar12,(int32_t)unaff_EDI,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI,*piVar17,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar38 = (pMVar12->fields)._NetworkGameStateListener_k__BackingField;
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        pMStack_19 = (MVAvatar__Class *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x41,(MethodInfo *)0x0);
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar38 != (MVNetworkGameStateListener *)0x0) {
          puVar39 = (undefined4 *)func_?();
          unaff_EDI = (MVAvatar__Class *)*puVar39;
          bVar6 = (byte)((uint)pOVar14 >> 0x10);
          piVar40 = (int *)func_?();
          iVar41 = *piVar40;
          piVar40 = (int *)func_?();
          pMStack_19 = (MVAvatar__Class *)*piVar40;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (pMVar38->fields).currentGameState = (int32_t)pMStack_19;
          (pMVar38->fields).startTime = iVar41;
          (pMVar38->fields).duration = (int32_t)unaff_EDI;
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            iVar29 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar12,(MethodInfo *)0x0);
            (pMVar38->fields).timeLeft = (int)unaff_EDI + (iVar41 - iVar29);
            if ((pMVar38->fields).OnGameStateChanged ==
                (EventHandler_1_GameStateChangeEventArgs_ *)0x0) goto code_?;
            pEVar42 = (pMVar38->fields).OnGameStateChanged;
            pUVar43 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar43,(MethodInfo *)0x0);
            bVar13 = 0;
            unaff_EDI = (MVAvatar__Class *)0x0;
            if (pEVar42 != (EventHandler_1_GameStateChangeEventArgs_ *)0x0) {
              (*(pEVar42->fields)._._.invoke_impl)();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent(pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar44 != (MVLocalPlayer *)0x0) {
          iVar41 = (pMVar44->fields)._._ActorNr_k__BackingField;
          piVar40 = (int *)func_?();
          if (*piVar40 == iVar41) goto code_?;
          pMVar12 = (this->fields).networkGame;
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            pWVar18 = (pMVar12->fields).worldNetwork;
            bVar13 = 0;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pWVar18 != (WorldNetwork *)0x0) {
              pMVar11 = (MVAvatar__Class *)(pWVar18->fields)._.worldObjectClientManager;
              pMStack_19 = pMVar11;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar13 = 0;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pMVar11 != (MVAvatar__Class *)0x0) {
                pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)pMStack_19,*piVar17,pDVar20,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        pPVar45 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_28,*pPVar45,iVar36,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pMStack_19 = (MVAvatar__Class *)*puVar39;
      pfVar34 = (float *)func_?();
      fVar35 = *pfVar34;
      pfVar34 = (float *)func_?();
      VStack_10.x = *pfVar34;
      VStack_10.z = (float)pMStack_19;
      VStack_10.y = fVar35;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      piVar40 = (int *)func_?();
      pMStack_19 = (MVAvatar__Class *)*piVar40;
      puVar39 = (undefined4 *)func_?();
      uVar46 = *puVar39;
      bVar6 = 100;
      puVar39 = (undefined4 *)func_?();
      pMVar11 = pMStack_19;
      uVar47 = *puVar39;
      pMVar12 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        VVar48.y = VStack_10.y;
        VVar48.x = VStack_10.x;
        VVar48.z = VStack_10.z;
        camDir.y = (float)uVar46;
        camDir.x = (float)uVar47;
        camDir.z = (float)pMVar11;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar12,*piVar17,VVar48,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar49 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar49,pDVar20,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar6 = 100;
      piVar17 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3(enumType,*piVar17,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar50 = (MVTeam__Enum *)func_?();
        team = *pMVar50;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar12,*piVar17,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)pMStack_28,*piVar17,iVar36,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent(pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI,*piVar17,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar14 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      piVar40 = (int *)func_?();
      pMStack_19 = (MVAvatar__Class *)*piVar40;
      pOVar33 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar14,pOVar33,
                           (MethodInfo *)0x0);
      uVar51 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar52 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pDVar52 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar52,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar39 = (undefined4 *)func_?();
        pMStack_53 = (MVPlayer *)*puVar39;
        uStack_54 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar52,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar40 = (int *)func_?();
        pMStack_28 = (MVAvatar__Class *)*piVar40;
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)0x0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar55 = (pMVar12->fields)._PlayerController_k__BackingField;
          pMStack_19 = (MVAvatar__Class *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (pMVar55 != (MVLocalObjectController *)0x0) {
            pbVar56 = (byte *)func_?();
            bVar6 = *pbVar56;
            piVar17 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar55,*piVar17,(int32_t)pMStack_53,(int32_t)pMStack_28,(uint)bVar6,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
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
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar29 = *piVar17;
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar12,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
          pMVar58 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar57,iVar29,(MethodInfo *)0x0);
          unaff_EDI = TypeInfo__MVAvatar;
          if ((pMVar58 == (MVWorldObject *)0x0) || (iVar41 = func_?(), iVar41 == 0))
          goto code_?;
          iVar41 = func_?();
          bVar13 = 0;
          if (iVar41 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar40 = (int *)func_?();
        pMStack_19 = (MVAvatar__Class *)*piVar40;
        uStack_54 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar39 = (undefined4 *)func_?();
        pMStack_59 = (MVAvatar__Class *)*puVar39;
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar57,(int32_t)pMStack_19,(MethodInfo *)0x0);
            pMVar60 = (MVWorldObjectSpawner *)func_?();
            bVar13 = 0;
            if (pMVar60 != (MVWorldObjectSpawner *)0x0) {
              pMStack_53 = (MVPlayer *)(pMVar60->fields).spawnWorldObjectID;
              uStack_61 = 3;
              pOVar14 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar39 = (undefined4 *)func_?();
              pDStack_62 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar39;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar39 = (undefined4 *)func_?();
              pMStack_63 = (MVWorldObject *)*puVar39;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              puVar39 = (undefined4 *)func_?();
              pMStack_28 = (MVAvatar__Class *)*puVar39;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              puVar39 = (undefined4 *)func_?();
              pMStack_19 = (MVAvatar__Class *)*puVar39;
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x23,(MethodInfo *)0x0);
              bVar6 = (byte)((uint)pOVar14 >> 0x10);
              puVar39 = (undefined4 *)func_?();
              VStack_10.z = (float)*puVar39;
              pMVar12 = (this->fields).networkGame;
              bVar13 = 0;
              unaff_EDI = (MVAvatar__Class *)this;
              if (pMVar12 != (MVNetworkGame *)0x0) {
                pWVar18 = (pMVar12->fields).worldNetwork;
                bVar13 = 0;
                if (pWVar18 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar18,(int32_t)pMStack_63,0,1,(int32_t)pMStack_53,(int32_t)pDStack_62
                             ,(int32_t)pMStack_28,(int32_t)pMStack_19,(MethodInfo *)0x0);
                  pMVar12 = (this->fields).networkGame;
                  bVar13 = 0;
                  if (pMVar12 != (MVNetworkGame *)0x0) {
                    pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar12,(MethodInfo *)0x0);
                    bVar13 = 0;
                    if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_63 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar57,(int32_t)pDStack_62,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      unaff_EDI = (MVAvatar__Class *)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI == (MVAvatar__Class *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI = (MVAvatar__Class *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)unaff_EDI,(Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                        func_?();
                      }
                      bVar13 = 0;
                      if (pMStack_63 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar12 = (this->fields).networkGame;
                        bVar13 = 0;
                        if (pMVar12 != (MVNetworkGame *)0x0) {
                          pMVar55 = (pMVar12->fields)._PlayerController_k__BackingField;
                          pMStack_63 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar13 = 0;
                          unaff_EDI = (MVAvatar__Class *)0x0;
                          if (pMVar55 != (MVLocalObjectController *)0x0) {
                            pbVar56 = (byte *)func_?();
                            bVar6 = *pbVar56;
                            piVar17 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar55,*piVar17,(int32_t)pDStack_62,(int32_t)pMStack_59,
                                       (uint)bVar6,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      (pMVar60,(int32_t)VStack_10.z,(MethodInfo *)0x0);
                            *unaff_FS_OFFSET = uStack_3;
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
    }
    break;
  case MVEventCodes__Enum_Reward:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      uVar64 = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar34 = (float *)func_?();
      fVar35 = *pfVar34;
      pMStack_59 = (MVAvatar__Class *)func_?();
      uStack_61 = uVar64;
      pOVar14 = (Object *)func_?();
      VStack_10.z = fVar35;
      pOVar33 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_59,
                           pOVar14,pOVar33,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      pMVar65 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar16 = (pMVar65->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar16->vtable[0].methodPtr & 0x100) == 0) {
        pIVar16 = (Il2CppClass *)func_?();
      }
      if (pIVar16->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar16 = (pMVar65->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar16->vtable[0].methodPtr & 0x100) == 0) {
        pIVar16 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar16->static_fields;
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar66 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar12->fields).worldNetwork;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar18 != (WorldNetwork *)0x0) {
          this_02 = (pWVar18->fields)._.runtimeEventManagerNetwork;
          pBVar31 = (BytePacker *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    (pBVar31,pBVar66,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create(pBVar31,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (this_02 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_02,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar12->fields).worldNetwork;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        this_03 = (RuntimeEventManager *)(pWVar18->fields)._.runtimeEventManagerNetwork;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (this_03 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_03,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pMStack_28 = (MVAvatar__Class *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      pMStack_19 = (MVAvatar__Class *)CONCAT31(pMStack_19._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pDStack_62 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pMStack_53 = (MVPlayer *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar67 = (bool *)func_?();
      bVar25 = *pbVar67;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pBVar68 = TypeInfo__System__Boolean;
      pcVar69 = (char *)func_?();
      bVar6 = (byte)((uint)pBVar68 >> 0x10);
      pMVar12 = (this->fields).networkGame;
      if (*pcVar69 == '\0') {
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pGVar70 = (pMVar12->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar70 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar70,(GameStatCounterType__Enum)pMStack_19,(int32_t)unaff_EDI,
                       (MVTeam__Enum)pMStack_28,(int32_t)pDStack_62,(int32_t)pMStack_53,bVar25,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
      else {
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pGVar70 = (pMVar12->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar70 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar70,(GameStatCounterType__Enum)pMStack_19,(MVTeam__Enum)pMStack_28,
                       (int32_t)unaff_EDI,(int32_t)pDStack_62,(int32_t)pMStack_53,bVar25,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar66 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pGVar70 = (pMVar12->fields).gameStatCounterManager;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar70 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar70,pBVar66,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar29 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pMVar65 = (MethodInfo *)0x0;
      pBVar66 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar66,pMVar65);
      pMVar71 = TypeInfo__MV__WorldObject__MvAvatarMetaData;
      this_09 = (MvAvatarMetaData *)func_?();
      bVar6 = (byte)((uint)pMVar71 >> 0x10);
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                (this_09,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)this_09,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        this_04 = (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar13 = 0;
        if (this_04 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_04,iVar29,this_09,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI,*piVar17,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar67 = (bool *)func_?();
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar72 = (pMVar12->fields)._GameCoinManager_k__BackingField;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar72 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar72,*pbVar67,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pMVar11 = unaff_EDI;
        if (pIVar15 != pIVar16) goto code_?;
        puVar39 = (undefined4 *)func_?();
        unaff_EDI = (MVAvatar__Class *)*puVar39;
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          pMVar11 = (MVAvatar__Class *)pDVar20->klass;
          if (((pMVar11->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               ((int)(pMVar11->_1).typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar22) {
            pDVar21 = pDVar20;
          }
          bVar13 = 0;
          if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar12,(NotificationType__Enum)unaff_EDI,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent == (EventData *)0x0) break;
    pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar13 = 0;
    if (pMVar11 == (MVAvatar__Class *)0x0) break;
    if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pDVar20->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar20->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar22) {
      pDVar21 = pDVar20;
    }
    bVar13 = 0;
    if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pMVar11 = (MVAvatar__Class *)func_?();
    if (unaff_EDI == (MVAvatar__Class *)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar11,pBVar66,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = pMVar11;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) {
code_?:
          func_?();
          unaff_EDI = pMVar11;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)pMVar11 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          pbVar67 = (bool *)func_?();
          pMVar12 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar12,(BytePacker *)pMVar11,eventCode,*pbVar67,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar66 = (Byte__Array *)func_?();
    bVar13 = 0;
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar44 != (MVLocalPlayer *)0x0) {
          iVar41 = (pMVar44->fields)._._ActorNr_k__BackingField;
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pOVar14 != (Object *)0x0) {
            pIVar15 = (pOVar14->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Int32->_0).element_class;
            bVar13 = pIVar15 < pIVar16;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pIVar15 != pIVar16) goto code_?;
            piVar40 = (int *)func_?();
            bVar6 = (byte)((uint)pOVar14 >> 0x10);
            if (*piVar40 == iVar41) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar12 = (this->fields).networkGame;
              bVar13 = 0;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pMVar12 != (MVNetworkGame *)0x0) {
                pMVar72 = (pMVar12->fields)._GameCoinManager_k__BackingField;
                bVar13 = 0;
                unaff_EDI = (MVAvatar__Class *)photonEvent;
                if (pMVar72 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar72,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar12 = (this->fields).networkGame;
                  bVar13 = 0;
                  unaff_EDI = (MVAvatar__Class *)photonEvent;
                  if (pMVar12 != (MVNetworkGame *)0x0) {
                    pMVar73 = (pMVar12->fields).operationRequests;
                    bVar13 = 0;
                    unaff_EDI = (MVAvatar__Class *)photonEvent;
                    if (pMVar73 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_10 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (this_10,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      pPVar74 = (pMVar73->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar13 = 0;
                      unaff_EDI = (MVAvatar__Class *)photonEvent;
                      if (pPVar74 != (PhotonPeer *)0x0) {
                        (*(code *)(pPVar74->klass->vtable).SendOperation.method)();
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
            else {
code_?:
              uStack_1 = 0;
              pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar13 = 0;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pMVar12 != (MVNetworkGame *)0x0) {
                unaff_EDI = (MVAvatar__Class *)(pMVar12->fields).playerContainer;
                pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar33 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar13 = 0;
                if ((unaff_EDI != (MVAvatar__Class *)0x0) && (bVar13 = 0, pOVar33 != (Object *)0x0))
                {
                  pIVar15 = (pOVar33->klass->_0).element_class;
                  pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar13 = pIVar15 < pIVar16;
                  if (pIVar15 != pIVar16) goto code_?;
                  pbVar67 = (bool *)func_?();
                  bVar25 = *pbVar67;
                  bVar13 = 0;
                  if (pOVar14 != (Object *)0x0) {
                    pIVar15 = (pOVar14->klass->_0).element_class;
                    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    if (pIVar15 == pIVar16) {
                      piVar17 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI,*piVar17,bVar25,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if ((pMVar11 == (MVAvatar__Class *)0x0) || (bVar13 = 0, pOVar14 == (Object *)0x0)) break;
    pIVar15 = (pOVar14->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
    bVar13 = pIVar15 < pIVar16;
    if (pIVar15 != pIVar16) goto code_?;
    pcVar69 = (char *)func_?();
    bVar6 = (byte)((uint)pOVar14 >> 0x10);
    if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 *pcVar69 == '\0',(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pDVar20->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar20->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar22) {
      pDVar21 = pDVar20;
    }
    bVar13 = 0;
    if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)pMVar11,pDVar21,*pcVar69 == '\0',(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar11 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar11 != (MVAvatar__Class *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar21 = pDVar20;
        }
        bVar13 = 0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)pMVar11,pDVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    if (pOVar14 == (Object *)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      pMVar12 = (this->fields).networkGame;
      pBVar31 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar31,pBVar66,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,pBVar31,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    pBVar66 = (Byte__Array *)func_?();
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)0x0;
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, unaff_EDI = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pMVar11 = unaff_EDI;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse(pMVar12,*piVar17,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar73 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar73 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar74 = (pMVar73->fields).peer;
      unaff_EDI = (MVAvatar__Class *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar13 = 0;
      if (pPVar74 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar74->klass->vtable).SendOperation.method)();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    this_11 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    unaff_EDI = (MVAvatar__Class *)func_?();
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (this_11 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_11,(Object *)unaff_EDI,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)this_11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar75 = (pMVar12->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        pMVar76 = (pMVar75->fields).logicEventQueue;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar76 != (MVNetworkGame_LogicEventQueue *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (photonEvent != (EventData *)0x0) {
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar13 = 0;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              pDVar77 = (pMVar76->fields).logicEvents;
              iVar29 = *piVar17;
              bVar13 = 0;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pDVar77 !=
                  (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
                bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)pDVar77,iVar29,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar25 == 0) {
                  pDVar77 = (pMVar76->fields).logicEvents;
                  VStack_10.z = (float)func_?();
                  System.Core.dll::System::Runtime::CompilerServices::
                  ReadOnlyCollectionBuilder`1[System::Object]::
                  ReadOnlyCollectionBuilder_1_System_Object___ctor
                            ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_10.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar13 = 0;
                  unaff_EDI = (MVAvatar__Class *)photonEvent;
                  if (pDVar77 ==
                      (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
                  break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar77,iVar29,
                             (Object *)VStack_10.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pDVar77 = (pMVar76->fields).logicEvents;
                bVar13 = 0;
                unaff_EDI = (MVAvatar__Class *)photonEvent;
                if (pDVar77 !=
                    (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
                  this_12 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar77,iVar29,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar13 = 0;
                  unaff_EDI = (MVAvatar__Class *)photonEvent;
                  if (this_12 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_12,(Object *)photonEvent,
                               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                              );
                    *unaff_FS_OFFSET = uStack_3;
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
  case MVEventCodes__Enum_LogicFrame:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar75 = (pMVar12->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar75,(MethodInfo *)0x0);
        pMVar78 = (pMVar75->fields).updateEvaluatorStep;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar78 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar17 = &(pMVar78->fields).stepTimestamp;
          *piVar17 = *piVar17 + 1000;
code_?:
          iVar29 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar78->fields).lastUpdateTick = iVar29;
          (pMVar78->fields).accumulatedTime = 0;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar75 = (pMVar12->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar78 = (pMVar75->fields).fastFordwardUpdateEvaluator;
          bVar13 = 0;
          unaff_EDI = unaff_EDI;
          if (pMVar78 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar78->fields).stepTimestamp = *piVar17;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar75 = (pMVar12->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar6 = (byte)((uint)in_stack_7 >> 0x10);
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
          puVar39 = (undefined4 *)func_?();
          bVar6 = (byte)((uint)in_stack_7 >> 0x10);
          unaff_EDI = (MVAvatar__Class *)*puVar39;
          pMVar12 = (pMVar75->fields).networkGame;
          while (bVar13 = 0, pMVar12 != (MVNetworkGame *)0x0) {
            bVar6 = (byte)((uint)in_stack_7 >> 0x10);
            pLVar79 = (pMVar12->fields)._LogicObjectManager_k__BackingField;
            bVar13 = 0;
            if (pLVar79 == (LogicObjectManagerClient *)0x0) break;
            if ((int)unaff_EDI <= (pLVar79->fields)._._TimeStamp_k__BackingField)
            goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      (pMVar75,(MethodInfo *)0x0);
            bVar6 = (byte)((uint)in_stack_7 >> 0x10);
            pMVar12 = (pMVar75->fields).networkGame;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    iVar41 = func_?();
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)this;
    if (pMVar12 == (MVNetworkGame *)0x0) break;
    pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar12,(MethodInfo *)0x0);
    bVar13 = 0;
    if (iVar41 == 0) break;
    bVar13 = 0;
    if (*(int *)(iVar41 + 0xc) != 0) {
      bVar13 = 0;
      if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
        pMVar58 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar57,*(int32_t *)(iVar41 + 0x10),(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0);
          bVar13 = *(uint *)(iVar41 + 0xc) == 0;
          if (*(uint *)(iVar41 + 0xc) < 2) goto code_?;
          bVar13 = 0;
          if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
            method_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar57,*(int32_t *)(iVar41 + 0x14),(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar58 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar13 = 0;
            if (method_00 != (MVWorldObject *)0x0) {
              if ((method_00->fields).groupId != (pMVar58->fields).id) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar41 = func_?();
              bVar13 = 0;
              if (iVar41 != 0) {
                bVar25 = 0x8e;
                this_13 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_13,bVar25,(MethodInfo *)method_00);
                pMVar12 = (this->fields).networkGame;
                bVar13 = 0;
                if (pMVar12 != (MVNetworkGame *)0x0) {
                  pMVar55 = (pMVar12->fields)._PlayerController_k__BackingField;
                  bVar13 = 0;
                  if (pMVar55 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar55,1,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
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
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      unaff_EDI = (MVAvatar__Class *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
      bVar13 = 0;
      pMStack_59 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        VStack_10.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xdb,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar13 = 0;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          iVar29 = *piVar17;
          piVar17 = (int32_t *)func_?();
          iVar36 = *piVar17;
          puVar5 = (undefined1 *)func_?();
          uVar64 = *puVar5;
          piVar17 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)pMStack_59,*piVar17,CONCAT31((int3)((uint)puVar5 >> 8),uVar64)
                     ,iVar36,iVar29,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar67 = (bool *)func_?();
      bVar25 = *pbVar67;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar25
      ;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField == 0
         ) goto code_?;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar65 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar80 = TypeInfo__System__String;
      method_01 = (MethodInfo *)func_?();
      bVar6 = (byte)((uint)pSVar80 >> 0x10);
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_01,pMVar65);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pOVar14 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar14[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar26 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar26,method_01);
        profileSettingsState = (ProfileSettingsState *)pOVar14[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar81 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pGVar81 != (GoldRewardManager *)0x0) {
          pbVar67 = (bool *)func_?();
          (pGVar81->fields).isGoldRewardGame = *pbVar67;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar67 = (bool *)func_?();
          BStack_9.m_value = *pbVar67;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_9,(MethodInfo *)0x0);
          pSVar26 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar26,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar82 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)0x0;
      if (pSVar82 == (String *)0x0) {
code_?:
        pSVar26 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar26,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pSVar82->klass == TypeInfo__System__String) {
        pSVar26 = pSVar82;
      }
      bVar13 = 0;
      if (pSVar26 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      pMVar11 = unaff_EDI;
      func_?();
      bVar6 = (byte)((uint)pMVar11 >> 0x10);
code_?:
      func_?();
      pMVar11 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = pMVar11;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar41 = func_?();
      pMVar65 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar26 = StringLiteral_V;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar41 != 0) {
        pDVar52 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar52,(Object *)pSVar26,pMVar65);
        pbVar67 = (bool *)func_?();
        bVar25 = *pbVar67;
        pMVar12 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)pSVar26;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar12,*piVar17,bVar25,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar82 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)0x0;
      if (pSVar82 != (String *)0x0) {
        if (pSVar82->klass == TypeInfo__System__String) {
          pSVar26 = pSVar82;
        }
        bVar13 = 0;
        if (pSVar26 == (String *)0x0) goto code_?;
      }
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar25 != 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar14[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar14[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      playerPlanetData =
           (PlayerPlanetData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar82,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)playerPlanetData,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                (playerPlanetData,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar83 = (pMVar12->fields).playerContainer;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar83 != (MVPlayerContainer *)0x0) {
          pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar83,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = unaff_EDI;
          if (pMVar44 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar44,playerPlanetData,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      message = (PlayerPlanetDataRemote *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar84 != (MVPlayer *)0x0) {
            (pMVar84->fields).playerPlanetDataRemote = message;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      uVar51 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar51 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pLVar85 = (pMVar12->fields).levelRewardsManager;
          bVar13 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar85 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar85,(Dictionary_2_System_Int32_System_Int32_ *)pOVar14[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pLVar85 = (pMVar12->fields).levelRewardsManager;
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if ((pOVar14 != (Object *)0x0) &&
           (bVar13 = 0, unaff_EDI = unaff_EDI, pLVar85 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar85,(int32_t)pOVar14[1].klass,(int32_t)pOVar14[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      message_00 = (PlayerTierStateCalculator *)
                   Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             (pSVar82,
                              MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                             );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message_00,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message_00;
code_?:
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 == (String *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (pSVar82,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pSVar26->klass == TypeInfo__System__String) {
        pSVar82 = pSVar26;
      }
      bVar13 = 0;
      if (pSVar82 != (String *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      uVar51 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 == (String *)0x0) {
code_?:
        pKVar86 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            (pSVar82,
                             MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                            );
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar86;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pSVar26->klass == TypeInfo__System__String) {
        pSVar82 = pSVar26;
      }
      bVar13 = 0;
      if (pSVar82 != (String *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar87 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_10,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar48 = *pVVar87;
      pQVar88 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar35 = pQVar88->x;
      VStack_10.x = pQVar88->y;
      VStack_10.y = pQVar88->z;
      VStack_10.z = pQVar88->w;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pMVar12->fields).playerContainer;
        bVar6 = 0;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar84 != (MVPlayer *)0x0) {
            this_05 = (pMVar84->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar13 = 0;
            unaff_EDI = (MVAvatar__Class *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar17 = (int32_t *)func_?();
              rotation.y = VStack_10.x;
              rotation.x = fVar35;
              rotation.z = VStack_10.y;
              rotation.w = VStack_10.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar17,VVar48,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar65 = 
      MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar65);
      pUVar43 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar43,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar83 = (pMVar12->fields).playerContainer;
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if ((pMVar83 != (MVPlayerContainer *)0x0) &&
           (bVar13 = 0, unaff_EDI = (MVAvatar__Class *)photonEvent, pOVar14 != (Object *)0x0)) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          piVar17 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (pMVar83,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pMVar84 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar84,(ISpawnRoleChangeHandler *)pUVar43,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar26 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar82 = (String *)0x0;
      if (pSVar26 != (String *)0x0) {
        if (pSVar26->klass == TypeInfo__System__String) {
          pSVar82 = pSVar26;
        }
        bVar13 = 0;
        if (pSVar82 == (String *)0x0) goto code_?;
      }
      pMVar11 = (MVAvatar__Class *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar82,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
      pMVar57 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar13 = 0;
      unaff_EDI = pMVar11;
      if ((pMVar11 != (MVAvatar__Class *)0x0) &&
         (bVar13 = 0, pMVar57 != (MVWorldObjectClientManager *)0x0)) {
        pMVar89 = (MVAvatarSpawnRoleCreator *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar57,(int32_t)(pMVar11->_0).this_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar12,(int32_t)(pMVar11->_0).byval_arg.data.__klassIndex,(MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar12,(int32_t)((MVNetworkGame__Fields *)&(pMVar11->_0).name)->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            bVar6 = 0;
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              pbVar67 = (bool *)func_?();
              bVar13 = 0;
              if (pMVar89 != (MVAvatarSpawnRoleCreator *)0x0) {
                if (((pMVar89->klass->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (pMVar89->klass->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar22 = false;
                }
                else {
                  bVar22 = true;
                }
                pMVar90 = (MVAvatarSpawnRoleCreator *)0x0;
                if (bVar22) {
                  pMVar90 = pMVar89;
                }
                bVar13 = 0;
                if (pMVar90 != (MVAvatarSpawnRoleCreator *)0x0) {
                  if (((pMVar89->klass->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (pMVar89->klass->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar22 = false;
                  }
                  else {
                    bVar22 = true;
                  }
                  pMVar90 = (MVAvatarSpawnRoleCreator *)0x0;
                  if (bVar22) {
                    pMVar90 = pMVar89;
                  }
                  bVar13 = 0;
                  if (pMVar90 != (MVAvatarSpawnRoleCreator *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              (pMVar90,(SpawnRoleBodySwitchData *)pMVar11,*pbVar67,(MethodInfo *)0x0
                              );
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
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
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar17 = (int32_t *)func_?();
        iVar29 = *piVar17;
        uStack_61 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar12 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar57 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar57 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (MVAvatar__Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar57,iVar29,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            piVar17 = (int32_t *)func_?();
            iVar29 = *piVar17;
            iVar41 = func_?();
            bVar13 = 0;
            if (iVar41 != 0) {
              pMVar65 = (MethodInfo *)0x0;
              pMVar60 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar60,iVar29,pMVar65);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar12 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      unaff_EDI = (MVAvatar__Class *)(pMVar12->fields).playerContainer;
      bVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        iVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar13 = 0;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI,iVar29,&pMStack_8,(MethodInfo *)0x0);
          if (bVar25 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xde,(MethodInfo *)0x0);
          pPVar91 = TypeInfo__MV__Common__PlayerGameState;
          puVar92 = (uint8_t *)func_?();
          bVar6 = (byte)((uint)pPVar91 >> 0x10);
          eventCode = CONCAT31(eventCode._1_3_,*puVar92);
          bVar13 = 0;
          if (pMStack_8 != (MVPlayer *)0x0) {
            if ((pMStack_8->fields).playerState != *puVar92) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_8,eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  default:
    switch(eventCode & MVEventCodes__Enum_Join) {
    case MVEventCodes__Enum_Handshake:
      bVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        pSVar26 = (String *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pSVar82 = (String *)0x0;
        if (pSVar26 != (String *)0x0) {
          if (pSVar26->klass == TypeInfo__System__String) {
            pSVar82 = pSVar26;
          }
          bVar13 = 0;
          if (pSVar82 == (String *)0x0) goto code_?;
        }
        pSVar26 = MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                  SecurityHelper_Encrypt(pSVar82,(MethodInfo *)0x0);
        pMVar73 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar73 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar73,pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        this_14 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        bVar6 = (byte)((uint)in_stack_7 >> 0x10);
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar11 = (MVAvatar__Class *)this_14->klass;
          if (((pMVar11->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               ((int)(pMVar11->_1).typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pDVar93 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar22) {
            pDVar93 = this_14;
          }
          bVar13 = 0;
          this_14 = pDVar93;
          unaff_EDI = pMVar11;
          if (pDVar93 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar13 = 0;
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar65 = (MethodInfo *)&UNK_?;
          this_15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_14,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar6 = (byte)((uint)in_stack_7 >> 0x10);
          bVar13 = 0;
          if (this_15 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar94 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_15,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            VStack_10.y = 0.0;
            pMVar11 = (MVAvatar__Class *)pDVar94->_currentValue;
            uStack_1 = 3;
            VStack_10.z = (float)&stack0xffffff88;
            do {
              bVar6 = (byte)((uint)in_stack_7 >> 0x10);
              bVar25 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar25 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffff88,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar65);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar11 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar11->_0).image == TypeInfo__System__String) {
                  unaff_EDI = pMVar11;
                }
                bVar13 = 0;
                if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
              }
              bVar13 = 0;
              if (this_14 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar95 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_14,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar65 = (MethodInfo *)::StringLiteral___;
              if (TVar95.m_Index == 0) {
                pSVar26 = (String *)0x0;
              }
              else {
                pSVar26 = (String *)func_?();
              }
              in_stack_7 =
                   mscorlib.dll::System::String::String_Concat_4
                             ((String *)unaff_EDI,(String *)pMVar65,pSVar26,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)in_stack_7,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          pMVar11 = unaff_EDI;
          if (pIVar15 != pIVar16) goto code_?;
          piVar40 = (int *)func_?();
          iVar41 = *piVar40;
          pMVar12 = (this->fields).networkGame;
          bVar13 = 0;
          unaff_EDI = (MVAvatar__Class *)this;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pMVar44 != (MVLocalPlayer *)0x0) {
              if (iVar41 == (pMVar44->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              pMVar12 = (this->fields).networkGame;
              bVar13 = 0;
              if (pMVar12 != (MVNetworkGame *)0x0) {
                pMVar83 = (pMVar12->fields).playerContainer;
                bVar13 = 0;
                if (pMVar83 != (MVPlayerContainer *)0x0) {
                  bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar83,iVar41,(MethodInfo *)0x0);
                  if (bVar25 == 0) {
code_?:
                    pMVar12 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pMVar83 = (pMVar12->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar83 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar83,iVar41,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = uStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar12 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pMVar83 = (pMVar12->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar83 != (MVPlayerContainer *)0x0) {
                        pMStack_53 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar83,iVar41,(MethodInfo *)0x0);
                        pDStack_62 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_62,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_10.z = (float)func_?();
                        pOVar14 = (Object *)func_?();
                        bVar13 = 0;
                        if (pDStack_62 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_62,
                                     (Object *)VStack_10.z,pOVar14,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_61 = 3;
                          pOVar14 = (Object *)func_?();
                          bVar13 = 0;
                          if (pMStack_53 != (MVPlayer *)0x0) {
                            pUVar96 = (pMStack_53->fields)._UserProfileData_k__BackingField;
                            bVar13 = 0;
                            if (pUVar96 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_62,
                                         pOVar14,(Object *)(pUVar96->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_54 = 6;
                              VStack_10.z = (float)func_?();
                              pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar13 = 0;
                              if (pMVar12 != (MVNetworkGame *)0x0) {
                                this_06 = (pMVar12->fields)._Friends_k__BackingField;
                                bVar13 = 0;
                                if (this_06 != (FriendList *)0x0) {
                                  bStack_97 = FriendList::FriendList_IsFriend
                                                        (this_06,(pMStack_53->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar14 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_62
                                             ,(Object *)VStack_10.z,pOVar14,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_62
                                             ,(MethodInfo *)0x0);
                                  pMVar12 = (this->fields).networkGame;
                                  bVar13 = 0;
                                  if (pMVar12 != (MVNetworkGame *)0x0) {
                                    pGVar70 = (pMVar12->fields).gameStatCounterManager;
                                    bVar13 = 0;
                                    if (pGVar70 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar70,iVar41,
                                                 (pMStack_53->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar12 = (this->fields).networkGame;
                                      bVar13 = 0;
                                      if (pMVar12 != (MVNetworkGame *)0x0) {
                                        pGVar70 = (pMVar12->fields).gameStatCounterManager;
                                        bVar13 = 0;
                                        if (pGVar70 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar70,iVar41,(MethodInfo *)0x0);
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
      bVar13 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          pMVar11 = unaff_EDI;
          if (pIVar15 == pIVar16) {
            puVar39 = (undefined4 *)func_?();
            pMStack_63 = (MVWorldObject *)*puVar39;
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar13 = 0;
            unaff_EDI = unaff_EDI;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              piVar40 = (int *)func_?();
              iVar41 = *piVar40;
              pMVar11 = (MVAvatar__Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar11 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar11->_0).image == TypeInfo__System__String) {
                  unaff_EDI = pMVar11;
                }
                bVar13 = 0;
                if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
              }
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar13 = 0;
              if (pOVar14 != (Object *)0x0) {
                pIVar15 = (pOVar14->klass->_0).element_class;
                pIVar16 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar13 = pIVar15 < pIVar16;
                pMVar11 = unaff_EDI;
                if (pIVar15 != pIVar16) goto code_?;
                puVar5 = (undefined1 *)func_?();
                pMStack_59 = (MVAvatar__Class *)CONCAT31(pMStack_59._1_3_,*puVar5);
                pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar13 = 0;
                if (pOVar14 != (Object *)0x0) {
                  pIVar15 = (pOVar14->klass->_0).element_class;
                  pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                  bVar13 = pIVar15 < pIVar16;
                  if (pIVar15 != pIVar16) goto code_?;
                  piVar40 = (int *)func_?();
                  pMStack_19 = (MVAvatar__Class *)*piVar40;
                  pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar13 = 0;
                  if (pOVar14 != (Object *)0x0) {
                    pIVar15 = (pOVar14->klass->_0).element_class;
                    pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    if (pIVar15 != pIVar16) goto code_?;
                    pbVar67 = (bool *)func_?();
                    bVar25 = *pbVar67;
                    pSVar26 = (String *)
                              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                              EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pSVar82 = (String *)0x0;
                    if (pSVar26 != (String *)0x0) {
                      if (pSVar26->klass == TypeInfo__System__String) {
                        pSVar82 = pSVar26;
                      }
                      bVar13 = 0;
                      if (pSVar82 == (String *)0x0) goto code_?;
                    }
                    VStack_10.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   (pSVar82,
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar12 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar12,(MethodInfo *)0x0);
                      bVar13 = 0;
                      if (pMVar44 != (MVLocalPlayer *)0x0) {
                        if (iVar41 == (pMVar44->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_3;
                          return;
                        }
                        pMVar84 = (MVPlayer *)func_?();
                        MVPlayer::MVPlayer__ctor
                                  (pMVar84,iVar41,(int32_t)pMStack_63,(String *)unaff_EDI,
                                   (BuildTarget__Enum)pMStack_59,(UserProfileData *)VStack_10.z,0,
                                   bVar25,(MethodInfo *)0x0);
                        bVar13 = 0;
                        if (pMVar84 != (MVPlayer *)0x0) {
                          (pMVar84->fields)._Team_k__BackingField = (int32_t)pMStack_19;
                          pMVar12 = (this->fields).networkGame;
                          bVar13 = 0;
                          if (pMVar12 != (MVNetworkGame *)0x0) {
                            pMVar83 = (pMVar12->fields).playerContainer;
                            bVar13 = 0;
                            if (pMVar83 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar83,pMVar84,(MethodInfo *)0x0);
                              *unaff_FS_OFFSET = uStack_3;
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
            break;
          }
          goto code_?;
        }
      }
      break;
    default:
      goto code_?;
    }
  }
  func_?();
  pMVar11 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  unaff_EDI = pMVar11;
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  piVar40 = (int *)func_?();
  uVar98 = func_?();
  iVar99 = (int)(uVar98 >> 0x20);
  iVar100 = (int)uVar98;
  iVar101 = iVar99 + 1;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100 + -0x2aef9ba4);
  bVar102 = (byte)((uint)extraout_ECX >> 8);
  bVar22 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar13);
  *pbVar56 = *pbVar56 + bVar102 + bVar13;
  iVar41 = *piVar40;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 0x4e10645e);
  bVar13 = (byte)((uint)iVar101 >> 8);
  bVar103 = CARRY1(*pbVar56,bVar13) || CARRY1(*pbVar56 + bVar13,bVar22);
  *pbVar56 = *pbVar56 + bVar13 + bVar22;
  bVar104 = (byte)iVar101;
  bVar105 = (byte)extraout_ECX + bVar104;
  bVar22 = CARRY1((byte)extraout_ECX,bVar104) || CARRY1(bVar105,bVar103);
  puVar5 = *(undefined1 **)(iVar41 + 4);
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100);
  bVar106 = (byte)(uVar98 >> 8);
  bVar107 = CARRY1(*pbVar56,bVar106) || CARRY1(*pbVar56 + bVar106,bVar22);
  *pbVar56 = *pbVar56 + bVar106 + bVar22;
  *(undefined1 *)&(unaff_EDI->_0).image = *puVar5;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100);
  bVar22 = CARRY1(*pbVar56,bVar106) || CARRY1(*pbVar56 + bVar106,bVar107);
  *pbVar56 = *pbVar56 + bVar106 + bVar107;
  *(undefined1 *)((int)&(unaff_EDI->_0).image + 1) = puVar5[1];
  bVar108 = (byte)((uint)unaff_EBX >> 8);
  bVar107 = CARRY1(bVar13,bVar108) || CARRY1(bVar13 + bVar108,bVar22);
  bVar109 = bVar13 + bVar108 + bVar22;
  iVar99 = CONCAT22((short)((uint)iVar101 >> 0x10),CONCAT11(bVar109,bVar104));
  puVar5 = *(undefined1 **)(iVar41 + 8);
  uVar110 = (short)iVar41 + 0xc;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&(unaff_EDI->_1).typeHierarchy + (int)unaff_EBX * 2 + 2);
  bVar111 = *pbVar56;
  bVar13 = *pbVar56;
  *pbVar56 = bVar13 + bVar106 + bVar107;
  bVar112 = (byte)uVar98;
  bVar22 = CARRY1(in_stack_113,bVar112) ||
           CARRY1(in_stack_113 + bVar112,
                  CARRY1(bVar111,bVar106) || CARRY1(bVar13 + bVar106,bVar107));
  *(undefined1 *)((int)&(unaff_EDI->_0).image + 2) = *puVar5;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 0x2b106461);
  bVar114 = (byte)unaff_EBX;
  bVar107 = CARRY1(*pbVar56,bVar114) || CARRY1(*pbVar56 + bVar114,bVar22);
  *pbVar56 = *pbVar56 + bVar114 + bVar22;
  puVar115 = (ushort *)(iVar100 + -0x25 + iVar99);
  sVar116 = (uVar110 & 3) - (*puVar115 & 3);
  *puVar115 = *puVar115 + (ushort)(0 < sVar116) * sVar116;
  puVar115 = (ushort *)(iVar100 + 0x48 + iVar99);
  sVar116 = (uVar110 & 3) - (*puVar115 & 3);
  *puVar115 = *puVar115 + (ushort)(0 < sVar116) * sVar116;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x22106460);
  bVar22 = CARRY1(*pbVar56,bVar109) || CARRY1(*pbVar56 + bVar109,bVar107);
  *pbVar56 = *pbVar56 + bVar109 + bVar107;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100);
  bVar107 = CARRY1(*pbVar56,bVar106) || CARRY1(*pbVar56 + bVar106,bVar22);
  *pbVar56 = *pbVar56 + bVar106 + bVar22;
  *(undefined1 *)((int)&(unaff_EDI->_0).image + 3) = puVar5[1];
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EBX + 0x65));
  bVar22 = CARRY1(*pbVar56,bVar109) || CARRY1(*pbVar56 + bVar109,bVar107);
  *pbVar56 = *pbVar56 + bVar109 + bVar107;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100);
  bVar107 = CARRY1(*pbVar56,bVar106) || CARRY1(*pbVar56 + bVar106,bVar22);
  *pbVar56 = *pbVar56 + bVar106 + bVar22;
  *(undefined1 *)&(unaff_EDI->_0).gc_desc = puVar5[2];
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100 + 0xe106465);
  bVar22 = CARRY1(*pbVar56,bVar106) || CARRY1(*pbVar56 + bVar106,bVar107);
  *pbVar56 = *pbVar56 + bVar106 + bVar107;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100);
  bVar13 = *pbVar56;
  bVar111 = *pbVar56;
  *pbVar56 = bVar111 + bVar106 + bVar22;
  *(undefined1 *)((int)&(unaff_EDI->_0).gc_desc + 1) = puVar5[3];
  bVar117 = bVar105 + bVar103 + bVar106 + (CARRY1(bVar13,bVar106) || CARRY1(bVar111 + bVar106,bVar22));
  bVar22 = (uVar98 & 0x100) != 0;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 0x67);
  bVar103 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar22);
  *pbVar56 = *pbVar56 + bVar102 + bVar22;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar5 + 0x6c));
  bVar22 = CARRY1(*pbVar56,bVar112) || CARRY1(*pbVar56 + bVar112,bVar103);
  *pbVar56 = *pbVar56 + bVar112 + bVar103;
  bVar103 = CARRY1(bVar104,bVar114) || CARRY1(bVar104 + bVar114,bVar22);
  uVar118 = (undefined3)((uint)iVar99 >> 8);
  bVar104 = bVar104 + bVar114 + bVar22;
  iVar99 = CONCAT31(uVar118,bVar104);
  *(undefined4 *)(iVar41 + 8) = 0x6a4f1064;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 100 + (int)&stack0xfffffffc * 2);
  bVar13 = *pbVar56;
  bVar111 = *pbVar56;
  *pbVar56 = bVar111 + bVar108 + bVar103;
  pcVar69 = (char *)(CONCAT31((int3)((uint)extraout_ECX >> 8),bVar117) + 0xa10646a);
  *pcVar69 = *pcVar69 + bVar109 + (CARRY1(bVar13,bVar108) || CARRY1(bVar111 + bVar108,bVar103));
  lVar119 = (longlong)*(int *)(iVar100 + -0x27 + iVar99) * 0x6b;
  bVar22 = (int)lVar119 != lVar119;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 0x6c);
  bVar103 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar22);
  *pbVar56 = *pbVar56 + bVar102 + bVar22;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar99 + -0x18ef9b94);
  bVar22 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar103);
  *pbVar56 = *pbVar56 + bVar108 + bVar103;
  uVar120 = (undefined2)iVar99;
  uVar64 = in(uVar120);
  *(undefined1 *)((int)&(unaff_EDI->_0).gc_desc + 2) = uVar64;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0xfffffffc * 2 + 0x6d411064);
  bVar103 = CARRY1(*pbVar56,bVar104) || CARRY1(*pbVar56 + bVar104,bVar22);
  *pbVar56 = *pbVar56 + bVar104 + bVar22;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar5 + 0x71));
  bVar22 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar103);
  *pbVar56 = *pbVar56 + bVar102 + bVar103;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + iVar100 + -0x3aef9b93);
  bVar103 = CARRY1(*pbVar56,bVar114) || CARRY1(*pbVar56 + bVar114,bVar22);
  *pbVar56 = *pbVar56 + bVar114 + bVar22;
  pbVar121 = (byte *)((int)&((MVNetworkGame__Fields *)&(unaff_EDI->_0).name)->ReceivedItemFromQuery +
                   3);
  uVar46 = in(uVar120);
  *(undefined4 *)((int)&(unaff_EDI->_0).gc_desc + 3) = uVar46;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)unaff_EBX);
  bVar22 = CARRY1(*pbVar56,bVar109) || CARRY1(*pbVar56 + bVar109,bVar103);
  *pbVar56 = *pbVar56 + bVar109 + bVar103;
  out(puVar5[4],uVar120);
  bVar103 = CARRY1(bVar106,bVar114) || CARRY1(bVar106 + bVar114,bVar22);
  bVar105 = bVar106 + bVar114 + bVar22;
  out(puVar5[5],uVar120);
  bVar22 = CARRY1(bVar102,bVar102) || CARRY1(bVar102 * '\x02',bVar103);
  bVar106 = bVar102 * '\x02' + bVar103;
  pbVar56 = puVar5 + 10;
  out(*(undefined4 *)(puVar5 + 6),uVar120);
  bVar13 = bVar112 * '\x02';
  bVar103 = CARRY1(bVar112,bVar112) || CARRY1(bVar13,bVar22);
  uVar122 = (undefined3)(CONCAT22((short)(uVar98 >> 0x10),CONCAT11(bVar105,bVar112)) >> 8);
  bVar111 = bVar13 + bVar22;
  pbVar123 = (byte *)CONCAT31(uVar122,bVar111);
  if (SCARRY1(bVar112,bVar112) == SCARRY1(bVar13,bVar22)) {
    bVar22 = CARRY1(bVar117,bVar104);
    bVar13 = bVar117 + bVar104;
    bVar107 = bVar22 || CARRY1(bVar13,bVar103);
    bVar117 = bVar13 + bVar103;
    if (bVar22 || CARRY1(bVar13,bVar103)) {
      bVar103 = CARRY1(*pbVar121,bVar109) || CARRY1(*pbVar121 + bVar109,bVar107);
      *pbVar121 = *pbVar121 + bVar109 + bVar107;
      if (*pbVar121 == 0) {
        bVar22 = CARRY1(bVar111,bVar117) || CARRY1(bVar111 + bVar117,bVar103);
        cVar124 = bVar111 + bVar117 + bVar103;
        pbVar123 = (byte *)CONCAT31(uVar122,cVar124);
        if (cVar124 == '\0') {
          bVar103 = CARRY1(*unaff_EBX,bVar117) || CARRY1(*unaff_EBX + bVar117,bVar22);
          *unaff_EBX = *unaff_EBX + bVar117 + bVar22;
          if (bVar103 || *unaff_EBX == 0) {
            bVar22 = CARRY1(*pbVar56,bVar114) || CARRY1(*pbVar56 + bVar114,bVar103);
            *pbVar56 = *pbVar56 + bVar114 + bVar103;
          }
          else {
            pbVar125 = (byte *)(iVar99 + 0x77);
            bVar107 = CARRY1(*pbVar125,bVar109) || CARRY1(*pbVar125 + bVar109,bVar103);
            *pbVar125 = *pbVar125 + bVar109 + bVar103;
            bVar6 = bVar104 * '\x02';
            bVar22 = CARRY1(bVar6,bVar107);
            bVar103 = CARRY1(bVar104,bVar104) || bVar22;
            cVar124 = bVar6 + bVar107;
            iVar99 = CONCAT31(uVar118,cVar124);
            if ((CARRY1(bVar104,bVar104) || bVar22) || cVar124 == '\0') {
              pbVar125 = unaff_EBX + 0x17106478;
              bVar107 = CARRY1(*pbVar125,bVar105) || CARRY1(*pbVar125 + bVar105,bVar103);
              *pbVar125 = *pbVar125 + bVar105 + bVar103;
              if ((char)*pbVar125 < '\0') {
                pbVar125 = unaff_EBX + 0x79;
                bVar103 = CARRY1(*pbVar125,bVar108) || CARRY1(*pbVar125 + bVar108,bVar107);
                *pbVar125 = *pbVar125 + bVar108 + bVar107;
                pbVar125 = (byte *)((int)unaff_FS_OFFSET + iVar99 + 100 + (int)pbVar121 * 2);
                bVar6 = *pbVar125;
                bVar22 = CARRY1(bVar6,bVar103);
                *pbVar125 = bVar6 + bVar103;
                bVar103 = CARRY1(bVar117,bVar106) || CARRY1(bVar117 + bVar106,bVar22);
                bVar117 = bVar117 + bVar106 + bVar22;
                if ((POPCOUNT(bVar117) & 1U) == 0) {
                  bVar22 = CARRY1(*unaff_EBX,bVar108) || CARRY1(*unaff_EBX + bVar108,bVar103);
                  *unaff_EBX = *unaff_EBX + bVar108 + bVar103;
                }
                else {
                  pbVar125 = puVar5 + 0x33106485;
                  bVar6 = *pbVar125;
                  bVar13 = *pbVar125 + bVar117;
                  bVar22 = CARRY1(*pbVar125,bVar117) || CARRY1(bVar13,bVar103);
                  *pbVar125 = bVar13 + bVar103;
                  if ((SCARRY1(bVar6,bVar117) != SCARRY1(bVar13,bVar103)) != (char)*pbVar125 < '\0') {
                    unaff_EBX[-0x3bef9b74] = unaff_EBX[-0x3bef9b74] + bVar105 + bVar22;
                    halt_baddata();
                  }
                }
              }
              else {
                bVar22 = CARRY1(bVar114,bVar107);
                pbVar123 = (byte *)CONCAT31(uVar122,bVar114 + bVar107);
              }
            }
            else {
              bVar22 = CARRY1(bVar114,bVar103);
              pbVar123 = (byte *)CONCAT31(uVar122,bVar114 + bVar103);
            }
          }
        }
        else {
          bVar22 = CARRY1(bVar6,bVar114) || CARRY1(bVar6 + bVar114,bVar22);
        }
      }
      else {
        bVar22 = CARRY1(*pbVar123,bVar105) || CARRY1(*pbVar123 + bVar105,bVar103);
        *pbVar123 = *pbVar123 + bVar105 + bVar103;
      }
    }
    else {
      bVar22 = CARRY1(*pbVar123,bVar105) || CARRY1(*pbVar123 + bVar105,bVar107);
      *pbVar123 = *pbVar123 + bVar105 + bVar107;
    }
  }
  else {
    bVar22 = CARRY1(*pbVar123,bVar105) || CARRY1(*pbVar123 + bVar105,bVar103);
    *pbVar123 = *pbVar123 + bVar105 + bVar103;
  }
  pbVar125 = pbVar123 + 0x7c;
  bVar103 = CARRY1(*pbVar125,bVar108) || CARRY1(*pbVar125 + bVar108,bVar22);
  *pbVar125 = *pbVar125 + bVar108 + bVar22;
  pbVar125 = (byte *)((int)unaff_FS_OFFSET + (int)(&stack0x00000060 + (int)pbVar121 * 2));
  bVar6 = *pbVar125;
  bVar13 = *pbVar125;
  *pbVar125 = bVar13 + bVar106 + bVar103;
  *unaff_EBX = *unaff_EBX + bVar117 + (CARRY1(bVar6,bVar106) || CARRY1(bVar13 + bVar106,bVar103));
  *(uint *)(pbVar123 + iVar99 + -0x50) = *(uint *)(pbVar123 + iVar99 + -0x50) & 0x58106481;
  pbVar123[iVar99 + 0x46] = pbVar123[iVar99 + 0x46] & 0x83;
  bVar13 = (byte)iVar99;
  iVar41 = CONCAT22((short)((uint)iVar99 >> 0x10),
                    CONCAT11((char)((uint)iVar99 >> 8) + bVar106,bVar13));
  *(uint *)(pbVar123 + iVar41 + -0x6a) = *(uint *)(pbVar123 + iVar41 + -0x6a) & 0xffffff84;
  pbVar125 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar123 + -0x7b));
  bVar6 = *pbVar125;
  bVar111 = (byte)pbVar123;
  *pbVar125 = *pbVar125 + bVar111;
  pbVar125 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0xfffffffc * 2 + -0x5bdfef9c);
  bVar22 = CARRY1(*pbVar125,bVar13) || CARRY1(*pbVar125 + bVar13,CARRY1(bVar6,bVar111));
  *pbVar125 = *pbVar125 + bVar13 + CARRY1(bVar6,bVar111);
  pbVar125 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar5 + 0x2010648f));
  bVar6 = (byte)((uint)pbVar123 >> 8);
  bVar103 = CARRY1(*pbVar125,bVar6) || CARRY1(*pbVar125 + bVar6,bVar22);
  *pbVar125 = *pbVar125 + bVar6 + bVar22;
  *pbVar121 = *pbVar56;
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar123);
  bVar22 = CARRY1(*pbVar56,bVar6) || CARRY1(*pbVar56 + bVar6,bVar103);
  *pbVar56 = *pbVar56 + bVar6 + bVar103;
  *(undefined1 *)&(unaff_EDI->_0).namespaze = puVar5[0xb];
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar123);
  bVar103 = CARRY1(*pbVar56,bVar6) || CARRY1(*pbVar56 + bVar6,bVar22);
  *pbVar56 = *pbVar56 + bVar6 + bVar22;
  *(undefined1 *)((int)&(unaff_EDI->_0).namespaze + 1) = puVar5[0xc];
  pbVar56 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0xffffff82);
  bVar6 = *pbVar56;
  bVar13 = *pbVar56;
  *pbVar56 = bVar13 + bVar114 + bVar103;
  *(char *)((int)unaff_FS_OFFSET + (int)(puVar5 + 0xd)) =
       *(char *)((int)unaff_FS_OFFSET + (int)(puVar5 + 0xd)) + bVar114 +
       (CARRY1(bVar6,bVar114) || CARRY1(bVar13 + bVar114,bVar103));
  LOCK();
  uVar46 = *(undefined4 *)(pbVar123 + iVar41 + 0x4b);
  *(int *)(pbVar123 + iVar41 + 0x4b) = (int)lVar119;
  UNLOCK();
  LOCK();
  uVar47 = *(undefined4 *)(pbVar123 + iVar41 + -0x28);
  *(undefined4 *)(pbVar123 + iVar41 + -0x28) = uVar46;
  UNLOCK();
  LOCK();
  uVar46 = *(undefined4 *)(pbVar123 + iVar41 + 0x78);
  *(undefined4 *)(pbVar123 + iVar41 + 0x78) = uVar47;
  UNLOCK();
  LOCK();
  uVar47 = *(undefined4 *)(pbVar123 + iVar41 + -0x28);
  *(undefined4 *)(pbVar123 + iVar41 + -0x28) = uVar46;
  UNLOCK();
  LOCK();
  uVar46 = *(undefined4 *)(pbVar123 + iVar41 + 0x42);
  *(undefined4 *)(pbVar123 + iVar41 + 0x42) = uVar47;
  UNLOCK();
  *(undefined4 *)(pbVar123 + iVar41 + -0x42) = uVar46;
  *(undefined4 *)(pbVar123 + iVar41 + 0x3b) = uVar46;
  *(undefined2 *)
   (CONCAT22((short)((uint)pbVar123 >> 0x10),CONCAT11(pbVar123[iVar41 + -0x2f],bVar111)) + -0x3c +
   iVar41) = in_FS;
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
      func_?(&
                      TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                     );
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  uVar11 = func_?(&stack0xfffffff0);
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
  pAVar1 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
           (this->fields).dynamicEventCallbackManager;
  pAVar2 = pAVar1;
  if (pAVar1 != (Action_1_ExitGames_Client_Photon_EventData___Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (Dictionary_2_System_ByteEnum_System_Object_ *)(pAVar1->_0).name;
    if (pDVar3 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         (pDVar3,eventCode,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                         );
      pAVar2 = (Action_1_ExitGames_Client_Photon_EventData___Class *)0x0;
      if (pOVar4 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          cRam_? = '\x01';
        }
        source = (Action_1_ExitGames_Client_Photon_EventData___Class *)pOVar4[1].klass;
        do {
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
          pAVar2 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          iVar5 = 0;
          if (unaff_EDI != (Delegate *)0x0) {
            iVar5 = func_?(unaff_EDI,
                                    TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
            if (iVar5 == 0) goto code_?;
          }
          unaff_EDI = (Delegate *)(pOVar4 + 1);
          pAVar2 = source;
          pAVar6 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
                   func_?((Delegate *)(pOVar4 + 1),iVar5,source);
          bVar7 = pAVar6 != source;
          source = pAVar6;
        } while (bVar7);
        if (pOVar4[1].klass == (Object__Class *)0x0) {
          pDVar3 = (Dictionary_2_System_ByteEnum_System_Object_ *)(pAVar1->_0).name;
          if (pDVar3 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Remove
                    (pDVar3,eventCode,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,pAVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  value = (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)
          func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
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
  (value->fields).eventCallbacks =
       (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
        *)this_00;
  func_?(&value->fields,this_00);
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
    pMVar1 = (MethodInfo *)&(value->fields).eventsHandledByDynamicEventCallbackManager;
    (value->fields).eventsHandledByDynamicEventCallbackManager =
         (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
    func_?(pMVar1,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
    (this->fields).dynamicEventCallbackManager = value;
    func_?(&this->fields,value);
    this_02 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                             );
    System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]
    ::ReadOnlyCollectionBuilder_1_System_Object___ctor
              ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
              );
    pMVar1 = (MethodInfo *)&(this->fields).cachedEvents;
    (this->fields).cachedEvents = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    (this->fields).networkGame = networkGame;
    pMStack2 = networkGame;
    ppMStack3 = &(this->fields).networkGame;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

