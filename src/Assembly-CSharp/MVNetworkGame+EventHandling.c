
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
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    _Var82 = (_union_86)(pWVar16->fields)._.worldObjectClientManager;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_28 = _Var82;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x12,(MethodInfo *)0x0);
    bVar9 = 0;
    if (_Var82.dummy == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0)
    goto code_?;
    if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
      bVar9 = 0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar10->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        piVar14 = (int32_t *)func_?();
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                  ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar14,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    pMVar18 = (MVNetworkGame__Class *)(pDVar17->_0).image;
    if (((pMVar18->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pMVar18->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar19) {
      unaff_ESI = pDVar17;
    }
    bVar13 = 0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      iVar20 = *piVar14;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
      pMVar22 = (pWVar16->fields)._.worldObjectClientManager;
      bVar9 = 0;
      if (pMVar22 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                (pMVar22,iVar20,pDVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x13,(MethodInfo *)0x0);
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    pMVar22 = (pWVar16->fields)._.worldObjectClientManager;
    bVar9 = 0;
    if (pMVar22 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
    MVWorldObjectClientManagerNetwork::
    MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
              (pMVar22,iVar20,pDVar21,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
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
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
    bVar9 = 0;
    if (pEVar23 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) goto code_?;
    bVar24 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
             HashSet_1_System_ByteEnum__Contains
                       ((HashSet_1_System_ByteEnum_ *)pEVar23,eventCode,
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                       );
    if (bVar24 == 0) {
      pSVar25 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
      pSVar25 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unknown_event__,pSVar25,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
    }
    else {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (this->fields).dynamicEventCallbackManager;
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_05 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
      bVar9 = 0;
      if (this_05 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) goto code_?;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            (this_05,eventCode,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                            );
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager !=
          (GameEventManager *)0x0) {
        pGVar26 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
        bVar9 = 0;
        if (pGVar26 == (GameEventManager *)0x0) goto code_?;
        (*(code *)(pGVar26->fields).AvatarCommandsPlayMode)();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      pSVar25 = StringLiteral_No_subscribers_to_event_data;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar25 = StringLiteral_No_subscribers_to_event_data;
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar25,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x2f,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    pMVar27 = (pWVar16->fields)._.worldInventory;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x31,(MethodInfo *)0x0);
    uVar28 = CONCAT44(extraout_EDX,_Stack_28.dummy);
    bVar9 = 0;
    if (pMVar27 == (MVWorldInventory *)0x0) goto code_?;
    pMStack_29 = (MVNetworkGame *)TypeInfo__System__Byte;
    _Var82.dummy = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    if (pOVar10 != (Object *)0x0) {
      uVar28 = func_?();
      _Var82.__klassIndex = (TypeDefinitionIndex)uVar28;
      bVar9 = 0;
      _Stack_28.__klassIndex = _Var82.__klassIndex;
      if (_Var82.dummy == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0)
      goto code_?;
    }
    _Stack_28.__klassIndex = (TypeDefinitionIndex)uVar28;
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    pSVar30 = (String__Class *)TypeInfo__System__Int32;
    if (pIVar11 == pIVar12) {
      puVar31 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar31;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pDVar32 = (pMVar27->fields).runtimePrototypes;
      bVar9 = 0;
      if (pDVar32 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      pRVar33 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar32,(int32_t)unaff_ESI,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      pBVar34 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar34,(Byte__Array *)_Var82.typeHandle,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pRVar33 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                (pRVar33,pBVar34,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    pMVar27 = (pWVar16->fields)._.worldInventory;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x22,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar27 == (MVWorldInventory *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Single->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      uVar35 = func_?();
      uVar28 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),_Stack_28.dummy);
      fVar36 = *(float *)uVar35;
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      pSVar30 = (String__Class *)TypeInfo__System__Int32;
      if (pIVar11 == pIVar12) {
        puVar31 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar31;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar32 = (pMVar27->fields).runtimePrototypes;
        bVar9 = 0;
        if (pDVar32 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
        goto code_?;
        pRVar33 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar32,(int32_t)unaff_ESI,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        bVar9 = 0;
        if (pRVar33 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        (pRVar33->fields).PendingScaleUpdate.hasValue = 0;
        *(undefined3 *)&(pRVar33->fields).PendingScaleUpdate.field_0x1 = 0;
        (pRVar33->fields).PendingScaleUpdate.value = 0.0;
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                  (pRVar33,fVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_AddLink:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_29 = pMVar15;
    if (photonEvent == (EventData *)0x0) goto code_?;
    _Stack_28.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0x39,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x38,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x3a,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnAddLinkEvent(pMStack_29,*piVar14,iVar37,iVar20,(MethodInfo *)0x0)
    ;
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x3a,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
              ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x28,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
              ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_FriendRequest:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x34,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xb,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x35,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
              (pMVar15,iVar20,iVar37,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_FriendUpdate:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x34,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xb,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x36,(MethodInfo *)0x0);
    pFVar38 = (FriendStatus__Enum *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
              (pMVar15,iVar20,iVar37,*pFVar38,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent(pMVar15,*piVar14,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent(pMVar15,*piVar14,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin(pMVar15,iVar20,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar15,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x2f,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent(pMVar15,*piVar14,iVar20,(MethodInfo *)0x0)
    ;
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GameStateChange:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar15->fields)._NetworkGameStateListener_k__BackingField;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    _Stack_28.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0x41,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x43,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x42,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    puVar31 = (undefined4 *)func_?();
    pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar31;
    puVar31 = (undefined4 *)func_?();
    pGVar26 = (GameEventManager *)*puVar31;
    p_Var37 = (_union_86 *)func_?();
    _Stack_28 = *p_Var37;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (unaff_ESI->_0).byval_arg.data = _Stack_28;
    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager = pGVar26;
    (unaff_ESI->_0).namespaze = (char *)pEVar23;
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar15,(MethodInfo *)0x0);
    *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs =
         (Action_1_String_ *)((int)pEVar23 + ((int)pGVar26 - iVar20));
    pAVar39 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
             (unaff_ESI->_0).this_arg.data.array;
    if (pAVar39 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
      pUVar40 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar40,(MethodInfo *)0x0);
      (*(pAVar39->fields)._._.invoke_impl)();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
              ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar41->fields)._._ActorNr_k__BackingField;
    puVar31 = (undefined4 *)func_?();
    if ((Dictionary_2_System_Object_System_Object___Class *)*puVar31 != unaff_ESI) {
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
      _Var82 = (_union_86)(pWVar16->fields)._.worldObjectClientManager;
      _Stack_28 = _Var82;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x46,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (_Var82.dummy == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0)
      goto code_?;
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      piVar14 = (int32_t *)func_?();
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar14,pDVar21,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_29 = pMVar15;
    if (photonEvent == (EventData *)0x0) goto code_?;
    _Stack_28.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0x47,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    pPVar42 = (PickupItemState__Enum *)func_?();
    MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
              (pMStack_29,*pPVar42,iVar37,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x4a,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x4b,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x4c,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    _Stack_28 = (_union_86)*puVar31;
    pfVar43 = (float *)func_?();
    pIVar12 = (Il2CppClass *)*pfVar43;
    pfVar43 = (float *)func_?();
    VStack_8.x = *pfVar43;
    VStack_8.z = (float)_Stack_28;
    VStack_8.y = (float)pIVar12;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x4d,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4e,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x4f,(MethodInfo *)0x0);
    p_Var37 = (_union_86 *)func_?();
    _Stack_28 = (_union_86)p_Var37->dummy;
    puVar31 = (undefined4 *)func_?();
    uVar44 = *puVar31;
    puVar31 = (undefined4 *)func_?();
    _Var82 = _Stack_28;
    uVar45 = *puVar31;
    pMVar15 = (this->fields).networkGame;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    VVar46.y = VStack_8.y;
    VVar46.x = VStack_8.x;
    VVar46.z = VStack_8.z;
    camDir.y = (float)uVar44;
    camDir.x = (float)uVar45;
    camDir.z = (float)_Var82.dummy;
    MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
              (pMVar15,*piVar14,VVar46,camDir,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
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
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x57,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x58,(MethodInfo *)0x0);
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    pMVar47 = (MVGameMsgType__Enum *)func_?();
    MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar47,pDVar21,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_SetTeam:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
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
    piVar14 = (int32_t *)func_?();
    mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar48 = (MVTeam__Enum *)func_?();
    team = *pMVar48;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar15,*piVar14,team,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_29 = pMVar15;
    if (photonEvent == (EventData *)0x0) goto code_?;
    _Stack_28.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0x39,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x38,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x3a,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
              (pMStack_29,*piVar14,iVar37,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x3a,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
              ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
              (pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar15,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xb,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x28,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
              (pMVar15,*piVar14,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xb,(MethodInfo *)0x0);
    func_?();
    pOVar10 = (Object *)func_?();
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x81,(MethodInfo *)0x0);
    p_Var37 = (_union_86 *)func_?();
    _Stack_28 = *p_Var37;
    pOVar49 = (Object *)func_?();
    pSVar25 = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar49,
                         (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor != 0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    pDVar50 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
    pOVar10 = (Object *)func_?();
    bVar9 = 0;
    if (pDVar50 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    puVar31 = (undefined4 *)func_?();
    pMStack_51 = (MVPlayer *)*puVar31;
    uStack_52 = 0;
    pOVar10 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    piVar53 = (int *)func_?();
    pMStack_29 = (MVNetworkGame *)*piVar53;
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar54 = (pMVar15->fields)._PlayerController_k__BackingField;
    _Stack_28.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xfe,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x8d,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar54 == (MVLocalObjectController *)0x0) goto code_?;
    pbVar55 = (byte *)func_?();
    bVar9 = *pbVar55;
    piVar14 = (int32_t *)func_?();
    MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
              (pMVar54,*piVar14,(int32_t)pMStack_51,(int32_t)pMStack_29,(uint)bVar9,
               (MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar31;
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar56,(int32_t)unaff_ESI,(MethodInfo *)0x0);
    if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
       (iVar57 = func_?(), iVar57 != 0)) {
      iVar57 = func_?();
      bVar9 = 0;
      if (iVar57 == 0) goto code_?;
      func_?();
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    pDVar50 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
    pOVar10 = (Object *)func_?();
    bVar9 = 0;
    if (pDVar50 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    p_Var37 = (_union_86 *)func_?();
    _Stack_28 = (_union_86)p_Var37->__klassIndex;
    uStack_52 = 0;
    pOVar10 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    puVar31 = (undefined4 *)func_?();
    pMStack_58 = (MVLocalPlayer *)*puVar31;
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
              (pMVar56,_Stack_28.__klassIndex,(MethodInfo *)0x0);
    pMVar59 = (MVWorldObjectSpawner *)func_?();
    bVar9 = 0;
    if (pMVar59 == (MVWorldObjectSpawner *)0x0) goto code_?;
    pMStack_51 = (MVPlayer *)(pMVar59->fields).spawnWorldObjectID;
    uStack_60 = 3;
    pOVar10 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    puVar31 = (undefined4 *)func_?();
    pDStack_61 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    pMStack_62 = (MVWorldObject *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x3a,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    pMStack_29 = (MVNetworkGame *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x5c,(MethodInfo *)0x0);
    p_Var37 = (_union_86 *)func_?();
    _Stack_28 = (_union_86)p_Var37->__klassIndex;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x23,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    VStack_8.z = (float)*puVar31;
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
              (pWVar16,(int32_t)pMStack_62,0,1,(int32_t)pMStack_51,(int32_t)pDStack_61,
               (int32_t)pMStack_29,_Stack_28.__klassIndex,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMStack_62 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar56,(int32_t)pDStack_61,(MethodInfo *)0x0);
    if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 ==
        (MVWorldObjectClient_CallBackDelegate *)0x0) {
      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
      this_06 = (MVWorldObjectClient_CallBackDelegate *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)this_06,(Object *)object,
                 MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 = this_06;
      func_?();
    }
    bVar9 = 0;
    if (pMStack_62 == (MVWorldObject *)0x0) goto code_?;
    func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar54 = (pMVar15->fields)._PlayerController_k__BackingField;
    pMStack_62 = (MVWorldObject *)
                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0xfe,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x8d,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar54 == (MVLocalObjectController *)0x0) goto code_?;
    pbVar55 = (byte *)func_?();
    bVar9 = *pbVar55;
    piVar14 = (int32_t *)func_?();
    MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
              (pMVar54,*piVar14,(int32_t)pDStack_61,(int32_t)pMStack_58,(uint)bVar9,
               (MethodInfo *)0x0);
    MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar59,(int32_t)VStack_8.z,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_Reward:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x8f,(MethodInfo *)0x0);
    func_?();
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x91,(MethodInfo *)0x0);
    puVar63 = (undefined1 *)func_?();
    uVar64 = *puVar63;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x90,(MethodInfo *)0x0);
    pfVar43 = (float *)func_?();
    pFVar65 = (FieldInfo *)*pfVar43;
    pMStack_58 = (MVLocalPlayer *)func_?();
    uStack_60 = uVar64;
    pOVar10 = (Object *)func_?();
    VStack_8.z = (float)pFVar65;
    pOVar49 = (Object *)func_?();
    pSVar25 = mscorlib.dll::System::String::String_Format_2
                        (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_58,pOVar10
                         ,pOVar49,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar25,(MethodInfo *)0x0)
    ;
    pMVar66 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
    if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
        rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?();
    }
    pIVar12 = (pMVar66->field7_0x1c).rgctx_data[2].klass;
    if (((uint)pIVar12->vtable[0].methodPtr & 0x100) == 0) {
      pIVar12 = (Il2CppClass *)func_?();
    }
    if (pIVar12->cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar12 = (pMVar66->field7_0x1c).rgctx_data[2].klass;
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
  case MVEventCodes__Enum_RuntimeEvent:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar67 = (Byte__Array *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    this_00 = (pWVar16->fields)._.runtimeEventManagerNetwork;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              ((BytePacker *)unaff_ESI,pBVar67,(MethodInfo *)0x0);
    runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                   RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
    bVar9 = 0;
    if (this_00 == (RuntimeEventManagerNetwork *)0x0) goto code_?;
    RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
              (this_00,runtimeEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pWVar16 = (pMVar15->fields).worldNetwork;
    bVar9 = 0;
    if (pWVar16 == (WorldNetwork *)0x0) goto code_?;
    this_01 = (RuntimeEventManager *)(pWVar16->fields)._.runtimeEventManagerNetwork;
    bVar9 = 0;
    if (this_01 == (RuntimeEventManager *)0x0) goto code_?;
    RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x59,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    pMStack_29 = (MVNetworkGame *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x9f,(MethodInfo *)0x0);
    puVar63 = (undefined1 *)func_?();
    _Stack_28.__klassIndex._0_1_ = *puVar63;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa0,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    pDStack_61 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa1,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    pMStack_51 = (MVPlayer *)*puVar31;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa2,(MethodInfo *)0x0);
    pbVar68 = (bool *)func_?();
    bVar24 = *pbVar68;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa3,(MethodInfo *)0x0);
    pcVar69 = (char *)func_?();
    pMVar15 = (this->fields).networkGame;
    if (*pcVar69 == '\0') {
      bVar9 = 0;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      pGVar70 = (pMVar15->fields).gameStatCounterManager;
      bVar9 = 0;
      if (pGVar70 == (GameStatCounterManager *)0x0) goto code_?;
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                (pGVar70,_Stack_28.__klassIndex,iVar20,(MVTeam__Enum)pMStack_29,(int32_t)pDStack_61,
                 (int32_t)pMStack_51,bVar24,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pGVar70 = (pMVar15->fields).gameStatCounterManager;
    bVar9 = 0;
    if (pGVar70 == (GameStatCounterManager *)0x0) goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
              (pGVar70,_Stack_28.__klassIndex,(MVTeam__Enum)pMStack_29,iVar20,(int32_t)pDStack_61,
               (int32_t)pMStack_51,bVar24,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x9e,(MethodInfo *)0x0);
    pBVar67 = (Byte__Array *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pGVar70 = (pMVar15->fields).gameStatCounterManager;
    bVar9 = 0;
    if (pGVar70 == (GameStatCounterManager *)0x0) goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
              (pGVar70,pBVar67,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x16,(MethodInfo *)0x0);
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa5,(MethodInfo *)0x0);
    pBVar34 = (BytePacker *)func_?();
    pMVar66 = (MethodInfo *)0x0;
    pBVar67 = (Byte__Array *)func_?();
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(pBVar34,pBVar67,pMVar66);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
              ((MvAvatarMetaData *)unaff_ESI,pBVar34,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar71 = (pMVar15->fields)._AvatarMetaDataWoMap_k__BackingField;
    bVar9 = 0;
    if (pMVar71 == (MvAvatarMetaDataWoMap *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
              (pMVar71,iVar20,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_LevelChanged:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xa9,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnLevelChanged(pMVar15,*piVar14,iVar20,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xb7,(MethodInfo *)0x0);
    pbVar68 = (bool *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar72 = (pMVar15->fields)._GameCoinManager_k__BackingField;
    bVar9 = 0;
    if (pMVar72 == (MVGameCoinManager *)0x0) goto code_?;
    MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar72,*pbVar68,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_NotificationEvent:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,199,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      pNVar73 = (NotificationType__Enum *)func_?();
      type = *pNVar73;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      }
      else {
        pMVar18 = (MVNetworkGame__Class *)(unaff_ESI->_0).image;
        if (((pMVar18->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pMVar18->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (bVar19) {
          pDVar17 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                (pMVar15,type,(Dictionary_2_System_Object_System_Object_ *)pDVar17,(MethodInfo *)0x0
                );
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,1,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,1,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetItemCategories
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnGetItemCategories(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar34 = (BytePacker *)func_?();
    if (pOVar10 == (Object *)0x0) {
      pBVar67 = (Byte__Array *)0x0;
    }
    else {
      pBVar67 = (Byte__Array *)func_?();
      bVar9 = 0;
      if (pBVar67 == (Byte__Array *)0x0) goto code_?;
    }
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (pBVar34,pBVar67,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x85,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__MV__Common__QueryType->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      puVar63 = (undefined1 *)func_?();
      eventCode._1_3_ = (undefined3)((uint)pBVar34 >> 8);
      eventCode = CONCAT31(eventCode._1_3_,*puVar63);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,100,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar10->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        pbVar68 = (bool *)func_?();
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
        MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                  (pMVar15,pBVar34,eventCode,*pbVar68,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_SetActorReady:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
    uVar28 = CONCAT44(extraout_EDX_00,_Stack_28.dummy);
    bVar9 = 0;
    if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
    iVar57 = (pMVar41->fields)._._ActorNr_k__BackingField;
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    pSVar30 = (String__Class *)TypeInfo__System__Int32;
    if (pIVar11 != pIVar12) goto code_?;
    piVar53 = (int *)func_?();
    if (*piVar53 == iVar57) {
      MVGameControllerBase::MVGameControllerBase_set_JoinState
                (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
      MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      pMVar72 = (pMVar15->fields)._GameCoinManager_k__BackingField;
      bVar9 = 0;
      if (pMVar72 == (MVGameCoinManager *)0x0) goto code_?;
      MVGameCoinManager::MVGameCoinManager_Reset
                (pMVar72,(this->fields).networkGame,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      pMVar75 = (pMVar15->fields).operationRequests;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar75 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pDVar76 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar76,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(pMVar75->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      (*(code *)*(Il2CppMetadataTypeHandle *)
                 &((MVNetworkGame__Class *)(unaff_ESI->_0).image)[1]._0.byval_arg.attrs)();
    }
    uStack_1 = 0;
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar77 = (pMVar15->fields).playerContainer;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      uVar35 = func_?();
      uVar28 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),_Stack_28.dummy);
      bVar24 = *(bool *)uVar35;
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      pSVar30 = (String__Class *)TypeInfo__System__Int32;
      if (pIVar11 == pIVar12) {
        piVar14 = (int32_t *)func_?();
        MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                  (pMVar77,*piVar14,bVar24,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    goto code_?;
  case MVEventCodes__Enum_RequestFriends:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x33,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      pcVar69 = (char *)func_?();
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                  (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,*pcVar69 == '\0',
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
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (bVar19) {
        pDVar17 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)pDVar17,*pcVar69 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x83,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData(pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                (pMVar15,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar74 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar74 = pDVar21;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar74 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
              (pMVar15,pDVar74,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar67 = (Byte__Array *)0x0;
    }
    else {
      pBVar67 = (Byte__Array *)func_?();
      bVar9 = 0;
      if (pBVar67 == (Byte__Array *)0x0) goto code_?;
    }
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              ((BytePacker *)unaff_ESI,pBVar67,(MethodInfo *)0x0);
    pMVar71 = (MvAvatarMetaDataWoMap *)func_?();
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
              (pMVar71,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    (pMVar15->fields)._AvatarMetaDataWoMap_k__BackingField = pMVar71;
    func_?();
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar75 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar75 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pPVar78 = (pMVar75->fields).peer;
    pDVar76 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (pDVar76,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pPVar78 == (PhotonPeer *)0x0) goto code_?;
    (*(code *)(pPVar78->klass->vtable).SendOperation.method)();
    *unaff_FS_OFFSET = pvStack_3;
    return;
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
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    func_?();
    pOVar49 = (Object *)func_?();
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar10,pOVar49,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVGameControllerBase::MVGameControllerBase_PostGameMsg
              (MVGameMsgType__Enum_UserJoined,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI
               ,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
              (pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
              (pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar79 = (pMVar15->fields).logicObjectManagerClientWrapper;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar79 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar79->fields).logicEventQueue;
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
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
    if (photonEvent == (EventData *)0x0) goto code_?;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      this_02 = (Dictionary_2_System_Int32_System_Single_ *)
                ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
      iVar20 = *piVar14;
      bVar9 = 0;
      if (this_02 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
      bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                         (this_02,iVar20,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                         );
      if (bVar24 == 0) {
        pDVar80 = (Dictionary_2_System_Int32_System_Object_ *)
                  ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
        VStack_8.z = (float)func_?();
        System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::
        Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                  ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                  );
        bVar9 = 0;
        if (pDVar80 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  (pDVar80,iVar20,(Object *)VStack_8.z,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                  );
      }
      pDVar80 = (Dictionary_2_System_Int32_System_Object_ *)
                ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
      bVar9 = 0;
      if (pDVar80 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      this_07 = (Queue_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          (pDVar80,iVar20,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                          );
      bVar9 = 0;
      if (this_07 == (Queue_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                (this_07,(Object *)photonEvent,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                );
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar79 = (pMVar15->fields).logicObjectManagerClientWrapper;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar79 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) goto code_?;
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(pMVar79,(MethodInfo *)0x0);
    pAVar81 = (Action_1_String_ *)(pMVar79->fields).updateEvaluatorStep;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pAVar81 == (Action_1_String_ *)0x0) goto code_?;
    ppOVar82 = &(pAVar81->fields)._._.m_target;
    *ppOVar82 = *ppOVar82 + 0x7d;
    goto code_?;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar15->fields).logicObjectManagerClientWrapper;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x23,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    puVar31 = (undefined4 *)func_?();
    pAVar81 = *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pAVar81 == (Action_1_String_ *)0x0) goto code_?;
    (pAVar81->fields)._._.m_target = (Object *)*puVar31;
code_?:
    pvVar83 = (void *)WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (pAVar81->fields)._._.method_ptr = pvVar83;
    (pAVar81->fields)._._.invoke_impl = (void *)0x0;
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar15->fields).logicObjectManagerClientWrapper;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x23,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    piVar53 = (int *)func_?();
    iVar57 = *piVar53;
    pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
    while( true ) {
      bVar9 = 0;
      if (pEVar23 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) goto code_?;
      bVar9 = 0;
      if (pEVar23[1].monitor == (MonitorData *)0x0) goto code_?;
      if (iVar57 <= *(int *)(pEVar23[1].monitor + 0x10)) break;
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
      pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
    }
    goto code_?;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    bVar9 = 0;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) goto code_?;
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar84 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar56,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                         (MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
    bVar9 = pEVar23 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    if (pEVar23 < (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar56,(int32_t)*(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs,
                           (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
    if (pMVar84 != (MVWorldObject *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze ==
          (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar84->fields).id) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0);
        iVar57 = func_?();
        bVar9 = 0;
        if (iVar57 == 0) goto code_?;
        bVar24 = 0x1e;
        pDVar17 = unaff_ESI;
        this_08 = (MVAvatarLocal *)func_?();
        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_08,bVar24,(MethodInfo *)pDVar17);
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
        pMVar54 = (pMVar15->fields)._PlayerController_k__BackingField;
        bVar9 = 0;
        if (pMVar54 == (MVLocalObjectController *)0x0) goto code_?;
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar54,1,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_XPReward:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    pMStack_58 = pMVar41;
    if (photonEvent == (EventData *)0x0) goto code_?;
    VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xdb,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x55,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xd1,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    piVar14 = (int32_t *)func_?();
    iVar37 = *piVar14;
    puVar63 = (undefined1 *)func_?();
    uVar64 = *puVar63;
    piVar14 = (int32_t *)func_?();
    MVLocalPlayer::MVLocalPlayer_AddXp
              (pMStack_58,*piVar14,CONCAT31((int3)((uint)puVar63 >> 8),uVar64),iVar37,iVar20,
               (MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xd0,(MethodInfo *)0x0);
    pbVar68 = (bool *)func_?();
    bVar24 = *pbVar68;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar24;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField != 0)
    {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar66 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar66);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      FirstTimeEventManager::FirstTimeEventManager_Initialize
                ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar25 = (String *)func_?();
      HighlightManager::HighlightManager_Init(pSVar25,method_00);
      profileSettingsState = (ProfileSettingsState *)pOVar10[2].monitor;
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                (profileSettingsState,(MethodInfo *)0x0);
      pGVar85 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xc4,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pGVar85 == (GoldRewardManager *)0x0) goto code_?;
      pbVar68 = (bool *)func_?();
      (pGVar85->fields).isGoldRewardGame = *pbVar68;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xc4,(MethodInfo *)0x0);
      pbVar68 = (bool *)func_?();
      BStack_7.m_value = *pbVar68;
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar25 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
      pSVar25 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral__bool_photonEvent__byte_MVParame,pSVar25,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar25,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_ServerError:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pSVar86 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar25 = (String *)0x0;
    if (pSVar86 == (String *)0x0) {
code_?:
      pSVar25 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar25,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar25,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (pSVar86->klass == TypeInfo__System__String) {
      pSVar25 = pSVar86;
    }
    bVar13 = 0;
    if (pSVar25 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xf5,(MethodInfo *)0x0);
    iVar57 = func_?();
    pMVar66 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pSVar25 = StringLiteral_V;
    bVar9 = 0;
    if (iVar57 == 0) goto code_?;
    pDVar50 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,(Object *)pSVar25,pMVar66);
    pbVar68 = (bool *)func_?();
    bVar24 = *pbVar68;
    pMVar15 = (this->fields).networkGame;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
              (pMVar15,*piVar14,bVar24,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pSVar86 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar25 = (String *)0x0;
    if (pSVar86 != (String *)0x0) {
      if (pSVar86->klass == TypeInfo__System__String) {
        pSVar25 = pSVar86;
      }
      bVar9 = 0;
      photonEvent = (EventData *)0x0;
      if (pSVar25 == (String *)0x0) goto code_?;
    }
    bVar24 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar25,(MethodInfo *)0x0);
    if (bVar24 == 0) {
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar25,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      GamePassesManager::GamePassesManager_set_PlayerPlanetData
                ((PlayerPlanetData *)pOVar10[1].klass,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
           (PlayerTierStateCalculator *)pOVar10[1].monitor;
      goto code_?;
    }
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_01;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_02;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar17,
                           MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                          );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
    GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
              ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar77 = (pMVar15->fields).playerContainer;
    bVar9 = 0;
    if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
    pMVar41 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar77,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
    MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
              (pMVar41,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_03;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_04;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar17,
                           MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                          );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar77 = (pMVar15->fields).playerContainer;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    pMVar87 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar77,*piVar14,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar87 == (MVPlayer *)0x0) goto code_?;
    (pMVar87->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
    func_?();
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_HighScores:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_05;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_06;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pSVar25 = (String *)
              Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
                         MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                        );
    GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
              ((HighScoreDatas *)pSVar25,(MethodInfo *)0x0);
    uVar88 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
    goto joined_?;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_07;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_08;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
                         MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                        );
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pLVar89 = (pMVar15->fields).levelRewardsManager;
    bVar9 = 0;
    if (pLVar89 == (LevelRewardsManager *)0x0) goto code_?;
    LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
              (pLVar89,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,(MethodInfo *)0x0
              );
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_09;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_10;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
                         MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                        );
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pLVar89 = (pMVar15->fields).levelRewardsManager;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    bVar9 = 0;
    if (pLVar89 == (LevelRewardsManager *)0x0) goto code_?;
    LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
              (pLVar89,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_11;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_12;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    message = (PlayerTierStateCalculator *)
              Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
                         MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                        );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
    func_?();
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_13;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_14;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    newProjectEarningReport =
         (ProjectEarningsReport *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   ((String *)pDVar17,
                    MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                   );
    GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
              (newProjectEarningReport,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_TopHighScores:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_15;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_16;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pSVar25 = (String *)
              Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
                         MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                        );
    GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
              ((HighScoreDatas *)pSVar25,(MethodInfo *)0x0);
    uVar88 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
    if (uVar88 == 0) {
code_?:
      func_?();
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar25,(MethodInfo *)0x0)
    ;
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_17;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_18;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pKVar90 = (KogamaVatValues *)
              Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pDVar17,
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
    TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar90;
    func_?();
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_19;
    if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_20;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    pSVar30 = (String__Class *)TypeInfo__System__Int32;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    pVVar91 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                        (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
    VVar46 = *pVVar91;
    pQVar92 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                        ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                         (MethodInfo *)0x0);
    fVar36 = pQVar92->x;
    VStack_8.x = pQVar92->y;
    VStack_8.y = pQVar92->z;
    VStack_8.z = pQVar92->w;
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar77 = (pMVar15->fields).playerContainer;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    pMVar87 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar77,*piVar14,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar87 == (MVPlayer *)0x0) goto code_?;
    this_03 = (pMVar87->fields).spawnRolesManager;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xbf,(MethodInfo *)0x0);
    bVar9 = 0;
    if (this_03 == (SpawnRolesManager *)0x0) goto code_?;
    piVar14 = (int32_t *)func_?();
    rotation.y = VStack_8.x;
    rotation.x = fVar36;
    rotation.z = VStack_8.y;
    rotation.w = VStack_8.z;
    SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
              (this_03,*piVar14,VVar46,rotation,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xf5,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
    ;
    pSVar25 = (String *)func_?();
    spawnRolesRuntimeData =
         (SpawnRolesRuntimeData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (pSVar25,(MethodInfo *)unaff_ESI);
    pUVar40 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar40,(MethodInfo *)0x0);
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (pMVar15->fields).playerContainer;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      pMVar87 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          ((MVPlayerContainer *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar87 == (MVPlayer *)0x0) goto code_?;
      MVPlayer::MVPlayer_SetupSpawnRoleManager
                (pMVar87,(ISpawnRoleChangeHandler *)pUVar40,spawnRolesRuntimeData,(MethodInfo *)0x0)
      ;
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar44 = extraout_EDX_21;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      uVar44 = extraout_EDX_22;
    }
    uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
    pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar17 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar30 = TypeInfo__System__String;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    spawnRoleBodySwitchData =
         (SpawnRoleBodySwitchData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   ((String *)pDVar17,
                    MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                   );
    pMVar56 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar9 = 0;
    if (spawnRoleBodySwitchData == (SpawnRoleBodySwitchData *)0x0) goto code_?;
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar56,(spawnRoleBodySwitchData->fields).spawnRoleCreatorWoId,
                           (MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              (pMVar15,(spawnRoleBodySwitchData->fields).deletedProtoBodyWoId,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              (pMVar15,(spawnRoleBodySwitchData->fields).deletedBodyWoId,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      pbVar68 = (bool *)func_?();
      bVar9 = 0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (bVar19) {
        pDVar17 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (bVar19) {
        pDVar17 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                ((MVAvatarSpawnRoleCreator *)pDVar17,spawnRoleBodySwitchData,*pbVar68,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    pDVar50 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
    pOVar10 = (Object *)func_?();
    bVar9 = 0;
    if (pDVar50 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    piVar14 = (int32_t *)func_?();
    iVar20 = *piVar14;
    uStack_60 = 0;
    pOVar10 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
              (pDVar50,pOVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar15,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar56 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
              (pMVar56,iVar20,(MethodInfo *)0x0);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x23,(MethodInfo *)0x0);
    puVar31 = (undefined4 *)func_?();
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar31;
    iVar57 = func_?();
    bVar9 = 0;
    if (iVar57 == 0) goto code_?;
    pMVar66 = (MethodInfo *)0x0;
    pMVar59 = (MVWorldObjectSpawner *)func_?();
    MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar59,(int32_t)unaff_ESI,pMVar66);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar77 = (pMVar15->fields).playerContainer;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) goto code_?;
    iVar20 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                       (photonEvent,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
    bVar24 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                       (pMVar77,iVar20,&pMStack_6,(MethodInfo *)0x0);
    if (bVar24 == 0) {
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
    puVar93 = (uint8_t *)func_?();
    eventCode = CONCAT31(eventCode._1_3_,*puVar93);
    bVar9 = 0;
    if (pMStack_6 == (MVPlayer *)0x0) goto code_?;
    if ((pMStack_6->fields).playerState != *puVar93) {
      MVPlayer::MVPlayer_set_PlayerState(pMStack_6,eventCode,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
code_?:
    *unaff_FS_OFFSET = pvStack_3;
    return;
  default:
    switch(eventCode & MVEventCodes__Enum_Join) {
    case MVEventCodes__Enum_Handshake:
      bVar9 = 0;
      if (photonEvent == (EventData *)0x0) goto code_?;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      uVar44 = extraout_EDX_23;
      if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
        uVar44 = extraout_EDX_24;
      }
      uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
      pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar17 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar30 = TypeInfo__System__String;
        if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                  SecurityHelper_Encrypt((String *)pDVar17,(MethodInfo *)0x0);
      pMVar75 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar75 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                (pMVar75,(String *)unaff_ESI,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar9 = 0;
      if (photonEvent == (EventData *)0x0) goto code_?;
      this_09 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfb,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this_09 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        if (((this_09->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_09->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar94 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0;
        if (bVar19) {
          pDVar94 = this_09;
        }
        bVar9 = 0;
        this_09 = pDVar94;
        if (pDVar94 ==
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) goto code_?;
      }
      bVar9 = 0;
      if (this_09 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      pMVar66 = (MethodInfo *)&UNK_?;
      this_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_09,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          );
      bVar9 = 0;
      if (this_10 ==
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      pDVar95 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                            *)&stack0xffffff78,
                           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                            *)this_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                          );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)&stack0xffffff88;
      VStack_8.y = 0.0;
      pSVar25 = (String *)pDVar95->_currentValue;
      uStack_1 = 3;
      VStack_8.z = (float)unaff_ESI;
      while (bVar24 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                  *)&stack0xffffff88,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                ), bVar24 != 0) {
        pSVar86 = (String *)0x0;
        if (pSVar25 != (String *)0x0) {
          if (pSVar25->klass == TypeInfo__System__String) {
            pSVar86 = pSVar25;
          }
          bVar9 = 0;
          photonEvent = (EventData *)unaff_ESI;
          if (pSVar86 == (String *)0x0) goto code_?;
        }
        bVar9 = 0;
        if (this_09 ==
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) goto code_?;
        TVar96 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_09,
                            (Object *)pSVar86,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pMVar66 = (MethodInfo *)::StringLiteral___;
        if (TVar96.m_Index == 0) {
          str2 = (String *)0x0;
        }
        else {
          str2 = (String *)func_?();
        }
        pSVar86 = mscorlib.dll::System::String::String_Concat_4
                            (pSVar86,(String *)pMVar66,str2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar86,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)unaff_ESI,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,pMVar66);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    case MVEventCodes__Enum_Leave:
      bVar9 = 0;
      if (photonEvent == (EventData *)0x0) goto code_?;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar10->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        puVar31 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar31;
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
        pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
        if (unaff_ESI ==
            (Dictionary_2_System_Object_System_Object___Class *)
            (pMVar41->fields)._._ActorNr_k__BackingField) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
        pMVar77 = (pMVar15->fields).playerContainer;
        bVar9 = 0;
        if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
        bVar24 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                           (pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        if (bVar24 != 0) {
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
          pMVar77 = (pMVar15->fields).playerContainer;
          bVar9 = 0;
          if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
          pMStack_51 = MVPlayerContainer::MVPlayerContainer_get_Item
                                 (pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          pDStack_61 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (pDStack_61,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          VStack_8.z = (float)func_?();
          pOVar10 = (Object *)func_?();
          bVar9 = 0;
          if (pDStack_61 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_61,(Object *)VStack_8.z,
                     pOVar10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          uStack_60 = 3;
          pOVar10 = (Object *)func_?();
          bVar9 = 0;
          if (pMStack_51 == (MVPlayer *)0x0) goto code_?;
          pUVar97 = (pMStack_51->fields)._UserProfileData_k__BackingField;
          bVar9 = 0;
          if (pUVar97 == (UserProfileData *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_61,pOVar10,
                     (Object *)(pUVar97->fields).UserName,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          uStack_52 = 6;
          VStack_8.z = (float)func_?();
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
          this_04 = (pMVar15->fields)._Friends_k__BackingField;
          bVar9 = 0;
          if (this_04 == (FriendList *)0x0) goto code_?;
          bStack_98 = FriendList::FriendList_IsFriend
                                (this_04,(pMStack_51->fields)._ProfileID_k__BackingField,
                                 (MethodInfo *)0x0);
          pOVar10 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_61,(Object *)VStack_8.z,
                     pOVar10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          MVGameControllerBase::MVGameControllerBase_PostGameMsg
                    (MVGameMsgType__Enum_UserLeft,
                     (Dictionary_2_System_Object_System_Object_ *)pDStack_61,(MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
          pGVar70 = (pMVar15->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar70 == (GameStatCounterManager *)0x0) goto code_?;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                    (pGVar70,(int32_t)unaff_ESI,(pMStack_51->fields)._Team_k__BackingField,
                     (MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
          pGVar70 = (pMVar15->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar70 == (GameStatCounterManager *)0x0) goto code_?;
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                    (pGVar70,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        }
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
        pMVar77 = (pMVar15->fields).playerContainer;
        bVar9 = 0;
        if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
        MVPlayerContainer::MVPlayerContainer_Remove(pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    case MVEventCodes__Enum_Join:
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent == (EventData *)0x0) goto code_?;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar10->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        puVar31 = (undefined4 *)func_?();
        pMStack_62 = (MVWorldObject *)*puVar31;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 == (Object *)0x0) goto code_?;
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar53 = (int *)func_?();
          iVar57 = *piVar53;
          pSVar86 = (String *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x9a,(MethodInfo *)0x0);
          pSVar25 = (String *)0x0;
          if (pSVar86 != (String *)0x0) {
            if (pSVar86->klass == TypeInfo__System__String) {
              pSVar25 = pSVar86;
            }
            bVar9 = 0;
            if (pSVar25 == (String *)0x0) goto code_?;
          }
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pOVar10 == (Object *)0x0) goto code_?;
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
          bVar13 = pIVar11 < pIVar12;
          if (pIVar11 == pIVar12) {
            puVar63 = (undefined1 *)func_?();
            pMStack_58 = (MVLocalPlayer *)CONCAT31(pMStack_58._1_3_,*puVar63);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 == (Object *)0x0) goto code_?;
            pIVar11 = (pOVar10->klass->_0).element_class;
            pIVar12 = (TypeInfo__System__Int32->_0).element_class;
            bVar13 = pIVar11 < pIVar12;
            if (pIVar11 == pIVar12) {
              p_Var37 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var37->dummy;
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              bVar9 = 0;
              if (pOVar10 == (Object *)0x0) goto code_?;
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
              bVar13 = pIVar11 < pIVar12;
              if (pIVar11 == pIVar12) {
                pbVar68 = (bool *)func_?();
                bVar24 = *pbVar68;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                uVar44 = extraout_EDX_25;
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  uVar44 = extraout_EDX_26;
                }
                uVar28 = CONCAT44(uVar44,_Stack_28.dummy);
                pDVar17 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                    pDVar17 = unaff_ESI;
                  }
                  bVar13 = 0;
                  pSVar30 = TypeInfo__System__String;
                  if (pDVar17 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)pDVar17,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar15 = (this->fields).networkGame;
                bVar9 = 0;
                if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
                pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
                bVar9 = 0;
                if (pMVar41 == (MVLocalPlayer *)0x0) goto code_?;
                if (iVar57 != (pMVar41->fields)._._ActorNr_k__BackingField) {
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,iVar57,(int32_t)pMStack_62,pSVar25,
                             (BuildTarget__Enum)pMStack_58,(UserProfileData *)VStack_8.z,0,bVar24,
                             (MethodInfo *)0x0);
                  bVar9 = 0;
                  if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                  (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                  pMVar15 = (this->fields).networkGame;
                  bVar9 = 0;
                  if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
                  pMVar77 = (pMVar15->fields).playerContainer;
                  bVar9 = 0;
                  if (pMVar77 == (MVPlayerContainer *)0x0) goto code_?;
                  MVPlayerContainer::MVPlayerContainer_Add
                            (pMVar77,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Received_join_event_for_localPla,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
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
  uVar28 = CONCAT44(extraout_EDX_27,_Stack_28.dummy);
  pSVar30 = extraout_ECX;
code_?:
  while( true ) {
    _Stack_28.__klassIndex = (TypeDefinitionIndex)uVar28;
    puVar99 = (uint *)((int)((ulonglong)uVar28 >> 0x20) + -0x52);
    bVar9 = *puVar99 < unaff_EBX || *puVar99 - unaff_EBX < (uint)bVar13;
    *puVar99 = (*puVar99 - unaff_EBX) - (uint)bVar13;
    (**(code **)((int)&(pSVar30->_0).implementedInterfaces + 2))();
    func_?();
code_?:
    func_?();
code_?:
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
    uVar35 = func_?();
    if (extraout_ECX_00 != 1) break;
    pbVar55 = (byte *)(in_GS_OFFSET + (int)uVar35 + -0x79);
    bVar13 = *pbVar55;
    *pbVar55 = bVar13 + bVar9;
    pbVar55 = &stack0xffffff83 + in_GS_OFFSET;
    bVar100 = (byte)((ulonglong)uVar35 >> 0x28);
    bVar19 = CARRY1(*pbVar55,bVar100) || CARRY1(*pbVar55 + bVar100,CARRY1(bVar13,bVar9));
    *pbVar55 = *pbVar55 + bVar100 + CARRY1(bVar13,bVar9);
    pbVar55 = (byte *)(in_GS_OFFSET + (int)((ulonglong)uVar35 >> 0x20) + -0x78);
    bVar9 = (byte)((ulonglong)uVar35 >> 0x20);
    bVar101 = CARRY1(*pbVar55,bVar9) || CARRY1(*pbVar55 + bVar9,bVar19);
    *pbVar55 = *pbVar55 + bVar9 + bVar19;
    bVar13 = CARRY1(bVar100,bVar101);
    iVar57 = CONCAT22((short)((ulonglong)uVar35 >> 0x30),CONCAT11(bVar100 + bVar101,bVar9));
    uVar28 = CONCAT44(iVar57,_Stack_28.dummy);
    bVar9 = (byte)((ulonglong)uVar35 >> 8);
    pSVar30 = (String__Class *)0x0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (SCARRY1(bVar100,bVar101)) {
      pbVar55 = &stack0xa51065ca + in_GS_OFFSET;
      bVar100 = *pbVar55;
      bVar102 = *pbVar55 + bVar9;
      cVar103 = CARRY1(*pbVar55,bVar9) || CARRY1(bVar102,bVar13);
      *pbVar55 = bVar102 + bVar13;
      pcVar104 = (code *)swi(4);
      if (SCARRY1(bVar100,bVar9) != SCARRY1(bVar102,bVar13)) {
        (*pcVar104)();
        iVar57 = extraout_EDX_28;
      }
      pcVar69 = (char *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                                ((int)photonEvent + 0x41064d8))->_1).interfaces_count +
                        in_GS_OFFSET + 1);
      *pcVar69 = *pcVar69 + (char)unaff_EBX + cVar103;
      swi(4);
      *(char *)(in_GS_OFFSET + iVar57) = *(char *)(in_GS_OFFSET + iVar57) + (char)(unaff_EBX >> 8);
      return;
    }
  }
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

