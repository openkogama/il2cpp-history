
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
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (pOVar9 != (Object *)0x0)) {
      if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (_Var33 = (_union_86)(pWVar12->fields)._.worldObjectClientManager,
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_28 = _Var33, photonEvent != (EventData *)0x0)) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      if (_Var33.dummy != (PhotonPeer *)0x0) {
        if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pMVar14 = (MVNetworkGame__Class *)(pDVar13->_0).image;
          if (((pMVar14->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar14->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar15) {
            unaff_ESI = pDVar13;
          }
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar10 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar10,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar18,iVar16,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar18,iVar16,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
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
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar19,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar20 == 0) {
          pSVar21 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar21 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar21,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          if ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) &&
             (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pEVar19,
                                     eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                    ),
             unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery ==
                (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              pSVar21 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar21 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
            if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              (*(pEVar19->fields)._._.invoke_impl)();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0),
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (pOVar9 != (Object *)0x0)) {
      if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (pMVar22 = (pWVar12->fields)._.worldInventory, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x31,(MethodInfo *)0x0);
      if (pMVar22 != (MVWorldInventory *)0x0) {
        pMStack_23 = (MVNetworkGame *)TypeInfo__System__Byte;
        _Var33.dummy = (PhotonPeer *)0x0;
        if ((pOVar9 != (Object *)0x0) &&
           (_Var33.dummy = (void *)func_?(), _Stack_28.dummy = _Var33.dummy,
           _Var33.dummy == (PhotonPeer *)0x0)) goto code_?;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar24 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar24;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pDVar25 = (pMVar22->fields).runtimePrototypes;
          if (pDVar25 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar26 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,
                                 (int32_t)unaff_ESI,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            pBVar27 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (pBVar27,(Byte__Array *)_Var33.typeHandle,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar26,pBVar27,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (pMVar22 = (pWVar12->fields)._.worldInventory, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      if ((pMVar22 != (MVWorldInventory *)0x0) && (pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar28 = (float *)func_?();
        fVar29 = *pfVar28;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar24 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar24;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pDVar25 = (pMVar22->fields).runtimePrototypes;
          if ((pDVar25 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) &&
             (pRVar26 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,
                                   (int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar26 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar26->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar26->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar26->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar26,fVar29,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_23 = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar30 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  (pMStack_23,*piVar10,iVar30,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar30 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar11,iVar16,iVar30,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar30 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar31 = (FriendStatus__Enum *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar11,iVar16,iVar30,*pFVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar11,*piVar10,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar11,*piVar10,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar11,iVar16,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar11,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  (pMVar11,*piVar10,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar11->fields)._NetworkGameStateListener_k__BackingField,
       photonEvent != (EventData *)0x0)) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        puVar24 = (undefined4 *)func_?();
        pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar24;
        puVar24 = (undefined4 *)func_?();
        pEVar32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar24;
        p_Var39 = (_union_86 *)func_?();
        _Stack_28 = *p_Var39;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (unaff_ESI->_0).byval_arg.data = _Stack_28;
        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery = pEVar32;
        (unaff_ESI->_0).namespaze = (char *)pEVar19;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar11 != (MVNetworkGame *)0x0) {
          iVar16 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar11,(MethodInfo *)0x0);
          pMVar33 = (unaff_ESI->_0).this_arg.data.dummy;
          *(int *)&(unaff_ESI->_0).byval_arg.attrs = (int)pEVar19 + ((int)pEVar32 - iVar16);
          if (pMVar33 == (MVItemBusinessLogic *)0x0) goto code_?;
          pIVar34 = (unaff_ESI->_0).this_arg.data.array;
          pUVar35 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar35,(MethodInfo *)0x0);
          if (pIVar34 != (Il2CppArrayType *)0x0) {
            (*(code *)pIVar34->lobounds)();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar36 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
         pMVar36 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar36->fields)._._ActorNr_k__BackingField;
        puVar24 = (undefined4 *)func_?();
        if ((Dictionary_2_System_Object_System_Object___Class *)*puVar24 == unaff_ESI)
        goto code_?;
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
          _Var33 = (_union_86)(pWVar12->fields)._.worldObjectClientManager;
          _Stack_28 = _Var33;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (_Var33.dummy != (PhotonPeer *)0x0) {
            pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar10 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar10,pDVar17,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_23 = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar30 = *piVar10;
        pPVar37 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  (pMStack_23,*pPVar37,iVar30,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar24;
      pfVar28 = (float *)func_?();
      pIVar38 = (Il2CppClass *)*pfVar28;
      pfVar28 = (float *)func_?();
      VStack_8.x = *pfVar28;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = (float)pIVar38;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var39 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var39->dummy;
      puVar24 = (undefined4 *)func_?();
      uVar39 = *puVar24;
      puVar24 = (undefined4 *)func_?();
      _Var33 = _Stack_28;
      uVar40 = *puVar24;
      pMVar11 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        VVar41.y = VStack_8.y;
        VVar41.x = VStack_8.x;
        VVar41.z = VStack_8.z;
        camDir.y = (float)uVar39;
        camDir.x = (float)uVar40;
        camDir.z = (float)_Var33.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar11,*piVar10,VVar41,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar42 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar42,pDVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar11 = (this->fields).networkGame;
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
      piVar10 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pMVar43 = (MVTeam__Enum *)func_?();
        team = *pMVar43;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar11,*piVar10,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_23 = pMVar11;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar30 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  (pMStack_23,*piVar10,iVar30,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  (pMVar11,*piVar10,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar9 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var39 = (_union_86 *)func_?();
      _Stack_28 = *p_Var39;
      pOVar44 = (Object *)func_?();
      pSVar21 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar9,pOVar44,
                           (MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar9 = (Object *)func_?();
      if (pDVar46 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_47 = (MVPlayer *)*puVar24;
        uStack_48 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar49 = (int *)func_?();
        pMStack_23 = (MVNetworkGame *)*piVar49;
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          pMVar50 = (pMVar11->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          if (pMVar50 != (MVLocalObjectController *)0x0) {
            pbVar51 = (byte *)func_?();
            bVar52 = *pbVar51;
            piVar10 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar50,*piVar10,(int32_t)pMStack_47,(int32_t)pMStack_23,(uint)bVar52,
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
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar24;
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar11,(MethodInfo *)0x0),
         pMVar53 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar53,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (iVar54 = func_?(), iVar54 == 0)) goto code_?;
        iVar54 = func_?();
        if (iVar54 != 0) {
          func_?();
          func_?();
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar9 = (Object *)func_?();
      if (pDVar46 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var39 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var39->__klassIndex;
        uStack_48 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_55 = (MVLocalPlayer *)*puVar24;
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar11,(MethodInfo *)0x0),
           pMVar53 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar53,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          pMVar56 = (MVWorldObjectSpawner *)func_?();
          if (pMVar56 != (MVWorldObjectSpawner *)0x0) {
            pMStack_47 = (MVPlayer *)(pMVar56->fields).spawnWorldObjectID;
            uStack_57 = 3;
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar46,pOVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar24 = (undefined4 *)func_?();
            pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar24;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar24 = (undefined4 *)func_?();
            pMStack_59 = (MVWorldObject *)*puVar24;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x3a,(MethodInfo *)0x0);
            puVar24 = (undefined4 *)func_?();
            pMStack_23 = (MVNetworkGame *)*puVar24;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            p_Var39 = (_union_86 *)func_?();
            _Stack_28 = (_union_86)p_Var39->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar24 = (undefined4 *)func_?();
            VStack_8.z = (float)*puVar24;
            pMVar11 = (this->fields).networkGame;
            if ((pMVar11 != (MVNetworkGame *)0x0) &&
               (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar12,(int32_t)pMStack_59,0,1,(int32_t)pMStack_47,(int32_t)pDStack_58,
                         (int32_t)pMStack_23,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar11,(MethodInfo *)0x0),
                 pMVar53 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_59 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar53,(int32_t)pDStack_58,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                if (TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 ==
                    (MVWorldObjectClient_CallBackDelegate *)0x0) {
                  if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                  this_04 = (MVWorldObjectClient_CallBackDelegate *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            ((UnityAction_1_System_Object_ *)this_04,(Object *)object,
                             MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 = this_04;
                  func_?();
                }
                if (pMStack_59 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar11 = (this->fields).networkGame;
                  if (pMVar11 != (MVNetworkGame *)0x0) {
                    pMVar50 = (pMVar11->fields)._PlayerController_k__BackingField;
                    pMStack_59 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    if (pMVar50 != (MVLocalObjectController *)0x0) {
                      pbVar51 = (byte *)func_?();
                      bVar52 = *pbVar51;
                      piVar10 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar50,*piVar10,(int32_t)pDStack_58,(int32_t)pMStack_55,
                                 (uint)bVar52,(MethodInfo *)0x0);
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
    break;
  case MVEventCodes__Enum_Reward:
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
      pfVar28 = (float *)func_?();
      pFVar62 = (FieldInfo *)*pfVar28;
      pMStack_55 = (MVLocalPlayer *)func_?();
      uStack_57 = uVar61;
      pOVar9 = (Object *)func_?();
      VStack_8.z = (float)pFVar62;
      pOVar44 = (Object *)func_?();
      pSVar21 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_55,
                           pOVar9,pOVar44,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar21,(MethodInfo *)0x0);
      pMVar63 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar38 = (pMVar63->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar38->vtable[0].methodPtr & 0x100) == 0) {
        pIVar38 = (Il2CppClass *)func_?();
      }
      if (pIVar38->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar38 = (pMVar63->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar38->vtable[0].methodPtr & 0x100) == 0) {
        pIVar38 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar38->static_fields;
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
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar64 = (Byte__Array *)func_?();
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
        this_00 = (pWVar12->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,pBVar64,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        if (this_00 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_00,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
       (this_01 = (RuntimeEventManager *)(pWVar12->fields)._.runtimeEventManagerNetwork,
       this_01 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_23 = (MVNetworkGame *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar60 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar60;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_47 = (MVPlayer *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      bVar20 = *pbVar65;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar66 = (char *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (*pcVar66 == '\0') {
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pGVar67 = (pMVar11->fields).gameStatCounterManager,
           pGVar67 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar67,_Stack_28.__klassIndex,iVar16,(MVTeam__Enum)pMStack_23,
                     (int32_t)pDStack_58,(int32_t)pMStack_47,bVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else if ((pMVar11 != (MVNetworkGame *)0x0) &&
              (pGVar67 = (pMVar11->fields).gameStatCounterManager,
              pGVar67 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar67,_Stack_28.__klassIndex,(MVTeam__Enum)pMStack_23,iVar16,
                   (int32_t)pDStack_58,(int32_t)pMStack_47,bVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar64 = (Byte__Array *)func_?();
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pGVar67 = (pMVar11->fields).gameStatCounterManager,
         pGVar67 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar67,pBVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar16 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      pBVar27 = (BytePacker *)func_?();
      pMVar63 = (MethodInfo *)0x0;
      pBVar64 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(pBVar27,pBVar64,pMVar63);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,pBVar27,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar68 = (pMVar11->fields)._AvatarMetaDataWoMap_k__BackingField,
         pMVar68 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (pMVar68,iVar16,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged(pMVar11,*piVar10,iVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar69 = (pMVar11->fields)._GameCoinManager_k__BackingField,
         pMVar69 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar69,*pbVar65,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pNVar70 = (NotificationType__Enum *)func_?();
      type = *pNVar70;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      }
      else {
        pMVar14 = (MVNetworkGame__Class *)(unaff_ESI->_0).image;
        if (((pMVar14->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pMVar14->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (bVar15) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar11,type,(Dictionary_2_System_Object_System_Object_ *)pDVar13,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), pMVar11 == (MVNetworkGame *)0x0))
    break;
    if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar17->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar17->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar15) {
      pDVar71 = pDVar17;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse(pMVar11,pDVar71,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(pMVar11,pDVar71,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories(pMVar11,pDVar71,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar27 = (BytePacker *)func_?();
    if (pOVar9 == (Object *)0x0) {
      pBVar64 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar27,pBVar64,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      if (pOVar9 != (Object *)0x0) {
        if ((pOVar9->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          goto code_?;
        }
        puVar60 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)pBVar27 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar60);
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar65 = (bool *)func_?();
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar11,pBVar27,eventCode,*pbVar65,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar64 = (Byte__Array *)func_?();
    if (pBVar64 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pMVar36 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
          pMVar36 != (MVLocalPlayer *)0x0)) &&
         (iVar54 = (pMVar36->fields)._._ActorNr_k__BackingField,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar49 = (int *)func_?();
        if (*piVar49 == iVar54) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar11 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar69 = (pMVar11->fields)._GameCoinManager_k__BackingField,
             pMVar69 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar69,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar11 = (this->fields).networkGame;
            if (pMVar11 != (MVNetworkGame *)0x0) {
              pMVar72 = (pMVar11->fields).operationRequests;
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
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  (*(code *)*(Il2CppMetadataTypeHandle *)
                             &((MVNetworkGame__Class *)(unaff_ESI->_0).image)[1]._0.byval_arg.attrs)
                            ();
                  goto code_?;
                }
              }
            }
          }
        }
        else {
code_?:
          uStack_1 = 0;
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 != (MVNetworkGame *)0x0) {
            pMVar74 = (pMVar11->fields).playerContainer;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if ((pMVar74 != (MVPlayerContainer *)0x0) && (pOVar9 != (Object *)0x0)) {
              if ((pOVar9->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar65 = (bool *)func_?();
              bVar20 = *pbVar65;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar10 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            (pMVar74,*piVar10,bVar20,(MethodInfo *)0x0);
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
    break;
  case MVEventCodes__Enum_RequestFriends:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0))
    {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(pMVar11,pDVar71,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0))
    {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse(pMVar11,pDVar71,(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar11 = (this->fields).networkGame;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    if ((pMVar11 == (MVNetworkGame *)0x0) || (pOVar9 == (Object *)0x0)) break;
    if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar66 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,*pcVar66 == '\0',
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
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar15) {
      pDVar13 = unaff_ESI;
    }
    if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                (pMVar11,(Dictionary_2_System_Object_System_Object_ *)pDVar13,*pcVar66 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0))
    {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData(pMVar11,pDVar71,(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0))
    {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  (pMVar11,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar71 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar71 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar71 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  (pMVar11,pDVar71,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar64 = (Byte__Array *)0x0;
code_?:
      pMVar11 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar64,(MethodInfo *)0x0);
      pMVar68 = (MvAvatarMetaDataWoMap *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                (pMVar68,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        (pMVar11->fields)._AvatarMetaDataWoMap_k__BackingField = pMVar68;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar64 = (Byte__Array *)func_?();
    if (pBVar64 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (pOVar9 != (Object *)0x0)) {
      if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                  ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar72 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
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
    pOVar9 = (Object *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar44 = (Object *)func_?();
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar9,pOVar44,
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
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar11->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if ((pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar76->fields).logicEventQueue,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
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
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar10 = (int32_t *)func_?();
          pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          iVar16 = *piVar10;
          if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               ((Dictionary_2_System_Int32_System_Single_ *)pEVar19,iVar16,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar20 == 0) {
              pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              VStack_8.z = (float)func_?();
              System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System
              ::Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                        ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              if (pEVar19 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pEVar19,iVar16,
                         (Object *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
            if ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) &&
               (this_05 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pEVar19,iVar16,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), this_05 != (Queue_1_System_Object_ *)0x0)) {
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
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar11->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar76,(MethodInfo *)0x0);
        pMVar77 = (pMVar76->fields).updateEvaluatorStep;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar77 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar10 = &(pMVar77->fields).stepTimestamp;
          *piVar10 = *piVar10 + 1000;
          goto code_?;
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
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar11->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      pMVar77 = *(MVNetworkGame_UpdateEvaluator **)&(unaff_ESI->_0).byval_arg.attrs;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar77 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar77->fields).stepTimestamp = *piVar10;
code_?:
        iVar16 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar77->fields).lastUpdateTick = iVar16;
        (pMVar77->fields).accumulatedTime = 0;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar11->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0),
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar49 = (int *)func_?();
      iVar54 = *piVar49;
      pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      while ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0 &&
             (pMVar78 = (pEVar19->fields)._._.method_info, pMVar78 != (MethodInfo_1 *)0x0))) {
        if (iVar54 <= (int)pMVar78[2].klass) goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
        pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar11 = (this->fields).networkGame;
    if ((pMVar11 == (MVNetworkGame *)0x0) ||
       (pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar11,(MethodInfo *)0x0),
       unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
        pMVar79 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar53,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar11,(MethodInfo *)0x0);
          if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            iVar16._0_2_ = (unaff_ESI->_0).byval_arg.attrs;
            iVar16._2_1_ = (unaff_ESI->_0).byval_arg.type;
            iVar16._3_1_ = (unaff_ESI->_0).byval_arg.field_0x7;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar53,iVar16,(MethodInfo *)0x0);
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
              if (iVar54 != 0) {
                bVar20 = 0x6e;
                pDVar13 = unaff_ESI;
                this_06 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_06,bVar20,(MethodInfo *)pDVar13);
                pMVar11 = (this->fields).networkGame;
                if ((pMVar11 != (MVNetworkGame *)0x0) &&
                   (pMVar50 = (pMVar11->fields)._PlayerController_k__BackingField,
                   pMVar50 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar50,1,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
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
    pMVar11 = (this->fields).networkGame;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (pMVar36 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       pMStack_55 = pMVar36, photonEvent != (EventData *)0x0)) {
      VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      if (pMVar36 != (MVLocalPlayer *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar30 = *piVar10;
        puVar60 = (undefined1 *)func_?();
        uVar61 = *puVar60;
        piVar10 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  (pMStack_55,*piVar10,CONCAT31((int3)((uint)puVar60 >> 8),uVar61),iVar30,iVar16,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar65 = (bool *)func_?();
      bVar20 = *pbVar65;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar20
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
      method_00 = (MethodInfo *)func_?();
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar63);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pOVar9 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar9[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar21 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar21,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar9[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar80 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pGVar80 != (GoldRewardManager *)0x0) {
          pbVar65 = (bool *)func_?();
          (pGVar80->fields).isGoldRewardGame = *pbVar65;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar65 = (bool *)func_?();
          BStack_7.m_value = *pbVar65;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar21 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar21 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar21,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    if (photonEvent != (EventData *)0x0) {
      pSVar81 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar21 = (String *)0x0;
      if (pSVar81 == (String *)0x0) {
code_?:
        pSVar21 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar21,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar21,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar81->klass == TypeInfo__System__String) {
        pSVar21 = pSVar81;
      }
      if (pSVar21 != (String *)0x0) goto code_?;
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
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar54 = func_?();
      pMVar63 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar21 = StringLiteral_V;
      if (iVar54 != 0) {
        pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,(Object *)pSVar21,pMVar63);
        pbVar65 = (bool *)func_?();
        bVar20 = *pbVar65;
        pMVar11 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          piVar10 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar11,*piVar10,bVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    if (photonEvent == (EventData *)0x0) break;
    pSVar81 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar21 = (String *)0x0;
    if (pSVar81 == (String *)0x0) {
code_?:
      bVar20 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if (bVar20 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar21,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pOVar9 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar9[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar9[1].monitor;
code_?:
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if (pSVar81->klass == TypeInfo__System__String) {
      pSVar21 = pSVar81;
    }
    photonEvent = (EventData *)0x0;
    if (pSVar21 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar13,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pMVar74 = (pMVar11->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0)) &&
         (pMVar36 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar74,(MethodInfo *)0x0),
         pMVar36 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar36,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar13,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar11->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          piVar10 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar74,*piVar10,(MethodInfo *)0x0);
          if (pMVar82 != (MVPlayer *)0x0) {
            (pMVar82->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar21 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar21,(MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar45 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      if (((pOVar9 != (Object *)0x0) &&
          (pMVar11 = (this->fields).networkGame, pMVar11 != (MVNetworkGame *)0x0)) &&
         (pLVar83 = (pMVar11->fields).levelRewardsManager, pLVar83 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar83,(Dictionary_2_System_Int32_System_Int32_ *)pOVar9[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pLVar83 = (pMVar11->fields).levelRewardsManager, pOVar9 != (Object *)0x0)) &&
         (pLVar83 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar83,(int32_t)pOVar9[1].klass,(int32_t)pOVar9[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar13,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar13 = unaff_ESI;
      }
      if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar21 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar21,(MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        pKVar84 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar13,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar84;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar13 = unaff_ESI;
      }
      if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar10,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pVVar85 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar41 = *pVVar85;
      pQVar86 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar29 = pQVar86->x;
      VStack_8.x = pQVar86->y;
      VStack_8.y = pQVar86->z;
      VStack_8.z = pQVar86->w;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar11->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          piVar10 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar74,*piVar10,(MethodInfo *)0x0);
          if (pMVar82 != (MVPlayer *)0x0) {
            this_02 = (pMVar82->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            if (this_02 != (SpawnRolesManager *)0x0) {
              piVar10 = (int32_t *)func_?();
              rotation.y = VStack_8.x;
              rotation.x = fVar29;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_02,*piVar10,VVar41,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar21 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar21,(MethodInfo *)unaff_ESI);
      pUVar35 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar35,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar11->fields).playerContainer;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar10 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
          if (pMVar82 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar82,(ISpawnRoleChangeHandler *)pUVar35,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar13 = unaff_ESI;
        }
        if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      spawnRoleBodySwitchData =
           (SpawnRoleBodySwitchData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar13,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar53 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) &&
         (pMVar53 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar53,(spawnRoleBodySwitchData->fields).spawnRoleCreatorWoId,
                               (MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar11,(spawnRoleBodySwitchData->fields).deletedProtoBodyWoId,
                     (MethodInfo *)0x0);
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar11,(spawnRoleBodySwitchData->fields).deletedBodyWoId,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar65 = (bool *)func_?();
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar15 = false;
                }
                else {
                  bVar15 = true;
                }
                pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (bVar15) {
                  pDVar13 = unaff_ESI;
                }
                if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar15 = false;
                  }
                  else {
                    bVar15 = true;
                  }
                  pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  if (bVar15) {
                    pDVar13 = unaff_ESI;
                  }
                  if (pDVar13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pDVar13,spawnRoleBodySwitchData,*pbVar65,
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar9 = (Object *)func_?();
      if (pDVar46 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar10 = (int32_t *)func_?();
        iVar16 = *piVar10;
        uStack_57 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar11,(MethodInfo *)0x0),
           pMVar53 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar53,iVar16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          puVar24 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar24;
          iVar54 = func_?();
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
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pMVar74 = (pMVar11->fields).playerContainer,
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
        photonEvent != (EventData *)0x0)) &&
       (iVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0), pMVar74 != (MVPlayerContainer *)0x0)) {
      bVar20 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         (pMVar74,iVar16,&pMStack_6,(MethodInfo *)0x0);
      if (bVar20 == 0) {
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
      puVar87 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar87);
      if (pMStack_6 != (MVPlayer *)0x0) {
        if ((pMStack_6->fields).playerState != *puVar87) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_6,eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar13 = unaff_ESI;
          }
          if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar13,(MethodInfo *)0x0);
        pMVar72 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar72 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar72,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
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
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          pDVar88 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar15) {
            pDVar88 = this_07;
          }
          this_07 = pDVar88;
          if (pDVar88 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
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
          if (this_08 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar89 = mscorlib.dll::System::Collections::Generic::
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
            pSVar21 = (String *)pDVar89->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI;
            do {
              bVar20 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar20 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar63);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pSVar81 = (String *)0x0;
              if (pSVar21 != (String *)0x0) {
                if (pSVar21->klass == TypeInfo__System__String) {
                  pSVar81 = pSVar21;
                }
                photonEvent = (EventData *)unaff_ESI;
                if (pSVar81 == (String *)0x0) goto code_?;
              }
              if (this_07 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar90 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_07,(Object *)pSVar81,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar63 = (MethodInfo *)::StringLiteral___;
              if (TVar90.m_Index == 0) {
                str2 = (String *)0x0;
              }
              else {
                str2 = (String *)func_?();
              }
              pSVar81 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar81,(String *)pMVar63,str2,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar81,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar24 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar24;
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar36 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
           pMVar36 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI ==
              (Dictionary_2_System_Object_System_Object___Class *)
              (pMVar36->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          pMVar11 = (this->fields).networkGame;
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar74 = (pMVar11->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0)) {
            bVar20 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar20 == 0) {
code_?:
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar74 = (pMVar11->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar74 = (pMVar11->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0))
              {
                pMStack_47 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pDStack_58 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_58,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_8.z = (float)func_?();
                pOVar9 = (Object *)func_?();
                if (pDStack_58 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_58,
                             (Object *)VStack_8.z,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_57 = 3;
                  pOVar9 = (Object *)func_?();
                  if ((pMStack_47 != (MVPlayer *)0x0) &&
                     (pUVar91 = (pMStack_47->fields)._UserProfileData_k__BackingField,
                     pUVar91 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_58,pOVar9,
                               (Object *)(pUVar91->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_48 = 6;
                    VStack_8.z = (float)func_?();
                    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar11 != (MVNetworkGame *)0x0) &&
                       (this_03 = (pMVar11->fields)._Friends_k__BackingField,
                       this_03 != (FriendList *)0x0)) {
                      bStack_92 = FriendList::FriendList_IsFriend
                                            (this_03,(pMStack_47->fields)._ProfileID_k__BackingField
                                             ,(MethodInfo *)0x0);
                      pOVar9 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_58,
                                 (Object *)VStack_8.z,pOVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_58,
                                 (MethodInfo *)0x0);
                      pMVar11 = (this->fields).networkGame;
                      if ((pMVar11 != (MVNetworkGame *)0x0) &&
                         (pGVar67 = (pMVar11->fields).gameStatCounterManager,
                         pGVar67 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar67,(int32_t)unaff_ESI,
                                   (pMStack_47->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar11 = (this->fields).networkGame;
                        if ((pMVar11 != (MVNetworkGame *)0x0) &&
                           (pGVar67 = (pMVar11->fields).gameStatCounterManager,
                           pGVar67 != (GameStatCounterManager *)0x0)) {
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
      break;
    case MVEventCodes__Enum_Join:
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar24 = (undefined4 *)func_?();
        pMStack_59 = (MVWorldObject *)*puVar24;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar49 = (int *)func_?();
          iVar54 = *piVar49;
          pSVar81 = (String *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x9a,(MethodInfo *)0x0);
          pSVar21 = (String *)0x0;
          if (pSVar81 != (String *)0x0) {
            if (pSVar81->klass == TypeInfo__System__String) {
              pSVar21 = pSVar81;
            }
            if (pSVar21 == (String *)0x0) goto code_?;
          }
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          if (pOVar9 != (Object *)0x0) {
            if ((pOVar9->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar60 = (undefined1 *)func_?();
            pMStack_55 = (MVLocalPlayer *)CONCAT31(pMStack_55._1_3_,*puVar60);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              p_Var39 = (_union_86 *)func_?();
              _Stack_28 = *p_Var39;
              pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              if (pOVar9 != (Object *)0x0) {
                if ((pOVar9->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar65 = (bool *)func_?();
                bVar20 = *pbVar65;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                    pDVar13 = unaff_ESI;
                  }
                  if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)pDVar13,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar11 = (this->fields).networkGame;
                if ((pMVar11 != (MVNetworkGame *)0x0) &&
                   (pMVar36 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar11,(MethodInfo *)0x0), pMVar36 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar54 == (pMVar36->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_3;
                    return;
                  }
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,iVar54,(int32_t)pMStack_59,pSVar21,
                             (BuildTarget__Enum)pMStack_55,(UserProfileData *)VStack_8.z,0,bVar20,
                             (MethodInfo *)0x0);
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                    pMVar11 = (this->fields).networkGame;
                    if ((pMVar11 != (MVNetworkGame *)0x0) &&
                       (pMVar74 = (pMVar11->fields).playerContainer,
                       pMVar74 != (MVPlayerContainer *)0x0)) {
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
  piVar49 = (int *)func_?();
  uVar93 = func_?();
  iVar94 = (int)uVar93;
  bVar95 = (byte)((ulonglong)uVar93 >> 0x20) & *(byte *)(unaff_EBX + 100);
  pbVar51 = (byte *)(iVar94 + -0x4aef9bad);
  bVar52 = *pbVar51;
  bVar96 = (byte)extraout_ECX;
  *pbVar51 = *pbVar51 + bVar96;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET +
                    CONCAT31((int3)((ulonglong)uVar93 >> 0x28),bVar95) + 0x2e106454);
  bVar15 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,CARRY1(bVar52,bVar96));
  *pbVar51 = *pbVar51 + bVar95 + CARRY1(bVar52,bVar96);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + extraout_ECX + 0x106455);
  bVar52 = (byte)((ulonglong)uVar93 >> 0x28);
  bVar97 = CARRY1(*pbVar51,bVar52) || CARRY1(*pbVar51 + bVar52,bVar15);
  *pbVar51 = *pbVar51 + bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94);
  bVar98 = (byte)uVar93;
  bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
  *pbVar51 = *pbVar51 + bVar98 + bVar97;
  bVar99 = (byte)unaff_EBX;
  bVar97 = CARRY1(bVar52,bVar99) || CARRY1(bVar52 + bVar99,bVar15);
  iVar54 = CONCAT22((short)((ulonglong)uVar93 >> 0x30),CONCAT11(bVar52 + bVar99 + bVar15,bVar95));
  pbVar51 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_1).
                          typeHierarchy + iVar54 * 2);
  bVar52 = *pbVar51;
  bVar95 = *pbVar51;
  *pbVar51 = bVar95 + bVar98 + bVar97;
  bVar100 = (byte)((ulonglong)uVar93 >> 8);
  bVar15 = CARRY1(in_stack_101,bVar100) ||
           CARRY1(in_stack_101 + bVar100,
                  CARRY1(bVar52,bVar98) || CARRY1(bVar95 + bVar98,bVar97));
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94);
  bVar97 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar15);
  *pbVar51 = *pbVar51 + bVar98 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar54 + 0x58);
  bVar100 = (byte)((uint)unaff_EBX >> 8);
  bVar15 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar97);
  *pbVar51 = *pbVar51 + bVar100 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX);
  bVar97 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar15);
  *pbVar51 = *pbVar51 + bVar96 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x59);
  bVar15 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar97);
  *pbVar51 = *pbVar51 + bVar99 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x33106459);
  bVar95 = (byte)((uint)&stack0xfffffffc >> 8);
  bVar52 = *pbVar51 + bVar95;
  bVar97 = CARRY1(*pbVar51,bVar95) || CARRY1(bVar52,bVar15);
  *pbVar51 = bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x2810645a);
  bVar15 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar97);
  *pbVar51 = *pbVar51 + bVar100 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x02106457);
  bVar52 = (byte)&stack0xfffffffc;
  bVar97 = CARRY1(*pbVar51,bVar52) || CARRY1(*pbVar51 + bVar52,bVar15);
  *pbVar51 = *pbVar51 + bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94);
  bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
  *pbVar51 = *pbVar51 + bVar98 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x5c);
  bVar97 = CARRY1(*pbVar51,bVar52) || CARRY1(*pbVar51 + bVar52,bVar15);
  *pbVar51 = *pbVar51 + bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94);
  bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
  *pbVar51 = *pbVar51 + bVar98 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94 + -0x11ef9ba4);
  bVar97 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar15);
  *pbVar51 = *pbVar51 + bVar98 + bVar15;
  iVar54 = *piVar49;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94);
  bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
  *pbVar51 = *pbVar51 + bVar98 + bVar97;
  bVar52 = (byte)&stack0xfffffffc + bVar98;
  bVar97 = CARRY1((byte)&stack0xfffffffc,bVar98) || CARRY1(bVar52,bVar15);
  bVar52 = bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x0000005a);
  bVar95 = *pbVar51 + bVar52;
  bVar15 = CARRY1(*pbVar51,bVar52) || CARRY1(bVar95,bVar97);
  *pbVar51 = bVar95 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)photonEvent);
  bVar95 = (byte)((uint)&stack0xfffffffc >> 8);
  bVar52 = *pbVar51 + bVar95;
  bVar97 = CARRY1(*pbVar51,bVar95) || CARRY1(bVar52,bVar15);
  *pbVar51 = bVar52 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x2f10645b);
  bVar15 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar97);
  *pbVar51 = *pbVar51 + bVar100 + bVar97;
  uVar39 = *(undefined4 *)(iVar54 + 0x18);
  iVar94 = *(int *)(iVar54 + 0x1c);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94 + 100);
  bVar95 = (byte)*(undefined4 *)(iVar54 + 0x14);
  bVar52 = *pbVar51 + bVar95;
  bVar97 = CARRY1(*pbVar51,bVar95) || CARRY1(bVar52,bVar15);
  *pbVar51 = bVar52 + bVar15;
  pbVar51 = (byte *)(iVar94 + -0x15ef9b9f);
  bVar95 = (byte)uVar39;
  bVar52 = *pbVar51 + bVar95;
  bVar15 = CARRY1(*pbVar51,bVar95) || CARRY1(bVar52,bVar97);
  *pbVar51 = bVar52 + bVar97;
  pbVar102 = *(byte **)(iVar54 + 0x24);
  puVar24 = *(undefined4 **)(iVar54 + 0x28);
  iVar103 = *(int *)(iVar54 + 0x2c);
  uVar39 = *(undefined4 *)(iVar54 + 0x34);
  iVar104 = *(int *)(iVar54 + 0x38);
  iVar94 = *(int *)(iVar54 + 0x3c);
  pbVar105 = *(byte **)(iVar54 + 0x40);
  uVar106 = (short)iVar54 + 0x44;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94 + 0x4a106462);
  bVar100 = (byte)((uint)uVar39 >> 8);
  bVar97 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar15);
  *pbVar51 = *pbVar51 + bVar100 + bVar15;
  puVar107 = (ushort *)(pbVar105 + iVar104 + -0x66);
  sVar108 = (uVar106 & 3) - (*puVar107 & 3);
  *puVar107 = *puVar107 + (ushort)(0 < sVar108) * sVar108;
  puVar107 = (ushort *)(pbVar105 + iVar104 + -0x39);
  sVar108 = (uVar106 & 3) - (*puVar107 & 3);
  *puVar107 = *puVar107 + (ushort)(0 < sVar108) * sVar108;
  puVar107 = (ushort *)(pbVar105 + iVar104 + -0xc);
  sVar108 = (uVar106 & 3) - (*puVar107 & 3);
  *puVar107 = *puVar107 + (ushort)(0 < sVar108) * sVar108;
  puVar107 = (ushort *)(pbVar105 + iVar104 + 0x21);
  sVar108 = (uVar106 & 3) - (*puVar107 & 3);
  *puVar107 = *puVar107 + (ushort)(0 < sVar108) * sVar108;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar24 + 0x19));
  bVar98 = (byte)iVar94;
  bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
  *pbVar51 = *pbVar51 + bVar98 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + 100));
  bVar97 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar15);
  *pbVar51 = *pbVar51 + bVar100 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar103 + 0x13106464);
  bVar95 = (byte)((uint)pbVar105 >> 8);
  bVar15 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar97);
  *pbVar51 = *pbVar51 + bVar95 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar103 + 0x66cd1064);
  bVar97 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar15);
  *pbVar51 = *pbVar51 + bVar100 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + -0x4eef9b99));
  bVar15 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar97);
  *pbVar51 = *pbVar51 + bVar95 + bVar97;
  *(undefined4 *)(iVar54 + 0x40) = 100;
  bVar99 = (byte)iVar104;
  bVar97 = CARRY1(*pbVar102,bVar99) || CARRY1(*pbVar102 + bVar99,bVar15);
  *pbVar102 = *pbVar102 + bVar99 + bVar15;
  uVar109 = (undefined2)iVar104;
  bVar52 = in(uVar109);
  *pbVar102 = bVar52;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + -0x14ef9b94));
  bVar96 = (byte)((uint)iVar94 >> 8);
  bVar15 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar97);
  *pbVar51 = *pbVar51 + bVar96 + bVar97;
  bVar52 = in(uVar109);
  pbVar102[1] = bVar52;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar104 + 0x6e);
  bVar97 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar15);
  *pbVar51 = *pbVar51 + bVar99 + bVar15;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar104 + -0x7cef9b92);
  bVar110 = (byte)((uint)iVar104 >> 8);
  bVar15 = CARRY1(*pbVar51,bVar110) || CARRY1(*pbVar51 + bVar110,bVar97);
  *pbVar51 = *pbVar51 + bVar110 + bVar97;
  out(*puVar24,uVar109);
  bVar97 = CARRY1(bVar100,bVar110) || CARRY1(bVar100 + bVar110,bVar15);
  bVar111 = (byte)uVar39;
  bVar112 = bVar100 + bVar110 + bVar15;
  pbVar113 = (byte *)CONCAT22((short)((uint)uVar39 >> 0x10),CONCAT11(bVar112,bVar111));
  pbVar114 = (byte *)(puVar24 + 2);
  out(puVar24[1],uVar109);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar113 + 0x70));
  bVar15 = CARRY1(*pbVar51,bVar111) || CARRY1(*pbVar51 + bVar111,bVar97);
  *pbVar51 = *pbVar51 + bVar111 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar94 + (int)pbVar114 * 2);
  bVar97 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar15);
  *pbVar51 = *pbVar51 + bVar95 + bVar15;
  bVar52 = bVar98 * '\x02';
  bVar15 = CARRY1(bVar98,bVar98) || CARRY1(bVar52,bVar97);
  bVar100 = bVar52 + bVar97;
  if (SCARRY1(bVar98,bVar98) == SCARRY1(bVar52,bVar97)) {
    bVar97 = CARRY1(*pbVar113,bVar111) || CARRY1(*pbVar113 + bVar111,bVar15);
    *pbVar113 = *pbVar113 + bVar111 + bVar15;
code_?:
    pbVar105[0x2210647e] = pbVar105[0x2210647e] + (char)((uint)pbVar113 >> 8) + bVar97;
    pbVar105[iVar104 + -0x62] = pbVar105[iVar104 + -0x62] & 0x80;
    *(byte *)((int)unaff_FS_OFFSET + (int)pbVar113) =
         *(byte *)((int)unaff_FS_OFFSET + (int)pbVar113) + (char)pbVar113;
    *(uint *)(pbVar105 + iVar104 + -0x4f) = *(uint *)(pbVar105 + iVar104 + -0x4f) & 0x83106482;
    *(uint *)(pbVar105 + iVar104 + -0x5c) = *(uint *)(pbVar105 + iVar104 + -0x5c) & 0xffffff85;
    *(byte *)((int)unaff_FS_OFFSET + (int)pbVar114) =
         *(byte *)((int)unaff_FS_OFFSET + (int)pbVar114) + (char)pbVar105;
code_?:
    LOCK();
    bVar52 = pbVar105[iVar104 + -0x48];
    pbVar105[iVar104 + -0x48] = (byte)((uint)pbVar105 >> 8);
    uVar109 = (undefined2)((uint)pbVar105 >> 0x10);
    UNLOCK();
    LOCK();
    pbVar51 = (byte *)(CONCAT22(uVar109,CONCAT11(bVar52,(char)pbVar105)) + 0x6a + iVar104);
    bVar95 = *pbVar51;
    *pbVar51 = bVar52;
    pbVar105 = (byte *)CONCAT22(uVar109,CONCAT11(bVar95,(char)pbVar105));
    UNLOCK();
  }
  else {
    pbVar51 = (byte *)((int)puVar24 + 0x7a);
    bVar97 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar15);
    *pbVar51 = *pbVar51 + bVar96 + bVar15;
    pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar113);
    bVar52 = *pbVar51;
    bVar98 = *pbVar51 + bVar99;
    bVar15 = CARRY1(bVar98,bVar97);
    bVar115 = CARRY1(bVar52,bVar99) || bVar15;
    *pbVar51 = bVar98 + bVar97;
    bVar98 = (byte)pbVar105;
    if (!CARRY1(bVar52,bVar99) && !bVar15) {
      pbVar113[-0x5bef9b7d] = pbVar113[-0x5bef9b7d] + bVar98 + bVar115;
      goto code_?;
    }
    pbVar51 = pbVar105 + 0x73;
    bVar15 = CARRY1(*pbVar51,bVar111) || CARRY1(*pbVar51 + bVar111,bVar115);
    *pbVar51 = *pbVar51 + bVar111 + bVar115;
    pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar54 + 0xa4 + (int)pbVar114 * 2);
    bVar97 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar15);
    *pbVar51 = *pbVar51 + bVar100 + bVar15;
    bVar52 = bVar111 + bVar96;
    bVar15 = CARRY1(bVar52,bVar97);
    bVar115 = CARRY1(bVar111,bVar96) || bVar15;
    cVar116 = bVar52 + bVar97;
    pbVar113 = (byte *)CONCAT31((int3)((uint)pbVar113 >> 8),cVar116);
    if ((CARRY1(bVar111,bVar96) || bVar15) || cVar116 == '\0') {
      pbVar51 = pbVar105 + 0x38106478;
      bVar15 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar115);
      *pbVar51 = *pbVar51 + bVar99 + bVar115;
      if ((char)*pbVar51 < '\0') {
        bVar97 = CARRY1(*pbVar114,bVar95) || CARRY1(*pbVar114 + bVar95,bVar15);
        *pbVar114 = *pbVar114 + bVar95 + bVar15;
        if ((POPCOUNT(*pbVar114) & 1U) != 0) {
          bVar15 = CARRY1(bVar110,bVar100) || CARRY1(bVar110 + bVar100,bVar97);
          bVar52 = bVar110 + bVar100 + bVar97;
          iVar104 = CONCAT22((short)((uint)iVar104 >> 0x10),CONCAT11(bVar52,bVar99));
          if ((POPCOUNT(bVar52) & 1U) == 0) {
            *(char *)((int)puVar24 + 0x3a106491) =
                 *(char *)((int)puVar24 + 0x3a106491) + cVar116 + bVar15;
            goto code_?;
          }
          pbVar51 = (byte *)((int)puVar24 + 0x83);
          bVar97 = CARRY1(*pbVar51,bVar52) || CARRY1(*pbVar51 + bVar52,bVar15);
          *pbVar51 = *pbVar51 + bVar52 + bVar15;
          pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar105);
          bVar110 = *pbVar51;
          bVar111 = *pbVar51 + bVar95;
          bVar15 = CARRY1(*pbVar51,bVar95) || CARRY1(bVar111,bVar97);
          *pbVar51 = bVar111 + bVar97;
          if ((SCARRY1(bVar110,bVar95) != SCARRY1(bVar111,bVar97)) != (char)*pbVar51 < '\0')
          goto code_?;
          bVar97 = CARRY1(bVar95,bVar52) || CARRY1(bVar95 + bVar52,bVar15);
          pbVar105 = (byte *)CONCAT22((short)((uint)pbVar105 >> 0x10),
                                     CONCAT11(bVar95 + bVar52 + bVar15,bVar98));
          puVar107 = (ushort *)(pbVar105 + iVar104);
          sVar108 = ((short)iVar54 + 0x40U & 3) - (*puVar107 & 3);
          *puVar107 = *puVar107 + (ushort)(0 < sVar108) * sVar108;
          pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar24 + 0x41921));
          bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
          *pbVar51 = *pbVar51 + bVar98 + bVar97;
          pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar105);
          bVar97 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar15);
          *pbVar51 = *pbVar51 + bVar98 + bVar15;
          pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar105);
          bVar15 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar97);
          *pbVar51 = *pbVar51 + bVar98 + bVar97;
          pbVar51 = (byte *)((int)unaff_FS_OFFSET + -0x1ef9b83);
          bVar52 = *pbVar51;
          bVar95 = *pbVar51 + bVar112;
          bVar97 = CARRY1(*pbVar51,bVar112) || CARRY1(bVar95,bVar15);
          *pbVar51 = bVar95 + bVar15;
          if ((SCARRY1(bVar52,bVar112) != SCARRY1(bVar95,bVar15)) == (char)*pbVar51 < '\0') {
            pbVar102[2] = pbVar102[2] + bVar100 + bVar97;
            goto code_?;
          }
          bVar52 = *pbVar113;
          bVar95 = *pbVar113 + bVar96;
          bVar15 = CARRY1(*pbVar113,bVar96) || CARRY1(bVar95,bVar97);
          *pbVar113 = bVar95 + bVar97;
          if (*pbVar113 == 0 ||
              (SCARRY1(bVar52,bVar96) != SCARRY1(bVar95,bVar97)) != (char)*pbVar113 < '\0') {
            bVar97 = CARRY1(*pbVar105,bVar98) || CARRY1(*pbVar105 + bVar98,bVar15);
            *pbVar105 = *pbVar105 + bVar98 + bVar15;
            pbVar105 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar105);
            bVar15 = CARRY1(*pbVar105,bVar98) || CARRY1(*pbVar105 + bVar98,bVar97);
            *pbVar105 = *pbVar105 + bVar98 + bVar97;
            pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar103 + -0x5fef9b6f);
            bVar115 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar15);
            *pbVar51 = *pbVar51 + bVar99 + bVar15;
code_?:
            pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar102 + 0xa106495));
            bVar15 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar115);
            *pbVar51 = *pbVar51 + bVar99 + bVar115;
            pbVar51 = (byte *)((int)unaff_FS_OFFSET + CONCAT31((int3)((uint)iVar94 >> 8),bVar100));
            bVar52 = *pbVar51;
            bVar95 = *pbVar51;
            *pbVar51 = bVar95 + bVar98 + bVar15;
            *(byte *)((int)unaff_FS_OFFSET + (int)(pbVar102 + -0x33ef9b66)) =
                 *(byte *)((int)unaff_FS_OFFSET + (int)(pbVar102 + -0x33ef9b66)) + cVar116 +
                 (CARRY1(bVar52,bVar98) || CARRY1(bVar95 + bVar98,bVar15));
            pcVar117 = (code *)swi(3);
            (*pcVar117)();
            return;
          }
          pbVar51 = pbVar105 + 0x5810647e;
          bVar52 = *pbVar51;
          bVar95 = *pbVar51 + bVar112;
          bVar97 = CARRY1(*pbVar51,bVar112) || CARRY1(bVar95,bVar15);
          *pbVar51 = bVar95 + bVar15;
          if (*pbVar51 == 0 ||
              (SCARRY1(bVar52,bVar112) != SCARRY1(bVar95,bVar15)) != (char)*pbVar51 < '\0') {
            pbVar51 = (byte *)(iVar103 + -0x5fef9b6f);
            bVar115 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar97);
            *pbVar51 = *pbVar51 + bVar99 + bVar97;
            goto code_?;
          }
          goto code_?;
        }
        *pbVar114 = *pbVar114 + bVar95 + bVar97;
      }
      else {
        *pbVar105 = *pbVar105 + bVar112 + bVar15;
      }
    }
    else {
      pbVar105[0x6a106486] = pbVar105[0x6a106486] + bVar112 + bVar115;
    }
  }
  LOCK();
  uVar39 = *(undefined4 *)(pbVar105 + iVar104 + 0x38);
  *(int *)(pbVar105 + iVar104 + 0x38) = iVar54 + 0x40;
  UNLOCK();
  pbVar105[iVar104 + 0x26] = (byte)((uint)pbVar105 >> 8);
  *(undefined4 *)(pbVar105 + iVar104 + -0x62) = uVar39;
  *(undefined4 *)(pbVar105 + iVar104 + 0x3a) = uVar39;
code_?:
  uVar109 = (undefined2)((uint)pbVar105 >> 0x10);
  *(undefined2 *)
   (CONCAT22(uVar109,CONCAT11(*(undefined1 *)
                              (CONCAT22(uVar109,CONCAT11(pbVar105[iVar104 + -0x27],(char)pbVar105)) +
                               0x61 + iVar104),(char)pbVar105)) + 0x1d + iVar104) = in_FS;
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

