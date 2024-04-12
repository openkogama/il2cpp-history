
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


/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pvStack_3 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_3;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff6c;
  ppIVar5 = (Il2CppClass **)&stack0xffffff6c;
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
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar15 != (WorldNetwork *)0x0) {
        _Var32 = (_union_86)(pWVar15->fields)._.worldObjectClientManager;
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Stack_28 = _Var32;
        if (photonEvent != (EventData *)0x0) {
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)0x0);
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x12,(MethodInfo *)0x0);
          bVar9 = 0;
          if (_Var32.dummy == (PhotonPeer *)0x0) break;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 == pIVar12) {
                piVar13 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar13,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pMVar17 = (MVNetworkGame__Class *)(pDVar16->_0).image;
          if (((pMVar17->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar17->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar18) {
            unaff_ESI = pDVar16;
          }
          bVar9 = 0;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 != pIVar12) goto code_?;
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x12,(MethodInfo *)0x0);
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pWVar15 = (pMVar14->fields).worldNetwork;
          bVar9 = 0;
          if (pWVar15 != (WorldNetwork *)0x0) {
            pMVar21 = (pWVar15->fields)._.worldObjectClientManager;
            bVar9 = 0;
            if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar21,iVar19,pDVar20,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pWVar15 = (pMVar14->fields).worldNetwork;
        bVar9 = 0;
        if (pWVar15 != (WorldNetwork *)0x0) {
          pMVar21 = (pWVar15->fields)._.worldObjectClientManager;
          bVar9 = 0;
          if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar21,iVar19,pDVar20,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (this->fields).dynamicEventCallbackManager;
    bVar9 = 0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar22 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      bVar9 = 0;
      if (pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar23 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar22,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar23 == 0) {
          pSVar24 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar24,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar24,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pEVar22 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          bVar9 = 0;
          if (pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pEVar22,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery ==
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pSVar24 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar24 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pEVar22 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              bVar9 = 0;
              if (pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                (*(pEVar22->fields)._._.invoke_impl)();
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar15 != (WorldNetwork *)0x0) {
        pMVar25 = (pWVar15->fields)._.worldInventory;
        bVar9 = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x31,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar25 == (MVWorldInventory *)0x0) break;
          pMStack_26 = (MVNetworkGame *)TypeInfo__System__Byte;
          _Var32.dummy = (PhotonPeer *)0x0;
          if (pOVar10 == (Object *)0x0) {
code_?:
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              puVar27 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar27;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pDVar28 = (pMVar25->fields).runtimePrototypes;
              bVar9 = 0;
              if (pDVar28 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar29 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar28,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                pBVar30 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (pBVar30,(Byte__Array *)_Var32.typeHandle,(MethodInfo *)0x0);
                bVar9 = 0;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (pRVar29 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar29,pBVar30,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          _Var32.dummy = (void *)func_?();
          bVar9 = 0;
          _Stack_28.dummy = _Var32.dummy;
          if (_Var32.dummy != (PhotonPeer *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar15 != (WorldNetwork *)0x0) {
        pMVar25 = (pWVar15->fields)._.worldInventory;
        bVar9 = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar9 = 0;
          if ((pMVar25 != (MVWorldInventory *)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0)) {
            pIVar11 = (pOVar10->klass->_0).element_class;
            pIVar12 = (TypeInfo__System__Single->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            if (pIVar11 != pIVar12) goto code_?;
            pfVar31 = (float *)func_?();
            fVar32 = *pfVar31;
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              puVar27 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar27;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pDVar28 = (pMVar25->fields).runtimePrototypes;
              bVar9 = 0;
              if (pDVar28 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar29 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar28,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar9 = 0;
                if (pRVar29 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar29->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar29->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar29->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar29,fVar32,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_26 = pMVar14;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar33 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  (pMStack_26,*piVar13,iVar33,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar33 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar14,iVar19,iVar33,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar33 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar34 = (FriendStatus__Enum *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar14,iVar19,iVar33,*pFVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar14,*piVar13,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar14,*piVar13,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar14,iVar19,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar14,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  (pMVar14,*piVar13,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields)._NetworkGameStateListener_k__BackingField;
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          puVar27 = (undefined4 *)func_?();
          pEVar22 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar27;
          puVar27 = (undefined4 *)func_?();
          pEVar35 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar27;
          p_Var38 = (_union_86 *)func_?();
          _Stack_28 = *p_Var38;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (unaff_ESI->_0).byval_arg.data = _Stack_28;
          ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery = pEVar35;
          (unaff_ESI->_0).namespaze = (char *)pEVar22;
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            iVar19 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar14,(MethodInfo *)0x0);
            pMVar36 = (unaff_ESI->_0).this_arg.data.dummy;
            *(int *)&(unaff_ESI->_0).byval_arg.attrs = (int)pEVar22 + ((int)pEVar35 - iVar19);
            if (pMVar36 == (MVItemBusinessLogic *)0x0) goto code_?;
            pIVar37 = (unaff_ESI->_0).this_arg.data.array;
            pUVar38 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar38,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pIVar37 != (Il2CppArrayType *)0x0) {
              (*(code *)pIVar37->lobounds)();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar39 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar39->fields)._._ActorNr_k__BackingField;
          puVar27 = (undefined4 *)func_?();
          if ((Dictionary_2_System_Object_System_Object___Class *)*puVar27 == unaff_ESI)
          goto code_?;
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            pWVar15 = (pMVar14->fields).worldNetwork;
            bVar9 = 0;
            if (pWVar15 != (WorldNetwork *)0x0) {
              _Var32 = (_union_86)(pWVar15->fields)._.worldObjectClientManager;
              _Stack_28 = _Var32;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar9 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var32.dummy != (PhotonPeer *)0x0) {
                pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar13 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar13,
                           pDVar20,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_26 = pMVar14;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar33 = *piVar13;
        pPVar40 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  (pMStack_26,*pPVar40,iVar33,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar27 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar27;
      pfVar31 = (float *)func_?();
      pIVar12 = (Il2CppClass *)*pfVar31;
      pfVar31 = (float *)func_?();
      VStack_8.x = *pfVar31;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = (float)pIVar12;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var38 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var38->dummy;
      puVar27 = (undefined4 *)func_?();
      uVar41 = *puVar27;
      puVar27 = (undefined4 *)func_?();
      _Var32 = _Stack_28;
      uVar42 = *puVar27;
      pMVar14 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        camOrigin.y._0_1_ = SUB41(VStack_8.y,0);
        camOrigin.x = VStack_8.x;
        camOrigin.y._1_2_ = (short)((uint)VStack_8.y >> 8);
        camOrigin.y._3_1_ = (char)((uint)VStack_8.y >> 0x18);
        camOrigin.z._0_1_ = SUB41(VStack_8.z,0);
        camOrigin.z._1_2_ = (short)((uint)VStack_8.z >> 8);
        camOrigin.z._3_1_ = (char)((uint)VStack_8.z >> 0x18);
        camDir.y = (float)uVar41;
        camDir.x = (float)uVar42;
        camDir.z = (float)_Var32.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar14,*piVar13,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar43 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar43,pDVar20,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar13 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar44 = (MVTeam__Enum *)func_?();
        team = *pMVar44;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar14,*piVar13,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_26 = pMVar14;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar33 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  (pMStack_26,*piVar13,iVar33,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  (pMVar14,*piVar13,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var38 = (_union_86 *)func_?();
      _Stack_28 = *p_Var38;
      pOVar45 = (Object *)func_?();
      pSVar24 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar45,
                           (MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (pDVar47 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar27 = (undefined4 *)func_?();
        pMStack_48 = (MVPlayer *)*puVar27;
        uStack_49 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar50 = (int *)func_?();
        pMStack_26 = (MVNetworkGame *)*piVar50;
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar51 = (pMVar14->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar51 != (MVLocalObjectController *)0x0) {
            pbVar52 = (byte *)func_?();
            bVar9 = *pbVar52;
            piVar13 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar51,*piVar13,(int32_t)pMStack_48,(int32_t)pMStack_26,(uint)bVar9,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar27 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar27;
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar53,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
             (iVar54 = func_?(), iVar54 == 0)) goto code_?;
          iVar54 = func_?();
          bVar9 = 0;
          if (iVar54 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (pDVar47 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var38 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var38->__klassIndex;
        uStack_49 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar27 = (undefined4 *)func_?();
        pMStack_55 = (MVLocalPlayer *)*puVar27;
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar53,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            pMVar56 = (MVWorldObjectSpawner *)func_?();
            bVar9 = 0;
            if (pMVar56 != (MVWorldObjectSpawner *)0x0) {
              pMStack_48 = (MVPlayer *)(pMVar56->fields).spawnWorldObjectID;
              uStack_57 = 3;
              pOVar10 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar47,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar27 = (undefined4 *)func_?();
              pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar27;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar27 = (undefined4 *)func_?();
              pMStack_59 = (MVWorldObject *)*puVar27;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              puVar27 = (undefined4 *)func_?();
              pMStack_26 = (MVNetworkGame *)*puVar27;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              p_Var38 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var38->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar27 = (undefined4 *)func_?();
              VStack_8.z = (float)*puVar27;
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pWVar15 = (pMVar14->fields).worldNetwork;
                bVar9 = 0;
                if (pWVar15 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar15,(int32_t)pMStack_59,0,1,(int32_t)pMStack_48,(int32_t)pDStack_58
                             ,(int32_t)pMStack_26,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar14 = (this->fields).networkGame;
                  bVar9 = 0;
                  if (pMVar14 != (MVNetworkGame *)0x0) {
                    pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar14,(MethodInfo *)0x0);
                    bVar9 = 0;
                    if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_59 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar53,(int32_t)pDStack_58,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      if (TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 ==
                          (MVWorldObjectClient_CallBackDelegate *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        this_04 = (MVWorldObjectClient_CallBackDelegate *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)this_04,(Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             this_04;
                        func_?();
                      }
                      bVar9 = 0;
                      if (pMStack_59 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar14 = (this->fields).networkGame;
                        bVar9 = 0;
                        if (pMVar14 != (MVNetworkGame *)0x0) {
                          pMVar51 = (pMVar14->fields)._PlayerController_k__BackingField;
                          pMStack_59 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar9 = 0;
                          if (pMVar51 != (MVLocalObjectController *)0x0) {
                            pbVar52 = (byte *)func_?();
                            bVar9 = *pbVar52;
                            piVar13 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar51,*piVar13,(int32_t)pDStack_58,(int32_t)pMStack_55,
                                       (uint)bVar9,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      (pMVar56,(int32_t)VStack_8.z,(MethodInfo *)0x0);
                            *unaff_FS_OFFSET = pvStack_3;
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar60 = (undefined1 *)func_?();
      uVar61 = *puVar60;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar31 = (float *)func_?();
      pFVar62 = (FieldInfo *)*pfVar31;
      pMStack_55 = (MVLocalPlayer *)func_?();
      uStack_57 = uVar61;
      pOVar10 = (Object *)func_?();
      VStack_8.z = (float)pFVar62;
      pOVar45 = (Object *)func_?();
      pSVar24 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_55,
                           pOVar10,pOVar45,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar24,(MethodInfo *)0x0);
      pMVar63 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar12 = (pMVar63->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar12->vtable[0].methodPtr & 0x100) == 0) {
        pIVar12 = (Il2CppClass *)func_?();
      }
      if (pIVar12->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar12 = (pMVar63->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar12->vtable[0].methodPtr & 0x100) == 0) {
        pIVar12 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar12->static_fields;
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar64 = (Byte__Array *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pWVar15 = (pMVar14->fields).worldNetwork;
        bVar9 = 0;
        if (pWVar15 != (WorldNetwork *)0x0) {
          this_00 = (pWVar15->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,pBVar64,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar9 = 0;
          if (this_00 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_00,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar15 != (WorldNetwork *)0x0) {
        this_01 = (RuntimeEventManager *)(pWVar15->fields)._.runtimeEventManagerNetwork;
        bVar9 = 0;
        if (this_01 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar27 = (undefined4 *)func_?();
      pMStack_26 = (MVNetworkGame *)*puVar27;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar60 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar60;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar27 = (undefined4 *)func_?();
      pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar27;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar27 = (undefined4 *)func_?();
      pMStack_48 = (MVPlayer *)*puVar27;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      bVar23 = *pbVar65;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar66 = (char *)func_?();
      pMVar14 = (this->fields).networkGame;
      if (*pcVar66 == '\0') {
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pGVar67 = (pMVar14->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar67 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar67,_Stack_28.__klassIndex,iVar19,(MVTeam__Enum)pMStack_26,
                       (int32_t)pDStack_58,(int32_t)pMStack_48,bVar23,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pGVar67 = (pMVar14->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar67 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar67,_Stack_28.__klassIndex,(MVTeam__Enum)pMStack_26,iVar19,
                       (int32_t)pDStack_58,(int32_t)pMStack_48,bVar23,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar64 = (Byte__Array *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pGVar67 = (pMVar14->fields).gameStatCounterManager;
        bVar9 = 0;
        if (pGVar67 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar67,pBVar64,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar19 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      pBVar30 = (BytePacker *)func_?();
      pMVar63 = (MethodInfo *)0x0;
      pBVar64 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(pBVar30,pBVar64,pMVar63);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,pBVar30,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar68 = (pMVar14->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar9 = 0;
        if (pMVar68 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (pMVar68,iVar19,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged(pMVar14,*piVar13,iVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar69 = (pMVar14->fields)._GameCoinManager_k__BackingField;
        bVar9 = 0;
        if (pMVar69 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar69,*pbVar65,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 != pIVar12) goto code_?;
        pNVar70 = (NotificationType__Enum *)func_?();
        type = *pNVar70;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,200,(MethodInfo *)0x0);
        if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        }
        else {
          pMVar17 = (MVNetworkGame__Class *)(unaff_ESI->_0).image;
          if (((pMVar17->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar17->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar18) {
            pDVar16 = unaff_ESI;
          }
          bVar9 = 0;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar14,type,(Dictionary_2_System_Object_System_Object_ *)pDVar16,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) break;
    pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar14 == (MVNetworkGame *)0x0) break;
    if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
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
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar18) {
      pDVar71 = pDVar20;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse(pMVar14,pDVar71,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories(pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar30 = (BytePacker *)func_?();
    if (pOVar10 == (Object *)0x0) {
      pBVar64 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar30,pBVar64,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 != pIVar12) {
code_?:
          func_?();
          goto code_?;
        }
        puVar60 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)pBVar30 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar60);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 != pIVar12) goto code_?;
          pbVar65 = (bool *)func_?();
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar14,pBVar30,eventCode,*pbVar65,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar64 = (Byte__Array *)func_?();
    bVar9 = 0;
    if (pBVar64 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar39 != (MVLocalPlayer *)0x0) {
          iVar54 = (pMVar39->fields)._._ActorNr_k__BackingField;
          bVar9 = 0;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
            pIVar12 = (TypeInfo__System__Int32->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            if (pIVar11 != pIVar12) goto code_?;
            piVar50 = (int *)func_?();
            if (*piVar50 == iVar54) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pMVar69 = (pMVar14->fields)._GameCoinManager_k__BackingField;
                bVar9 = 0;
                if (pMVar69 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar69,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar14 = (this->fields).networkGame;
                  bVar9 = 0;
                  if (pMVar14 != (MVNetworkGame *)0x0) {
                    pMVar72 = (pMVar14->fields).operationRequests;
                    bVar9 = 0;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (pMVar72 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      pDVar73 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (pDVar73,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                  (pMVar72->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar9 = 0;
                      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                        (*(code *)*(Il2CppMetadataTypeHandle *)
                                   &((MVNetworkGame__Class *)(unaff_ESI->_0).image)[1]._0.byval_arg.
                                    attrs)();
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
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar9 = 0;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pMVar74 = (pMVar14->fields).playerContainer;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar9 = 0;
                if ((pMVar74 != (MVPlayerContainer *)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0))
                {
                  pIVar11 = (pOVar10->klass->_0).element_class;
                  pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar9 = pIVar11 < pIVar12;
                  if (pIVar11 != pIVar12) goto code_?;
                  pbVar65 = (bool *)func_?();
                  bVar23 = *pbVar65;
                  bVar9 = 0;
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
                    bVar9 = pIVar11 < pIVar12;
                    if (pIVar11 == pIVar12) {
                      piVar13 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                (pMVar74,*piVar13,bVar23,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pvStack_3;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    (pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar9 = 0;
    if ((pMVar14 == (MVNetworkGame *)0x0) || (bVar9 = 0, pOVar10 == (Object *)0x0)) break;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
    bVar9 = pIVar11 < pIVar12;
    if (pIVar11 != pIVar12) goto code_?;
    pcVar66 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,*pcVar66 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar18) {
      pDVar16 = unaff_ESI;
    }
    bVar9 = 0;
    if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                (pMVar14,(Dictionary_2_System_Object_System_Object_ *)pDVar16,*pcVar66 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    (pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    (pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar71 = pDVar20;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    (pMVar14,pDVar71,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar64 = (Byte__Array *)0x0;
code_?:
      pMVar14 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar64,(MethodInfo *)0x0);
      pMVar68 = (MvAvatarMetaDataWoMap *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                (pMVar68,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        (pMVar14->fields)._AvatarMetaDataWoMap_k__BackingField = pMVar68;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar64 = (Byte__Array *)func_?();
    bVar9 = 0;
    if (pBVar64 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar72 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar72 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar75 = (pMVar72->fields).peer;
      pDVar73 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar73,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar75 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar75->klass->vtable).SendOperation.method)();
        *unaff_FS_OFFSET = pvStack_3;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar10 = (Object *)func_?();
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar45 = (Object *)func_?();
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar10,pOVar45,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar76->fields).logicEventQueue;
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
          bVar9 = 0;
          if (photonEvent != (EventData *)0x0) {
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              piVar13 = (int32_t *)func_?();
              pEVar22 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              iVar19 = *piVar13;
              bVar9 = 0;
              if (pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)pEVar22,iVar19,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar23 == 0) {
                  pEVar22 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                  VStack_8.z = (float)func_?();
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar9 = 0;
                  if (pEVar22 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pEVar22,iVar19,
                             (Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pEVar22 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                bVar9 = 0;
                if (pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                  this_05 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pEVar22,iVar19,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar9 = 0;
                  if (this_05 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_05,(Object *)photonEvent,
                               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                              );
                    *unaff_FS_OFFSET = pvStack_3;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar76,(MethodInfo *)0x0);
        pMVar77 = (pMVar76->fields).updateEvaluatorStep;
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar77 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar13 = &(pMVar77->fields).stepTimestamp;
          *piVar13 = *piVar13 + 1000;
code_?:
          iVar19 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar77->fields).lastUpdateTick = iVar19;
          (pMVar77->fields).accumulatedTime = 0;
          *unaff_FS_OFFSET = pvStack_3;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar77 = *(MVNetworkGame_UpdateEvaluator **)&(unaff_ESI->_0).byval_arg.attrs;
          bVar9 = 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pMVar77 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar77->fields).stepTimestamp = *piVar13;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar50 = (int *)func_?();
          iVar54 = *piVar50;
          pEVar22 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          while (bVar9 = 0, pEVar22 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pMVar78 = (pEVar22->fields)._._.method_info;
            bVar9 = 0;
            if (pMVar78 == (MethodInfo_1 *)0x0) break;
            if (iVar54 <= (int)pMVar78[2].monitor) goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0)
            ;
            pEVar22 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 == (MVNetworkGame *)0x0) break;
    pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar14,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar9 = 0;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar9 = 0;
      if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
        pMVar79 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar53,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          pEVar22 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          bVar9 = pEVar22 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          if (pEVar22 < (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2)
          goto code_?;
          bVar9 = 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            iVar19._0_2_ = (unaff_ESI->_0).byval_arg.attrs;
            iVar19._2_1_ = (unaff_ESI->_0).byval_arg.type;
            iVar19._3_1_ = (unaff_ESI->_0).byval_arg.field_0x7;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar53,iVar19,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar79 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar79->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar54 = func_?();
              bVar9 = 0;
              if (iVar54 != 0) {
                uVar61 = SUB41(unaff_ESI,0);
                uVar80 = (undefined2)((uint)unaff_ESI >> 8);
                uVar81 = (undefined1)((uint)unaff_ESI >> 0x18);
                bVar23 = 0xee;
                this_06 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_06,bVar23,(MethodInfo *)CONCAT13(uVar81,CONCAT21(uVar80,uVar61)));
                pMVar14 = (this->fields).networkGame;
                bVar9 = 0;
                if (pMVar14 != (MVNetworkGame *)0x0) {
                  pMVar51 = (pMVar14->fields)._PlayerController_k__BackingField;
                  bVar9 = 0;
                  if (pMVar51 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar51,1,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_3;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      pMStack_55 = pMVar39;
      if (photonEvent != (EventData *)0x0) {
        VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xdb,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar39 != (MVLocalPlayer *)0x0) {
          piVar13 = (int32_t *)func_?();
          iVar19 = *piVar13;
          piVar13 = (int32_t *)func_?();
          iVar33 = *piVar13;
          puVar60 = (undefined1 *)func_?();
          uVar61 = *puVar60;
          piVar13 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    (pMStack_55,*piVar13,CONCAT31((int3)((uint)puVar60 >> 8),uVar61),iVar33,iVar19,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      bVar23 = *pbVar65;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar23
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
      pMVar63 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar24 = (String *)func_?();
      uVar61 = SUB41(pSVar24,0);
      uVar80 = (undefined2)((uint)pSVar24 >> 8);
      uVar81 = (undefined1)((uint)pSVar24 >> 0x18);
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,pMVar63);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pOVar10 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar24 = (String *)func_?();
        HighlightManager::HighlightManager_Init
                  (pSVar24,(MethodInfo *)CONCAT13(uVar81,CONCAT21(uVar80,uVar61)));
        profileSettingsState = (ProfileSettingsState *)pOVar10[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar82 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pGVar82 != (GoldRewardManager *)0x0) {
          pbVar65 = (bool *)func_?();
          (pGVar82->fields).isGoldRewardGame = *pbVar65;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar65 = (bool *)func_?();
          BStack_7.m_value = *pbVar65;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar24 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar24,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar24,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pSVar83 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar24 = (String *)0x0;
      if (pSVar83 == (String *)0x0) {
code_?:
        pSVar24 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar24,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar24,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar83->klass == TypeInfo__System__String) {
        pSVar24 = pSVar83;
      }
      bVar9 = 0;
      if (pSVar24 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar54 = func_?();
      pMVar63 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar24 = StringLiteral_V;
      bVar9 = 0;
      if (iVar54 != 0) {
        pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,(Object *)pSVar24,pMVar63);
        pbVar65 = (bool *)func_?();
        bVar23 = *pbVar65;
        pMVar14 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar14,*piVar13,bVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pSVar83 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar24 = (String *)0x0;
      if (pSVar83 != (String *)0x0) {
        if (pSVar83->klass == TypeInfo__System__String) {
          pSVar24 = pSVar83;
        }
        bVar9 = 0;
        photonEvent = (EventData *)0x0;
        if (pSVar24 == (String *)0x0) goto code_?;
      }
      bVar23 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar24,(MethodInfo *)0x0);
      if (bVar23 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar14->fields).playerContainer;
        bVar9 = 0;
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          pMVar39 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar74,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar39 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar39,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar14->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar74,*piVar13,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar84 != (MVPlayer *)0x0) {
            (pMVar84->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar24 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar24,(MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar46 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar24,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pLVar85 = (pMVar14->fields).levelRewardsManager;
          bVar9 = 0;
          if (pLVar85 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar85,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pLVar85 = (pMVar14->fields).levelRewardsManager;
        bVar9 = 0;
        if ((pOVar10 != (Object *)0x0) && (bVar9 = 0, pLVar85 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar85,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar16,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar16 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar24 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar24,(MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        pKVar86 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
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
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar16 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pVVar87 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      fVar32 = pVVar87->z;
      Var27 = *(unkbyte9 *)pVVar87;
      pQVar88 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar89 = pQVar88->x;
      VStack_8.x = pQVar88->y;
      VStack_8.y = pQVar88->z;
      VStack_8.z = pQVar88->w;
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar14->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar74,*piVar13,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar84 != (MVPlayer *)0x0) {
            this_02 = (pMVar84->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar9 = 0;
            if (this_02 != (SpawnRolesManager *)0x0) {
              piVar13 = (int32_t *)func_?();
              position.z._1_2_ = (short)((uint)fVar32 >> 8);
              position._0_9_ = Var27;
              position.z._3_1_ = (char)((uint)fVar32 >> 0x18);
              rotation.y._0_1_ = SUB41(VStack_8.x,0);
              rotation.x = fVar89;
              rotation.y._1_2_ = (short)((uint)VStack_8.x >> 8);
              rotation.y._3_1_ = (char)((uint)VStack_8.x >> 0x18);
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_02,*piVar13,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar24 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar24,(MethodInfo *)unaff_ESI);
      pUVar38 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar38,(MethodInfo *)0x0);
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar14->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (bVar9 = 0, pOVar10 != (Object *)0x0)) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 != pIVar12) goto code_?;
          piVar13 = (int32_t *)func_?();
          pMVar84 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar84 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar84,(ISpawnRoleChangeHandler *)pUVar38,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      spawnRoleBodySwitchData =
           (SpawnRoleBodySwitchData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar16,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar53 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar9 = 0;
      if ((spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) &&
         (bVar9 = 0, pMVar53 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar53,(spawnRoleBodySwitchData->fields).spawnRoleCreatorWoId,
                               (MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar14,(spawnRoleBodySwitchData->fields).deletedProtoBodyWoId,
                     (MethodInfo *)0x0);
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar14,(spawnRoleBodySwitchData->fields).deletedBodyWoId,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              pbVar65 = (bool *)func_?();
              bVar9 = 0;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (bVar18) {
                  pDVar16 = unaff_ESI;
                }
                bVar9 = 0;
                if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar18 = false;
                  }
                  else {
                    bVar18 = true;
                  }
                  pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  if (bVar18) {
                    pDVar16 = unaff_ESI;
                  }
                  bVar9 = 0;
                  if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pDVar16,spawnRoleBodySwitchData,*pbVar65,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_3;
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (pDVar47 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar13 = (int32_t *)func_?();
        iVar19 = *piVar13;
        uStack_57 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar53,iVar19,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar27 = (undefined4 *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar27;
            iVar54 = func_?();
            bVar9 = 0;
            if (iVar54 != 0) {
              pMVar63 = (MethodInfo *)0x0;
              pMVar56 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar56,(int32_t)unaff_ESI,pMVar63);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar74 = (pMVar14->fields).playerContainer;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        iVar19 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          bVar23 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             (pMVar74,iVar19,&pMStack_6,(MethodInfo *)0x0);
          if (bVar23 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xde,(MethodInfo *)0x0);
          puVar90 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar90);
          bVar9 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar90) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_6,eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
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
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar16 = unaff_ESI;
          }
          bVar9 = 0;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar16,(MethodInfo *)0x0);
        pMVar72 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar72 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar72,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        this_07 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (this_07 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          if (((this_07->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (this_07->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pDVar91 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar18) {
            pDVar91 = this_07;
          }
          bVar9 = 0;
          this_07 = pDVar91;
          if (pDVar91 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar9 = 0;
        if (this_07 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar63 = (MethodInfo *)&UNK_?;
          this_08 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_07,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar9 = 0;
          if (this_08 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar92 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_08,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)&stack0xffffff88;
            VStack_8.y = 0.0;
            pSVar24 = (String *)pDVar92->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI;
            do {
              bVar23 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar23 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar63);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pSVar83 = (String *)0x0;
              if (pSVar24 != (String *)0x0) {
                if (pSVar24->klass == TypeInfo__System__String) {
                  pSVar83 = pSVar24;
                }
                bVar9 = 0;
                photonEvent = (EventData *)unaff_ESI;
                if (pSVar83 == (String *)0x0) goto code_?;
              }
              bVar9 = 0;
              if (this_07 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar93 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_07,(Object *)pSVar83,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar63 = (MethodInfo *)::StringLiteral___;
              if (TVar93.m_Index == 0) {
                str2 = (String *)0x0;
              }
              else {
                str2 = (String *)func_?();
              }
              pSVar83 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar83,(String *)pMVar63,str2,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar83,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 != pIVar12) goto code_?;
          puVar27 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar27;
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pMVar39 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI ==
                  (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar39->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pMVar74 = (pMVar14->fields).playerContainer;
                bVar9 = 0;
                if (pMVar74 != (MVPlayerContainer *)0x0) {
                  bVar23 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar23 == 0) {
code_?:
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar74 = (pMVar14->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar74 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar74 = (pMVar14->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar74 != (MVPlayerContainer *)0x0) {
                        pMStack_48 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_58,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_8.z = (float)func_?();
                        pOVar10 = (Object *)func_?();
                        bVar9 = 0;
                        if (pDStack_58 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_58,
                                     (Object *)VStack_8.z,pOVar10,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_57 = 3;
                          pOVar10 = (Object *)func_?();
                          bVar9 = 0;
                          if (pMStack_48 != (MVPlayer *)0x0) {
                            pUVar94 = (pMStack_48->fields)._UserProfileData_k__BackingField;
                            bVar9 = 0;
                            if (pUVar94 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_58,
                                         pOVar10,(Object *)(pUVar94->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_49 = 6;
                              VStack_8.z = (float)func_?();
                              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar9 = 0;
                              if (pMVar14 != (MVNetworkGame *)0x0) {
                                this_03 = (pMVar14->fields)._Friends_k__BackingField;
                                bVar9 = 0;
                                if (this_03 != (FriendList *)0x0) {
                                  bStack_95 = FriendList::FriendList_IsFriend
                                                        (this_03,(pMStack_48->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar10 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_58
                                             ,(Object *)VStack_8.z,pOVar10,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_58
                                             ,(MethodInfo *)0x0);
                                  pMVar14 = (this->fields).networkGame;
                                  bVar9 = 0;
                                  if (pMVar14 != (MVNetworkGame *)0x0) {
                                    pGVar67 = (pMVar14->fields).gameStatCounterManager;
                                    bVar9 = 0;
                                    if (pGVar67 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar67,(int32_t)unaff_ESI,
                                                 (pMStack_48->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar14 = (this->fields).networkGame;
                                      bVar9 = 0;
                                      if (pMVar14 != (MVNetworkGame *)0x0) {
                                        pGVar67 = (pMVar14->fields).gameStatCounterManager;
                                        bVar9 = 0;
                                        if (pGVar67 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar67,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 == pIVar12) {
            puVar27 = (undefined4 *)func_?();
            pMStack_59 = (MVWorldObject *)*puVar27;
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              piVar50 = (int *)func_?();
              iVar54 = *piVar50;
              pSVar83 = (String *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x9a,(MethodInfo *)0x0);
              pSVar24 = (String *)0x0;
              if (pSVar83 != (String *)0x0) {
                if (pSVar83->klass == TypeInfo__System__String) {
                  pSVar24 = pSVar83;
                }
                bVar9 = 0;
                if (pSVar24 == (String *)0x0) goto code_?;
              }
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar9 = 0;
              if (pOVar10 != (Object *)0x0) {
                pIVar11 = (pOVar10->klass->_0).element_class;
                pIVar12 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar9 = pIVar11 < pIVar12;
                if (pIVar11 != pIVar12) goto code_?;
                puVar60 = (undefined1 *)func_?();
                pMStack_55 = (MVLocalPlayer *)CONCAT31(pMStack_55._1_3_,*puVar60);
                pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar9 = 0;
                if (pOVar10 != (Object *)0x0) {
                  pIVar11 = (pOVar10->klass->_0).element_class;
                  pIVar12 = (TypeInfo__System__Int32->_0).element_class;
                  bVar9 = pIVar11 < pIVar12;
                  if (pIVar11 != pIVar12) goto code_?;
                  p_Var38 = (_union_86 *)func_?();
                  _Stack_28 = *p_Var38;
                  pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar9 = 0;
                  if (pOVar10 != (Object *)0x0) {
                    pIVar11 = (pOVar10->klass->_0).element_class;
                    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar9 = pIVar11 < pIVar12;
                    if (pIVar11 != pIVar12) goto code_?;
                    pbVar65 = (bool *)func_?();
                    bVar23 = *pbVar65;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                        pDVar16 = unaff_ESI;
                      }
                      bVar9 = 0;
                      if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                      goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pDVar16,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar14,(MethodInfo *)0x0);
                      bVar9 = 0;
                      if (pMVar39 != (MVLocalPlayer *)0x0) {
                        if (iVar54 == (pMVar39->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pvStack_3;
                          return;
                        }
                        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                    func_?();
                        MVPlayer::MVPlayer__ctor
                                  ((MVPlayer *)unaff_ESI,iVar54,(int32_t)pMStack_59,pSVar24,
                                   (BuildTarget__Enum)pMStack_55,(UserProfileData *)VStack_8.z,0,
                                   bVar23,(MethodInfo *)0x0);
                        bVar9 = 0;
                        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                          (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                          pMVar14 = (this->fields).networkGame;
                          bVar9 = 0;
                          if (pMVar14 != (MVNetworkGame *)0x0) {
                            pMVar74 = (pMVar14->fields).playerContainer;
                            bVar9 = 0;
                            if (pMVar74 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar74,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
                              *unaff_FS_OFFSET = pvStack_3;
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
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar96 = func_?();
  pbVar97 = (byte *)uVar96;
  bVar98 = (byte)uVar96;
  bVar99 = (byte)((ulonglong)uVar96 >> 0x28);
  bVar18 = CARRY1(bRam_?,bVar99) || CARRY1(bRam_? + bVar99,bVar9);
  bRam_? = bRam_? + bVar99 + bVar9;
  pbVar52 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                            ((int)photonEvent + 0x31105160))->vtable).
                           System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys.
                           methodPtr + 1);
  bVar100 = (byte)((ushort)extraout_CX >> 8);
  bVar101 = CARRY1(*pbVar52,bVar100) || CARRY1(*pbVar52 + bVar100,bVar18);
  *pbVar52 = *pbVar52 + bVar100 + bVar18;
  pbVar52 = pbVar97 + -0x7fefac6d;
  bVar18 = CARRY1(*pbVar52,bVar98) || CARRY1(*pbVar52 + bVar98,bVar101);
  bRam_? = bVar98;
  *pbVar52 = *pbVar52 + bVar98 + bVar101;
  pbVar52 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                           methods + 1);
  bVar101 = CARRY1(*pbVar52,bVar98) || CARRY1(*pbVar52 + bVar98,bVar18);
  *pbVar52 = *pbVar52 + bVar98 + bVar18;
  bVar102 = (byte)unaff_EBX;
  bVar103 = (byte)((uint)unaff_EBX >> 8);
  bVar9 = bVar103 + bVar102;
  bVar18 = CARRY1(bVar103,bVar102) || CARRY1(bVar9,bVar101);
  bVar9 = bVar9 + bVar101;
  iVar54 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar9,bVar102));
  bVar101 = CARRY1(bVar100,bVar9) || CARRY1(bVar100 + bVar9,bVar18);
  bVar100 = bVar100 + bVar9 + bVar18;
  pbVar52 = (byte *)(iVar54 + -0x5efac6d);
  bVar18 = CARRY1(*pbVar52,bVar102) || CARRY1(*pbVar52 + bVar102,bVar101);
  *pbVar52 = *pbVar52 + bVar102 + bVar101;
  pbVar52 = pbVar97 + -0x24efacaf;
  bVar9 = *pbVar52 + (byte)extraout_CX;
  bVar101 = CARRY1(*pbVar52,(byte)extraout_CX) || CARRY1(bVar9,bVar18);
  *pbVar52 = bVar9 + bVar18;
  bVar18 = CARRY1(*pbVar97,bVar100) || CARRY1(*pbVar97 + bVar100,bVar101);
  *pbVar97 = *pbVar97 + bVar100 + bVar101;
  pbVar52 = pbVar97 + 0x3b105352;
  bVar101 = CARRY1(*pbVar52,bVar99) || CARRY1(*pbVar52 + bVar99,bVar18);
  *pbVar52 = *pbVar52 + bVar99 + bVar18;
  pbVar52 = (byte *)(iVar54 + 0x15105353);
  bVar18 = CARRY1(*pbVar52,bVar100) || CARRY1(*pbVar52 + bVar100,bVar101);
  *pbVar52 = *pbVar52 + bVar100 + bVar101;
  pbVar52 = (byte *)((int)((ulonglong)uVar96 >> 0x20) + -0x7fefacac);
  bVar103 = *pbVar52;
  bVar9 = *pbVar52;
  *pbVar52 = bVar9 + bVar102 + bVar18;
  bVar99 = (byte)((ulonglong)uVar96 >> 0x20);
  bVar18 = CARRY1(bVar102,bVar99) ||
           CARRY1(bVar102 + bVar99,CARRY1(bVar103,bVar102) || CARRY1(bVar9 + bVar102,bVar18));
  pbVar52 = pbVar97 + 0x105393;
  bVar101 = CARRY1(*pbVar52,bVar98) || CARRY1(*pbVar52 + bVar98,bVar18);
  *pbVar52 = *pbVar52 + bVar98 + bVar18;
  pbVar52 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                           nestedTypes + 3);
  bVar103 = *pbVar52;
  bVar9 = *pbVar52;
  *pbVar52 = bVar9 + bVar100 + bVar101;
  pbVar97[0x41105393] =
       pbVar97[0x41105393] + bVar98 + (CARRY1(bVar103,bVar100) || CARRY1(bVar9 + bVar100,bVar101));
  return;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
    (this->fields).dynamicEventCallbackManager = value;
    func_?(&this->fields,value);
    this_02 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                             );
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
              ((Stack_1_System_Int32_ *)this_02,
               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
              );
    pMVar1 = (MethodInfo *)&(this->fields).cachedEvents;
    (this->fields).cachedEvents = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

