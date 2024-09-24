
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
  puStack_4 = &stack0xffffff6c;
  _Var60 = unaff_ESI;
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
  _Var96 = (_union_86)photonEvent;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  iStack_9 = 0;
  MStack_10 = MVEventCodes__Enum_NoCodeSet;
  _Stack_48.dummy = (Object__Class *)0x0;
  iVar11 = 0;
  bVar12 = 0;
  bVar13 = 0;
  bVar14 = 0;
  bVar15 = 0;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = 0;
  bVar19 = 0;
  bVar20 = 0;
  bVar21 = 0;
  bVar22 = 0;
  bVar23 = 0;
  bVar24 = 0;
  bVar25 = 0;
  _Var108.dummy = (Object__Class *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar26 = 0, unaff_EDI = unaff_EDI, pSVar27 != (Single__Class *)0x0)) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = TypeInfo__System__Int32;
        if (pIVar28 == pIVar29) {
          piVar31 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pWVar33 = (pMVar32->fields).worldNetwork;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar33 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar33->fields)._.worldObjectClientManager;
        bVar26 = 0;
        unaff_ESI = _Var96;
        _Stack_28 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          bVar25 = bVar15;
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          _Var60.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var96.dummy,0x12,(MethodInfo *)0x0);
          bVar26 = 0;
          if (unaff_EDI.dummy == (Object__Class *)0x0) break;
          unaff_EDI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (_Var60.dummy == (Object__Class *)0x0) {
            unaff_ESI.dummy = (Object__Class *)0x0;
code_?:
            bVar26 = 0;
            if (eventCode != MVEventCodes__Enum_NoCodeSet) {
              pIVar29 = (TypeInfo__System__Int32->_0).element_class;
              bVar26 = *(Il2CppClass **)(*(int *)eventCode + 0x20) < pIVar29;
              pSVar34 = (String *)eventCode;
              pSVar35 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)eventCode + 0x20) == pIVar29) {
                piVar31 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar31,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pIVar36 = ((Il2CppClass_0 *)&(_Var60.array)->etype)->image;
          if ((*(byte *)&pIVar36[4].assembly <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (pIVar36[2].typeCount +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar37 = false;
          }
          else {
            bVar37 = true;
          }
          unaff_ESI.dummy = (Object__Class *)0x0;
          if (bVar37) {
            unaff_ESI.typeHandle = _Var60.typeHandle;
          }
          bVar26 = 0;
          if (unaff_ESI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pSVar27 != (Single__Class *)0x0) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = TypeInfo__System__Int32;
        if (pIVar28 != pIVar29) goto code_?;
        p_Var65 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var65->__klassIndex;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var96.typeHandle,0x12,(MethodInfo *)0x0);
        pDVar38 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pWVar33 = (pMVar32->fields).worldNetwork;
          bVar26 = 0;
          if (pWVar33 != (WorldNetwork *)0x0) {
            pMVar39 = (pWVar33->fields)._.worldObjectClientManager;
            bVar26 = 0;
            if (pMVar39 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar39,unaff_EDI.__klassIndex,pDVar38,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar21;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x13,(MethodInfo *)0x0);
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar40,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pWVar33 = (pMVar32->fields).worldNetwork;
        bVar26 = 0;
        if (pWVar33 != (WorldNetwork *)0x0) {
          pMVar39 = (pWVar33->fields)._.worldObjectClientManager;
          bVar26 = 0;
          if (pMVar39 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar39,unaff_EDI.__klassIndex,pDVar38,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar32,photonEvent,(MethodInfo *)0x0);
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
    bVar26 = 0;
    unaff_EDI = (_union_86)this;
    if (unaff_ESI.dummy != (Object *)0x0) {
      bVar25 = bVar17;
      if (cRam_? == '\0') {
        bVar25 = bVar16;
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                       );
        cRam_? = '\x01';
      }
      bVar26 = 0;
      if (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs !=
          (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar41 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar41 == 0) {
          pSVar42 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar42 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar42,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar42,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
        bVar26 = 0;
        if (unaff_ESI.dummy != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          bVar26 = 0;
          if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)
                            unaff_ESI.type[1].data.typeHandle,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
            bVar26 = 0;
            if (unaff_ESI.dummy != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (unaff_ESI.type[1].data.dummy == (Object__Class *)0x0) {
                pSVar42 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                  pSVar42 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pOVar43 = (Object__Class *)unaff_ESI.type[1].data.array;
              bVar26 = 0;
              if (pOVar43 != (Object__Class *)0x0) {
                uVar44._0_2_ = (pOVar43->_0).byval_arg.attrs;
                uVar44._2_1_ = (pOVar43->_0).byval_arg.type;
                uVar44._3_1_ = (pOVar43->_0).byval_arg.field_0x7;
                (*(code *)(pOVar43->_0).namespaze)((pOVar43->_0).element_class,photonEvent,uVar44);
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
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar26 = 0, unaff_EDI = unaff_EDI, pSVar27 != (Single__Class *)0x0)) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = TypeInfo__System__Int32;
        if (pIVar28 == pIVar29) {
          piVar31 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pWVar33 = (pMVar32->fields).worldNetwork;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar33 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar33->fields)._.worldInventory;
        bVar26 = 0;
        unaff_EDI = _Var96;
        if (photonEvent != (EventData *)0x0) {
          bVar25 = bVar14;
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var60.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var96.dummy,0x31,(MethodInfo *)0x0);
          bVar26 = 0;
          unaff_EDI.typeHandle = _Var60.typeHandle;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var60.dummy == (Object__Class *)0x0) {
code_?:
            bVar26 = 0;
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar28 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar29 = (TypeInfo__System__Int32->_0).element_class;
              bVar26 = pIVar28 < pIVar29;
              pSVar35 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar28 != pIVar29) goto code_?;
              p_Var65 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var65->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MV__WorldObject__BytePacker);
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              bVar26 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar45 = (RuntimePrototypeCubeModel *)
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
                bVar26 = 0;
                unaff_ESI.dummy = (undefined *)0x0;
                if (pRVar45 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar45,(BytePacker *)eventCode,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          bVar26 = 0;
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pWVar33 = (pMVar32->fields).worldNetwork;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar33 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar33->fields)._.worldInventory;
        bVar26 = 0;
        unaff_EDI = _Var96;
        if (photonEvent != (EventData *)0x0) {
          bVar25 = bVar13;
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          pSVar27 = (Single__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var96.typeHandle,0x22,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)eventCode;
          bVar26 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
             (bVar26 = 0, pSVar27 != (Single__Class *)0x0)) {
            pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
            pIVar29 = (TypeInfo__System__Single->_0).element_class;
            bVar26 = pIVar28 < pIVar29;
            pIVar30 = (Int32__Class *)TypeInfo__System__Single;
            if (pIVar28 != pIVar29) goto code_?;
            pMVar46 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar46;
            bVar26 = 0;
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar28 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar29 = (TypeInfo__System__Int32->_0).element_class;
              bVar26 = pIVar28 < pIVar29;
              pSVar35 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar28 != pIVar29) goto code_?;
              p_Var65 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var65->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              bVar26 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   ((int)unaff_EDI.generic_class + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar45 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      ((int)unaff_EDI.generic_class +
                                      MVEventCodes__Enum_RegisterPrototype),unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar26 = 0;
                if (pRVar45 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar45->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar45->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar45->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar45,(float)eventCode,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = _Var96;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar22;
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0x3a,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        iVar47 = *piVar31;
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar31,iVar47,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar19;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar46 = (MVEventCodes__Enum *)func_?(pOVar40,TypeInfo__System__Int32);
      eventCode = *pMVar46;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x35,(MethodInfo *)0x0);
      piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar32,unaff_EDI.__klassIndex,eventCode,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar19;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar46 = (MVEventCodes__Enum *)func_?(pOVar40,TypeInfo__System__Int32);
      eventCode = *pMVar46;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x36,(MethodInfo *)0x0);
      pFVar48 = (FriendStatus__Enum *)func_?(pOVar40,TypeInfo__MV__Common__FriendStatus);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar32,unaff_EDI.__klassIndex,eventCode,*pFVar48,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar21;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar32,*piVar31,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar21;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar32,*piVar31,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar21;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar32,unaff_EDI.__klassIndex,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar32,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0x2f,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar31,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar32->fields)._NetworkGameStateListener_k__BackingField;
      bVar26 = 0;
      unaff_EDI = _Var96;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = bVar22;
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var96.typeHandle,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var96.typeHandle,0x42,(MethodInfo *)0x0);
        bVar26 = 0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          pIVar30 = TypeInfo__System__Int32;
          p_Var65 = (_union_86 *)func_?();
          bVar25 = (byte)pIVar30;
          unaff_EDI = (_union_86)p_Var65->type;
          in_stack_49 = TypeInfo__System__Int32;
          pMVar46 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar46;
          p_Var65 = (_union_86 *)func_?();
          _Stack_28 = *p_Var65;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GameStateChangeEventArgs);
            cRam_? = '\x01';
          }
          unaff_ESI.type[2].data = _Stack_28;
          unaff_ESI.type[1].data.__klassIndex = eventCode;
          *(_union_86 *)&unaff_ESI.type[1].attrs = (Il2CppType *)unaff_EDI;
          pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar26 = 0;
          if (pMVar32 != (MVNetworkGame *)0x0) {
            iVar11 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar32,(MethodInfo *)0x0);
            pvVar50 = unaff_ESI.type[3].data.dummy;
            *(undefined **)&unaff_ESI.type[2].attrs =
                 (undefined *)((int)unaff_EDI.dummy + (eventCode - iVar11));
            if (pvVar50 == (void *)0x0) goto code_?;
            pIVar51 = unaff_ESI.type[3].data.array;
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
            bVar26 = 0;
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (pIVar51 != (Il2CppArrayType *)0x0) {
              uVar52._0_1_ = pIVar51[1].rank;
              uVar52._1_1_ = pIVar51[1].numsizes;
              uVar52._2_1_ = pIVar51[1].numlobounds;
              uVar52._3_1_ = pIVar51[1].field_0x7;
              (*(code *)pIVar51->lobounds)(pIVar51[2].etype,unaff_ESI.dummy,eventCode,uVar52);
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
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar20;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pMVar53 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar32,(MethodInfo *)0x0);
        bVar26 = 0;
        if (pMVar53 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (_union_86)(pMVar53->fields)._._ActorNr_k__BackingField;
          puVar54 = (undefined4 *)func_?();
          if ((Object__Class *)*puVar54 == unaff_ESI.dummy) goto code_?;
          pMVar32 = (this->fields).networkGame;
          bVar26 = 0;
          if (pMVar32 != (MVNetworkGame *)0x0) {
            pWVar33 = (pMVar32->fields).worldNetwork;
            bVar26 = 0;
            if (pWVar33 != (WorldNetwork *)0x0) {
              _Var60 = (_union_86)(pWVar33->fields)._.worldObjectClientManager;
              _Stack_28 = _Var60;
              eventCode = (MVEventCodes__Enum)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var96.typeHandle,0x16,(MethodInfo *)0x0);
              pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var96.typeHandle,0x46,(MethodInfo *)0x0);
              bVar26 = 0;
              unaff_ESI.dummy = (Object__Class *)0x0;
              if (_Var60.dummy != (Object__Class *)0x0) {
                pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                          func_?(pOVar40,
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                         );
                piVar31 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar31,
                           pDVar38,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = _Var96;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar22;
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        iVar47 = *piVar31;
        pPVar55 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar55,iVar47,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x4b,(MethodInfo *)0x0);
      pOVar57 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar57,TypeInfo__System__Single);
      _Stack_28 = *p_Var65;
      pMVar46 = (MVEventCodes__Enum *)func_?(pOVar56,TypeInfo__System__Single);
      eventCode = *pMVar46;
      pfVar58 = (float *)func_?(pOVar40,TypeInfo__System__Single);
      this_06 = photonEvent;
      VStack_8.x = *pfVar58;
      VStack_8.y = (float)eventCode;
      VStack_8.z = (float)_Stack_28;
      in_stack_49 =
           (Int32__Class *)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (this_06,0x4e,(MethodInfo *)0x0);
      _Var108.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x4f,(MethodInfo *)0x0);
      in_stack_59 = TypeInfo__System__Single;
      p_Var65 = (_union_86 *)func_?();
      _Stack_28 = *p_Var65;
      _Var60.typeHandle = unaff_ESI.typeHandle;
      pMVar46 = (MVEventCodes__Enum *)func_?();
      bVar25 = (byte)_Var60.__klassIndex;
      eventCode = *pMVar46;
      piVar60 = (int *)func_?();
      iStack_9 = *piVar60;
      MStack_10 = eventCode;
      pMVar32 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
        camOrigin.y = VStack_8.y;
        camOrigin.x = VStack_8.x;
        camOrigin.z = VStack_8.z;
        camDir.y = (float)MStack_10;
        camDir.x = (float)iStack_9;
        camDir.z = (float)_Stack_48.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar32,*piVar31,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar32,photonEvent,(MethodInfo *)0x0);
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
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x58,(MethodInfo *)0x0);
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar56,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar61 = (MVGameMsgType__Enum *)func_?(pOVar40,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar61,pDVar38,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar16;
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
      in_stack_49 =
           (Int32__Class *)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     ((EventData *)_Var96.typeHandle,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar31 = (int32_t *)func_?();
      pOVar40 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
      this_05 = eventCode;
      bVar26 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar62 = (MVTeam__Enum *)func_?(pOVar40,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar62;
        piVar31 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)this_05,*piVar31,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = _Var96;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar22;
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0x3a,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        iVar47 = *piVar31;
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar31,iVar47,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar32,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0x28,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar31,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar46 = (MVEventCodes__Enum *)func_?(pOVar40,TypeInfo__System__Int32);
      eventCode = *pMVar46;
      pOVar40 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x81,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar56,TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var65;
      pOVar56 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&_Stack_28);
      pSVar42 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar40,pOVar56,
                           (MethodInfo *)0x0);
      uVar63 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar15;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar64 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar40,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar40 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar26 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pDVar64 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar64,pOVar40,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar54 = (undefined4 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
        pIStack_66 = (Il2CppClass *)*puVar54;
        uStack_67 = 0;
        pOVar40 = (Object *)func_?(TypeInfo__System__Byte,&uStack_67);
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar64,pOVar40,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var65 = (_union_86 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var65->__klassIndex;
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        unaff_EDI.dummy = (Object__Class *)0x0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pMVar68 = (pMVar32->fields)._PlayerController_k__BackingField;
          _Stack_28.dummy =
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (_Var96.dummy,0xfe,(MethodInfo *)0x0);
          pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var96.typeHandle,0x8d,(MethodInfo *)0x0);
          bVar26 = 0;
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pMVar68 != (MVLocalObjectController *)0x0) {
            pbVar69 = (byte *)func_?(pOVar40,TypeInfo__System__Byte);
            bVar25 = *pbVar69;
            piVar31 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar68,*piVar31,(int32_t)pIStack_66,_Stack_24.__klassIndex,(uint)bVar25,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    bVar25 = bVar17;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      bVar25 = bVar16;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?();
      unaff_ESI = (_union_86)p_Var65->__klassIndex;
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar32,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar70,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI.dummy == (Object__Class *)0x0) || (iVar71 = func_?(), iVar71 == 0)
             ) goto code_?;
          iVar71 = func_?();
          bVar26 = 0;
          if (iVar71 != 0) {
            uVar72 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatar);
            func_?(0x5a,uVar72);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar40,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar40 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar26 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar40,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var65 = (_union_86 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
        _Stack_28 = (_union_86)p_Var65->__klassIndex;
        uStack_67 = 0;
        pOVar40 = (Object *)func_?(TypeInfo__System__Byte,&uStack_67);
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar40,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var65 = (_union_86 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
        _Stack_34 = *p_Var65;
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar32,(MethodInfo *)0x0);
          bVar26 = 0;
          if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
            pMVar73 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar70,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            _Stack_48.dummy = (void *)func_?(pMVar73,TypeInfo__MVWorldObjectSpawnerVehicle)
            ;
            bVar26 = 0;
            if (_Stack_48.dummy != (Object__Class *)0x0) {
              pIStack_66 = *(Il2CppClass **)(_Stack_48.__klassIndex + 0xfc);
              uStack_74 = 3;
              pOVar40 = (Object *)func_?(TypeInfo__System__Byte,&uStack_74);
              TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI.typeHandle,pOVar40,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar54 = (undefined4 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
              pDStack_75 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar54;
              pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
              puVar54 = (undefined4 *)func_?(pOVar40,TypeInfo__System__Int32);
              pMStack_76 = (MVWorldObject *)*puVar54;
              pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var96.typeHandle,0x3a,(MethodInfo *)0x0);
              p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
              _Stack_24 = (_union_86)p_Var65->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var96.typeHandle,0x5c,(MethodInfo *)0x0);
              pIVar30 = TypeInfo__System__Int32;
              p_Var65 = (_union_86 *)func_?();
              bVar25 = (byte)pIVar30;
              _Stack_28 = (_union_86)p_Var65->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var96.typeHandle,0x23,(MethodInfo *)0x0);
              in_stack_49 = TypeInfo__System__Int32;
              p_Var65 = (_union_86 *)func_?();
              VStack_8.z = *(float *)p_Var65;
              pMVar32 = (this->fields).networkGame;
              bVar26 = 0;
              unaff_EDI = (_union_86)this;
              if (pMVar32 != (MVNetworkGame *)0x0) {
                pWVar33 = (pMVar32->fields).worldNetwork;
                bVar26 = 0;
                if (pWVar33 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar33,(int32_t)pMStack_76,0,1,(int32_t)pIStack_66,(int32_t)pDStack_75
                             ,_Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar32 = (this->fields).networkGame;
                  bVar26 = 0;
                  if (pMVar32 != (MVNetworkGame *)0x0) {
                    pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar32,(MethodInfo *)0x0);
                    bVar26 = 0;
                    if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_76 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar70,(int32_t)pDStack_75,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      unaff_EDI = (_union_86)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI.dummy == (Object__Class *)0x0) {
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
                        _Var96 = (_union_86)photonEvent;
                      }
                      bVar26 = 0;
                      unaff_ESI = _Var96;
                      if (pMStack_76 != (MVWorldObject *)0x0) {
                        func_?(0x2c,pMStack_76,unaff_EDI.dummy);
                        pMVar32 = (this->fields).networkGame;
                        bVar26 = 0;
                        if (pMVar32 != (MVNetworkGame *)0x0) {
                          pMVar68 = (pMVar32->fields)._PlayerController_k__BackingField;
                          pMStack_76 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item((EventData *)_Var96.typeHandle,0xfe,
                                                          (MethodInfo *)0x0);
                          pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                    EventData_get_Item((EventData *)_Var96.typeHandle,0x8d,
                                                       (MethodInfo *)0x0);
                          bVar26 = 0;
                          unaff_EDI.dummy = (Object__Class *)0x0;
                          if (pMVar68 != (MVLocalObjectController *)0x0) {
                            pbVar69 = (byte *)func_?(pOVar40,TypeInfo__System__Byte);
                            bVar25 = *pbVar69;
                            piVar31 = (int32_t *)func_?(pMStack_76,TypeInfo__System__Int32)
                            ;
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar68,*piVar31,(int32_t)pDStack_75,_Stack_34.__klassIndex,
                                       (uint)bVar25,(MethodInfo *)0x0);
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
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      _Var60 = *p_Var65;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar40,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x90,(MethodInfo *)0x0);
      pfVar58 = (float *)func_?(pOVar40,TypeInfo__MV__Common__RewardType);
      fVar77 = *pfVar58;
      _Stack_48 = _Var60;
      _Stack_34.dummy = (void *)func_?(TypeInfo__System__Int32,&_Stack_48);
      uStack_74 = eventCode._3_1_;
      pOVar40 = (Object *)func_?();
      VStack_8.z = fVar77;
      pOVar56 = (Object *)func_?();
      pSVar42 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar40,pOVar56,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar42,(MethodInfo *)0x0);
      pMVar78 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar29 = (pMVar78->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar29->vtable[0].methodPtr & 0x100) == 0) {
        pIVar29 = (Il2CppClass *)func_?();
      }
      if (pIVar29->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar29 = (pMVar78->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar29->vtable[0].methodPtr & 0x100) == 0) {
        pIVar29 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar29->static_fields;
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
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar20;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar40,TypeInfo__System__Byte);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pWVar33 = (pMVar32->fields).worldNetwork;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar33 != (WorldNetwork *)0x0) {
          this_00 = (pWVar33->fields)._.runtimeEventManagerNetwork;
          unaff_ESI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI.typeHandle,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          bVar26 = 0;
          unaff_EDI.dummy = (Object__Class *)0x0;
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
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pWVar33 = (pMVar32->fields).worldNetwork;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar33 != (WorldNetwork *)0x0) {
        this_01 = (RuntimeEventManager *)(pWVar33->fields)._.runtimeEventManagerNetwork;
        bVar26 = 0;
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
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var65->__klassIndex;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x59,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      _Stack_24 = *p_Var65;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar40,TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar5;
      _Var108.dummy =
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (_Var96.dummy,0xa0,(MethodInfo *)0x0);
      in_stack_59 = (Single__Class *)TypeInfo__System__Int32;
      puVar54 = (undefined4 *)func_?();
      pDStack_75 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar54;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0xa1,(MethodInfo *)0x0);
      bVar25 = (byte)pOVar40;
      puVar54 = (undefined4 *)func_?();
      pIStack_66 = (Il2CppClass *)*puVar54;
      in_stack_49 =
           (Int32__Class *)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     ((EventData *)_Var96.typeHandle,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0xa3,(MethodInfo *)0x0);
      pcVar79 = (char *)func_?();
      pMVar32 = (this->fields).networkGame;
      if (*pcVar79 == '\0') {
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pGVar80 = (pMVar32->fields).gameStatCounterManager;
          bVar26 = 0;
          if (pGVar80 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar80,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_75,(int32_t)pIStack_66,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pGVar80 = (pMVar32->fields).gameStatCounterManager;
          bVar26 = 0;
          if (pGVar80 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar80,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_75,(int32_t)pIStack_66,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar81 = (Byte__Array *)func_?(pOVar40,TypeInfo__System__Byte);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pGVar80 = (pMVar32->fields).gameStatCounterManager;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar80 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar80,pBVar81,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar46 = (MVEventCodes__Enum *)func_?(pOVar40,TypeInfo__System__Int32);
      eventCode = *pMVar46;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pMVar78 = (MethodInfo *)0x0;
      pBVar81 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar81,pMVar78);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        this_02 = (pMVar32->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar26 = 0;
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
    bVar26 = 0;
    unaff_ESI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var96.typeHandle,0xa9,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar31 = (int32_t *)func_?();
        iVar11 = *piVar31;
        piVar31 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar31,iVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar23;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar82 = (bool *)func_?(pOVar40,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar82);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pMVar83 = (pMVar32->fields)._GameCoinManager_k__BackingField;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar83 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar83,*pbVar82,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pSVar27 != (Single__Class *)0x0) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = TypeInfo__System__Int32;
        if (pIVar28 != pIVar29) goto code_?;
        p_Var65 = (_union_86 *)func_?();
        _Var60 = (_union_86)p_Var65->__klassIndex;
        eventCode = (MVEventCodes__Enum)_Var60;
        unaff_ESI.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (_Var96.dummy,200,(MethodInfo *)0x0);
        if (unaff_ESI.dummy == (Object__Class *)0x0) {
          _Var96.dummy = (Object__Class *)0x0;
        }
        else {
          unaff_EDI = (_union_86)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
          if ((*(uint8_t *)(unaff_EDI.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar37 = false;
          }
          else {
            bVar37 = true;
          }
          _Var96.dummy = (Object__Class *)0x0;
          if (bVar37) {
            _Var96.typeHandle = unaff_ESI.typeHandle;
          }
          bVar26 = 0;
          pMVar84 = (MVAvatarSpawnRoleCreator__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          _Var60 = (_union_86)eventCode;
          if (_Var96.dummy == (Object__Class *)0x0) goto code_?;
        }
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        unaff_EDI = _Var60;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar32,_Var60.__klassIndex,
                     (Dictionary_2_System_Object_System_Object_ *)_Var96.typeHandle,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = bVar24;
    pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar26 = 0;
    if (unaff_EDI.dummy == (void *)0x0) break;
    if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar38->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar38->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar37 = false;
    }
    else {
      bVar37 = true;
    }
    pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar37) {
      pDVar85 = pDVar38;
    }
    bVar26 = 0;
    unaff_ESI = (_union_86)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      bVar25 = bVar24;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar32,photonEvent,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var96;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar32,(EventData *)_Var96.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = 0;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
    _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
    if (unaff_EDI.dummy == (Object__Class *)0x0) {
      pBVar81 = (Byte__Array *)0x0;
code_?:
      unaff_EDI = (_union_86)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar81,(MethodInfo *)0x0);
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var96.typeHandle,0x85,(MethodInfo *)0x0);
      bVar26 = 0;
      if (pSVar27 != (Single__Class *)0x0) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if (pIVar28 != pIVar29) {
code_?:
          func_?(pSVar27,pIVar30);
          pSVar34 = extraout_ECX;
          pSVar35 = extraout_EDX;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?(pSVar27);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pSVar27 = (Single__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,100,(MethodInfo *)0x0);
        bVar26 = 0;
        if (pSVar27 != (Single__Class *)0x0) {
          pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
          pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
          bVar26 = pIVar28 < pIVar29;
          pIVar30 = (Int32__Class *)TypeInfo__System__Boolean;
          if (pIVar28 != pIVar29) goto code_?;
          pbVar82 = (bool *)func_?(pSVar27);
          pMVar32 = (this->fields).networkGame;
          bVar26 = 0;
          if (pMVar32 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar32,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar82,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar81 = (Byte__Array *)func_?(unaff_EDI.dummy,TypeInfo__System__Byte);
    bVar26 = 0;
    if (pBVar81 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = 0;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pMVar53 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar32,(MethodInfo *)0x0);
        bVar26 = 0;
        if (pMVar53 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar53->fields)._._ActorNr_k__BackingField;
          bVar26 = 0;
          if (unaff_ESI.dummy != (Object__Class *)0x0) {
            pIVar28 = (Il2CppClass *)
                      ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
            pIVar29 = (TypeInfo__System__Int32->_0).element_class;
            bVar26 = pIVar28 < pIVar29;
            pSVar35 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar28 != pIVar29) goto code_?;
            pMVar46 = (MVEventCodes__Enum *)func_?();
            if (*pMVar46 == eventCode) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar32 = (this->fields).networkGame;
              bVar26 = 0;
              unaff_ESI = (_union_86)this;
              if (pMVar32 != (MVNetworkGame *)0x0) {
                pMVar83 = (pMVar32->fields)._GameCoinManager_k__BackingField;
                bVar26 = 0;
                unaff_ESI = (_union_86)this;
                if (pMVar83 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar83,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar32 = (this->fields).networkGame;
                  bVar26 = 0;
                  unaff_ESI = (_union_86)this;
                  if (pMVar32 != (MVNetworkGame *)0x0) {
                    pMVar86 = (pMVar32->fields).operationRequests;
                    bVar26 = 0;
                    unaff_ESI.dummy = (Object__Class *)0x0;
                    if (pMVar86 != (MVNetworkGame_OperationRequests *)0x0) {
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
                      unaff_ESI = (_union_86)(pMVar86->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      pSVar87 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      eventCode._0_1_ = (pSVar87->SendReliable).Encrypt;
                      eventCode._1_1_ = (pSVar87->SendReliable).Channel;
                      eventCode._2_2_ = *(undefined2 *)&(pSVar87->SendReliable).field_0x6;
                      bVar26 = 0;
                      if (unaff_ESI.dummy != (Object__Class *)0x0) {
                        pIVar36 = ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
                        (*(code *)pIVar36[6].assembly)
                                  (unaff_ESI.dummy,0x66,_Stack_48.dummy,
                                   (pSVar87->SendReliable).DeliveryMode,eventCode,
                                   pIVar36[6].typeCount);
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
              pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar26 = 0;
              if (pMVar32 != (MVNetworkGame *)0x0) {
                eventCode = (MVEventCodes__Enum)(pMVar32->fields).playerContainer;
                unaff_ESI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var96.dummy,0xfe,(MethodInfo *)0x0);
                pSVar34 = (String *)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var96.typeHandle,0xd0,(MethodInfo *)0x0);
                unaff_EDI = (_union_86)eventCode;
                bVar26 = 0;
                if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
                   (bVar26 = 0, pSVar34 != (String *)0x0)) {
                  pIVar28 = (pSVar34->klass->_0).element_class;
                  pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar26 = pIVar28 < pIVar29;
                  pSVar35 = (String__Class *)TypeInfo__System__Boolean;
                  if (pIVar28 != pIVar29) goto code_?;
                  puVar5 = (undefined1 *)func_?(pSVar34);
                  eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
                  bVar26 = 0;
                  if (unaff_ESI.dummy != (Object__Class *)0x0) {
                    pIVar28 = (Il2CppClass *)
                              ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
                    pIVar29 = (TypeInfo__System__Int32->_0).element_class;
                    bVar26 = pIVar28 < pIVar29;
                    pSVar35 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar28 == pIVar29) {
                      piVar31 = (int32_t *)func_?(unaff_ESI.dummy);
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar31,(bool)eventCode,
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
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = bVar13;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar27 = (Single__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var96.typeHandle,7,(MethodInfo *)0x0);
    unaff_EDI = (_union_86)eventCode;
    bVar26 = 0;
    if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (bVar26 = 0, pSVar27 == (Single__Class *)0x0)
       ) break;
    pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
    pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
    bVar26 = pIVar28 < pIVar29;
    pIVar30 = (Int32__Class *)TypeInfo__System__Boolean;
    if (pIVar28 != pIVar29) goto code_?;
    pcVar79 = (char *)func_?();
    bVar37 = *pcVar79 == '\0';
    eventCode = CONCAT31(eventCode._1_3_,bVar37);
    if (unaff_ESI.dummy == (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,bVar37,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
         ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1) * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar88 = false;
    }
    else {
      bVar88 = true;
    }
    _Var60.dummy = (Object__Class *)0x0;
    if (bVar88) {
      _Var60.typeHandle = unaff_ESI.typeHandle;
    }
    bVar26 = 0;
    pMVar84 = (MVAvatarSpawnRoleCreator__Class *)
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (_Var60.dummy != (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)_Var60.typeHandle,bVar37,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar24;
      pDVar38 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar26 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar38 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar38->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar38->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar37 = false;
        }
        else {
          bVar37 = true;
        }
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar37) {
          pDVar85 = pDVar38;
        }
        bVar26 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar85,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = bVar18;
    _Var96.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (_Var96.dummy == (void *)0x0) {
      pBVar81 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI.typeHandle,pBVar81,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI.typeHandle,
                 (MethodInfo *)0x0);
      bVar26 = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        ((_union_86 *)(eventCode + 0x9c))->type = (Il2CppType *)unaff_EDI;
        func_?(eventCode + 0x9c,unaff_EDI.dummy);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar81 = (Byte__Array *)func_?();
    bVar26 = 0;
    if (pBVar81 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar14;
      pSVar27 = (Single__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar26 = 0, unaff_EDI = unaff_EDI, pSVar27 != (Single__Class *)0x0)) {
        pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pIVar30 = TypeInfo__System__Int32;
        if (pIVar28 == pIVar29) {
          piVar31 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    bVar25 = bVar16;
    pMVar86 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar26 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar86 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        cRam_? = '\x01';
      }
      pPVar89 = (pMVar86->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar87 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar72._0_1_ = (pSVar87->SendReliable).Encrypt;
      uVar72._1_1_ = (pSVar87->SendReliable).Channel;
      uVar72._2_2_ = *(undefined2 *)&(pSVar87->SendReliable).field_0x6;
      bVar26 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pPVar89 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar89->klass->vtable).SendOperation.method)
                  (pPVar89,0x3c,unaff_EDI.dummy,(pSVar87->SendReliable).DeliveryMode,uVar72,
                   pPVar89->klass[1]._0.image);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    bVar25 = bVar17;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      bVar25 = bVar16;
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
    bVar26 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
      _Stack_48 = *p_Var65;
      pOVar40 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
      bVar26 = 0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (Object *)unaff_EDI.typeHandle,pOVar40,
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
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pMVar90 = (pMVar32->fields).logicObjectManagerClientWrapper;
      bVar26 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar90 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (_union_86)(pMVar90->fields).logicEventQueue;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          bVar25 = bVar13;
          if (cRam_? == '\0') {
            bVar25 = bVar12;
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
          bVar26 = 0;
          if (photonEvent != (EventData *)0x0) {
            pSVar27 = (Single__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar26 = 0;
            if (pSVar27 != (Single__Class *)0x0) {
              pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
              pIVar29 = (TypeInfo__System__Int32->_0).element_class;
              bVar26 = pIVar28 < pIVar29;
              pIVar30 = TypeInfo__System__Int32;
              if (pIVar28 != pIVar29) goto code_?;
              pMVar46 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar46;
              bVar26 = 0;
              if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                bVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)
                                    unaff_ESI.type[1].data.typeHandle,eventCode,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar41 == 0) {
                  _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
                  VStack_8.z = (float)func_?(
                                                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                                  );
                  System.Core.dll::System::Runtime::CompilerServices::
                  ReadOnlyCollectionBuilder`1[System::Object]::
                  ReadOnlyCollectionBuilder_1_System_Object___ctor
                            ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar26 = 0;
                  if (_Stack_48.dummy == (Object__Class *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,
                             eventCode,(Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                bVar26 = 0;
                if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                  this_07 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)
                                       unaff_ESI.type[1].data.typeHandle,eventCode,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar26 = 0;
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
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      pMVar90 = (pMVar32->fields).logicObjectManagerClientWrapper;
      bVar26 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar90 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        bVar25 = bVar24;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar90,(MethodInfo *)0x0);
        pMVar91 = (pMVar90->fields).updateEvaluatorStep;
        bVar26 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar91 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar31 = &(pMVar91->fields).stepTimestamp;
          *piVar31 = *piVar31 + 1000;
code_?:
          iVar11 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar91->fields).lastUpdateTick = iVar11;
          (pMVar91->fields).accumulatedTime = 0;
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    bVar25 = bVar21;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      bVar25 = bVar20;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar32->fields).logicObjectManagerClientWrapper;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          piVar31 = (int32_t *)func_?();
          pMVar91 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
          bVar26 = 0;
          unaff_ESI.dummy = (Object__Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar91 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar91->fields).stepTimestamp = *piVar31;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar32->fields).logicObjectManagerClientWrapper;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar25 = (byte)iVar11;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          p_Var65 = (_union_86 *)func_?();
          bVar25 = (byte)iVar11;
          unaff_EDI = (_union_86)p_Var65->__klassIndex;
          pcVar79 = *(char **)&unaff_ESI.type[1].attrs;
          while (bVar26 = 0, pcVar79 != (char *)0x0) {
            bVar25 = (byte)iVar11;
            bVar26 = 0;
            if (*(int *)(pcVar79 + 0x2c) == 0) break;
            if (unaff_EDI.__klassIndex <= *(int *)(*(int *)(pcVar79 + 0x2c) + 0x10))
            goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                       (MethodInfo *)0x0);
            bVar25 = (byte)iVar11;
            pcVar79 = *(char **)&unaff_ESI.type[1].attrs;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = 0;
    pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    _Var96.dummy = (void *)func_?(pOVar40,TypeInfo__System__Int32);
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI.dummy = _Var96.dummy;
    unaff_EDI = (_union_86)this;
    if (pMVar32 == (MVNetworkGame *)0x0) break;
    pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar32,(MethodInfo *)0x0);
    bVar26 = 0;
    if (_Var96.dummy == (Object__Class *)0x0) break;
    bVar26 = 0;
    if (*(char **)&_Var96.type[1].attrs != (char *)0x0) {
      bVar26 = 0;
      if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar70,_Var96.type[2].data.__klassIndex,(MethodInfo *)0x0);
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar32,(MethodInfo *)0x0);
          bVar26 = *(char **)&_Var96.type[1].attrs == (char *)0x0;
          if (*(char **)&_Var96.type[1].attrs < (char *)0x2) goto code_?;
          bVar26 = 0;
          if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
            iVar11._0_2_ = ((Il2CppType *)((int)_Var96 + 0x10))->attrs;
            iVar11._2_1_ = ((Il2CppType *)((int)_Var96 + 0x10))->type;
            iVar11._3_1_ = ((Il2CppType *)((int)_Var96 + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar70,iVar11,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar26 = 0;
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              if (*(char **)&unaff_ESI.type[1].attrs !=
                  *(char **)(eventCode + MVEventCodes__Enum_RegisterPrototype))
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar71 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal);
              bVar26 = 0;
              if (iVar71 != 0) {
                bVar41 = 0x8e;
                _Var60.typeHandle = unaff_ESI.typeHandle;
                this_08 = (MVAvatarLocal *)
                          func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_08,bVar41,(MethodInfo *)_Var60.typeHandle);
                pMVar32 = (this->fields).networkGame;
                bVar26 = 0;
                if (pMVar32 != (MVNetworkGame *)0x0) {
                  pMVar68 = (pMVar32->fields)._PlayerController_k__BackingField;
                  bVar26 = 0;
                  if (pMVar68 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar68,1,(MethodInfo *)0x0);
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
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      bVar25 = bVar20;
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar32,(MethodInfo *)0x0);
      unaff_ESI = (_union_86)photonEvent;
      bVar26 = 0;
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
        bVar26 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar31 = (int32_t *)func_?();
          iVar11 = *piVar31;
          piVar31 = (int32_t *)func_?();
          iVar47 = *piVar31;
          puVar5 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          piVar31 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar31,eventCode,iVar47,iVar11,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = 0;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar40,TypeInfo__System__Boolean);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
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
                            ((EventData *)_Var96.typeHandle,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar78 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar40 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar78);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar26 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pOVar40 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar40[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var96.typeHandle,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar42 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar42,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar40[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar92 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0xc4,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        if (pGVar92 != (GoldRewardManager *)0x0) {
          pbVar82 = (bool *)func_?(pOVar40,TypeInfo__System__Boolean);
          (pGVar92->fields).isGoldRewardGame = *pbVar82;
          pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var96.typeHandle,0xc4,(MethodInfo *)0x0);
          pbVar82 = (bool *)func_?(pOVar40,TypeInfo__System__Boolean);
          BStack_7.m_value = *pbVar82;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar42 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar42 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar42,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar42,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar16;
      pSVar34 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar42 = (String *)0x0;
      if (pSVar34 == (String *)0x0) {
code_?:
        pSVar42 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar42,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar42,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar34->klass == TypeInfo__System__String) {
        pSVar42 = pSVar34;
      }
      bVar26 = 0;
      pSVar35 = TypeInfo__System__String;
      if (pSVar42 != (String *)0x0) goto code_?;
code_?:
      func_?(pSVar34,pSVar35);
code_?:
      func_?();
      pSVar35 = extraout_ECX_00;
code_?:
      func_?(unaff_ESI.dummy,pSVar35);
      _Var60 = unaff_EDI;
code_?:
      func_?(_Var60.dummy,_Stack_24.dummy);
      unaff_EDI = _Var60;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar19;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar71 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pMVar78 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar42 = StringLiteral_V;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar71 != 0) {
        pDVar64 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar64,(Object *)pSVar42,pMVar78);
        puVar5 = (undefined1 *)func_?(TVar65.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar32 = (this->fields).networkGame;
        pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)pSVar42;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar32,*piVar31,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    bVar25 = bVar20;
    _Var73.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var96.dummy = (Object__Class *)0x0;
    if (_Var73.dummy == (Object__Class *)0x0) {
code_?:
      bVar41 = mscorlib.dll::System::String::String_IsNullOrEmpty
                         ((String *)_Var96.typeHandle,(MethodInfo *)0x0);
      if (bVar41 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar40 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var96.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar26 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar40 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar40[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar40[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
        func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
                        message);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if ((String__Class *)((Il2CppClass_0 *)&(_Var73.array)->etype)->image ==
        TypeInfo__System__String) {
      _Var96.typeHandle = _Var73.typeHandle;
    }
    bVar26 = 0;
    pSVar35 = TypeInfo__System__String;
    unaff_ESI.dummy = (Object *)0x0;
    if (_Var96.dummy != (Object__Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar16;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var60.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pMVar93 = (pMVar32->fields).playerContainer;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar93 != (MVPlayerContainer *)0x0) {
          pMVar53 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar93,(MethodInfo *)0x0);
          bVar26 = 0;
          unaff_EDI = unaff_EDI;
          if (pMVar53 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar53,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar15;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var60.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar32->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)eventCode;
        bVar26 = 0;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar31 = (int32_t *)func_?();
          pMVar94 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar31,(MethodInfo *)0x0)
          ;
          bVar26 = 0;
          if (pMVar94 != (MVPlayer *)0x0) {
            (pMVar94->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar94->fields).playerPlanetDataRemote,unaff_ESI.dummy);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar42 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var60.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar42,(MethodInfo *)0x0);
      uVar63 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar63 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar42,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar40 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var60.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar40 != (Object *)0x0) {
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pLVar95 = (pMVar32->fields).levelRewardsManager;
          bVar26 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar95 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar95,(Dictionary_2_System_Int32_System_Int32_ *)pOVar40[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar40 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var60.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        pLVar95 = (pMVar32->fields).levelRewardsManager;
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if ((pOVar40 != (Object *)0x0) &&
           (bVar26 = 0, unaff_EDI = unaff_EDI, pLVar95 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar95,(int32_t)pOVar40[1].klass,(int32_t)pOVar40[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var60.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)_Var60.typeHandle,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var60.typeHandle = unaff_ESI.typeHandle;
      }
      bVar26 = 0;
      pSVar35 = TypeInfo__System__String;
      if (_Var60.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar42 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var60.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar42,(MethodInfo *)0x0);
      uVar63 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        pKVar96 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)_Var60.typeHandle,
                             MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                            );
        if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SubscriberRewardDataManager);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__SubscriberRewardDataManager);
          cRam_? = '\x01';
        }
        if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SubscriberRewardDataManager);
        }
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar96;
        func_?(&TypeInfo__SubscriberRewardDataManager->static_fields->
                         _VatValues_k__BackingField,pKVar96);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var60.typeHandle = unaff_ESI.typeHandle;
      }
      bVar26 = 0;
      pSVar35 = TypeInfo__System__String;
      if (_Var60.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar18;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        pIVar28 = (Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
        pIVar29 = (TypeInfo__System__Int32->_0).element_class;
        bVar26 = pIVar28 < pIVar29;
        pSVar35 = (String__Class *)TypeInfo__System__Int32;
        if (pIVar28 == pIVar29) {
          piVar31 = (int32_t *)func_?(unaff_ESI.dummy);
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar31,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar32,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      bVar25 = bVar23;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar32,photonEvent,(MethodInfo *)0x0);
      pMVar32 = (this->fields).networkGame;
      bVar26 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var96;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar32,(EventData *)_Var96.typeHandle,(MethodInfo *)0x0);
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        unaff_ESI = (_union_86)this;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup
                    (pMVar32,(EventData *)_Var96.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar21;
      pVVar97 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar98 = pVVar97->x;
      uVar99 = pVVar97->y;
      eventCode = (MVEventCodes__Enum)pVVar97->z;
      MStack_10 = uVar98;
      _Stack_48 = (_union_86)uVar99;
      pQVar100 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,
                           (((EventData *)_Var96.generic_class)->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_101 = pQVar100->x;
      VStack_8.x = pQVar100->y;
      VStack_8.y = pQVar100->z;
      VStack_8.z = pQVar100->w;
      pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar32->fields).playerContainer;
        in_stack_49 = (Int32__Class *)0x0;
        pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar26 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          bVar25 = (byte)pOVar40;
          piVar31 = (int32_t *)func_?();
          pMVar94 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar31,(MethodInfo *)0x0)
          ;
          bVar26 = 0;
          if (pMVar94 != (MVPlayer *)0x0) {
            this_03 = (pMVar94->fields).spawnRolesManager;
            pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var96.typeHandle,0xbf,(MethodInfo *)0x0);
            bVar26 = 0;
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (this_03 != (SpawnRolesManager *)0x0) {
              piVar31 = (int32_t *)func_?(pOVar40,TypeInfo__System__Int32);
              position.y = (float)_Stack_48.dummy;
              position.x = (float)MStack_10;
              position.z = (float)eventCode;
              rotation.y = VStack_8.x;
              rotation.x = fStack_101;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_03,*piVar31,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar26 = 0;
    unaff_EDI = _Var96;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar12;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (_union_86)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar42 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar42,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar26 = 0;
      if (pMVar32 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar32->fields).playerContainer;
        pSVar27 = (Single__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar26 = 0;
        if ((unaff_ESI.dummy != (Object__Class *)0x0) &&
           (bVar26 = 0, pSVar27 != (Single__Class *)0x0)) {
          pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
          pIVar29 = (TypeInfo__System__Int32->_0).element_class;
          bVar26 = pIVar28 < pIVar29;
          pIVar30 = TypeInfo__System__Int32;
          if (pIVar28 != pIVar29) goto code_?;
          piVar31 = (int32_t *)func_?(pSVar27);
          pMVar94 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar31,(MethodInfo *)0x0)
          ;
          bVar26 = 0;
          if (pMVar94 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar94,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar12;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var60.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var60.typeHandle = unaff_ESI.typeHandle;
        }
        bVar26 = 0;
        pSVar35 = TypeInfo__System__String;
        if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_EDI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var60.dummy,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar70 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar26 = 0;
      if ((unaff_EDI.dummy != (Object__Class *)0x0) &&
         (bVar26 = 0, pMVar70 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar70,unaff_EDI.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar32,unaff_EDI.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar32 = (this->fields).networkGame;
          bVar26 = 0;
          if (pMVar32 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar32,(int32_t)unaff_EDI.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pSVar27 = (Single__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar26 = 0;
            if (pSVar27 != (Single__Class *)0x0) {
              pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
              pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
              bVar26 = pIVar28 < pIVar29;
              pIVar30 = (Int32__Class *)TypeInfo__System__Boolean;
              if (pIVar28 != pIVar29) goto code_?;
              _Var108.dummy = &UNK_?;
              pbVar82 = (bool *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*pbVar82);
              bVar26 = 0;
              in_stack_59 = pSVar27;
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                     ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar37 = false;
                }
                else {
                  bVar37 = true;
                }
                _Var60.dummy = (Object__Class *)0x0;
                if (bVar37) {
                  _Var60.typeHandle = unaff_ESI.typeHandle;
                }
                bVar26 = 0;
                pMVar84 = TypeInfo__MVAvatarSpawnRoleCreator;
                if (_Var60.dummy != (Object__Class *)0x0) {
                  if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                       ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar37 = false;
                  }
                  else {
                    bVar37 = true;
                  }
                  _Var60.dummy = (void *)0x0;
                  if (bVar37) {
                    _Var60.typeHandle = unaff_ESI.typeHandle;
                  }
                  bVar26 = 0;
                  if (_Var60.dummy != (void *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)_Var60.typeHandle,
                               (SpawnRoleBodySwitchData *)unaff_EDI.typeHandle,*pbVar82,
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
    bVar26 = 0;
    unaff_ESI = _Var96;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      bVar25 = bVar13;
      pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar40,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar40 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar26 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar40,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var65 = (_union_86 *)func_?(TVar65.m_Index,TypeInfo__System__Int32);
        _Stack_48 = (_union_86)p_Var65->__klassIndex;
        uStack_74 = 0;
        pOVar40 = (Object *)func_?(TypeInfo__System__Byte,&uStack_74);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar40,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar32 = (this->fields).networkGame;
        bVar26 = 0;
        if (pMVar32 != (MVNetworkGame *)0x0) {
          pMVar70 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar32,(MethodInfo *)0x0);
          bVar26 = 0;
          if (pMVar70 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar70,_Stack_48.__klassIndex,(MethodInfo *)0x0);
            pOVar40 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var96.typeHandle,0x23,(MethodInfo *)0x0);
            p_Var65 = (_union_86 *)func_?(pOVar40,TypeInfo__System__Int32);
            unaff_ESI = (_union_86)p_Var65->__klassIndex;
            iVar71 = func_?(unaff_EDI.dummy,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            bVar26 = 0;
            if (iVar71 != 0) {
              pMVar78 = (MethodInfo *)0x0;
              this_09 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI.dummy,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                        (this_09,unaff_ESI.__klassIndex,pMVar78);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar32 = (this->fields).networkGame;
    bVar26 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar32 != (MVNetworkGame *)0x0) {
      unaff_EDI = (_union_86)(pMVar32->fields).playerContainer;
      bVar26 = 0;
      unaff_ESI = _Var96;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = bVar21;
        iVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar26 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          bVar41 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar11,&pMStack_6,
                              (MethodInfo *)0x0);
          if (bVar41 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)_Var96.typeHandle,0xde,(MethodInfo *)0x0);
          puVar102 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar102);
          bVar26 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar102) {
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
      bVar26 = 0;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = bVar18;
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        _Var60.dummy = (Object__Class *)0x0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
              TypeInfo__System__String) {
            _Var60.typeHandle = unaff_ESI.typeHandle;
          }
          bVar26 = 0;
          pSVar35 = TypeInfo__System__String;
          if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var60.dummy,(MethodInfo *)0x0);
        pMVar86 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar26 = 0;
        if (pMVar86 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar86,(String *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar26 = 0;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = bVar23;
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          unaff_EDI = (_union_86)
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)eventCode)->klass;
          if ((*(uint8_t *)(unaff_EDI.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar37 = false;
          }
          else {
            bVar37 = true;
          }
          pDVar103 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar37) {
            pDVar103 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          bVar26 = 0;
          eventCode = (MVEventCodes__Enum)pDVar103;
          if (pDVar103 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar26 = 0;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var96.dummy = &UNK_?;
          this_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar26 = 0;
          if (this_10 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            _Var60.dummy = &UNK_?;
            pDVar104 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI.dummy = &stack0xffffff88;
            VStack_8.y = 0.0;
            iVar11 = pDVar104->_index;
            _Var73 = (_union_86)pDVar104->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI.dummy;
            do {
              bVar41 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              bVar25 = (byte)iVar11;
              if (bVar41 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)unaff_ESI.typeHandle,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)_Var96.typeHandle);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Object__Class *)0x0;
              _Var108 = _Var73;
              if (_Var73.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var73.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var73;
                }
                bVar26 = 0;
                pSVar35 = TypeInfo__System__String;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              bVar26 = 0;
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar65 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar65.m_Index == 0) {
                _Var60.dummy = (String *)0x0;
                _Var96 = (_union_86)::StringLiteral___;
              }
              else {
                _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
                _Var60.dummy = (void *)func_?();
                _Var96 = _Stack_48;
              }
              pSVar42 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)_Var96.typeHandle,
                                   (String *)_Var60.typeHandle,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              in_stack_49 = (Int32__Class *)0x0;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar42,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      bVar26 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = 0;
        pSVar27 = (Single__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pSVar27 != (Single__Class *)0x0) {
          pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
          pIVar29 = (TypeInfo__System__Int32->_0).element_class;
          bVar26 = pIVar28 < pIVar29;
          pIVar30 = TypeInfo__System__Int32;
          if (pIVar28 != pIVar29) goto code_?;
          p_Var65 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var65->__klassIndex;
          pMVar32 = (this->fields).networkGame;
          bVar26 = 0;
          unaff_EDI = (_union_86)this;
          if (pMVar32 != (MVNetworkGame *)0x0) {
            pMVar53 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar32,(MethodInfo *)0x0);
            bVar26 = 0;
            if (pMVar53 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI.dummy == (Object__Class *)(pMVar53->fields)._._ActorNr_k__BackingField)
              {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar32 = (this->fields).networkGame;
              bVar26 = 0;
              if (pMVar32 != (MVNetworkGame *)0x0) {
                pMVar93 = (pMVar32->fields).playerContainer;
                bVar26 = 0;
                if (pMVar93 != (MVPlayerContainer *)0x0) {
                  bVar41 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar93,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                  if (bVar41 == 0) {
code_?:
                    pMVar32 = (this->fields).networkGame;
                    bVar26 = 0;
                    if (pMVar32 != (MVNetworkGame *)0x0) {
                      pMVar93 = (pMVar32->fields).playerContainer;
                      bVar26 = 0;
                      if (pMVar93 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar93,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar32 = (this->fields).networkGame;
                    bVar26 = 0;
                    if (pMVar32 != (MVNetworkGame *)0x0) {
                      pMVar93 = (pMVar32->fields).playerContainer;
                      bVar26 = 0;
                      if (pMVar93 != (MVPlayerContainer *)0x0) {
                        pIStack_66 = (Il2CppClass *)
                                     MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar93,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        pDStack_75 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_75,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_8.z = (float)func_?(TypeInfo__System__Byte,
                                                             (byte *)((int)&eventCode + 3));
                        _Stack_48 = unaff_ESI;
                        pOVar40 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
                        bVar26 = 0;
                        if (pDStack_75 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_75,
                                     (Object *)VStack_8.z,pOVar40,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_74 = 3;
                          pOVar40 = (Object *)func_?(TypeInfo__System__Byte,&uStack_74);
                          bVar26 = 0;
                          if (pIStack_66 != (Il2CppClass *)0x0) {
                            bVar26 = 0;
                            if (pIStack_66->klass != (Il2CppClass *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_75,
                                         pOVar40,(Object *)pIStack_66->klass->namespaze,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_67 = 6;
                              VStack_8.z = (float)func_?(TypeInfo__System__Byte,&uStack_67
                                                                  );
                              pMVar32 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar26 = 0;
                              if (pMVar32 != (MVNetworkGame *)0x0) {
                                this_04 = (pMVar32->fields)._Friends_k__BackingField;
                                bVar26 = 0;
                                if (this_04 != (FriendList *)0x0) {
                                  bStack_105 = FriendList::FriendList_IsFriend
                                                        (this_04,(int32_t)pIStack_66->parent,
                                                         (MethodInfo *)0x0);
                                  pOVar40 = (Object *)
                                            func_?(TypeInfo__System__Boolean,&bStack_105);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_75
                                             ,(Object *)VStack_8.z,pOVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_75
                                             ,(MethodInfo *)0x0);
                                  pMVar32 = (this->fields).networkGame;
                                  bVar26 = 0;
                                  if (pMVar32 != (MVNetworkGame *)0x0) {
                                    pGVar80 = (pMVar32->fields).gameStatCounterManager;
                                    bVar26 = 0;
                                    if (pGVar80 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar80,unaff_ESI.__klassIndex,
                                                 (MVTeam__Enum)pIStack_66->properties,
                                                 (MethodInfo *)0x0);
                                      pMVar32 = (this->fields).networkGame;
                                      bVar26 = 0;
                                      if (pMVar32 != (MVNetworkGame *)0x0) {
                                        pGVar80 = (pMVar32->fields).gameStatCounterManager;
                                        bVar26 = 0;
                                        if (pGVar80 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar80,unaff_ESI.__klassIndex,
                                                     (MethodInfo *)0x0);
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
      bVar26 = 0;
      unaff_ESI = _Var96;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        bVar25 = 0;
        pSVar27 = (Single__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar26 = 0;
        unaff_EDI = unaff_EDI;
        if (pSVar27 != (Single__Class *)0x0) {
          pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
          pIVar29 = (TypeInfo__System__Int32->_0).element_class;
          bVar26 = pIVar28 < pIVar29;
          pIVar30 = TypeInfo__System__Int32;
          if (pIVar28 == pIVar29) {
            _Var60.dummy = &UNK_?;
            puVar54 = (undefined4 *)func_?();
            pMStack_76 = (MVWorldObject *)*puVar54;
            pSVar27 = (Single__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var96.typeHandle,0xfe,(MethodInfo *)0x0);
            bVar26 = 0;
            unaff_EDI = unaff_EDI;
            if (pSVar27 != (Single__Class *)0x0) {
              pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
              pIVar29 = (TypeInfo__System__Int32->_0).element_class;
              bVar26 = pIVar28 < pIVar29;
              pIVar30 = TypeInfo__System__Int32;
              if (pIVar28 != pIVar29) goto code_?;
              pMVar46 = (MVEventCodes__Enum *)func_?(pSVar27);
              eventCode = *pMVar46;
              _Var73.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(_Var96.dummy,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var73.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var73.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var73.typeHandle;
                }
                bVar26 = 0;
                pSVar35 = TypeInfo__System__String;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              pSVar27 = (Single__Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var96.typeHandle,0xbc,(MethodInfo *)0x0);
              bVar26 = 0;
              if (pSVar27 != (Single__Class *)0x0) {
                pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
                pIVar29 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar26 = pIVar28 < pIVar29;
                pIVar30 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
                if (pIVar28 != pIVar29) goto code_?;
                puVar5 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar5;
                pSVar27 = (Single__Class *)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var96.typeHandle,0x59,(MethodInfo *)0x0);
                bVar26 = 0;
                if (pSVar27 != (Single__Class *)0x0) {
                  pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
                  pIVar29 = (TypeInfo__System__Int32->_0).element_class;
                  bVar26 = pIVar28 < pIVar29;
                  pIVar30 = TypeInfo__System__Int32;
                  if (pIVar28 != pIVar29) goto code_?;
                  p_Var65 = (_union_86 *)func_?(pSVar27);
                  _Stack_28 = *p_Var65;
                  pSVar27 = (Single__Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)_Var96.typeHandle,0xd0,(MethodInfo *)0x0
                                              );
                  bVar26 = 0;
                  if (pSVar27 != (Single__Class *)0x0) {
                    pIVar28 = (Il2CppClass *)((pSVar27->_0).image)->codeGenModule;
                    pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar26 = pIVar28 < pIVar29;
                    pIVar30 = (Int32__Class *)TypeInfo__System__Boolean;
                    if (pIVar28 != pIVar29) goto code_?;
                    puVar5 = (undefined1 *)func_?(pSVar27);
                    _Stack_48.__klassIndex._0_1_ = *puVar5;
                    unaff_ESI.dummy =
                         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var96.dummy,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                    }
                    _Var60.dummy = (Object__Class *)0x0;
                    if (unaff_ESI.dummy != (Object__Class *)0x0) {
                      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
                          TypeInfo__System__String) {
                        _Var60.typeHandle = unaff_ESI.typeHandle;
                      }
                      bVar26 = 0;
                      pSVar35 = TypeInfo__System__String;
                      if (_Var60.dummy == (Object__Class *)0x0) goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)_Var60.typeHandle,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar32 = (this->fields).networkGame;
                    bVar26 = 0;
                    if (pMVar32 != (MVNetworkGame *)0x0) {
                      pMVar53 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar32,(MethodInfo *)0x0);
                      bVar26 = 0;
                      if (pMVar53 != (MVLocalPlayer *)0x0) {
                        if (eventCode == (pMVar53->fields)._._ActorNr_k__BackingField) {
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
                                  ((MVPlayer *)unaff_ESI.typeHandle,eventCode,(int32_t)pMStack_76,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_8.z,0,(bool)_Stack_48.__klassIndex,
                                   (MethodInfo *)0x0);
                        bVar26 = 0;
                        if (unaff_ESI.dummy != (void *)0x0) {
                          unaff_ESI.type[9].data = _Stack_28;
                          pMVar32 = (this->fields).networkGame;
                          bVar26 = 0;
                          if (pMVar32 != (MVNetworkGame *)0x0) {
                            pMVar93 = (pMVar32->fields).playerContainer;
                            bVar26 = 0;
                            if (pMVar93 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar93,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0)
                              ;
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
  pMVar84 = extraout_EDX_00;
code_?:
  func_?(unaff_ESI.dummy,pMVar84);
code_?:
  func_?();
  _Var96 = unaff_ESI;
code_?:
  func_?(unaff_EDI.dummy,_Stack_48.dummy);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?(&_Stack_54,&UNK_?);
code_?:
  _Var60 = _Var96;
  func_?();
code_?:
  _Var73.dummy = (void *)func_?();
  pSVar35 = extraout_ECX_01;
  unaff_ESI = _Var96;
code_?:
  uVar72 = func_?(_Var73.dummy,pSVar35);
  uVar106 = func_?(uVar72);
  iVar71 = (int)((ulonglong)uVar106 >> 0x20);
  pbRam609a1064 = (byte *)uVar106;
  iVar107 = iVar71 + 1;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)(pbRam609a1064 + -0x2aef9ba5));
  bVar22 = (byte)((ushort)extraout_CX >> 8);
  bVar37 = CARRY1(*pbVar69,bVar22) || CARRY1(*pbVar69 + bVar22,bVar26);
  *pbVar69 = *pbVar69 + bVar22 + bVar26;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + iVar71 + 0x4e10645d);
  bVar24 = *pbVar69;
  bVar21 = (byte)((uint)iVar107 >> 8);
  bVar12 = *pbVar69;
  *pbVar69 = bVar12 + bVar21 + bVar37;
  bVar23 = (byte)iVar107;
  bVar37 = CARRY1((byte)extraout_CX,bVar23) ||
           CARRY1((byte)extraout_CX + bVar23,CARRY1(bVar24,bVar21) || CARRY1(bVar12 + bVar21,bVar37)
                 );
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)pbRam609a1064);
  bVar12 = *pbVar69;
  bVar23 = (byte)((ulonglong)uVar106 >> 8);
  bVar24 = *pbVar69;
  *pbVar69 = bVar24 + bVar23 + bVar37;
  bVar20 = (byte)((uint)_Var73 >> 8);
  bVar37 = CARRY1(bVar21,bVar20) ||
           CARRY1(bVar21 + bVar20,CARRY1(bVar12,bVar23) || CARRY1(bVar24 + bVar23,bVar37));
  pbVar69 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((int)(unaff_ESI.__klassIndex + 100) + _Var73.__klassIndex * 2));
  bVar88 = CARRY1(*pbVar69,bVar23) || CARRY1(*pbVar69 + bVar23,bVar37);
  *pbVar69 = *pbVar69 + bVar23 + bVar37;
  puVar108 = (undefined *)(_Var60.__klassIndex + 0x2010645f);
  bVar12 = *puVar108 + (byte)uVar106;
  bVar37 = CARRY1(*puVar108,(byte)uVar106) || CARRY1(bVar12,bVar88);
  *puVar108 = bVar12 + bVar88;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)_Var73.dummy);
  bVar88 = CARRY1(*pbVar69,bVar22) || CARRY1(*pbVar69 + bVar22,bVar37);
  pbRama3201064 = pbRam609a1064;
  *pbVar69 = *pbVar69 + bVar22 + bVar37;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&in_stack_49->rgctx_data + 1));
  bVar12 = *pbVar69;
  bVar23 = (byte)((uint)in_stack_49 >> 8);
  bVar24 = *pbVar69 + bVar23;
  *pbVar69 = bVar24 + bVar88;
  bVar37 = CARRY1((byte)in_stack_49,bVar25) ||
           CARRY1((byte)in_stack_49 + bVar25,CARRY1(bVar12,bVar23) || CARRY1(bVar24,bVar88));
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + in_stack_109 + 0x62);
  bVar12 = (byte)in_stack_110;
  bVar88 = CARRY1(*pbVar69,bVar12) || CARRY1(*pbVar69 + bVar12,bVar37);
  *pbVar69 = *pbVar69 + bVar12 + bVar37;
  bVar25 = (byte)in_stack_109;
  bVar37 = CARRY1(bVar25,bVar25) || CARRY1(bVar25 * '\x02',bVar88);
  bVar18 = bVar25 * '\x02' + bVar88;
  pbVar111 = (byte *)CONCAT31((int3)((uint)in_stack_109 >> 8),bVar18);
  puVar112 = (ushort *)(iStack_9 + -0x4b + in_stack_110);
  *puVar112 = *puVar112 + (ushort)(0 < (short)-(*puVar112 & 3)) * -(*puVar112 & 3);
  puVar112 = (ushort *)(iStack_9 + 0x22 + in_stack_110);
  *puVar112 = *puVar112 + (ushort)(0 < (short)-(*puVar112 & 3)) * -(*puVar112 & 3);
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + iStack_9);
  bVar23 = (byte)((uint)iStack_9 >> 8);
  bVar88 = CARRY1(*pbVar69,bVar23) || CARRY1(*pbVar69 + bVar23,bVar37);
  *pbVar69 = *pbVar69 + bVar23 + bVar37;
  iRam_? = iStack_9;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + iStack_9);
  bVar37 = CARRY1(*pbVar69,bVar23) || CARRY1(*pbVar69 + bVar23,bVar88);
  *pbVar69 = *pbVar69 + bVar23 + bVar88;
  iRam_? = iStack_9;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)in_stack_59);
  bVar25 = _Stack_54._0_1_;
  bVar88 = CARRY1(*pbVar69,bVar25) || CARRY1(*pbVar69 + bVar25,bVar37);
  *pbVar69 = *pbVar69 + bVar25 + bVar37;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + iStack_9);
  bVar37 = CARRY1(*pbVar69,bVar23) || CARRY1(*pbVar69 + bVar23,bVar88);
  *pbVar69 = *pbVar69 + bVar23 + bVar88;
  iRam_? = iStack_9;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + in_stack_110 + 0x66);
  bVar21 = _Stack_54._1_1_;
  bVar88 = CARRY1(*pbVar69,bVar21) || CARRY1(*pbVar69 + bVar21,bVar37);
  *pbVar69 = *pbVar69 + bVar21 + bVar37;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&(in_stack_59->_1).typeHierarchy + 3));
  bVar24 = (byte)iStack_9;
  bVar37 = CARRY1(*pbVar69,bVar24) || CARRY1(*pbVar69 + bVar24,bVar88);
  *pbVar69 = *pbVar69 + bVar24 + bVar88;
  bVar88 = CARRY1(bVar12,bVar18) || CARRY1(bVar12 + bVar18,bVar37);
  uVar113 = (undefined3)((uint)in_stack_110 >> 8);
  bVar20 = bVar12 + bVar18 + bVar37;
  iVar107 = CONCAT31(uVar113,bVar20);
  pbVar69 = (byte *)segment(in_FS,(short)pbVar111 + 0x69);
  bVar37 = CARRY1(*pbVar69,bVar25) || CARRY1(*pbVar69 + bVar25,bVar88);
  *pbVar69 = *pbVar69 + bVar25 + bVar88;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET +
                    _Stack_54.__klassIndex + 100 + (int)in_stack_114 * 2);
  bVar17 = (byte)((uint)in_stack_109 >> 8);
  bVar88 = CARRY1(*pbVar69,bVar17) || CARRY1(*pbVar69 + bVar17,bVar37);
  *pbVar69 = *pbVar69 + bVar17 + bVar37;
  iVar71 = _Stack_54.__klassIndex + 0xa106469;
  bVar19 = (byte)((uint)in_stack_110 >> 8);
  bVar37 = CARRY1(*(byte *)iVar71,bVar19) || CARRY1(*(char *)iVar71 + bVar19,bVar88);
  *(byte *)iVar71 = *(char *)iVar71 + bVar19 + bVar88;
  bVar88 = CARRY1(bVar25,bVar18) || CARRY1(bVar25 + bVar18,bVar37);
  bVar22 = bVar25 + bVar18 + bVar37;
  pbVar69 = (byte *)(iVar107 + 0x6b);
  bVar25 = *pbVar69;
  bVar12 = *pbVar69;
  *pbVar69 = bVar12 + bVar21 + bVar88;
  pcVar79 = (char *)((int)unaff_FS_OFFSET + iVar107 + -0x18ef9b95);
  *pcVar79 = *pcVar79 + bVar17 + (CARRY1(bVar25,bVar21) || CARRY1(bVar12 + bVar21,bVar88));
  lVar115 = (longlong)*(int *)(iStack_9 + 0x14 + iVar107) * 0x6c;
  iVar116 = (int)lVar115;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + CONCAT31((int3)((uint)_Stack_54 >> 8),bVar22) + 0x6c);
  bVar37 = CARRY1(*pbVar69,bVar24) || CARRY1(*pbVar69 + bVar24,iVar116 != lVar115);
  *pbVar69 = *pbVar69 + bVar24 + (iVar116 != lVar115);
  pbVar69 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&(in_stack_59->_1).initializationExceptionGCHandle);
  bVar88 = CARRY1(*pbVar69,bVar21) || CARRY1(*pbVar69 + bVar21,bVar37);
  *pbVar69 = *pbVar69 + bVar21 + bVar37;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + iStack_9 + -0x3aef9b94);
  bVar37 = CARRY1(*pbVar69,bVar18) || CARRY1(*pbVar69 + bVar18,bVar88);
  *pbVar69 = *pbVar69 + bVar18 + bVar88;
  uVar117 = (undefined2)iVar107;
  uVar118 = in(uVar117);
  *(undefined1 *)&(_Var108.type)->data = uVar118;
  pbVar69 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar111);
  bVar88 = CARRY1(*pbVar69,bVar19) || CARRY1(*pbVar69 + bVar19,bVar37);
  *pbVar69 = *pbVar69 + bVar19 + bVar37;
  uVar72 = in(uVar117);
  *(undefined4 *)((int)&(_Var108.type)->data + 1) = uVar72;
  bVar37 = CARRY1(bVar23,bVar18) || CARRY1(bVar23 + bVar18,bVar88);
  bVar12 = bVar23 + bVar18 + bVar88;
  puVar108 = (undefined *)((int)&_Var108.type[1].data + 1);
  uVar72 = in(uVar117);
  *(undefined4 *)((int)&(_Var108.type)->attrs + 1) = uVar72;
  bVar88 = CARRY1(bVar21,bVar21) || CARRY1(bVar21 * '\x02',bVar37);
  bVar23 = bVar21 * '\x02' + bVar37;
  out(*(undefined1 *)&(in_stack_59->_0).image,uVar117);
  bVar37 = CARRY1(bVar24,bVar24) || CARRY1(bVar24 * '\x02',bVar88);
  uVar119 = (undefined3)(CONCAT22((short)((uint)iStack_9 >> 0x10),CONCAT11(bVar12,bVar24)) >> 8);
  bVar25 = bVar24 * '\x02' + bVar88;
  pbVar69 = (byte *)CONCAT31(uVar119,bVar25);
  puVar5 = (undefined1 *)((int)&(in_stack_59->_0).gc_desc + 1);
  out(*(undefined4 *)((int)&(in_stack_59->_0).image + 1),uVar117);
  uVar120 = (undefined3)(CONCAT22((short)((uint)_Stack_54 >> 0x10),CONCAT11(bVar23,bVar22)) >> 8);
  bVar24 = bVar22 + bVar20 + bVar37;
  iVar71 = CONCAT31(uVar120,bVar24);
  if (CARRY1(bVar22,bVar20) || CARRY1(bVar22 + bVar20,bVar37)) {
    bVar37 = CARRY1(*pbVar69,bVar12) || 0xfe < (byte)(*pbVar69 + bVar12);
    *pbVar69 = *pbVar69 + bVar12 + 1;
    pMVar121 = (MonitorData *)((int)unaff_FS_OFFSET + (int)(in_stack_114 + -0x7b));
    bVar88 = CARRY1((byte)*pMVar121,bVar18) || CARRY1((char)*pMVar121 + bVar18,bVar37);
    pbRama3201064 = pbVar69;
    *pMVar121 = (MonitorData)((char)*pMVar121 + bVar18 + bVar37);
    goto code_?;
  }
  bVar37 = CARRY1(*puVar108,bVar19);
  *puVar108 = *puVar108 + bVar19;
  if (*puVar108 == '\0') {
    bVar88 = CARRY1(*pbVar69,bVar12) || CARRY1(*pbVar69 + bVar12,bVar37);
    *pbVar69 = *pbVar69 + bVar12 + bVar37;
  }
  else {
    bVar122 = CARRY1(bVar25,bVar24) || CARRY1(bVar25 + bVar24,bVar37);
    bVar25 = bVar25 + bVar24 + bVar37;
    pbVar69 = (byte *)CONCAT31(uVar119,bVar25);
    if (bVar25 == 0) {
      in_stack_114 = in_stack_114 + -0x7b;
      bVar88 = CARRY1((byte)*in_stack_114,bVar18) ||
                CARRY1((char)*in_stack_114 + bVar18,bVar122);
      *in_stack_114 = (MonitorData)((char)*in_stack_114 + bVar18 + bVar122);
      goto code_?;
    }
    bVar37 = CARRY1(*pbVar111,bVar24) || CARRY1(*pbVar111 + bVar24,bVar122);
    *pbVar111 = *pbVar111 + bVar24 + bVar122;
    if (*pbVar111 != 0) {
      bVar88 = CARRY1(*puVar5,bVar18) || CARRY1(*puVar5 + bVar18,bVar37);
      *puVar5 = *puVar5 + bVar18 + bVar37;
      goto code_?;
    }
    pbVar123 = (byte *)(iVar107 + 0x76);
    bVar88 = CARRY1(*pbVar123,bVar19) || CARRY1(*pbVar123 + bVar19,bVar37);
    *pbVar123 = *pbVar123 + bVar19 + bVar37;
    bVar37 = CARRY1(bVar20,bVar20) || CARRY1(bVar20 * '\x02',bVar88);
    cVar124 = bVar20 * '\x02' + bVar88;
    iVar107 = CONCAT31(uVar113,cVar124);
    if (bVar37 || cVar124 == '\0') {
      bVar88 = CARRY1(bVar25,bVar18) || CARRY1(bVar25 + bVar18,bVar37);
      pbVar69 = (byte *)CONCAT31(uVar119,bVar25 + bVar18 + bVar37);
      goto code_?;
    }
    pbVar123 = pbVar111 + 0x17106477;
    bVar122 = CARRY1(*pbVar123,bVar12) || CARRY1(*pbVar123 + bVar12,bVar37);
    *pbVar123 = *pbVar123 + bVar12 + bVar37;
    if ((char)*pbVar123 < '\0') {
      bVar88 = CARRY1(bVar25,bVar18) || CARRY1(bVar25 + bVar18,bVar122);
      pbVar69 = (byte *)CONCAT31(uVar119,bVar25 + bVar18 + bVar122);
      goto code_?;
    }
    pbVar123 = pbVar111 + 0x78;
    bVar37 = CARRY1(*pbVar123,bVar17) || CARRY1(*pbVar123 + bVar17,bVar122);
    *pbVar123 = *pbVar123 + bVar17 + bVar122;
    pbVar123 = (byte *)((int)unaff_FS_OFFSET + iVar71 + 100 + (int)puVar108 * 2);
    bVar88 = CARRY1(*pbVar123,bVar25) || CARRY1(*pbVar123 + bVar25,bVar37);
    *pbVar123 = *pbVar123 + bVar25 + bVar37;
    bVar37 = CARRY1(bVar24,bVar23) || CARRY1(bVar24 + bVar23,bVar88);
    bVar25 = bVar24 + bVar23 + bVar88;
    iVar71 = CONCAT31(uVar120,bVar25);
    if (-1 < (char)bVar25) {
      bVar88 = CARRY1(*pbVar111,bVar17) || CARRY1(*pbVar111 + bVar17,bVar37);
      *pbVar111 = *pbVar111 + bVar17 + bVar37;
      goto code_?;
    }
    pbVar123 = (byte *)((int)&in_stack_59[0x2102d6].vtable.CompareTo_1.methodPtr + 3);
    bVar88 = CARRY1(*pbVar123,bVar25) || CARRY1(*pbVar123 + bVar25,bVar37);
    *pbVar123 = *pbVar123 + bVar25 + bVar37;
    if ((POPCOUNT(*pbVar123) & 1U) != 0) {
      pbVar111[-0x3bef9b75] = pbVar111[-0x3bef9b75] + bVar12 + bVar88;
      halt_baddata();
    }
  }
  pbVar123 = pbVar69 + 0x7b;
  bVar37 = CARRY1(*pbVar123,bVar17) || CARRY1(*pbVar123 + bVar17,bVar88);
  *pbVar123 = *pbVar123 + bVar17 + bVar88;
  pbVar123 = (byte *)((int)unaff_FS_OFFSET + iVar116 + 100 + (int)puVar108 * 2);
  bVar12 = *pbVar123;
  bVar22 = (byte)((uint)iVar71 >> 8);
  bVar25 = *pbVar123;
  *pbVar123 = bVar25 + bVar22 + bVar37;
  *pbVar111 = *pbVar111 + (char)iVar71 + (CARRY1(bVar12,bVar22) || CARRY1(bVar25 + bVar22,bVar37));
  pbVar69[iVar107 + -0x50] = pbVar69[iVar107 + -0x50] & 0x80;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar69 + -0x7f));
  bVar25 = *pbVar111;
  *pbVar111 = *pbVar111 + bVar18;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((int)&in_stack_59[-1].vtable.System_IConvertible_ToInt16.method + 3)
                    );
  bVar24 = *pbVar111;
  bVar23 = (byte)pbVar69;
  bVar12 = *pbVar111;
  *pbVar111 = bVar12 + bVar23 + CARRY1(bVar25,bVar18);
  bVar21 = (byte)iVar107;
  iVar107 = CONCAT22((short)((uint)iVar107 >> 0x10),
                    CONCAT11((char)((uint)iVar107 >> 8) + bVar22 +
                             (CARRY1(bVar24,bVar23) || CARRY1(bVar12 + bVar23,CARRY1(bVar25,bVar18))
                             ),bVar21));
  pbVar69[iVar107 + -0x6a] = pbVar69[iVar107 + -0x6a] & 0x83;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar69 + -0x7c));
  bVar25 = *pbVar111;
  *pbVar111 = *pbVar111 + bVar23;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + iVar116 + (int)in_stack_114 * 2);
  bVar37 = CARRY1(*pbVar111,bVar21) || CARRY1(*pbVar111 + bVar21,CARRY1(bVar25,bVar23));
  *pbVar111 = *pbVar111 + bVar21 + CARRY1(bVar25,bVar23);
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar69);
  bVar25 = (byte)((uint)pbVar69 >> 8);
  bVar88 = CARRY1(*pbVar111,bVar25) || CARRY1(*pbVar111 + bVar25,bVar37);
  *pbVar111 = *pbVar111 + bVar25 + bVar37;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar69);
  bVar37 = CARRY1(*pbVar111,bVar25) || CARRY1(*pbVar111 + bVar25,bVar88);
  pbRam84a61064 = pbVar69;
  *pbVar111 = *pbVar111 + bVar25 + bVar88;
  pbVar111 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar69);
  bVar88 = CARRY1(*pbVar111,bVar25) || CARRY1(*pbVar111 + bVar25,bVar37);
  pbRama3201064 = pbVar69;
  *pbVar111 = *pbVar111 + bVar25 + bVar37;
  pbRam855d1064 = pbVar69;
code_?:
  *(char *)((int)unaff_FS_OFFSET + (int)puVar5) =
       *(char *)((int)unaff_FS_OFFSET + (int)puVar5) + bVar18 + bVar88;
  LOCK();
  bVar25 = pbVar69[iVar107 + 0x4b];
  pbVar69[iVar107 + 0x4b] = (byte)((uint)pbVar69 >> 8);
  uVar117 = (undefined2)((uint)pbVar69 >> 0x10);
  uVar118 = SUB41(pbVar69,0);
  UNLOCK();
  LOCK();
  pbVar69 = (byte *)(CONCAT22(uVar117,CONCAT11(bVar25,uVar118)) + -0x28 + iVar107);
  bVar12 = *pbVar69;
  *pbVar69 = bVar25;
  UNLOCK();
  LOCK();
  pbVar69 = (byte *)(CONCAT22(uVar117,CONCAT11(bVar12,uVar118)) + 0x78 + iVar107);
  bVar25 = *pbVar69;
  *pbVar69 = bVar12;
  UNLOCK();
  LOCK();
  pbVar69 = (byte *)(CONCAT22(uVar117,CONCAT11(bVar25,uVar118)) + -0x28 + iVar107);
  bVar12 = *pbVar69;
  *pbVar69 = bVar25;
  UNLOCK();
  LOCK();
  pbVar69 = (byte *)(CONCAT22(uVar117,CONCAT11(bVar12,uVar118)) + 0x42 + iVar107);
  bVar25 = *pbVar69;
  *pbVar69 = bVar12;
  iVar71 = CONCAT22(uVar117,CONCAT11(bVar25,uVar118));
  UNLOCK();
  *(byte *)(iVar71 + -0x42 + iVar107) = bVar25;
  *(byte *)(iVar71 + 0x3b + iVar107) = bVar25;
  *(int *)(iVar71 + -0x2f + iVar107) = iVar116;
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

