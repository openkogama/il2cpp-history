
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
  _Var60 = (_union_86)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar9 != (Object *)0x0)) {
      _Var60 = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar12 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (_union_86)(pWVar12->fields)._.worldObjectClientManager,
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_28 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        unaff_EDI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
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
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar9 != (Object *)0x0)) {
      _Var60 = unaff_EDI;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
         (pMVar17 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar17,unaff_EDI.__klassIndex,pDVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) &&
         (pMVar17 = (pWVar12->fields)._.worldObjectClientManager,
         pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar17,unaff_EDI.__klassIndex,pDVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
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
    unaff_EDI = (_union_86)this;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar18 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      if (pEVar18 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar18,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar19 == 0) {
          pSVar20 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar20,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar20,(MethodInfo *)0x0);
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
          this_07 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
          if ((this_07 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) &&
             (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    (this_07,eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                    ),
             unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager ==
                (GameEventManager *)0x0) {
              pSVar20 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar20 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            pGVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
            if (pGVar21 != (GameEventManager *)0x0) {
              (*(code *)(pGVar21->fields).AvatarCommandsPlayMode)();
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
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar9 != (Object *)0x0)) {
      _Var60 = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar12 != (WorldNetwork *)0x0)) &&
       (pMVar22 = (pWVar12->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      _Var60.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x31,(MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var60.typeHandle;
      if (pMVar22 != (MVWorldInventory *)0x0) {
        _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
        if ((_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (unaff_EDI.dummy = (void *)func_?(), _Stack_28.dummy = unaff_EDI.dummy,
           unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0))
        goto code_?;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMVar22->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar24 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 (int32_t)unaff_ESI,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            this_08 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_08,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pRVar24 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar24,this_08,(MethodInfo *)0x0);
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
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar12 != (WorldNetwork *)0x0)) &&
       (_Var60 = (_union_86)(pWVar12->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      unaff_EDI = _Var60;
      if ((_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar25 = (float *)func_?();
        fVar26 = *pfVar25;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (((Dictionary_2_System_Int32_System_Object_ *)_Var60.type[1].data.typeHandle !=
               (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
             (pRVar24 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                   _Var60.type[1].data.typeHandle,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar24 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar24->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar24->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar24->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar24,fVar26,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar28 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar10,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
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
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar27 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar11,unaff_EDI.__klassIndex,iVar27,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar27 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar29 = (FriendStatus__Enum *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar11,unaff_EDI.__klassIndex,iVar27,*pFVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar11,*piVar10,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar11,*piVar10,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar11,unaff_EDI.__klassIndex,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar11,*piVar10,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar10,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar11->fields)._NetworkGameStateListener_k__BackingField,
       unaff_EDI = (_union_86)photonEvent, photonEvent != (EventData *)0x0)) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        p_Var46 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var46->dummy;
        puVar23 = (undefined4 *)func_?();
        pGVar21 = (GameEventManager *)*puVar23;
        p_Var46 = (_union_86 *)func_?();
        _Stack_28 = *p_Var46;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (unaff_ESI->_0).byval_arg.data = _Stack_28;
        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager = pGVar21;
        (unaff_ESI->_0).namespaze = (char *)unaff_EDI;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar11 != (MVNetworkGame *)0x0) {
          iVar27 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar11,(MethodInfo *)0x0);
          *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs =
               (Action_1_String_ *)((int)unaff_EDI.dummy + ((int)pGVar21 - iVar27));
          pAVar30 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
                   (unaff_ESI->_0).this_arg.data.array;
          if (pAVar30 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
            pUVar31 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar31,(MethodInfo *)0x0);
            (*(pAVar30->fields)._._.invoke_impl)();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
         unaff_EDI = (_union_86)photonEvent, pMVar32 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar32->fields)._._ActorNr_k__BackingField;
        puVar23 = (undefined4 *)func_?();
        if ((Dictionary_2_System_Object_System_Object___Class *)*puVar23 == unaff_ESI)
        goto code_?;
        pMVar11 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = (_union_86)photonEvent,
           pWVar12 != (WorldNetwork *)0x0)) {
          _Var60 = (_union_86)(pWVar12->fields)._.worldObjectClientManager;
          _Stack_28 = _Var60;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          unaff_EDI = (_union_86)photonEvent;
          if (_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar10 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar10,pDVar16,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar28 = *piVar10;
        pPVar33 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar33,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar23;
      pfVar25 = (float *)func_?();
      pIVar34 = (Il2CppClass *)*pfVar25;
      pfVar25 = (float *)func_?();
      VStack_8.x = *pfVar25;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = (float)pIVar34;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var46->dummy;
      puVar23 = (undefined4 *)func_?();
      uVar35 = *puVar23;
      puVar23 = (undefined4 *)func_?();
      _Var60 = _Stack_28;
      uVar36 = *puVar23;
      pMVar11 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        piVar10 = (int32_t *)func_?();
        VVar37.y = VStack_8.y;
        VVar37.x = VStack_8.x;
        VVar37.z = VStack_8.z;
        camDir.y = (float)uVar35;
        camDir.x = (float)uVar36;
        camDir.z = (float)_Var60.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar11,*piVar10,VVar37,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar38 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar38,pDVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = (_union_86)photonEvent;
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
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pMVar39 = (MVTeam__Enum *)func_?();
        team = *pMVar39;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar11,*piVar10,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar28 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar10,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar10,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar9 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_28 = *p_Var46;
      pOVar40 = (Object *)func_?();
      pSVar20 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar9,pOVar40,
                           (MethodInfo *)0x0);
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar42 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar9 = (Object *)func_?();
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar42 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar42,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar23 = (undefined4 *)func_?();
        pMStack_43 = (MVPlayer *)*puVar23;
        uStack_44 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar42,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var46->__klassIndex;
        pMVar11 = (this->fields).networkGame;
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          pMVar45 = (pMVar11->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pMVar45 != (MVLocalObjectController *)0x0) {
            pbVar46 = (byte *)func_?();
            bVar47 = *pbVar46;
            piVar10 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar45,*piVar10,(int32_t)pMStack_43,_Stack_24.__klassIndex,(uint)bVar47,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar11,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pMVar48 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar48,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)TypeInfo__MVAvatar;
        if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (iVar49 = func_?(), iVar49 == 0)) goto code_?;
        iVar49 = func_?();
        if (iVar49 != 0) {
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar9 = (Object *)func_?();
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var46->__klassIndex;
        uStack_44 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_34 = *p_Var46;
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar11,(MethodInfo *)0x0),
           pMVar48 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar48,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          pMVar50 = (MVWorldObjectSpawner *)func_?();
          if (pMVar50 != (MVWorldObjectSpawner *)0x0) {
            pMStack_43 = (MVPlayer *)(pMVar50->fields).spawnWorldObjectID;
            uStack_51 = 3;
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       unaff_EDI.typeHandle,pOVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar23 = (undefined4 *)func_?();
            pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar23;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar23 = (undefined4 *)func_?();
            pMStack_53 = (MVWorldObject *)*puVar23;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x3a,(MethodInfo *)0x0);
            p_Var46 = (_union_86 *)func_?();
            _Stack_24 = (_union_86)p_Var46->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            p_Var46 = (_union_86 *)func_?();
            _Stack_28 = (_union_86)p_Var46->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar23 = (undefined4 *)func_?();
            VStack_8.z = (float)*puVar23;
            pMVar11 = (this->fields).networkGame;
            unaff_EDI = (_union_86)this;
            if ((pMVar11 != (MVNetworkGame *)0x0) &&
               (pWVar12 = (pMVar11->fields).worldNetwork, pWVar12 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar12,(int32_t)pMStack_53,0,1,(int32_t)pMStack_43,(int32_t)pDStack_52,
                         _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar11,(MethodInfo *)0x0),
                 pMVar48 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_53 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar48,(int32_t)pDStack_52,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                unaff_EDI = (_union_86)
                            TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                  unaff_EDI.dummy = (void *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            ((UnityAction_1_System_Object_ *)unaff_EDI.typeHandle,(Object *)object,
                             MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                       (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                  func_?();
                }
                if (pMStack_53 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar11 = (this->fields).networkGame;
                  if (pMVar11 != (MVNetworkGame *)0x0) {
                    pMVar45 = (pMVar11->fields)._PlayerController_k__BackingField;
                    pMStack_53 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (pMVar45 != (MVLocalObjectController *)0x0) {
                      pbVar46 = (byte *)func_?();
                      bVar47 = *pbVar46;
                      piVar10 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar45,*piVar10,(int32_t)pDStack_52,_Stack_34.__klassIndex,
                                 (uint)bVar47,(MethodInfo *)0x0);
                      MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                (pMVar50,(int32_t)VStack_8.z,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      uVar55 = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar25 = (float *)func_?();
      pFVar56 = (FieldInfo *)*pfVar25;
      _Stack_34.dummy = (void *)func_?();
      uStack_51 = uVar55;
      pOVar9 = (Object *)func_?();
      VStack_8.z = (float)pFVar56;
      pOVar40 = (Object *)func_?();
      pSVar20 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar9,pOVar40,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar20,(MethodInfo *)0x0);
      pMVar57 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar34 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar34->vtable[0].methodPtr & 0x100) == 0) {
        pIVar34 = (Il2CppClass *)func_?();
      }
      if (pIVar34->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar34 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar34->vtable[0].methodPtr & 0x100) == 0) {
        pIVar34 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar34->static_fields;
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = unaff_EDI,
         pWVar12 != (WorldNetwork *)0x0)) {
        this_01 = (pWVar12->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (this_01 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_01,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar12 = (pMVar11->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar12 != (WorldNetwork *)0x0)) &&
       (this_02 = (RuntimeEventManager *)(pWVar12->fields)._.runtimeEventManagerNetwork,
       unaff_EDI = unaff_EDI, this_02 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_24 = *p_Var46;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      pMStack_43 = (MVPlayer *)*puVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      bVar19 = *pbVar59;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar60 = (char *)func_?();
      pMVar11 = (this->fields).networkGame;
      if (*pcVar60 == '\0') {
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pGVar61 = (pMVar11->fields).gameStatCounterManager,
           pGVar61 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar61,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                     (int32_t)pDStack_52,(int32_t)pMStack_43,bVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else if ((pMVar11 != (MVNetworkGame *)0x0) &&
              (pGVar61 = (pMVar11->fields).gameStatCounterManager,
              pGVar61 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar61,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                   (int32_t)pDStack_52,(int32_t)pMStack_43,bVar19,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pGVar61 = (pMVar11->fields).gameStatCounterManager, unaff_EDI = unaff_EDI,
         pGVar61 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar61,pBVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar10 = (int32_t *)func_?();
      iVar27 = *piVar10;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pMVar57 = (MethodInfo *)0x0;
      pBVar58 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar58,pMVar57);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI.typeHandle,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (this_03 = (pMVar11->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_03 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_03,iVar27,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar10,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pMVar62 = (pMVar11->fields)._GameCoinManager_k__BackingField, unaff_EDI = unaff_EDI,
         pMVar62 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar62,*pbVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar9 != (Object *)0x0)) {
      _Var60 = unaff_EDI;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      }
      else {
        _Var60 = (_union_86)(unaff_ESI->_0).image;
        if ((*(byte *)(_Var60.__klassIndex + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            ((Il2CppClass_1 *)(_Var60.__klassIndex + 100))->typeHierarchy
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
                  (pMVar11,unaff_EDI.__klassIndex,
                   (Dictionary_2_System_Object_System_Object_ *)pDVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0),
       _Var60.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var60.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar16->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar16->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar15) {
      pDVar63 = pDVar16;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var60.dummy = (void *)func_?();
    if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar58 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var60.typeHandle,pBVar58,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      unaff_EDI.dummy = _Var60.dummy;
      if (pOVar9 != (Object *)0x0) {
        if ((pOVar9->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          unaff_EDI = _Var60;
          goto code_?;
        }
        puVar54 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)_Var60 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar54);
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar59 = (bool *)func_?();
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar11,(BytePacker *)_Var60.typeHandle,eventCode,*pbVar59,(MethodInfo *)0x0)
            ;
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
          unaff_EDI = (_union_86)photonEvent, pMVar32 != (MVLocalPlayer *)0x0)) &&
         (iVar49 = (pMVar32->fields)._._ActorNr_k__BackingField, unaff_EDI = (_union_86)photonEvent,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
        unaff_EDI = (_union_86)photonEvent;
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar64 = (int *)func_?();
        if (*piVar64 == iVar49) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar11 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
          unaff_EDI = (_union_86)photonEvent;
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar62 = (pMVar11->fields)._GameCoinManager_k__BackingField,
             unaff_EDI = (_union_86)photonEvent, pMVar62 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar62,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar11 = (this->fields).networkGame;
            unaff_EDI = (_union_86)photonEvent;
            if (pMVar11 != (MVNetworkGame *)0x0) {
              pMVar65 = (pMVar11->fields).operationRequests;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                this_09 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          (this_09,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            (pMVar65->fields).peer;
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_EDI = (_union_86)photonEvent;
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
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            unaff_EDI = (_union_86)(pMVar11->fields).playerContainer;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if ((unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
               (pOVar9 != (Object *)0x0)) {
              if ((pOVar9->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar59 = (bool *)func_?();
              bVar19 = *pbVar59;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar10 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar10,bVar19,
                             (MethodInfo *)0x0);
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
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    unaff_EDI = _Var60;
    if ((_Var60.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (pOVar9 == (Object *)0x0)) break;
    if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar60 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var60.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,*pcVar60 == '\0',(MethodInfo *)0x0);
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
                ((MVNetworkGame *)_Var60.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)pDVar13,*pcVar60 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    _Var60 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var60;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       _Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var60.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar16->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar16->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar15) {
        pDVar63 = pDVar16;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var60.typeHandle,pDVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xa4,(MethodInfo *)0x0);
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar58 = (Byte__Array *)0x0;
code_?:
      pMVar11 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        (pMVar11->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar9 != (Object *)0x0)) {
      _Var60 = unaff_EDI;
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
    pMVar65 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar66 = (pMVar65->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar66 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar66->klass->vtable).SendOperation.method)();
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
    unaff_EDI.dummy = (void *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar9 = (Object *)func_?();
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (Object *)unaff_EDI.typeHandle,pOVar9,
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pMVar67 = (pMVar11->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if ((pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar67->fields).logicEventQueue, unaff_EDI = unaff_EDI,
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
        unaff_EDI = (_union_86)photonEvent;
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0),
           unaff_EDI = (_union_86)photonEvent, pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar10 = (int32_t *)func_?();
          this_04 = (Dictionary_2_System_Int32_System_Single_ *)
                    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
          iVar27 = *piVar10;
          unaff_EDI = (_union_86)photonEvent;
          if (this_04 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
            bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               (this_04,iVar27,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar19 == 0) {
              pDVar68 = (Dictionary_2_System_Int32_System_Object_ *)
                        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
              VStack_8.z = (float)func_?();
              System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System
              ::Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                        ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              unaff_EDI = (_union_86)photonEvent;
              if (pDVar68 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        (pDVar68,iVar27,(Object *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            pDVar68 = (Dictionary_2_System_Int32_System_Object_ *)
                      ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
            unaff_EDI = (_union_86)photonEvent;
            if ((pDVar68 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
               (this_10 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (pDVar68,iVar27,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), unaff_EDI = (_union_86)photonEvent,
               this_10 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_10,(Object *)photonEvent,
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pMVar67 = (pMVar11->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar67,(MethodInfo *)0x0);
        pAVar69 = (Action_1_String_ *)(pMVar67->fields).updateEvaluatorStep;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pAVar69 != (Action_1_String_ *)0x0) {
          ppOVar70 = &(pAVar69->fields)._._.m_target;
          *ppOVar70 = *ppOVar70 + 0x7d;
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
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar11->fields).logicObjectManagerClientWrapper, unaff_EDI = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      puVar23 = (undefined4 *)func_?();
      pAVar69 = *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pAVar69 != (Action_1_String_ *)0x0) {
        (pAVar69->fields)._._.m_target = (Object *)*puVar23;
code_?:
        pvVar71 = (void *)WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick
                                    (0,(MethodInfo *)0x0);
        (pAVar69->fields)._._.method_ptr = pvVar71;
        (pAVar69->fields)._._.invoke_impl = (void *)0x0;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar11->fields).logicObjectManagerClientWrapper, unaff_EDI = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      p_Var46 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var46->__klassIndex;
      pEVar18 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      while ((pEVar18 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0 &&
             (pEVar18[1].monitor != (MonitorData *)0x0))) {
        if (unaff_EDI.__klassIndex <= *(int *)(pEVar18[1].monitor + 0x10)) goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
        pEVar18 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = (_union_86)this;
    if ((pMVar11 == (MVNetworkGame *)0x0) ||
       (pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar11,(MethodInfo *)0x0),
       unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
        pMVar72 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar48,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar11,(MethodInfo *)0x0);
          if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar48,(int32_t)*(Action_1_String_ **)
                                                     &(unaff_ESI->_0).byval_arg.attrs,
                                   (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar72 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar72->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar49 = func_?();
              if (iVar49 != 0) {
                bVar19 = 0x5e;
                pDVar13 = unaff_ESI;
                this_11 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_11,bVar19,(MethodInfo *)pDVar13);
                pMVar11 = (this->fields).networkGame;
                if ((pMVar11 != (MVNetworkGame *)0x0) &&
                   (pMVar45 = (pMVar11->fields)._PlayerController_k__BackingField,
                   pMVar45 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar45,1,(MethodInfo *)0x0);
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
    unaff_EDI = unaff_EDI;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (unaff_EDI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_34.typeHandle = unaff_EDI.typeHandle, photonEvent != (EventData *)0x0)) {
      VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        piVar10 = (int32_t *)func_?();
        iVar28 = *piVar10;
        puVar54 = (undefined1 *)func_?();
        uVar55 = *puVar54;
        piVar10 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar10,
                   CONCAT31((int3)((uint)puVar54 >> 8),uVar55),iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      bVar19 = *pbVar59;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar19
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
      pMVar57 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar57);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = (_union_86)photonEvent;
      if (pOVar9 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar9[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar20 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar20,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar9[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar73 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)photonEvent;
        if (pGVar73 != (GoldRewardManager *)0x0) {
          pbVar59 = (bool *)func_?();
          (pGVar73->fields).isGoldRewardGame = *pbVar59;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar59 = (bool *)func_?();
          BStack_7.m_value = *pbVar59;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar20 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar20,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar74 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar20 = (String *)0x0;
      if (pSVar74 == (String *)0x0) {
code_?:
        pSVar20 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar20,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar74->klass == TypeInfo__System__String) {
        pSVar20 = pSVar74;
      }
      if (pSVar20 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      _Var60 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var60;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar49 = func_?();
      pMVar57 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar20 = StringLiteral_V;
      unaff_EDI = unaff_EDI;
      if (iVar49 != 0) {
        pDVar42 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar42,(Object *)pSVar20,pMVar57);
        pbVar59 = (bool *)func_?();
        bVar19 = *pbVar59;
        pMVar11 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)pSVar20;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          piVar10 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar11,*piVar10,bVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar74 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar20 = (String *)0x0;
      if (pSVar74 != (String *)0x0) {
        if (pSVar74->klass == TypeInfo__System__String) {
          pSVar20 = pSVar74;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pSVar20 == (String *)0x0) goto code_?;
      }
      bVar19 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
      if (bVar19 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar20,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar9 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar9[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar9[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    unaff_EDI = unaff_EDI;
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
      unaff_EDI = unaff_EDI;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pMVar75 = (pMVar11->fields).playerContainer, unaff_EDI = unaff_EDI,
          pMVar75 != (MVPlayerContainer *)0x0)) &&
         (pMVar32 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar75,(MethodInfo *)0x0),
         unaff_EDI = unaff_EDI, pMVar32 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar32,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_EDI = (_union_86)photonEvent;
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
        unaff_EDI = (_union_86)photonEvent;
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
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar11->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar10 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar10,(MethodInfo *)0x0)
          ;
          if (pMVar76 != (MVPlayer *)0x0) {
            (pMVar76->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    unaff_EDI = unaff_EDI;
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
      pSVar20 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar20,(MethodInfo *)0x0);
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar41 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar20,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    unaff_EDI = unaff_EDI;
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
      unaff_EDI = unaff_EDI;
      if (((pOVar9 != (Object *)0x0) &&
          (pMVar11 = (this->fields).networkGame, unaff_EDI = unaff_EDI,
          pMVar11 != (MVNetworkGame *)0x0)) &&
         (pLVar77 = (pMVar11->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
         pLVar77 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar77,(Dictionary_2_System_Int32_System_Int32_ *)pOVar9[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    unaff_EDI = unaff_EDI;
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
      unaff_EDI = unaff_EDI;
      if (((pMVar11 != (MVNetworkGame *)0x0) &&
          (pLVar77 = (pMVar11->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
          pOVar9 != (Object *)0x0)) &&
         (unaff_EDI = unaff_EDI, pLVar77 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar77,(int32_t)pOVar9[1].klass,(int32_t)pOVar9[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    unaff_EDI = unaff_EDI;
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
code_?:
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    unaff_EDI = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
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
      pSVar20 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar13,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar20,(MethodInfo *)0x0);
      uVar41 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_EDI = unaff_EDI;
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
        pKVar78 = (KogamaVatValues *)
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar78;
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_EDI = unaff_EDI;
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
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar11 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar79 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar37 = *pVVar79;
      pQVar80 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar26 = pQVar80->x;
      VStack_8.x = pQVar80->y;
      VStack_8.y = pQVar80->z;
      VStack_8.z = pQVar80->w;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar11->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar10 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar10,(MethodInfo *)0x0)
          ;
          if (pMVar76 != (MVPlayer *)0x0) {
            this_05 = (pMVar76->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar10 = (int32_t *)func_?();
              rotation.y = VStack_8.x;
              rotation.x = fVar26;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar10,VVar37,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar20 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar20,(MethodInfo *)unaff_ESI);
      pUVar31 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar31,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar11->fields).playerContainer;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)photonEvent;
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (unaff_EDI = (_union_86)photonEvent, pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar10 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar10,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar76 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar76,(ISpawnRoleChangeHandler *)pUVar31,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    unaff_EDI = unaff_EDI;
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
      _Var60.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar13,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar48 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var60.typeHandle;
      if ((_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pMVar48 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar48,_Var60.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar11,_Var60.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar11,(int32_t)_Var60.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar59 = (bool *)func_?();
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
                              ((MVAvatarSpawnRoleCreator *)pDVar13,
                               (SpawnRoleBodySwitchData *)_Var60.typeHandle,*pbVar59,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar9 = (Object *)func_?();
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar10 = (int32_t *)func_?();
        iVar27 = *piVar10;
        uStack_51 = 0;
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar11,(MethodInfo *)0x0),
           pMVar48 != (MVWorldObjectClientManager *)0x0)) {
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar48,iVar27,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          iVar49 = func_?();
          if (iVar49 != 0) {
            pMVar57 = (MethodInfo *)0x0;
            pMVar50 = (MVWorldObjectSpawner *)func_?();
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar50,(int32_t)unaff_ESI,pMVar57);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar11 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (_union_86)(pMVar11->fields).playerContainer,
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
        photonEvent != (EventData *)0x0)) &&
       (iVar27 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      bVar19 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar27,&pMStack_6,
                          (MethodInfo *)0x0);
      if (bVar19 == 0) {
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
      puVar81 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar81);
      if (pMStack_6 != (MVPlayer *)0x0) {
        if ((pMStack_6->fields).playerState != *puVar81) {
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
        pMVar65 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar65,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if (photonEvent != (EventData *)0x0) {
        this_12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (this_12 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var60 = (_union_86)this_12->klass;
          if ((*(byte *)(_Var60.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var60.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          pDVar82 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar15) {
            pDVar82 = this_12;
          }
          this_12 = pDVar82;
          unaff_EDI = _Var60;
          if (pDVar82 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if (this_12 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar57 = (MethodInfo *)&UNK_?;
          this_13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_13 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar83 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_13,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)&stack0xffffff88;
            VStack_8.y = 0.0;
            _Var60 = (_union_86)pDVar83->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI;
            do {
              bVar19 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar19 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar57);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var60.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var60;
                }
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              if (this_12 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar84 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_12,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar57 = (MethodInfo *)::StringLiteral___;
              if (TVar84.m_Index == 0) {
                pSVar20 = (String *)0x0;
              }
              else {
                pSVar20 = (String *)func_?();
              }
              pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)pMVar57,pSVar20,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar20,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar9 != (Object *)0x0)) {
        _Var60 = unaff_EDI;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar23 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
        pMVar11 = (this->fields).networkGame;
        unaff_EDI = (_union_86)this;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
           pMVar32 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI ==
              (Dictionary_2_System_Object_System_Object___Class *)
              (pMVar32->fields)._._ActorNr_k__BackingField) {
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
             (pMVar75 = (pMVar11->fields).playerContainer, pMVar75 != (MVPlayerContainer *)0x0)) {
            bVar19 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar19 == 0) {
code_?:
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar75 = (pMVar11->fields).playerContainer, pMVar75 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar11 = (this->fields).networkGame;
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar75 = (pMVar11->fields).playerContainer, pMVar75 != (MVPlayerContainer *)0x0))
              {
                pMStack_43 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_52,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_8.z = (float)func_?();
                pOVar9 = (Object *)func_?();
                if (pDStack_52 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                             (Object *)VStack_8.z,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_51 = 3;
                  pOVar9 = (Object *)func_?();
                  if ((pMStack_43 != (MVPlayer *)0x0) &&
                     (pUVar85 = (pMStack_43->fields)._UserProfileData_k__BackingField,
                     pUVar85 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,pOVar9,
                               (Object *)(pUVar85->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_44 = 6;
                    VStack_8.z = (float)func_?();
                    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar11 != (MVNetworkGame *)0x0) &&
                       (this_06 = (pMVar11->fields)._Friends_k__BackingField,
                       this_06 != (FriendList *)0x0)) {
                      bStack_86 = FriendList::FriendList_IsFriend
                                            (this_06,(pMStack_43->fields)._ProfileID_k__BackingField
                                             ,(MethodInfo *)0x0);
                      pOVar9 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                 (Object *)VStack_8.z,pOVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                 (MethodInfo *)0x0);
                      pMVar11 = (this->fields).networkGame;
                      if ((pMVar11 != (MVNetworkGame *)0x0) &&
                         (pGVar61 = (pMVar11->fields).gameStatCounterManager,
                         pGVar61 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar61,(int32_t)unaff_ESI,
                                   (pMStack_43->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar11 = (this->fields).networkGame;
                        if ((pMVar11 != (MVNetworkGame *)0x0) &&
                           (pGVar61 = (pMVar11->fields).gameStatCounterManager,
                           pGVar61 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar61,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar9 != (Object *)0x0)) {
        _Var60 = unaff_EDI;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar23 = (undefined4 *)func_?();
        pMStack_53 = (MVWorldObject *)*puVar23;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = unaff_EDI;
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar64 = (int *)func_?();
          iVar49 = *piVar64;
          _Var60.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9a,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (_Var60.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&(_Var60.array)->etype)->image ==
                TypeInfo__System__String) {
              unaff_EDI.typeHandle = _Var60.typeHandle;
            }
            if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          if (pOVar9 != (Object *)0x0) {
            _Var60 = unaff_EDI;
            if ((pOVar9->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar54 = (undefined1 *)func_?();
            _Stack_34.__klassIndex._0_1_ = *puVar54;
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              p_Var46 = (_union_86 *)func_?();
              _Stack_28 = *p_Var46;
              pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              if (pOVar9 != (Object *)0x0) {
                if ((pOVar9->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar59 = (bool *)func_?();
                bVar19 = *pbVar59;
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
                   (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar11,(MethodInfo *)0x0), pMVar32 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar49 == (pMVar32->fields)._._ActorNr_k__BackingField) {
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
                            ((MVPlayer *)unaff_ESI,iVar49,(int32_t)pMStack_53,
                             (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                             (UserProfileData *)VStack_8.z,0,bVar19,(MethodInfo *)0x0);
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                    pMVar11 = (this->fields).networkGame;
                    if ((pMVar11 != (MVNetworkGame *)0x0) &&
                       (pMVar75 = (pMVar11->fields).playerContainer,
                       pMVar75 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar75,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
  _Var60 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  unaff_EDI = _Var60;
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar87 = func_?();
  bVar88 = (byte)extraout_ECX & (byte)((ulonglong)uVar87 >> 0x28);
  uVar89 = CONCAT31((int3)((uint)extraout_ECX >> 8),bVar88);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)uVar87 + -0x4aef9b32);
  cVar90 = CARRY1(*pbVar46,bVar88);
  bVar47 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar88;
  pcVar91 = (code *)swi(4);
  if (SCARRY1(bVar47,bVar88)) {
    uVar87 = (*pcVar91)();
    uVar89 = extraout_ECX_00;
  }
  iVar49 = (int)((ulonglong)uVar87 >> 0x20);
  uVar92 = (uint)uVar87;
  pcVar60 = (char *)((int)unaff_FS_OFFSET + iVar49 + 0x2e1064cf);
  bVar93 = (byte)((ulonglong)uVar87 >> 0x20);
  *pcVar60 = *pcVar60 + bVar93 + cVar90;
  pcVar60 = (char *)((uVar92 - 0x4f) + iVar49);
  *pcVar60 = *pcVar60 << 1;
  pcVar60 = (char *)((uVar92 - 0x1b) + iVar49);
  cVar90 = *pcVar60;
  *pcVar60 = *pcVar60 << 1;
  uVar94 = uVar92 + 0x15e51065 + (uint)(cVar90 < '\0');
  bVar95 = (byte)unaff_EBX;
  uVar96 = (undefined2)((ulonglong)uVar87 >> 0x30);
  bVar97 = (char)((ulonglong)uVar87 >> 0x28) + bVar95 +
           (0xea1aef9a < uVar92 || CARRY4(uVar92 + 0x15e51065,(uint)(cVar90 < '\0')));
  iVar98 = CONCAT22(uVar96,CONCAT11(bVar97,bVar93));
  pcVar60 = (char *)(uVar94 + 0x44 + iVar98);
  *pcVar60 = *pcVar60 << 1;
  piVar64 = (int *)(uVar94 + 0x65 + iVar98);
  iVar49 = *piVar64;
  *piVar64 = *piVar64 << 1;
  pcVar60 = (char *)((uVar94 - 0x1b) + iVar98);
  bVar99 = (byte)uVar89;
  cVar90 = *pcVar60;
  *pcVar60 = *pcVar60 << (bVar99 & 0x1f);
  bVar15 = (uVar89 & 0x1f) == 0;
  uVar92 = (uint)(byte)(bVar15 * (iVar49 < 0) |
                       !bVar15 * ((char)(cVar90 << (bVar99 & 0x1f) - 1) < '\0'));
  bVar15 = 0x2c85ef9a < uVar94 || CARRY4(uVar94 + 0xd37a1065,uVar92);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)unaff_EBX);
  bVar100 = CARRY1(*pbVar46,bVar99) || CARRY1(*pbVar46 + bVar99,bVar15);
  *pbVar46 = *pbVar46 + bVar99 + bVar15;
  pbVar46 = unaff_EBX + -0x2c;
  bVar15 = CARRY1(*pbVar46,bVar95) || CARRY1(*pbVar46 + bVar95,bVar100);
  *pbVar46 = *pbVar46 + bVar95 + bVar100;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EBX + 0x331064d4));
  bVar47 = (byte)(uVar89 >> 8);
  bVar100 = CARRY1(*pbVar46,bVar47) || CARRY1(*pbVar46 + bVar47,bVar15);
  *pbVar46 = *pbVar46 + bVar47 + bVar15;
  pbVar46 = unaff_EBX + 0x281064d5;
  bVar101 = (byte)((uint)unaff_EBX >> 8);
  bVar15 = CARRY1(*pbVar46,bVar101) || CARRY1(*pbVar46 + bVar101,bVar100);
  *pbVar46 = *pbVar46 + bVar101 + bVar100;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x021064d2);
  bVar100 = CARRY1(*pbVar46,bVar93) || CARRY1(*pbVar46 + bVar93,bVar15);
  *pbVar46 = *pbVar46 + bVar93 + bVar15;
  uVar102 = CONCAT31((int3)(uVar94 + 0xd37a1065 + uVar92 >> 8),unaff_EBX[(byte)-bVar15]) & 0xffff00ff
  ;
  bVar103 = bVar47 + bVar100;
  uVar92 = (uint)CARRY1(bVar47,bVar100);
  uVar94 = uVar102 + 0xd7531065;
  bVar15 = 0x28acef9a < uVar102 || CARRY4(uVar94,uVar92);
  uVar94 = uVar94 + uVar92;
  bVar88 = (byte)(uVar94 >> 8);
  bVar47 = bVar103 + bVar88;
  bVar104 = bVar47 + bVar15;
  uVar92 = (uint)(CARRY1(bVar103,bVar88) || CARRY1(bVar47,bVar15));
  bVar15 = 0x287fef9a < uVar94 || CARRY4(uVar94 + 0xd7801065,uVar92);
  uVar92 = uVar94 + 0xd7801065 + uVar92;
  bVar100 = CARRY1(bVar97,bVar104) || CARRY1(bVar97 + bVar104,bVar15);
  bVar103 = bVar97 + bVar104 + bVar15;
  pbVar105 = (byte *)CONCAT22(uVar96,CONCAT11(bVar103,bVar93));
  uVar94 = CONCAT31((int3)(uVar92 >> 8),unaff_EBX[uVar92 & 0xff]);
  bVar88 = (byte)(uVar92 >> 8);
  bVar47 = bVar104 + bVar88;
  iVar49 = CONCAT22((short)(uVar89 >> 0x10),CONCAT11(bVar47 + bVar100,bVar99));
  uVar89 = (uint)(CARRY1(bVar104,bVar88) || CARRY1(bVar47,bVar100));
  bVar15 = 0xef53ef9a < uVar94 || CARRY4((uint)(&UNK_? + uVar94),uVar89);
  puVar106 = &UNK_? + uVar94 + uVar89;
  pbVar46 = (byte *)(in_GS_OFFSET + 0x191064d9);
  bVar100 = CARRY1(*pbVar46,bVar101) || CARRY1(*pbVar46 + bVar101,bVar15);
  *pbVar46 = *pbVar46 + bVar101 + bVar15;
  from_bcd(*(unkbyte10 *)(pbVar105 + (int)(puVar106 + 0x41)));
  from_bcd(*(unkbyte10 *)(pbVar105 + (int)(puVar106 + 0x6b)));
  from_bcd(*(unkbyte10 *)(pbVar105 + (int)(puVar106 + -0x68)));
  from_bcd(*(unkbyte10 *)(pbVar105 + (int)(puVar106 + 6)));
  iVar98 = iVar49 + -1;
  if (iVar98 == 0 || *pbVar46 == 0) {
    pVVar107 = (VirtualInvokeData *)(unaff_EDI.__klassIndex + -0x3fef9b20);
    bVar88 = (byte)((uint)iVar98 >> 8);
    bVar47 = *(char *)&pVVar107->methodPtr + bVar88;
    bVar108 = CARRY1(*(byte *)&pVVar107->methodPtr,bVar88) || CARRY1(bVar47,bVar100);
    *(byte *)&pVVar107->methodPtr = bVar47 + bVar100;
    iVar98 = iVar49 + -2;
    if (iVar98 == 0 || *(char *)&pVVar107->methodPtr != '\0') {
      pbVar46 = unaff_EBX + -0x5bef9b1e;
      bVar15 = CARRY1(*pbVar46,bVar93) || CARRY1(*pbVar46 + bVar93,bVar108);
      *pbVar46 = *pbVar46 + bVar93 + bVar108;
      uVar35 = in(100);
      bVar47 = *pbVar105 + (byte)iVar98;
      bVar100 = CARRY1(*pbVar105,(byte)iVar98) || CARRY1(bVar47,bVar15);
      *pbVar105 = bVar47 + bVar15;
      out(100,uVar35);
      pbVar46 = unaff_EBX + -0x21ef9b19;
      bVar47 = *pbVar46;
      bVar88 = *pbVar46;
      *pbVar46 = bVar88 + bVar95 + bVar100;
      out(100,uVar35);
      *(byte *)&(unaff_EDI.type)->data =
           *(char *)&(unaff_EDI.type)->data + bVar101 +
           (CARRY1(bVar47,bVar95) || CARRY1(bVar88 + bVar95,bVar100));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar46 = puVar106 + -9;
    bVar15 = CARRY1(*pbVar46,bVar103) || CARRY1(*pbVar46 + bVar103,bVar108);
    *pbVar46 = *pbVar46 + bVar103 + bVar108;
  }
  else {
    bVar88 = (byte)((uint)puVar106 >> 8);
    bVar47 = bVar101 + bVar88;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar47 + bVar100,bVar95));
    uVar89 = (uint)(CARRY1(bVar101,bVar88) || CARRY1(bVar47,bVar100));
    bVar15 = (undefined *)0x88fef9a < puVar106 || CARRY4((uint)(puVar106 + -0x88fef9b),uVar89);
    puVar106 = puVar106 + -0x88fef9b + uVar89;
  }
  bVar88 = (byte)((uint)puVar106 >> 8);
  bVar99 = (byte)((uint)iVar98 >> 8);
  bVar47 = bVar99 + bVar88;
  bVar104 = (byte)iVar98;
  bVar103 = bVar47 + bVar15;
  uVar89 = (uint)(CARRY1(bVar99,bVar88) || CARRY1(bVar47,bVar15));
  bVar15 = (undefined *)0xea1aef9a < puVar106 || CARRY4((uint)(puVar106 + 0x15e51065),uVar89);
  puVar106 = puVar106 + 0x15e51065 + uVar89;
  bVar88 = (byte)((uint)puVar106 >> 8);
  bVar47 = bVar103 + bVar88;
  cVar90 = bVar47 + bVar15;
  iVar98 = CONCAT22((short)((uint)iVar98 >> 0x10),CONCAT11(cVar90,bVar104));
  uVar89 = (uint)(CARRY1(bVar103,bVar88) || CARRY1(bVar47,bVar15));
  puVar109 = puVar106 + -0x7d8ef9b + uVar89;
  bVar99 = (char)puVar109 + cVar90 +
           ((undefined *)0x7d8ef9a < puVar106 || CARRY4((uint)(puVar106 + -0x7d8ef9b),uVar89));
  iVar49 = CONCAT31((int3)((uint)puVar109 >> 8),bVar99);
  *(char *)((int)unaff_FS_OFFSET + -0x5def9b07) =
       *(char *)((int)unaff_FS_OFFSET + -0x5def9b07) + bVar93;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + -7));
  bVar15 = CARRY1(*pbVar46,bVar99) || 0xfe < (byte)(*pbVar46 + bVar99);
  *pbVar46 = *pbVar46 + bVar99 + 1;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + 0xc1064f9));
  bVar103 = (byte)((uint)puVar109 >> 8);
  bVar100 = CARRY1(*pbVar46,bVar103) || CARRY1(*pbVar46 + bVar103,bVar15);
  *pbVar46 = *pbVar46 + bVar103 + bVar15;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar49 + 0xb1064fb);
  bVar47 = *pbVar46;
  bVar88 = *pbVar46;
  *pbVar46 = bVar88 + bVar104 + bVar100;
  pcVar60 = (char *)((int)unaff_FS_OFFSET + iVar98 + 0x731064fd);
  *pcVar60 = *pcVar60 + bVar103 + (CARRY1(bVar47,bVar104) || CARRY1(bVar88 + bVar104,bVar100));
  pbVar105[iVar49 + -0x6c] = pbVar105[iVar49 + -0x6c] + 1;
  *(char *)(iVar49 + 0x5a106501) = *(char *)(iVar49 + 0x5a106501) + cVar90;
  bVar47 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX - bVar99;
  pcVar60 = (char *)((int)&(unaff_ESI->_0).image + in_GS_OFFSET);
  *pcVar60 = *pcVar60 + bVar93 + (bVar47 < bVar99);
  uVar89 = CONCAT31((int3)(CONCAT22((short)((uint)puVar109 >> 0x10),
                                    CONCAT11(bVar103 + (char)photonEvent + bVar103,bVar99)) >> 8),
                    bVar99 + 0x65);
  ppMVar110 = &unaff_ESI[0x123fb7].vtable.
             System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo
             .method;
  *(byte *)ppMVar110 = *(char *)ppMVar110 + bVar104 + (0x9a < bVar99);
  pbVar46 = unaff_EBX + in_GS_OFFSET + 6;
  bVar15 = CARRY1(*pbVar46,bVar104) || CARRY1(*pbVar46 + bVar104,0xfa3cef9a < uVar89);
  *pbVar46 = *pbVar46 + bVar104 + (0xfa3cef9a < uVar89);
  pbVar46 = &stack0x35106502 + in_GS_OFFSET;
  bVar47 = *pbVar46;
  bVar99 = (byte)((uint)unaff_EBX >> 8);
  bVar88 = *pbVar46 + bVar99;
  *pbVar46 = bVar88 + bVar15;
  pcVar60 = (char *)((int)&(unaff_EDI.type)->data + in_GS_OFFSET);
  *pcVar60 = *pcVar60 + (char)(uVar89 + 0x5c31065) +
             (CARRY1(bVar47,bVar99) || CARRY1(bVar88,bVar15));
  cVar90 = (char)(uVar89 + 0x5c31065 >> 8);
  if ((byte)((char)photonEvent + bVar103) == '\0' && cVar90 == '\0') {
    pcVar60 = (char *)(in_GS_OFFSET + uVar89 + 0xec320ca + iVar98);
    *pcVar60 = *pcVar60 + cVar90;
  }
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

