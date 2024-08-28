
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
  puStack_4 = &stack0xffffff6c;
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AchievementType);
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__Common__BuildTarget);
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__FriendStatus);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MV__Common__MVEventCodes);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData);
    func_?(&TypeInfo__MV__Common__PlayerGameState);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__MV__Common__QueryType);
    func_?(&TypeInfo__MV__Common__RewardReason);
    func_?(&TypeInfo__MV__Common__RewardType);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SpawnRoleChangeHandlerRemote);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__SubscriberRewardDataManager);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVNetworkGame_EventHandling____c);
    func_?(&StringLiteral_MVEventCodes_JoinNotification);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__bool_photonEvent__byte_MVParame);
    func_?(&StringLiteral_Received_join_event_for_localPla);
    func_?(&StringLiteral_Server_error__);
    func_?(&StringLiteral_Local_player_leave_event);
    func_?(&StringLiteral_Should_probably_be_behind_an_int);
    func_?(&StringLiteral_V);
    func_?(&StringLiteral_attachedObject_GroupId____vehicl);
    func_?(&StringLiteral_Profile_with_ID__0__unlocked_Ach);
    func_?(&StringLiteral_Fast_forward);
    func_?(&StringLiteral_refreshCredentials);
    func_?(&StringLiteral_Could_not_change_player_game_sta);
    func_?(&StringLiteral_Unknown_event__);
    func_?(&StringLiteral_MVEventCodes_XPReceivedEvent);
    func_?(&StringLiteral_Amount__0___rewardReason__1___re);
    func_?(&StringLiteral_FirstTime_Success);
    func_?(&StringLiteral_MVEventCodes_ForceDetachWorldObj);
    func_?(&StringLiteral_vehicle____null);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  _Var50 = (_union_86)photonEvent;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  uStack_9 = 0;
  MStack_10 = MVEventCodes__Enum_NoCodeSet;
  _Stack_48.dummy = (MVNetworkGame *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    _Var50 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((_Var50.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)_Var50.typeHandle,*piVar16,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldObjectClientManager;
        bVar11 = 0;
        unaff_ESI = _Var50;
        unaff_EDI = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0);
          _Var46.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var50.dummy,0x12,(MethodInfo *)0x0);
          bVar11 = 0;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          if (_Var46.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
            bVar11 = 0;
            unaff_ESI = _Var50;
            if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
              pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                         (unaff_EDI.array)->etype)->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pSVar19 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar13 == pIVar14) {
                piVar16 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)eventCode,*piVar16,
                           (Dictionary_2_System_Object_System_Object_ *)_Var50.typeHandle,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pMVar20 = (MVNetworkGame__Class *)((Il2CppClass_0 *)&(_Var46.array)->etype)->image;
          bVar11 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          if (((pMVar20->_1).naturalAligment < bVar11) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar20->_1).typeHierarchy[bVar11 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar21) {
            _Var50.typeHandle = _Var46.typeHandle;
          }
          bVar11 = 0;
          if (_Var50.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
code_?:
          func_?(_Var46.dummy,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          pDVar22 = extraout_EDX_00;
          unaff_ESI = _Var50;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->type;
        pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0x12,(MethodInfo *)0x0);
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar11 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar21) {
            pDVar23 = pDVar22;
          }
          bVar11 = 0;
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pWVar18 = (pMVar17->fields).worldNetwork;
          bVar11 = 0;
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pWVar18 != (WorldNetwork *)0x0) {
            pMVar24 = (pWVar18->fields)._.worldObjectClientManager;
            bVar11 = 0;
            unaff_ESI = (_union_86)
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar24,unaff_EDI.__klassIndex,pDVar23,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->type;
        pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0x13,(MethodInfo *)0x0);
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar11 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar21) {
            pDVar23 = pDVar22;
          }
          bVar11 = 0;
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pWVar18 = (pMVar17->fields).worldNetwork;
          bVar11 = 0;
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pWVar18 != (WorldNetwork *)0x0) {
            pMVar24 = (pWVar18->fields)._.worldObjectClientManager;
            bVar11 = 0;
            unaff_ESI = (_union_86)
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                        (pMVar24,unaff_EDI.__klassIndex,pDVar23,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
    bVar11 = 0;
    unaff_EDI = (_union_86)this;
    if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                       );
        cRam_? = '\x01';
      }
      bVar11 = 0;
      if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs !=
          (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)
                            *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)
                             &unaff_ESI.type[1].attrs,eventCode,
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
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
        bVar11 = 0;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          bVar11 = 0;
          if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)unaff_ESI.type[1].data.typeHandle !=
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)
                                 unaff_ESI.type[1].data.typeHandle,eventCode,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                );
            bVar11 = 0;
            unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pOVar12 != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pOVar27 = pOVar12[1].klass;
              if (pOVar27 != (Object__Class *)0x0) {
                uVar28._0_2_ = (pOVar27->_0).byval_arg.attrs;
                uVar28._2_1_ = (pOVar27->_0).byval_arg.type;
                uVar28._3_1_ = (pOVar27->_0).byval_arg.field_0x7;
                (*(code *)(pOVar27->_0).namespaze)((pOVar27->_0).element_class,photonEvent,uVar28);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pSVar26 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
                pSVar26 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    _Var50 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((_Var50.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)_Var50.typeHandle,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldInventory;
        bVar11 = 0;
        unaff_EDI = _Var50;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var50.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var50.dummy,0x31,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.typeHandle = _Var50.typeHandle;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var50.dummy == (MVNetworkGame *)0x0) {
code_?:
            bVar11 = 0;
            if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
              pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI.array)->etype)->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pSVar19 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar13 != pIVar14) goto code_?;
              p_Var59 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MV__WorldObject__BytePacker);
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              bVar11 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar29 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      (eventCode + MVEventCodes__Enum_RegisterPrototype),
                                     unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          ((BytePacker *)eventCode,(Byte__Array *)unaff_EDI.typeHandle,
                           (MethodInfo *)0x0);
                bVar11 = 0;
                unaff_ESI.dummy = (MVNetworkGame *)0x0;
                if (pRVar29 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar29,(BytePacker *)eventCode,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          bVar11 = 0;
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (MVNetworkGame *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldInventory;
        bVar11 = 0;
        unaff_EDI = _Var50;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0x22,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)eventCode;
          bVar11 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar11 = 0, pOVar12 != (Object *)0x0))
          {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__System__Single->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pIVar15 = (Int32__Class *)TypeInfo__System__Single;
            _Var50.typeHandle = unaff_ESI.typeHandle;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar30;
            bVar11 = 0;
            if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar13 = (((MVNetworkGame__Class *)
                         ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image)->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pSVar19 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar13 != pIVar14) goto code_?;
              p_Var59 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              bVar11 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   ((int)unaff_EDI.generic_class + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar29 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      ((int)unaff_EDI.generic_class +
                                      MVEventCodes__Enum_RegisterPrototype),unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar11 = 0;
                if (pRVar29 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar29->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar29->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar29->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar29,(float)eventCode,(MethodInfo *)0x0);
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
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (_Var50.dummy,0x38,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x3a,(MethodInfo *)0x0);
      _Var50 = (_union_86)eventCode;
      bVar11 = 0;
      unaff_ESI = _Var50;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar11 = 0, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        bVar11 = 0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                     (unaff_EDI.array)->etype)->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pSVar19 = (String__Class *)TypeInfo__System__Int32;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?(unaff_EDI.dummy);
          unaff_EDI = (_union_86)p_Var59->type;
          bVar11 = 0;
          if (_Stack_28.dummy != (MVNetworkGame *)0x0) {
            pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                       (_Stack_28.array)->etype)->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            _Var45 = _Stack_28;
            pSVar19 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar13 == pIVar14) {
              piVar16 = (int32_t *)func_?(_Stack_28.dummy);
              MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                        ((MVNetworkGame *)_Var50.typeHandle,*piVar16,unaff_EDI.__klassIndex,
                         eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        _Var50 = unaff_ESI;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        _Var50 = unaff_ESI;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0xb,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pIVar15 = TypeInfo__System__Int32;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?(pOVar12);
          unaff_EDI = (_union_86)p_Var59->type;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0x35,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pOVar12 != (Object *)0x0) {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pIVar15 = TypeInfo__System__Int32;
            if (pIVar13 != pIVar14) goto code_?;
            piVar16 = (int32_t *)func_?(pOVar12);
            pMVar17 = (this->fields).networkGame;
            bVar11 = 0;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                        (pMVar17,eventCode,unaff_EDI.__klassIndex,*piVar16,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0xb,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pIVar15 = TypeInfo__System__Int32;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?(pOVar12);
          unaff_EDI = (_union_86)p_Var59->type;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0x36,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pOVar12 != (Object *)0x0) {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__MV__Common__FriendStatus->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pIVar15 = (Int32__Class *)TypeInfo__MV__Common__FriendStatus;
            if (pIVar13 != pIVar14) goto code_?;
            pFVar31 = (FriendStatus__Enum *)func_?(pOVar12);
            pMVar17 = (this->fields).networkGame;
            bVar11 = 0;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                        (pMVar17,eventCode,unaff_EDI.__klassIndex,*pFVar31,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->type;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
        piVar16 = (int32_t *)func_?();
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                    (pMVar17,*piVar16,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->type;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar17,*piVar16,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->type;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar17,unaff_EDI.__klassIndex,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar17,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar32 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar16,iVar32,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar17->fields)._NetworkGameStateListener_k__BackingField;
      bVar11 = 0;
      unaff_EDI = _Var50;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var50.typeHandle,0x42,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->type;
          pMVar30 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar30;
          p_Var59 = (_union_86 *)func_?();
          _Stack_28 = *p_Var59;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GameStateChangeEventArgs);
            cRam_? = '\x01';
          }
          unaff_ESI.type[2].data = _Stack_28;
          unaff_ESI.type[1].data.__klassIndex = eventCode;
          *(_union_86 *)&unaff_ESI.type[1].attrs = (Il2CppType *)unaff_EDI;
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            iVar32 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar17,(MethodInfo *)0x0);
            pMVar33 = (MVItemBusinessLogic *)unaff_ESI.type[3].data.__klassIndex;
            *(MVEventCodes__Enum *)&unaff_ESI.type[2].attrs =
                 (int)unaff_EDI.dummy + (eventCode - iVar32);
            if (pMVar33 == (MVItemBusinessLogic *)0x0) goto code_?;
            eventCode = func_?();
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__EventArgs);
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__EventArgs);
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)eventCode,
                       (MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (MVNetworkGame *)0x0;
            if (pMVar33 != (MVItemBusinessLogic *)0x0) {
              (*(code *)pMVar33[1].klass)
                        (pMVar33[2].fields.items,unaff_ESI.dummy,eventCode,pMVar33[1].fields.items);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar34 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar34->fields)._._ActorNr_k__BackingField;
          bVar11 = 0;
          if (unaff_EDI.dummy == (MVNetworkGame *)0x0) break;
          pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                     (unaff_EDI.array)->etype)->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pSVar19 = (String__Class *)TypeInfo__System__Int32;
          if (pIVar13 == pIVar14) {
            pMVar30 = (MVEventCodes__Enum *)func_?();
            if (*pMVar30 == eventCode) goto code_?;
            pMVar17 = (this->fields).networkGame;
            bVar11 = 0;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              pWVar18 = (pMVar17->fields).worldNetwork;
              bVar11 = 0;
              if (pWVar18 != (WorldNetwork *)0x0) {
                eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldObjectClientManager;
                unaff_EDI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var50.dummy,0x16,(MethodInfo *)0x0);
                _Var46.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                               EventData_get_Item(_Var50.dummy,0x46,(MethodInfo *)0x0);
                bVar11 = 0;
                if (eventCode != MVEventCodes__Enum_NoCodeSet) {
                  if (_Var46.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  }
                  else {
                    pMVar20 = (MVNetworkGame__Class *)
                             ((Il2CppClass_0 *)&(_Var46.array)->etype)->image;
                    bVar11 = (
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             ->_1).naturalAligment;
                    if (((pMVar20->_1).naturalAligment < bVar11) ||
                       ((Dictionary_2_System_Object_System_Object___Class *)
                        (pMVar20->_1).typeHierarchy[bVar11 - 1] !=
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       )) {
                      bVar21 = false;
                    }
                    else {
                      bVar21 = true;
                    }
                    _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (bVar21) {
                      _Var50.typeHandle = _Var46.typeHandle;
                    }
                    bVar11 = 0;
                    if (_Var50.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                    goto code_?;
                  }
                  bVar11 = 0;
                  unaff_ESI = _Var50;
                  if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
                    pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                               (unaff_EDI.array)->etype)->_0).element_class;
                    pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    pSVar19 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar13 == pIVar14) {
                      piVar16 = (int32_t *)func_?(unaff_EDI.dummy);
                      MVWorldObjectClientManagerNetwork::
                      MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                                ((MVWorldObjectClientManagerNetwork *)eventCode,*piVar16,
                                 (Dictionary_2_System_Object_System_Object_ *)_Var50.typeHandle,
                                 (MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pvStack_3;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
            }
            break;
          }
code_?:
          func_?(unaff_EDI.dummy,pSVar19);
          _Var46 = extraout_EDX;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar32 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        pPVar36 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar36,iVar35,iVar32,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x4b,(MethodInfo *)0x0);
      pOVar38 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar38,TypeInfo__System__Single);
      _Stack_28 = *p_Var59;
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar37,TypeInfo__System__Single);
      eventCode = *pMVar30;
      pfVar39 = (float *)func_?(pOVar12,TypeInfo__System__Single);
      this_06 = photonEvent;
      VStack_8.x = *pfVar39;
      VStack_8.y = (float)eventCode;
      VStack_8.z = (float)_Stack_28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (this_06,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Stack_28 = *p_Var59;
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      puVar40 = (undefined4 *)func_?();
      uStack_9 = *puVar40;
      MStack_10 = eventCode;
      pMVar17 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = (MVNetworkGame *)0x0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
        camOrigin.y = VStack_8.y;
        camOrigin.x = VStack_8.x;
        camOrigin.z = VStack_8.z;
        camDir.y = (float)MStack_10;
        camDir.x = (float)uStack_9;
        camDir.z = (float)_Stack_48.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar17,*piVar16,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x58,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar37,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar41 = (MVGameMsgType__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar41,pDVar22,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI.type =
           (Il2CppType *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar16 = (int32_t *)func_?();
      pOVar12 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
      this_05 = eventCode;
      bVar11 = 0;
      unaff_EDI.dummy = (MVNetworkGame *)0x0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar42 = (MVTeam__Enum *)func_?(pOVar12,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar42;
        piVar16 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)this_05,*piVar16,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (_Var50.dummy,0x38,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x3a,(MethodInfo *)0x0);
      _Var50 = (_union_86)eventCode;
      bVar11 = 0;
      unaff_ESI = _Var50;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar11 = 0, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        bVar11 = 0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                     (unaff_EDI.array)->etype)->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pSVar19 = (String__Class *)TypeInfo__System__Int32;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?(unaff_EDI.dummy);
          unaff_EDI = (_union_86)p_Var59->type;
          bVar11 = 0;
          if (_Stack_28.dummy != (MVNetworkGame *)0x0) {
            pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                       (_Stack_28.array)->etype)->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            _Var45 = _Stack_28;
            pSVar19 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar13 == pIVar14) {
              piVar16 = (int32_t *)func_?(_Stack_28.dummy);
              MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                        ((MVNetworkGame *)_Var50.typeHandle,*piVar16,unaff_EDI.__klassIndex,
                         eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        _Var50 = unaff_ESI;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar32 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar16,iVar32,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x81,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar37,TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var59;
      pOVar37 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&_Stack_28);
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar12,pOVar37,
                           (MethodInfo *)0x0);
      uVar43 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar43 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar44 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar12,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      unaff_EDI.dummy = (MVNetworkGame *)0x0;
      if (pDVar44 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar44,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar40 = (undefined4 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
        pDStack_46 = (Delegate__Array *)*puVar40;
        uStack_47 = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_47);
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar44,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var59->__klassIndex;
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI.dummy = (MVNetworkGame *)0x0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar48 = (pMVar17->fields)._PlayerController_k__BackingField;
          _Stack_28.dummy =
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (_Var50.dummy,0xfe,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0x8d,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.dummy = (MVNetworkGame *)0x0;
          if (pMVar48 != (MVLocalObjectController *)0x0) {
            pbVar49 = (byte *)func_?(pOVar12,TypeInfo__System__Byte);
            bVar11 = *pbVar49;
            piVar16 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar48,*piVar16,(int32_t)pDStack_46,_Stack_24.__klassIndex,(uint)bVar11,
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
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_ESI = (_union_86)p_Var59->__klassIndex;
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar17,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar50,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
             (iVar51 = func_?(), iVar51 == 0)) goto code_?;
          iVar51 = func_?();
          bVar11 = 0;
          if (iVar51 != 0) {
            uVar52 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatar);
            func_?(0x5a,uVar52);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar12,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
        _Stack_28 = (_union_86)p_Var59->__klassIndex;
        uStack_47 = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_47);
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
        _Stack_34 = *p_Var59;
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
            pMVar53 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar50,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            _Stack_48.dummy = (void *)func_?(pMVar53,TypeInfo__MVWorldObjectSpawnerVehicle)
            ;
            bVar11 = 0;
            if (_Stack_48.dummy != (MVNetworkGame *)0x0) {
              pDStack_46 = *(Delegate__Array **)(_Stack_48.__klassIndex + 0xfc);
              uStack_54 = 3;
              pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_54);
              TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI.typeHandle,pOVar12,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar40 = (undefined4 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
              pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar40;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
              puVar40 = (undefined4 *)func_?(pOVar12,TypeInfo__System__Int32);
              pMStack_56 = (MVWorldObject *)*puVar40;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var50.typeHandle,0x3a,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
              _Stack_24 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var50.typeHandle,0x5c,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var50.typeHandle,0x23,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              VStack_8.z = *(float *)p_Var59;
              pMVar17 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_EDI = (_union_86)this;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pWVar18 = (pMVar17->fields).worldNetwork;
                bVar11 = 0;
                if (pWVar18 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar18,(int32_t)pMStack_56,0,1,(int32_t)pDStack_46,(int32_t)pDStack_55,
                             _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar17 = (this->fields).networkGame;
                  bVar11 = 0;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar17,(MethodInfo *)0x0);
                    bVar11 = 0;
                    if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_56 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar50,(int32_t)pDStack_55,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      unaff_EDI = (_union_86)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI.dummy == (MVNetworkGame *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI.dummy =
                             (void *)func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate
                                                    );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)unaff_EDI.typeHandle,
                                   (Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                        func_?(&TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                         __9__10_0,unaff_EDI.dummy);
                        _Var50 = (_union_86)photonEvent;
                      }
                      bVar11 = 0;
                      unaff_ESI = _Var50;
                      if (pMStack_56 != (MVWorldObject *)0x0) {
                        func_?(0x2c,pMStack_56,unaff_EDI.dummy);
                        pMVar17 = (this->fields).networkGame;
                        bVar11 = 0;
                        if (pMVar17 != (MVNetworkGame *)0x0) {
                          pMVar48 = (pMVar17->fields)._PlayerController_k__BackingField;
                          pMStack_56 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item((EventData *)_Var50.typeHandle,0xfe,
                                                          (MethodInfo *)0x0);
                          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                    EventData_get_Item((EventData *)_Var50.typeHandle,0x8d,
                                                       (MethodInfo *)0x0);
                          bVar11 = 0;
                          unaff_EDI.dummy = (MVNetworkGame *)0x0;
                          if (pMVar48 != (MVLocalObjectController *)0x0) {
                            pbVar49 = (byte *)func_?(pOVar12,TypeInfo__System__Byte);
                            bVar11 = *pbVar49;
                            piVar16 = (int32_t *)func_?(pMStack_56,TypeInfo__System__Int32)
                            ;
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar48,*piVar16,(int32_t)pDStack_55,_Stack_34.__klassIndex,
                                       (uint)bVar11,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      ((MVWorldObjectSpawner *)_Stack_48.typeHandle,
                                       (int32_t)VStack_8.z,(MethodInfo *)0x0);
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
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      _Var46 = *p_Var59;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x90,(MethodInfo *)0x0);
      pfVar39 = (float *)func_?(pOVar12,TypeInfo__MV__Common__RewardType);
      fVar57 = *pfVar39;
      _Stack_48 = _Var46;
      _Stack_34.dummy = (void *)func_?(TypeInfo__System__Int32,&_Stack_48);
      uStack_54 = eventCode._3_1_;
      pOVar12 = (Object *)func_?();
      VStack_8.z = fVar57;
      pOVar37 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar12,pOVar37,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      pMVar58 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar14 = (pMVar58->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar14->vtable[0].methodPtr & 0x100) == 0) {
        pIVar14 = (Il2CppClass *)func_?();
      }
      if (pIVar14->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar14 = (pMVar58->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar14->vtable[0].methodPtr & 0x100) == 0) {
        pIVar14 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar14->static_fields;
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar12,TypeInfo__System__Byte);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar17->fields).worldNetwork;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar18 != (WorldNetwork *)0x0) {
          this_00 = (pWVar18->fields)._.runtimeEventManagerNetwork;
          unaff_ESI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI.typeHandle,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.dummy = (MVNetworkGame *)0x0;
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
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        this_01 = (RuntimeEventManager *)(pWVar18->fields)._.runtimeEventManagerNetwork;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (this_01 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x59,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      _Stack_24 = *p_Var59;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa0,(MethodInfo *)0x0);
      puVar40 = (undefined4 *)func_?();
      pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar40;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa1,(MethodInfo *)0x0);
      puVar40 = (undefined4 *)func_?();
      pDStack_46 = (Delegate__Array *)*puVar40;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa3,(MethodInfo *)0x0);
      pcVar59 = (char *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (*pcVar59 == '\0') {
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pGVar60 = (pMVar17->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar60 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar60,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_55,(int32_t)pDStack_46,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pGVar60 = (pMVar17->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar60 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar60,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_55,(int32_t)pDStack_46,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar61 = (Byte__Array *)func_?(pOVar12,TypeInfo__System__Byte);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pGVar60 = (pMVar17->fields).gameStatCounterManager;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar60 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar60,pBVar61,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pMVar58 = (MethodInfo *)0x0;
      pBVar61 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar61,pMVar58);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        this_02 = (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar11 = 0;
        if (this_02 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_02,eventCode,(MvAvatarMetaData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var50.typeHandle,0xa9,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar32 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar16,iVar32,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?(pOVar12,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar62);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar63 = (pMVar17->fields)._GameCoinManager_k__BackingField;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar63 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar63,*pbVar62,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->type;
        pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,200,(MethodInfo *)0x0);
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar11 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar21) {
            pDVar23 = pDVar22;
          }
          bVar11 = 0;
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar17,unaff_EDI.__klassIndex,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x5d,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
code_?:
        func_?(pDVar22,unaff_ESI.dummy);
        pSVar19 = extraout_ECX_00;
code_?:
        func_?(unaff_ESI.dummy,pSVar19);
        _Var50 = unaff_EDI;
code_?:
        unaff_EDI = _Var50;
        func_?(unaff_EDI.dummy,_Stack_24.dummy);
        _Var45 = extraout_ECX_01;
        pSVar19 = extraout_EDX_01;
        _Var50 = unaff_ESI;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var50;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar17,(EventData *)_Var50.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
    _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
    if (unaff_EDI.dummy == (MVNetworkGame *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      unaff_EDI = (_union_86)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar61,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var50.typeHandle,0x85,(MethodInfo *)0x0);
      bVar11 = 0;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if (pIVar13 != pIVar14) {
code_?:
          func_?(pOVar12,pIVar15);
          pSVar19 = extraout_ECX;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?(pOVar12);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,100,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pIVar15 = (Int32__Class *)TypeInfo__System__Boolean;
          if (pIVar13 != pIVar14) goto code_?;
          pbVar62 = (bool *)func_?(pOVar12);
          pMVar17 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar17,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar62,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?(unaff_EDI.dummy,TypeInfo__System__Byte);
    bVar11 = 0;
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar34 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar34->fields)._._ActorNr_k__BackingField;
          bVar11 = 0;
          if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pIVar13 = (((MVNetworkGame__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image)
                      ->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pSVar19 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            if (*pMVar30 == eventCode) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar17 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_ESI = (_union_86)this;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pMVar63 = (pMVar17->fields)._GameCoinManager_k__BackingField;
                bVar11 = 0;
                unaff_ESI = (_union_86)this;
                if (pMVar63 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset(pMVar63,pMVar17,(MethodInfo *)0x0);
                  pMVar17 = (this->fields).networkGame;
                  bVar11 = 0;
                  unaff_ESI = (_union_86)this;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar64 = (pMVar17->fields).operationRequests;
                    bVar11 = 0;
                    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (pMVar64 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                       );
                        func_?(&
                                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                        cRam_? = '\x01';
                      }
                      _Stack_48.dummy =
                           (void *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                                  );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                ((Dictionary_2_System_Byte_System_Object_ *)_Stack_48.typeHandle,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (_union_86)(pMVar64->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      pSVar65 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      eventCode._0_1_ = (pSVar65->SendReliable).Encrypt;
                      eventCode._1_1_ = (pSVar65->SendReliable).Channel;
                      eventCode._2_2_ = *(undefined2 *)&(pSVar65->SendReliable).field_0x6;
                      bVar11 = 0;
                      if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0
                         ) {
                        pMVar20 = (MVNetworkGame__Class *)
                                 ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
                        (**(code **)&pMVar20[1]._0.byval_arg.attrs)
                                  (unaff_ESI.dummy,0x66,_Stack_48.dummy,
                                   (pSVar65->SendReliable).DeliveryMode,eventCode,
                                   pMVar20[1]._0.this_arg.data.dummy);
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
              pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar11 = 0;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                eventCode = (MVEventCodes__Enum)(pMVar17->fields).playerContainer;
                unaff_ESI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var50.dummy,0xfe,(MethodInfo *)0x0);
                _Var45.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                               EventData_get_Item(_Var50.dummy,0xd0,(MethodInfo *)0x0);
                unaff_EDI = (_union_86)eventCode;
                bVar11 = 0;
                if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
                   (bVar11 = 0, _Var45.dummy != (MVNetworkGame *)0x0)) {
                  pIVar13 = (((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                             (_Var45.array)->etype)->_0).element_class;
                  pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  pSVar19 = (String__Class *)TypeInfo__System__Boolean;
                  _Var50.typeHandle = unaff_ESI.typeHandle;
                  if (pIVar13 != pIVar14) goto code_?;
                  puVar5 = (undefined1 *)func_?(_Var45.dummy);
                  eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
                  bVar11 = 0;
                  if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    pIVar13 = (((MVNetworkGame__Class *)
                               ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image)->_0).
                              element_class;
                    pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    pSVar19 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar13 == pIVar14) {
                      piVar16 = (int32_t *)func_?(unaff_ESI.dummy);
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar16,(bool)eventCode,
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
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var50.typeHandle,7,(MethodInfo *)0x0);
    unaff_EDI = (_union_86)eventCode;
    bVar11 = 0;
    if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (bVar11 = 0, pOVar12 == (Object *)0x0))
    break;
    pIVar13 = (pOVar12->klass->_0).element_class;
    pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
    bVar11 = pIVar13 < pIVar14;
    pIVar15 = (Int32__Class *)TypeInfo__System__Boolean;
    _Var50.typeHandle = unaff_ESI.typeHandle;
    if (pIVar13 != pIVar14) goto code_?;
    pcVar59 = (char *)func_?();
    bVar21 = *pcVar59 == '\0';
    eventCode = CONCAT31(eventCode._1_3_,bVar21);
    if (unaff_ESI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,bVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    pMVar20 = (MVNetworkGame__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
    bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if (((pMVar20->_1).naturalAligment < bVar11) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(pMVar20->_1).typeHierarchy[bVar11 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar66 = false;
    }
    else {
      bVar66 = true;
    }
    _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar66) {
      _Var50.typeHandle = unaff_ESI.typeHandle;
    }
    bVar11 = 0;
    if (_Var50.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)_Var50.typeHandle,bVar21,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar22->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar22->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pDVar23 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar21) {
          pDVar23 = pDVar22;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar23 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (pOVar12 == (Object *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI.typeHandle,pBVar61,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI.typeHandle,
                 (MethodInfo *)0x0);
      bVar11 = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        ((_union_86 *)(eventCode + 0x9c))->type = (Il2CppType *)unaff_EDI;
        func_?((_union_86 *)(eventCode + 0x9c),unaff_EDI.dummy);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?();
    bVar11 = 0;
    unaff_EDI.dummy = (MVNetworkGame *)0x0;
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pIVar15 = TypeInfo__System__Int32;
        _Var50 = unaff_ESI;
        if (pIVar13 == pIVar14) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar64 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar11 = 0;
    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar64 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        cRam_? = '\x01';
      }
      pPVar67 = (pMVar64->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar65 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar52._0_1_ = (pSVar65->SendReliable).Encrypt;
      uVar52._1_1_ = (pSVar65->SendReliable).Channel;
      uVar52._2_2_ = *(undefined2 *)&(pSVar65->SendReliable).field_0x6;
      bVar11 = 0;
      unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar67 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar67->klass->vtable).SendOperation.method)
                  (pPVar67,0x3c,unaff_EDI.dummy,(pSVar65->SendReliable).DeliveryMode,uVar52,
                   pPVar67->klass[1]._0.image);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI.dummy =
         (void *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI.typeHandle,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI.dummy = (void *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
      _Stack_48 = (_union_86)p_Var59->dummy;
      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
      bVar11 = 0;
      if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (Object *)unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (_union_86)(pMVar68->fields).logicEventQueue;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                           );
            func_?(&TypeInfo__System__Int32);
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                           );
            cRam_? = '\x01';
          }
          unaff_EDI = (_union_86)photonEvent;
          bVar11 = 0;
          if (photonEvent != (EventData *)0x0) {
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pIVar15 = TypeInfo__System__Int32;
              _Var50 = unaff_ESI;
              if (pIVar13 != pIVar14) goto code_?;
              pMVar30 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar30;
              bVar11 = 0;
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                  unaff_ESI.type[1].data.typeHandle !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)
                                    unaff_ESI.type[1].data.typeHandle,eventCode,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar25 == 0) {
                  _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
                  VStack_8.z = (float)func_?(
                                                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                                  );
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar11 = 0;
                  if (_Stack_48.dummy == (MVNetworkGame *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,
                             eventCode,(Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                bVar11 = 0;
                if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                    unaff_ESI.type[1].data.typeHandle !=
                    (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                  this_07 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)
                                       unaff_ESI.type[1].data.typeHandle,eventCode,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar11 = 0;
                  if (this_07 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_07,(Object *)unaff_EDI.typeHandle,
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
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar68,(MethodInfo *)0x0);
        pMVar69 = (pMVar68->fields).updateEvaluatorStep;
        bVar11 = 0;
        unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar69 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar16 = &(pMVar69->fields).stepTimestamp;
          *piVar16 = *piVar16 + 1000;
code_?:
          iVar32 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar69->fields).lastUpdateTick = iVar32;
          (pMVar69->fields).accumulatedTime = 0;
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar17->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar69 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
          bVar11 = 0;
          unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar69 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar69->fields).stepTimestamp = *piVar16;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar17->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->type;
          pEVar70 = *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs;
          while (bVar11 = 0, pEVar70 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pMVar71 = (pEVar70->fields)._._.method_info;
            bVar11 = 0;
            if (pMVar71 == (MethodInfo_1 *)0x0) break;
            if (unaff_EDI.__klassIndex <= (int)pMVar71[2].klass) goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                       (MethodInfo *)0x0);
            pEVar70 = *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI.dummy = (void *)func_?(pOVar12,TypeInfo__System__Int32);
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = (_union_86)this;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar17,(MethodInfo *)0x0);
    bVar11 = 0;
    if (unaff_ESI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar11 = 0;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar11 = 0;
      if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar50,(int32_t)unaff_ESI.type[2].data.__klassIndex,
                               (MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          bVar11 = *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs ==
                   (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          bVar11 = 0;
          if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
            iVar32._0_2_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->attrs;
            iVar32._2_1_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->type;
            iVar32._3_1_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar50,iVar32,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) {
code_?:
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar11 = 0;
            if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_ESI.type[1].attrs !=
                  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype)) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar51 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal);
              bVar11 = 0;
              if (iVar51 != 0) {
                bVar25 = 0xc0;
                _Var50.typeHandle = unaff_ESI.typeHandle;
                this_08 = (MVAvatarLocal *)
                          func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_08,bVar25,(MethodInfo *)_Var50.typeHandle);
                pMVar17 = (this->fields).networkGame;
                bVar11 = 0;
                if (pMVar17 != (MVNetworkGame *)0x0) {
                  pMVar48 = (pMVar17->fields)._PlayerController_k__BackingField;
                  bVar11 = 0;
                  if (pMVar48 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar48,1,(MethodInfo *)0x0);
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
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
      unaff_ESI = (_union_86)photonEvent;
      bVar11 = 0;
      _Stack_34.typeHandle = unaff_EDI.typeHandle;
      if (photonEvent != (EventData *)0x0) {
        VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        _Stack_48.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (unaff_ESI.dummy,0xdb,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI.typeHandle,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)unaff_ESI.typeHandle,0xd1,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          piVar16 = (int32_t *)func_?();
          iVar32 = *piVar16;
          piVar16 = (int32_t *)func_?();
          iVar35 = *piVar16;
          puVar5 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          piVar16 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar16,eventCode,iVar35,iVar32,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Boolean);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__FirstTimeEventManager);
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField =
           eventCode._3_1_;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__FirstTimeEventManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField == 0
         ) goto code_?;
      unaff_EDI.dummy =
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (_Var50.dummy,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      _Var46.dummy = (MVNetworkGame *)0x0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if ((String__Class *)(unaff_EDI.array)->etype == TypeInfo__System__String) {
          _Var46.typeHandle = unaff_EDI.typeHandle;
        }
        bVar11 = 0;
        pSVar19 = TypeInfo__System__String;
        if (_Var46.dummy == (MVNetworkGame *)0x0) goto code_?;
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var46.typeHandle,
                           MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
                          );
      eventCode = (MVEventCodes__Enum)pOVar12;
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = (MVNetworkGame *)0x0;
      if (pOVar12 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar12[1].monitor,(MethodInfo *)0x0);
        unaff_EDI.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (_Var50.dummy,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__HighlightManager);
        }
        _Var46.dummy = (MVNetworkGame *)0x0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          if ((String__Class *)(unaff_EDI.array)->etype == TypeInfo__System__String) {
            _Var46.typeHandle = unaff_EDI.typeHandle;
          }
          bVar11 = 0;
          pSVar19 = TypeInfo__System__String;
          if (_Var46.dummy == (MVNetworkGame *)0x0) goto code_?;
        }
        HighlightManager::HighlightManager_Init((String *)_Var46.typeHandle,(MethodInfo *)0x0);
        profileSettingsState =
             *(ProfileSettingsState **)(eventCode + MVEventCodes__Enum_TriggerBoxStayBegin);
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var50.typeHandle,0xc4,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI.dummy = (MVNetworkGame *)0x0;
        if (pGVar72 != (GoldRewardManager *)0x0) {
          pbVar62 = (bool *)func_?();
          (pGVar72->fields).isGoldRewardGame = *pbVar62;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)_Var50.typeHandle,0xc4,(MethodInfo *)0x0);
          pbVar62 = (bool *)func_?();
          BStack_7.m_value = *pbVar62;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar26 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar26,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Var45.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      _Var46.dummy = (MVNetworkGame *)0x0;
      if (_Var45.dummy == (MVNetworkGame *)0x0) {
code_?:
        pSVar26 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,(String *)_Var46.typeHandle,
                             (MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(_Var45.array)->etype == TypeInfo__System__String) {
        _Var46.typeHandle = _Var45.typeHandle;
      }
      bVar11 = 0;
      pSVar19 = TypeInfo__System__String;
      _Var50 = unaff_ESI;
      if (_Var46.dummy != (MVNetworkGame *)0x0) goto code_?;
code_?:
      func_?(_Var45.dummy,pSVar19);
      unaff_ESI = _Var50;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar51 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pSVar26 = StringLiteral_V;
      pMVar58 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar51 != 0) {
        pDVar44 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar44,(Object *)pSVar26,pMVar58);
        puVar5 = (undefined1 *)func_?(TVar45.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar17 = (this->fields).networkGame;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)pSVar26;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar17,*piVar16,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)func_?(pOVar12,TypeInfo__System__String);
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar25 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar11 = 0;
      unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar12[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar12[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar58);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar73 = (pMVar17->fields).playerContainer;
        bVar11 = 0;
        if (pMVar73 != (MVPlayerContainer *)0x0) {
          pMVar34 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar73,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar34 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar34,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar58);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar17->fields).playerContainer;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)eventCode;
        bVar11 = 0;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
          pMVar74 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar16,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar74 != (MVPlayer *)0x0) {
            ppPVar75 = &(pMVar74->fields).playerPlanetDataRemote;
            *ppPVar75 = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(ppPVar75,unaff_ESI.dummy);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar58);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      uVar43 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var50.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var50.typeHandle = unaff_ESI.typeHandle;
        }
        bVar11 = 0;
        pSVar19 = TypeInfo__System__String;
        if (_Var50.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
        goto code_?;
      }
code_?:
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var50.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pLVar76 = (pMVar17->fields).levelRewardsManager;
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar76 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar76,(Dictionary_2_System_Int32_System_Int32_ *)pOVar12[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (_union_86)
                  MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,(MethodInfo *)unaff_ESI.typeHandle);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pLVar76 = (pMVar17->fields).levelRewardsManager;
        bVar11 = 0;
        if ((pOVar12 != (Object *)0x0) && (bVar11 = 0, pLVar76 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar76,(int32_t)pOVar12[1].klass,(int32_t)pOVar12[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar26 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar58);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
      func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,message
                     );
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar26 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar58);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pKVar77 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar58);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar77;
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar16 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var50;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar17,(EventData *)_Var50.typeHandle,(MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_ESI = (_union_86)this;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup
                    (pMVar17,(EventData *)_Var50.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar78 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar79 = pVVar78->x;
      uVar80 = pVVar78->y;
      eventCode = (MVEventCodes__Enum)pVVar78->z;
      MStack_10 = uVar79;
      _Stack_48 = (_union_86)uVar80;
      pQVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,
                           (((EventData *)_Var50.generic_class)->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_82 = pQVar81->x;
      VStack_8.x = pQVar81->y;
      VStack_8.y = pQVar81->z;
      VStack_8.z = pQVar81->w;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar74 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar16,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar74 != (MVPlayer *)0x0) {
            this_03 = (pMVar74->fields).spawnRolesManager;
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var50.typeHandle,0xbf,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (MVNetworkGame *)0x0;
            if (this_03 != (SpawnRolesManager *)0x0) {
              piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
              position.y = (float)_Stack_48.dummy;
              position.x = (float)MStack_10;
              position.z = (float)eventCode;
              rotation.y = VStack_8.x;
              rotation.x = fStack_82;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_03,*piVar16,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (_union_86)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar26,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar17->fields).playerContainer;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar16 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
          pMVar74 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar16,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar74 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar74,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar11 = 0;
    unaff_EDI = _Var50;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar58 = 
      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar58);
      pMVar50 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar11 = 0;
      if ((unaff_ESI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, pMVar50 != (MVWorldObjectClientManager *)0x0)) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar50,(int32_t)unaff_ESI.type[3].data.__klassIndex,
                               (MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar17,(int32_t)unaff_ESI.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar17 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar17,(int32_t)unaff_ESI.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var50.typeHandle,0xd0,(MethodInfo *)0x0);
            puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Boolean);
            unaff_EDI = (_union_86)eventCode;
            _Stack_48.__klassIndex._0_1_ = *puVar5;
            iVar51 = func_?(eventCode,TypeInfo__MVAvatarSpawnRoleCreator);
            bVar11 = 0;
            if (iVar51 != 0) {
              pMVar58 = (MethodInfo *)0x0;
              _Var50 = _Stack_48;
              this_09 = (MVAvatarSpawnRoleCreator *)
                        func_?(unaff_EDI.dummy,TypeInfo__MVAvatarSpawnRoleCreator);
              MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                        (this_09,(SpawnRoleBodySwitchData *)unaff_ESI.typeHandle,
                         (bool)_Var50.__klassIndex,pMVar58);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    bVar11 = 0;
    unaff_ESI = _Var50;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar12,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar45.m_Index,TypeInfo__System__Int32);
        _Stack_48 = (_union_86)p_Var59->__klassIndex;
        uStack_54 = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_54);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar17 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar50 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar50 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar50,_Stack_48.__klassIndex,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var50.typeHandle,0x23,(MethodInfo *)0x0);
            p_Var59 = (_union_86 *)func_?(pOVar12,TypeInfo__System__Int32);
            unaff_ESI = (_union_86)p_Var59->__klassIndex;
            iVar51 = func_?(unaff_EDI.dummy,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            bVar11 = 0;
            if (iVar51 != 0) {
              pMVar58 = (MethodInfo *)0x0;
              this_10 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI.dummy,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                        (this_10,unaff_ESI.__klassIndex,pMVar58);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar17 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_EDI = (_union_86)(pMVar17->fields).playerContainer;
      bVar11 = 0;
      unaff_ESI = _Var50;
      if (photonEvent != (EventData *)0x0) {
        iVar32 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar32,&pMStack_6,
                              (MethodInfo *)0x0);
          if (bVar25 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)_Var50.typeHandle,0xde,(MethodInfo *)0x0);
          puVar83 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar83);
          bVar11 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar83) {
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
      bVar11 = 0;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        _Var50.dummy = (MVNetworkGame *)0x0;
        if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
          if ((String__Class *)(unaff_ESI.array)->etype == TypeInfo__System__String) {
            _Var50.typeHandle = unaff_ESI.typeHandle;
          }
          bVar11 = 0;
          pSVar19 = TypeInfo__System__String;
          if (_Var50.dummy == (MVNetworkGame *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var50.dummy,(MethodInfo *)0x0);
        pMVar64 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar64 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar64,(String *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar11 = 0;
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfb,(MethodInfo *)0x0);
        eventCode = func_?(pOVar12,
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        bVar11 = 0;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          this_11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar11 = 0;
          if (this_11 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar84 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_11,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            VStack_8.y = 0.0;
            pSVar26 = (String *)pDVar84->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)&stack0xffffff88;
            do {
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
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffff88,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)in_stack_85.typeHandle);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              str0 = (String *)0x0;
              if (pSVar26 != (String *)0x0) {
                if (pSVar26->klass == TypeInfo__System__String) {
                  str0 = pSVar26;
                }
                bVar11 = 0;
                unaff_EDI.dummy = (MVNetworkGame *)0x0;
                if (str0 == (String *)0x0) goto code_?;
              }
              TVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)str0,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar45.m_Index == 0) {
                pSVar26 = (String *)0x0;
                in_stack_85 = (_union_86)::StringLiteral___;
              }
              else {
                _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
                pSVar26 = (String *)func_?();
                in_stack_85 = _Stack_48;
              }
              pSVar26 = mscorlib.dll::System::String::String_Concat_4
                                  (str0,(String *)in_stack_85.typeHandle,pSVar26,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar26,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pIVar15 = TypeInfo__System__Int32;
          _Var50 = unaff_ESI;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var59->__klassIndex;
          pMVar17 = (this->fields).networkGame;
          bVar11 = 0;
          unaff_EDI = (_union_86)this;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pMVar34 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI.dummy == (MVNetworkGame *)(pMVar34->fields)._._ActorNr_k__BackingField)
              {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar17 = (this->fields).networkGame;
              bVar11 = 0;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pMVar73 = (pMVar17->fields).playerContainer;
                bVar11 = 0;
                if (pMVar73 != (MVPlayerContainer *)0x0) {
                  bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar73,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                  if (bVar25 == 0) {
code_?:
                    pMVar17 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar73 = (pMVar17->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar73 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar73,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar17 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar73 = (pMVar17->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar73 != (MVPlayerContainer *)0x0) {
                        pDStack_46 = (Delegate__Array *)
                                     MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar73,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_55,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_8.z = (float)func_?(TypeInfo__System__Byte,
                                                             (byte *)((int)&eventCode + 3));
                        _Stack_48 = unaff_ESI;
                        pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
                        bVar11 = 0;
                        if (pDStack_55 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                     (Object *)VStack_8.z,pOVar12,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_54 = 3;
                          pOVar12 = (Object *)func_?(TypeInfo__System__Byte,&uStack_54);
                          bVar11 = 0;
                          if (pDStack_46 != (Delegate__Array *)0x0) {
                            bVar11 = 0;
                            if (pDStack_46->vector[0xb] != (Delegate *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                         pOVar12,(pDStack_46->vector[0xb]->fields).invoke_impl,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_47 = 6;
                              VStack_8.z = (float)func_?(TypeInfo__System__Byte,&uStack_47
                                                                  );
                              pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar11 = 0;
                              if (pMVar17 != (MVNetworkGame *)0x0) {
                                this_04 = (pMVar17->fields)._Friends_k__BackingField;
                                bVar11 = 0;
                                if (this_04 != (FriendList *)0x0) {
                                  bStack_86 = FriendList::FriendList_IsFriend
                                                        (this_04,(int32_t)pDStack_46->vector[7],
                                                         (MethodInfo *)0x0);
                                  pOVar12 = (Object *)
                                            func_?(TypeInfo__System__Boolean,&bStack_86);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_55
                                             ,(Object *)VStack_8.z,pOVar12,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_55
                                             ,(MethodInfo *)0x0);
                                  pMVar17 = (this->fields).networkGame;
                                  bVar11 = 0;
                                  if (pMVar17 != (MVNetworkGame *)0x0) {
                                    pGVar60 = (pMVar17->fields).gameStatCounterManager;
                                    bVar11 = 0;
                                    if (pGVar60 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar60,unaff_ESI.__klassIndex,
                                                 (MVTeam__Enum)pDStack_46->vector[0xe],
                                                 (MethodInfo *)0x0);
                                      pMVar17 = (this->fields).networkGame;
                                      bVar11 = 0;
                                      if (pMVar17 != (MVNetworkGame *)0x0) {
                                        pGVar60 = (pMVar17->fields).gameStatCounterManager;
                                        bVar11 = 0;
                                        if (pGVar60 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar60,unaff_ESI.__klassIndex,(MethodInfo *)0x0
                                                    );
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
      bVar11 = 0;
      unaff_ESI = _Var50;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          pIVar15 = TypeInfo__System__Int32;
          if (pIVar13 != pIVar14) goto code_?;
          puVar40 = (undefined4 *)func_?();
          pMStack_56 = (MVWorldObject *)*puVar40;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var50.typeHandle,0xfe,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pOVar12 != (Object *)0x0) {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pIVar15 = TypeInfo__System__Int32;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12);
            eventCode = *pMVar30;
            _Var46.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(_Var50.dummy,0x9a,(MethodInfo *)0x0);
            unaff_EDI.dummy = (MVNetworkGame *)0x0;
            if (_Var46.dummy != (MVNetworkGame *)0x0) {
              if ((String__Class *)(_Var46.array)->etype == TypeInfo__System__String) {
                unaff_EDI.typeHandle = _Var46.typeHandle;
              }
              bVar11 = 0;
              if (unaff_EDI.dummy == (MVNetworkGame *)0x0) goto code_?;
            }
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var50.typeHandle,0xbc,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pIVar15 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
              if (pIVar13 != pIVar14) goto code_?;
              puVar5 = (undefined1 *)func_?();
              _Stack_34.__klassIndex._0_1_ = *puVar5;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var50.typeHandle,0x59,(MethodInfo *)0x0);
              bVar11 = 0;
              if (pOVar12 != (Object *)0x0) {
                pIVar13 = (pOVar12->klass->_0).element_class;
                pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                bVar11 = pIVar13 < pIVar14;
                pIVar15 = TypeInfo__System__Int32;
                if (pIVar13 != pIVar14) goto code_?;
                p_Var59 = (_union_86 *)func_?(pOVar12);
                _Stack_28 = *p_Var59;
                pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var50.typeHandle,0xd0,(MethodInfo *)0x0);
                bVar11 = 0;
                if (pOVar12 != (Object *)0x0) {
                  pIVar13 = (pOVar12->klass->_0).element_class;
                  pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  pIVar15 = (Int32__Class *)TypeInfo__System__Boolean;
                  if (pIVar13 != pIVar14) goto code_?;
                  puVar5 = (undefined1 *)func_?(pOVar12);
                  _Stack_48.__klassIndex._0_1_ = *puVar5;
                  unaff_ESI.dummy =
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (_Var50.dummy,0xe0,(MethodInfo *)0x0);
                  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0)
                  {
                    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                  }
                  _Var50.dummy = (MVNetworkGame *)0x0;
                  if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
                    if ((String__Class *)(unaff_ESI.array)->etype == TypeInfo__System__String) {
                      _Var50.typeHandle = unaff_ESI.typeHandle;
                    }
                    bVar11 = 0;
                    pSVar19 = TypeInfo__System__String;
                    if (_Var50.dummy == (MVNetworkGame *)0x0) goto code_?;
                  }
                  VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                       JsonConvert_DeserializeObject_2
                                                 ((String *)_Var50.typeHandle,
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                 );
                  pMVar17 = (this->fields).networkGame;
                  bVar11 = 0;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar17,(MethodInfo *)0x0);
                    bVar11 = 0;
                    if (pMVar34 != (MVLocalPlayer *)0x0) {
                      if (eventCode == (pMVar34->fields)._._ActorNr_k__BackingField) {
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)StringLiteral_Received_join_event_for_localPla,
                                   (MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                      unaff_ESI.dummy = (void *)func_?();
                      MVPlayer::MVPlayer__ctor
                                ((MVPlayer *)unaff_ESI.typeHandle,eventCode,(int32_t)pMStack_56,
                                 (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                 (UserProfileData *)VStack_8.z,0,(bool)_Stack_48.__klassIndex,
                                 (MethodInfo *)0x0);
                      bVar11 = 0;
                      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
                        unaff_ESI.type[9].data = _Stack_28;
                        pMVar17 = (this->fields).networkGame;
                        bVar11 = 0;
                        if (pMVar17 != (MVNetworkGame *)0x0) {
                          pMVar73 = (pMVar17->fields).playerContainer;
                          bVar11 = 0;
                          if (pMVar73 != (MVPlayerContainer *)0x0) {
                            MVPlayerContainer::MVPlayerContainer_Add
                                      (pMVar73,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
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
      break;
    default:
      goto code_?;
    }
  }
  func_?();
  _Var50 = unaff_ESI;
code_?:
  uVar52 = func_?(unaff_EDI.dummy,_Stack_48.dummy);
  func_?(_Var50.dummy,uVar52);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?(&_Stack_54,&UNK_?);
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar87 = func_?();
  bVar21 = 0x3b < (byte)uVar87 || CARRY1((byte)uVar87 - 0x3c,bVar11);
  pbVar49 = (byte *)(extraout_EDX_02 + -0x3c);
  bVar11 = *pbVar49;
  bVar88 = (byte)((uint)unaff_EBX >> 8);
  bVar89 = *pbVar49 + bVar88;
  *pbVar49 = bVar89 + bVar21;
  *(char *)(unaff_EDI.__klassIndex + 0x7e1052c4) =
       *(char *)(unaff_EDI.__klassIndex + 0x7e1052c4) + (char)((ushort)uVar87 >> 8) +
       (CARRY1(bVar11,bVar88) || CARRY1(bVar89,bVar21));
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
          pDVar6 = (Delegate *)(pOVar4 + 1);
          unaff_EDI = pDVar6;
          pAVar2 = source;
          pAVar7 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
                   func_?(pDVar6,iVar5,source);
          bVar8 = pAVar7 != source;
          source = pAVar7;
        } while (bVar8);
        if (pDVar6->klass == (Delegate__Class *)0x0) {
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    *(HashSet_1_System_ByteEnum_ **)pMVar1 = this_01;
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
    *(Queue_1_ExitGames_Client_Photon_EventData_ **)pMVar1 = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    ppMStack2 = &(this->fields).networkGame;
    *ppMStack2 = networkGame;
    pMStack3 = networkGame;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

