
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_vehicle____null);
    cRam_? = '\x01';
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  pIStack_9 = (Il2CppClass *)0x0;
  pIStack_10 = (Il2CppClass *)0x0;
  pMStack_11 = (MVAvatar__Class *)0x0;
  pMVar12 = (MVAvatar__Class *)this;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (unaff_ESI,*piVar17,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pWVar19->fields)._.worldObjectClientManager;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          unaff_ESI = (MVNetworkGame *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x12,(MethodInfo *)0x0);
          bVar13 = 0;
          if (unaff_EDI != (MVAvatar__Class *)0x0) {
            if ((unaff_ESI == (MVNetworkGame *)0x0) ||
               ((bVar13 = (unaff_ESI->klass->_1).naturalAligment <
                          (
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment, !(bool)bVar13 &&
                (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                           (unaff_ESI->klass->_1).typeHierarchy
                           [(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment - 1],
                bVar13 = pDVar20 < 
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                , pDVar20 ==
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                )))) {
              piVar17 = (int32_t *)func_?();
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                        ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar17,
                         (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?(pOVar14);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        bVar13 = 0;
        if (pWVar19 != (WorldNetwork *)0x0) {
          pMVar23 = (pWVar19->fields)._.worldObjectClientManager;
          bVar13 = 0;
          if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                      (pMVar23,(int32_t)pMVar12,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?(pOVar14);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        bVar13 = 0;
        if (pWVar19 != (WorldNetwork *)0x0) {
          pMVar23 = (pWVar19->fields)._.worldObjectClientManager;
          bVar13 = 0;
          if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar23,(int32_t)pMVar12,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
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
    pMVar24 = (this->fields).dynamicEventCallbackManager;
    bVar13 = 0;
    if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_09 = (HashSet_1_System_ByteEnum_ *)
                (pMVar24->fields).eventsHandledByDynamicEventCallbackManager;
      bVar13 = 0;
      if (this_09 != (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (this_09,eventCode,
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
        pMVar24 = (this->fields).dynamicEventCallbackManager;
        bVar13 = 0;
        if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_10 = (pMVar24->fields).eventCallbacks;
          bVar13 = 0;
          if (this_10 !=
              (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
               *)0x0) {
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_10,eventCode,
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
    unaff_ESI = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    (unaff_ESI,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        pMVar27 = (pWVar19->fields)._.worldInventory;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (MVNetworkGame *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pMVar12 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x31,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar27 == (MVWorldInventory *)0x0) break;
          pMStack_28 = (MVAvatar__Class *)TypeInfo__System__Byte;
          unaff_EDI = pMVar12;
          if (pMVar12 == (MVAvatar__Class *)0x0) {
code_?:
            bVar13 = 0;
            pMVar12 = unaff_EDI;
            if (unaff_ESI != (MVNetworkGame *)0x0) {
              pIVar15 = (unaff_ESI->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              pSVar29 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              iVar30 = *piVar17;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (pMVar27->fields).runtimePrototypes;
              bVar13 = 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar31 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar30,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                pBVar32 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (pBVar32,(Byte__Array *)unaff_EDI,(MethodInfo *)0x0);
                bVar13 = 0;
                if (pRVar31 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar31,pBVar32,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI = (MVAvatar__Class *)func_?();
          bVar13 = 0;
          pMStack_33 = unaff_EDI;
          if (unaff_EDI != (MVAvatar__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pWVar19->fields)._.worldInventory;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (MVNetworkGame *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if ((unaff_EDI != (MVAvatar__Class *)0x0) && (bVar13 = 0, pOVar14 != (Object *)0x0)) {
            pIVar15 = (pOVar14->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Single->_0).element_class;
            bVar13 = pIVar15 < pIVar16;
            if (pIVar15 != pIVar16) goto code_?;
            pfVar34 = (float *)func_?();
            fVar35 = *pfVar34;
            bVar13 = 0;
            if (unaff_ESI != (MVNetworkGame *)0x0) {
              pIVar15 = (unaff_ESI->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              pSVar29 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              iVar30 = *piVar17;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_01 = ((MVWorldObjectClientManager__Fields *)
                        &((MVNetworkGame__Fields *)&(unaff_EDI->_0).name)->GameEventManager)->
                        worldObjects;
              bVar13 = 0;
              if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                pRVar31 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar30,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar13 = 0;
                if (pRVar31 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar31->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar31->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar31->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar31,fVar35,(MethodInfo *)0x0);
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
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_33 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)pMStack_28,*piVar17,iVar36,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent(pMVar18,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory(pMVar18,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14);
      iVar30 = *piVar17;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x35,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14,TypeInfo__System__Int32);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar18,(int32_t)pMVar12,iVar30,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14);
      iVar30 = *piVar17;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar37 = (FriendStatus__Enum *)func_?(pOVar14,TypeInfo__MV__Common__FriendStatus);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar18,(int32_t)pMVar12,iVar30,*pFVar37,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar18,*piVar17,(int32_t)pMVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar18,*piVar17,(int32_t)pMVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?(pOVar14);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar18,(int32_t)pMVar12,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar18,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar38 = (pMVar18->fields)._NetworkGameStateListener_k__BackingField;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        pMStack_33 = (MVAvatar__Class *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x41,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar38 != (MVNetworkGameStateListener *)0x0) {
          puVar21 = (undefined4 *)func_?();
          pMVar12 = (MVAvatar__Class *)*puVar21;
          piVar39 = (int *)func_?();
          iVar40 = *piVar39;
          puVar21 = (undefined4 *)func_?();
          pMStack_33 = (MVAvatar__Class *)*puVar21;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (pMVar38->fields).currentGameState = (int32_t)pMStack_33;
          (pMVar38->fields).startTime = iVar40;
          (pMVar38->fields).duration = (int32_t)pMVar12;
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            iVar30 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar18,(MethodInfo *)0x0);
            (pMVar38->fields).timeLeft = (int)pMVar12 + (iVar40 - iVar30);
            pEVar41 = (pMVar38->fields).OnGameStateChanged;
            if (pEVar41 != (EventHandler_1_GameStateChangeEventArgs_ *)0x0) {
              this_11 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(this_11,(MethodInfo *)0x0);
              (*(pEVar41->fields)._._.invoke_impl)();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent(pMVar18,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar42 != (MVLocalPlayer *)0x0) {
          iVar40 = (pMVar42->fields)._._ActorNr_k__BackingField;
          piVar39 = (int *)func_?();
          if (*piVar39 == iVar40) goto code_?;
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pWVar19 = (pMVar18->fields).worldNetwork;
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)photonEvent;
            if (pWVar19 != (WorldNetwork *)0x0) {
              pMVar43 = (MVAvatar__Class *)(pWVar19->fields)._.worldObjectClientManager;
              pMStack_33 = pMVar43;
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (pMVar43 != (MVAvatar__Class *)0x0) {
                pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar17 = (int32_t *)func_?(pOVar14);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)pMStack_33,*piVar17,pDVar22,
                           (MethodInfo *)0x0);
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
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_33 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        pPVar44 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_28,*pPVar44,iVar36,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar45 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMStack_33 = (MVAvatar__Class *)*puVar21;
      pfVar34 = (float *)func_?(pOVar45);
      pIVar16 = (Il2CppClass *)*pfVar34;
      pfVar34 = (float *)func_?(pOVar14,TypeInfo__System__Single);
      VStack_8.x = *pfVar34;
      VStack_8.z = (float)pMStack_33;
      VStack_8.y = (float)pIVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMStack_33 = (MVAvatar__Class *)*puVar21;
      puVar21 = (undefined4 *)func_?();
      pIVar16 = (Il2CppClass *)*puVar21;
      puVar21 = (undefined4 *)func_?();
      pIStack_9 = (Il2CppClass *)*puVar21;
      pMVar18 = (this->fields).networkGame;
      pMStack_11 = pMStack_33;
      pIStack_10 = pIVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)0x0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        camOrigin.y = VStack_8.y;
        camOrigin.x = VStack_8.x;
        camOrigin.z = VStack_8.z;
        camDir.y = (float)pIStack_10;
        camDir.x = (float)pIStack_9;
        camDir.z = (float)pMStack_11;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar18,*piVar17,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
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
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar46 = (MVGameMsgType__Enum *)func_?(pOVar14);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar46,pDVar22,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pMStack_33 = (MVAvatar__Class *)
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
      piVar17 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3(enumType,*piVar17,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)0x0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar47 = (MVTeam__Enum *)func_?();
        team = *pMVar47;
        piVar17 = (int32_t *)func_?(pMStack_33);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar18,*piVar17,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMStack_28 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_33 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)pMStack_28,*piVar17,iVar36,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent(pMVar18,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar18,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar14 = (Object *)func_?(TypeInfo__System__Int32);
      pOVar45 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x81,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?(pOVar45,TypeInfo__MV__Common__AchievementType);
      pMStack_33 = (MVAvatar__Class *)*puVar21;
      pOVar45 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&pMStack_33);
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar14,pOVar45,
                           (MethodInfo *)0x0);
      uVar48 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar49 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)0x0;
      if (pDVar49 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar49,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar21 = (undefined4 *)func_?();
        pMStack_50 = (MVPlayer *)*puVar21;
        uStack_51 = 0;
        pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
        TVar52 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar49,pOVar14,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar21 = (undefined4 *)func_?(TVar52.m_Index,TypeInfo__System__Int32);
        pMStack_28 = (MVAvatar__Class *)*puVar21;
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)0x0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar53 = (pMVar18->fields)._PlayerController_k__BackingField;
          pMStack_33 = (MVAvatar__Class *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)0x0;
          if (pMVar53 != (MVLocalObjectController *)0x0) {
            pbVar54 = (byte *)func_?();
            bVar13 = *pbVar54;
            piVar17 = (int32_t *)func_?(pMStack_33);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar53,*piVar17,(int32_t)pMStack_50,(int32_t)pMStack_28,(uint)bVar13,
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
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar30 = *piVar17;
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
          pMVar56 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar55,iVar30,(MethodInfo *)0x0);
          pMVar12 = TypeInfo__MVAvatar;
          if ((pMVar56 == (MVWorldObject *)0x0) || (iVar40 = func_?(), iVar40 == 0))
          goto code_?;
          iVar40 = func_?();
          bVar13 = 0;
          if (iVar40 != 0) {
            func_?();
            func_?(0x5b);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar21 = (undefined4 *)func_?();
        pMStack_33 = (MVAvatar__Class *)*puVar21;
        uStack_51 = 0;
        pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
        TVar52 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,
                            pOVar14,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar21 = (undefined4 *)func_?(TVar52.m_Index,TypeInfo__System__Int32);
        pMStack_57 = (MVAvatar__Class *)*puVar21;
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar55,(int32_t)pMStack_33,(MethodInfo *)0x0);
            pMStack_11 = (MVAvatar__Class *)func_?();
            bVar13 = 0;
            if (pMStack_11 != (MVAvatar__Class *)0x0) {
              pMStack_50 = (MVPlayer *)(pMStack_11->vtable).get_Scale.methodPtr;
              uStack_58 = 3;
              pOVar14 = (Object *)func_?();
              TVar52 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar12,pOVar14,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar21 = (undefined4 *)func_?(TVar52.m_Index);
              pDStack_59 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar21;
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar21 = (undefined4 *)func_?(pOVar14,TypeInfo__System__Int32);
              pMStack_60 = (MVWorldObject *)*puVar21;
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x3a,(MethodInfo *)0x0);
              puVar21 = (undefined4 *)func_?(pOVar14,TypeInfo__System__Int32);
              pMStack_28 = (MVAvatar__Class *)*puVar21;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              puVar21 = (undefined4 *)func_?();
              pMStack_33 = (MVAvatar__Class *)*puVar21;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar21 = (undefined4 *)func_?();
              VStack_8.z = (float)*puVar21;
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)this;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pWVar19 = (pMVar18->fields).worldNetwork;
                bVar13 = 0;
                if (pWVar19 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar19,(int32_t)pMStack_60,0,1,(int32_t)pMStack_50,(int32_t)pDStack_59
                             ,(int32_t)pMStack_28,(int32_t)pMStack_33,(MethodInfo *)0x0);
                  pMVar18 = (this->fields).networkGame;
                  bVar13 = 0;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar18,(MethodInfo *)0x0);
                    bVar13 = 0;
                    if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_60 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar55,(int32_t)pDStack_59,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pMVar12 = (MVAvatar__Class *)
                                TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0
                      ;
                      if (pMVar12 == (MVAvatar__Class *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        pMVar12 = (MVAvatar__Class *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)pMVar12,(Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)pMVar12;
                        func_?();
                      }
                      bVar13 = 0;
                      if (pMStack_60 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar18 = (this->fields).networkGame;
                        bVar13 = 0;
                        if (pMVar18 != (MVNetworkGame *)0x0) {
                          pMVar53 = (pMVar18->fields)._PlayerController_k__BackingField;
                          pMStack_60 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar13 = 0;
                          pMVar12 = (MVAvatar__Class *)0x0;
                          if (pMVar53 != (MVLocalObjectController *)0x0) {
                            pbVar54 = (byte *)func_?();
                            bVar13 = *pbVar54;
                            piVar17 = (int32_t *)func_?(pMStack_60);
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar53,*piVar17,(int32_t)pDStack_59,(int32_t)pMStack_57,
                                       (uint)bVar13,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      ((MVWorldObjectSpawner *)pMStack_11,(int32_t)VStack_8.z,
                                       (MethodInfo *)0x0);
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
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x91,(MethodInfo *)0x0);
      puVar61 = (undefined1 *)func_?(pOVar14);
      uVar62 = *puVar61;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar34 = (float *)func_?(pOVar14,TypeInfo__MV__Common__RewardType);
      pFVar63 = (FieldInfo *)*pfVar34;
      pMStack_11 = pMVar12;
      pMStack_57 = (MVAvatar__Class *)func_?(TypeInfo__System__Int32,&pMStack_11);
      uStack_58 = uVar62;
      pOVar14 = (Object *)func_?();
      VStack_8.z = (float)pFVar63;
      pOVar45 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_57,
                           pOVar14,pOVar45,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      pMVar64 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar16 = (pMVar64->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar16->vtable[0].methodPtr & 0x100) == 0) {
        pIVar16 = (Il2CppClass *)func_?();
      }
      if (pIVar16->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar16 = (pMVar64->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar16->vtable[0].methodPtr & 0x100) == 0) {
        pIVar16 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar16->static_fields;
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
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar65 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pWVar19 != (WorldNetwork *)0x0) {
          this_02 = (pWVar19->fields)._.runtimeEventManagerNetwork;
          pBVar32 = (BytePacker *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    (pBVar32,pBVar65,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create(pBVar32,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)0x0;
          if (this_02 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_02,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        this_03 = (RuntimeEventManager *)(pWVar19->fields)._.runtimeEventManagerNetwork;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (this_03 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_03,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x59,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?(pOVar14);
      pMStack_28 = (MVAvatar__Class *)*puVar21;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar61 = (undefined1 *)func_?(pOVar14,TypeInfo__System__Byte);
      pMStack_33 = (MVAvatar__Class *)CONCAT31(pMStack_33._1_3_,*puVar61);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pDStack_59 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar21;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMStack_50 = (MVPlayer *)*puVar21;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar66 = (bool *)func_?();
      bVar25 = *pbVar66;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar67 = (char *)func_?();
      pMVar18 = (this->fields).networkGame;
      if (*pcVar67 == '\0') {
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar68 = (pMVar18->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar68 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar68,(GameStatCounterType__Enum)pMStack_33,(int32_t)pMVar12,
                       (MVTeam__Enum)pMStack_28,(int32_t)pDStack_59,(int32_t)pMStack_50,bVar25,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar68 = (pMVar18->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar68 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar68,(GameStatCounterType__Enum)pMStack_33,(MVTeam__Enum)pMStack_28,
                       (int32_t)pMVar12,(int32_t)pDStack_59,(int32_t)pMStack_50,bVar25,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar65 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pGVar68 = (pMVar18->fields).gameStatCounterManager;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pGVar68 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar68,pBVar65,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar30 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pMVar64 = (MethodInfo *)0x0;
      pBVar65 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar12,pBVar65,pMVar64);
      this_12 = (MvAvatarMetaData *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                (this_12,(BytePacker *)pMVar12,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)this_12,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        this_04 = (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar13 = 0;
        if (this_04 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_04,iVar30,this_12,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar30 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar66 = (bool *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar69 = (pMVar18->fields)._GameCoinManager_k__BackingField;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar69 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar69,*pbVar66,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        unaff_ESI = (MVNetworkGame *)photonEvent;
        if (pIVar15 != pIVar16) goto code_?;
        puVar21 = (undefined4 *)func_?();
        pMVar12 = (MVAvatar__Class *)*puVar21;
        pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
        if (pDVar22 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          unaff_EDI = (MVAvatar__Class *)pDVar22->klass;
          bVar13 = 1;
          if (((unaff_EDI->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                        (unaff_EDI->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment - 1],
             bVar13 = pDVar20 < 
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
             , pDVar20 !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar18,(NotificationType__Enum)pMVar12,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar13 = 0;
    if (unaff_EDI == (MVAvatar__Class *)0x0) break;
    if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    bVar13 = (pDVar22->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if ((!(bool)bVar13) &&
       (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                  (pDVar22->klass->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment - 1],
       bVar13 = pDVar20 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar20 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
       )) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pMVar12 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    unaff_EDI = (MVAvatar__Class *)func_?();
    pMStack_11 = (MVAvatar__Class *)TypeInfo__System__Byte;
    if (pMVar12 == (MVAvatar__Class *)0x0) {
      pBVar65 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar65,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        unaff_ESI = (MVNetworkGame *)photonEvent;
        if (pIVar15 != pIVar16) {
code_?:
          func_?();
          goto code_?;
        }
        puVar61 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)unaff_EDI >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar61);
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          pbVar66 = (bool *)func_?();
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar18,(BytePacker *)unaff_EDI,eventCode,*pbVar66,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar65 = (Byte__Array *)func_?(pMVar12,TypeInfo__System__Byte);
    bVar13 = 0;
    if (pBVar65 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar42 != (MVLocalPlayer *)0x0) {
          iVar40 = (pMVar42->fields)._._ActorNr_k__BackingField;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (unaff_ESI != (MVNetworkGame *)0x0) {
            pIVar15 = (unaff_ESI->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Int32->_0).element_class;
            bVar13 = pIVar15 < pIVar16;
            pSVar29 = (String__Class *)TypeInfo__System__Int32;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pIVar15 != pIVar16) goto code_?;
            piVar39 = (int *)func_?();
            if (*piVar39 == iVar40) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar69 = (pMVar18->fields)._GameCoinManager_k__BackingField;
                bVar13 = 0;
                pMVar12 = (MVAvatar__Class *)photonEvent;
                if (pMVar69 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar69,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar18 = (this->fields).networkGame;
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    pMVar70 = (pMVar18->fields).operationRequests;
                    bVar13 = 0;
                    pMVar12 = (MVAvatar__Class *)photonEvent;
                    if (pMVar70 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      pMStack_11 = (MVAvatar__Class *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                ((Dictionary_2_System_Byte_System_Object_ *)pMStack_11,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      pPVar71 = (pMVar70->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar13 = 0;
                      pMVar12 = (MVAvatar__Class *)photonEvent;
                      if (pPVar71 != (PhotonPeer *)0x0) {
                        (*(code *)(pPVar71->klass->vtable).SendOperation.method)
                                  (pPVar71,0x66,pMStack_11);
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
              pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                unaff_EDI = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
                unaff_ESI = (MVNetworkGame *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar13 = 0;
                pMVar12 = unaff_EDI;
                if ((unaff_EDI != (MVAvatar__Class *)0x0) && (bVar13 = 0, pOVar14 != (Object *)0x0))
                {
                  pIVar15 = (pOVar14->klass->_0).element_class;
                  pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar13 = pIVar15 < pIVar16;
                  if (pIVar15 != pIVar16) goto code_?;
                  pbVar66 = (bool *)func_?();
                  bVar25 = *pbVar66;
                  bVar13 = 0;
                  if (unaff_ESI != (MVNetworkGame *)0x0) {
                    pIVar15 = (unaff_ESI->klass->_0).element_class;
                    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    pSVar29 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar15 == pIVar16) {
                      piVar17 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI,*piVar17,bVar25,(MethodInfo *)0x0);
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
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,7,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_EDI != (MVAvatar__Class *)0x0) && (bVar13 = 0, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        pcVar67 = (char *)func_?();
        if (unaff_ESI == (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     *pcVar67 == '\0',(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (unaff_ESI->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (unaff_ESI->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,*pcVar67 == '\0',
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
code_?:
        func_?();
        pSVar29 = extraout_ECX;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        bVar13 = (pDVar22->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if ((!(bool)bVar13) &&
           (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar22->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1],
           bVar13 = pDVar20 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    if (pOVar14 == (Object *)0x0) {
      pBVar65 = (Byte__Array *)0x0;
code_?:
      pMVar18 = (this->fields).networkGame;
      pBVar32 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (pBVar32,pBVar65,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)pMVar12,pBVar32,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)pMVar12;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar65 = (Byte__Array *)func_?();
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)0x0;
    if (pBVar65 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    (unaff_ESI,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar70 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar70 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar71 = (pMVar70->fields).peer;
      pMVar12 = (MVAvatar__Class *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)pMVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar13 = 0;
      if (pPVar71 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar71->klass->vtable).SendOperation.method)(pPVar71,0x3c,pMVar12);
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
    this_13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_13,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pMVar12 = (MVAvatar__Class *)func_?();
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar21 = (undefined4 *)func_?();
      pMStack_11 = (MVAvatar__Class *)*puVar21;
      pOVar14 = (Object *)func_?(TypeInfo__System__Int32);
      bVar13 = 0;
      if (this_13 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_13,(Object *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)this_13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar72 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar72 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (MVNetworkGame *)(pMVar72->fields).logicEventQueue;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (unaff_ESI != (MVNetworkGame *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
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
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (photonEvent != (EventData *)0x0) {
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)photonEvent;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pIVar15 != pIVar16) goto code_?;
              piVar17 = (int32_t *)func_?();
              this_05 = (Dictionary_2_System_Int32_System_Single_ *)
                        (unaff_ESI->fields).GameEventManager;
              iVar30 = *piVar17;
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (this_05 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
                bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   (this_05,iVar30,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar25 == 0) {
                  pMStack_11 = (MVAvatar__Class *)(unaff_ESI->fields).GameEventManager;
                  VStack_8.z = (float)func_?();
                  System.Core.dll::System::Runtime::CompilerServices::
                  ReadOnlyCollectionBuilder`1[System::Object]::
                  ReadOnlyCollectionBuilder_1_System_Object___ctor
                            ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (pMStack_11 == (MVAvatar__Class *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,iVar30,
                             (Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                this_06 = (Dictionary_2_System_Int32_System_Object_ *)
                          (unaff_ESI->fields).GameEventManager;
                bVar13 = 0;
                pMVar12 = (MVAvatar__Class *)photonEvent;
                if (this_06 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  this_14 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      (this_06,iVar30,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (this_14 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_14,(Object *)photonEvent,
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
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar72 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar72 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar72,(MethodInfo *)0x0);
        pMVar73 = (pMVar72->fields).updateEvaluatorStep;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar73 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar17 = &(pMVar73->fields).stepTimestamp;
          *piVar17 = *piVar17 + 1000;
code_?:
          iVar30 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar73->fields).lastUpdateTick = iVar30;
          (pMVar73->fields).accumulatedTime = 0;
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
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar72 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar72 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar73 = (pMVar72->fields).fastFordwardUpdateEvaluator;
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if (pMVar73 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar73->fields).stepTimestamp = *piVar17;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar72 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar72 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
          puVar21 = (undefined4 *)func_?();
          pMVar12 = (MVAvatar__Class *)*puVar21;
          pMVar18 = (pMVar72->fields).networkGame;
          while (bVar13 = 0, pMVar18 != (MVNetworkGame *)0x0) {
            pLVar74 = (pMVar18->fields)._LogicObjectManager_k__BackingField;
            bVar13 = 0;
            if (pLVar74 == (LogicObjectManagerClient *)0x0) break;
            if ((int)pMVar12 <= (pLVar74->fields)._._TimeStamp_k__BackingField)
            goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      (pMVar72,(MethodInfo *)0x0);
            pMVar18 = (pMVar72->fields).networkGame;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    iVar40 = func_?();
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)this;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar18,(MethodInfo *)0x0);
    bVar13 = 0;
    if (iVar40 == 0) break;
    bVar13 = 0;
    unaff_EDI = (MVAvatar__Class *)this;
    if (*(int *)(iVar40 + 0xc) != 0) {
      bVar13 = 0;
      if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
        pMVar56 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar55,*(int32_t *)(iVar40 + 0x10),(MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          bVar13 = *(uint *)(iVar40 + 0xc) == 0;
          if (*(uint *)(iVar40 + 0xc) < 2) goto code_?;
          bVar13 = 0;
          if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
            method_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar55,*(int32_t *)(iVar40 + 0x14),(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar56 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar13 = 0;
            if (method_00 != (MVWorldObject *)0x0) {
              if ((method_00->fields).groupId != (pMVar56->fields).id) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar40 = func_?();
              bVar13 = 0;
              if (iVar40 != 0) {
                bVar25 = 0x1e;
                this_15 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_15,bVar25,(MethodInfo *)method_00);
                pMVar18 = (this->fields).networkGame;
                bVar13 = 0;
                if (pMVar18 != (MVNetworkGame *)0x0) {
                  pMVar53 = (pMVar18->fields)._PlayerController_k__BackingField;
                  bVar13 = 0;
                  if (pMVar53 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar53,1,(MethodInfo *)0x0);
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
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar12 = (MVAvatar__Class *)
                MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
      bVar13 = 0;
      pMStack_57 = pMVar12;
      if (photonEvent != (EventData *)0x0) {
        VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        pMStack_11 = (MVAvatar__Class *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xdb,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar12 != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          iVar30 = *piVar17;
          piVar17 = (int32_t *)func_?();
          iVar36 = *piVar17;
          puVar61 = (undefined1 *)func_?();
          uVar62 = *puVar61;
          piVar17 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)pMStack_57,*piVar17,CONCAT31((int3)((uint)puVar61 >> 8),uVar62)
                     ,iVar36,iVar30,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar66 = (bool *)func_?();
      bVar25 = *pbVar66;
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
      pMVar64 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_01 = (MethodInfo *)func_?();
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_01,pMVar64);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
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
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar75 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pGVar75 != (GoldRewardManager *)0x0) {
          pbVar66 = (bool *)func_?();
          (pGVar75->fields).isGoldRewardGame = *pbVar66;
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar66 = (bool *)func_?(pOVar14);
          BStack_7.m_value = *pbVar66;
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
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar76 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar26 = (String *)0x0;
    if (pSVar76 == (String *)0x0) {
code_?:
      pSVar26 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar26,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (pSVar76->klass == TypeInfo__System__String) {
      pSVar26 = pSVar76;
    }
    bVar13 = 0;
    if (pSVar26 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar40 = func_?();
      pMVar64 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar26 = StringLiteral_V;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (iVar40 != 0) {
        pDVar49 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        TVar52 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar49,(Object *)pSVar26,pMVar64);
        pbVar66 = (bool *)func_?(TVar52.m_Index);
        bVar25 = *pbVar66;
        pMVar18 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)pSVar26;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar18,*piVar17,bVar25,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pMVar12 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pMVar43 = (MVAvatar__Class *)0x0;
    if (pMVar12 == (MVAvatar__Class *)0x0) {
code_?:
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty
                         ((String *)pMVar43,(MethodInfo *)0x0);
      if (bVar25 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar43,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar14[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar14[1].monitor;
code_?:
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if ((String__Class *)(pMVar12->_0).image == TypeInfo__System__String) {
      pMVar43 = pMVar12;
    }
    bVar13 = 0;
    pSVar29 = TypeInfo__System__String;
    if (pMVar43 != (MVAvatar__Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      playerPlanetData =
           (PlayerPlanetData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pMVar18,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)playerPlanetData,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                (playerPlanetData,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar77 = (pMVar18->fields).playerContainer;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar77 != (MVPlayerContainer *)0x0) {
          pMVar42 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar77,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if (pMVar42 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar42,playerPlanetData,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      message = (PlayerPlanetDataRemote *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar18,
                           MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar12 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar12 != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar12,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar78 != (MVPlayer *)0x0) {
            (pMVar78->fields).playerPlanetDataRemote = message;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar18,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
code_?:
      uVar48 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar48 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar18,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pLVar79 = (pMVar18->fields).levelRewardsManager;
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if (pLVar79 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar79,(Dictionary_2_System_Int32_System_Int32_ *)pOVar14[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar18,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pLVar79 = (pMVar18->fields).levelRewardsManager;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if ((pOVar14 != (Object *)0x0) &&
           (bVar13 = 0, pMVar12 = unaff_EDI, pLVar79 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar79,(int32_t)pOVar14[1].klass,(int32_t)pOVar14[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      message_00 = (PlayerTierStateCalculator *)
                   Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             ((String *)pMVar18,
                              MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                             );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message_00,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message_00;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI == (MVNetworkGame *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pMVar18,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
        pMVar18 = unaff_ESI;
      }
      bVar13 = 0;
      pSVar29 = TypeInfo__System__String;
      if (pMVar18 != (MVNetworkGame *)0x0) goto code_?;
code_?:
      func_?(unaff_ESI,pSVar29);
      pMVar12 = unaff_EDI;
code_?:
      func_?();
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar64 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar64);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar64 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pKVar80 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar64);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar80;
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pIVar15 = (unaff_ESI->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        pSVar29 = (String__Class *)TypeInfo__System__Int32;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar82 = pVVar81->x;
      uVar83 = pVVar81->y;
      fVar35 = pVVar81->z;
      pIStack_10 = (Il2CppClass *)uVar82;
      pMStack_11 = (MVAvatar__Class *)uVar83;
      pQVar84 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      p_Stack_44 = (Il2CppMetadataTypeHandle)pQVar84->x;
      VStack_8.x = pQVar84->y;
      VStack_8.y = pQVar84->z;
      VStack_8.z = pQVar84->w;
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar12 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar12 != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar12,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar78 != (MVPlayer *)0x0) {
            this_07 = (pMVar78->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)0x0;
            if (this_07 != (SpawnRolesManager *)0x0) {
              piVar17 = (int32_t *)func_?();
              position.y = (float)pMStack_11;
              position.x = (float)pIStack_10;
              position.z = fVar35;
              rotation.y = VStack_8.x;
              rotation.x = (float)p_Stack_44;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_07,*piVar17,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar64 = 
      MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar64);
      pMStack_11 = (MVAvatar__Class *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)pMStack_11,(MethodInfo *)0x0
                );
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        unaff_ESI = (MVNetworkGame *)(pMVar18->fields).playerContainer;
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if ((unaff_ESI != (MVNetworkGame *)0x0) &&
           (bVar13 = 0, pMVar12 = (MVAvatar__Class *)photonEvent, pOVar14 != (Object *)0x0)) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pIVar15 != pIVar16) goto code_?;
          piVar17 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (pMVar78 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar78,(ISpawnRoleChangeHandler *)pMStack_11,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar18 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar18 = unaff_ESI;
        }
        bVar13 = 0;
        pSVar29 = TypeInfo__System__String;
        if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
      }
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar18,
                             MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                            );
      pMVar55 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVNetworkGame *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pMVar55 != (MVWorldObjectClientManager *)0x0)) {
        unaff_EDI = (MVAvatar__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar55,(int32_t)(unaff_ESI->fields).ReceivedPlanetOwnershipData,
                               (MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar18,(int32_t)(unaff_ESI->fields).ReceivedAvatarBodiesFromQuery,
                     (MethodInfo *)0x0);
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar18,(int32_t)(unaff_ESI->fields).GameEventManager,(MethodInfo *)0x0);
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              pbVar66 = (bool *)func_?();
              bVar13 = 0;
              if (unaff_EDI != (MVAvatar__Class *)0x0) {
                bVar13 = (((MVNetworkGame__Class *)(unaff_EDI->_0).image)->_1).naturalAligment <
                         (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
                if ((!(bool)bVar13) &&
                   (pMVar85 = (MVAvatarSpawnRoleCreator__Class *)
                              (((MVNetworkGame__Class *)(unaff_EDI->_0).image)->_1).typeHierarchy
                              [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1],
                   bVar13 = pMVar85 < TypeInfo__MVAvatarSpawnRoleCreator,
                   pMVar85 == TypeInfo__MVAvatarSpawnRoleCreator)) {
                  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                            ((MVAvatarSpawnRoleCreator *)unaff_EDI,
                             (SpawnRoleBodySwitchData *)unaff_ESI,*pbVar66,(MethodInfo *)0x0);
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
  case MVEventCodes__Enum_VehicleGotEnergy:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar21 = (undefined4 *)func_?();
        pMStack_11 = (MVAvatar__Class *)*puVar21;
        uStack_58 = 0;
        pOVar14 = (Object *)func_?(TypeInfo__System__Byte);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar55 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar55 != (MVWorldObjectClientManager *)0x0) {
            pMVar12 = (MVAvatar__Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar55,(int32_t)pMStack_11,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            piVar17 = (int32_t *)func_?();
            iVar30 = *piVar17;
            iVar40 = func_?(pMVar12);
            bVar13 = 0;
            if (iVar40 != 0) {
              pMVar64 = (MethodInfo *)0x0;
              this_16 = (MVWorldObjectSpawner *)func_?(pMVar12);
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_16,iVar30,pMVar64);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar12 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
      bVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        iVar30 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar12 != (MVAvatar__Class *)0x0) {
          bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)pMVar12,iVar30,&pMStack_6,(MethodInfo *)0x0);
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
                    (photonEvent,0xde,(MethodInfo *)0x0);
          puVar86 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar86);
          bVar13 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar86) {
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
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (MVNetworkGame *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pMVar18 = (MVNetworkGame *)0x0;
        if (unaff_ESI != (MVNetworkGame *)0x0) {
          if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
            pMVar18 = unaff_ESI;
          }
          bVar13 = 0;
          pSVar29 = TypeInfo__System__String;
          if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
        }
        pSVar26 = MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                  SecurityHelper_Encrypt((String *)pMVar18,(MethodInfo *)0x0);
        pMVar70 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar70 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar70,pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        this_17 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        bVar13 = 0;
        if (this_17 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          bVar13 = 1;
          if (((this_17->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                        (this_17->klass->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment - 1],
             bVar13 = pDVar20 < 
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
             , pDVar20 !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          this_18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_17,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar13 = 0;
          if (this_18 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar87 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_18,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            VStack_8.y = 0.0;
            pMVar12 = (MVAvatar__Class *)pDVar87->_currentValue;
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
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffff88,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)photonEvent);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar43 = (MVAvatar__Class *)0x0;
              if (pMVar12 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar12->_0).image == TypeInfo__System__String) {
                  pMVar43 = pMVar12;
                }
                bVar13 = 0;
                unaff_EDI = (MVAvatar__Class *)0x0;
                pSVar29 = TypeInfo__System__String;
                if (pMVar43 == (MVAvatar__Class *)0x0) goto code_?;
              }
              TVar52 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_17,(Object *)pMVar43,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar52.m_Index == 0) {
                pSVar26 = (String *)0x0;
                photonEvent = (EventData *)::StringLiteral___;
              }
              else {
                pMStack_11 = (MVAvatar__Class *)::StringLiteral___;
                pSVar26 = (String *)func_?();
                photonEvent = (EventData *)pMStack_11;
              }
              pSVar26 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)pMVar43,(String *)photonEvent,pSVar26,(MethodInfo *)0x0
                                  );
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
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          puVar21 = (undefined4 *)func_?();
          pMVar43 = (MVAvatar__Class *)*puVar21;
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)this;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pMVar42 != (MVLocalPlayer *)0x0) {
              if (pMVar43 == (MVAvatar__Class *)(pMVar42->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar77 = (pMVar18->fields).playerContainer;
                bVar13 = 0;
                if (pMVar77 != (MVPlayerContainer *)0x0) {
                  bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar77,(int32_t)pMVar43,(MethodInfo *)0x0);
                  if (bVar25 == 0) {
code_?:
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar77 = (pMVar18->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar77 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar77,(int32_t)pMVar43,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar77 = (pMVar18->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar77 != (MVPlayerContainer *)0x0) {
                        pMStack_50 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar77,(int32_t)pMVar43,(MethodInfo *)0x0);
                        pDStack_59 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_59,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_8.z = (float)func_?();
                        pMStack_11 = pMVar43;
                        pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&pMStack_11);
                        bVar13 = 0;
                        if (pDStack_59 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_59,
                                     (Object *)VStack_8.z,pOVar14,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_58 = 3;
                          pOVar14 = (Object *)func_?();
                          bVar13 = 0;
                          if (pMStack_50 != (MVPlayer *)0x0) {
                            pUVar88 = (pMStack_50->fields)._UserProfileData_k__BackingField;
                            bVar13 = 0;
                            if (pUVar88 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_59,
                                         pOVar14,(Object *)(pUVar88->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_51 = 6;
                              VStack_8.z = (float)func_?();
                              pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar13 = 0;
                              if (pMVar18 != (MVNetworkGame *)0x0) {
                                this_08 = (pMVar18->fields)._Friends_k__BackingField;
                                bVar13 = 0;
                                if (this_08 != (FriendList *)0x0) {
                                  bStack_89 = FriendList::FriendList_IsFriend
                                                        (this_08,(pMStack_50->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar14 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_59
                                             ,(Object *)VStack_8.z,pOVar14,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_59
                                             ,(MethodInfo *)0x0);
                                  pMVar18 = (this->fields).networkGame;
                                  bVar13 = 0;
                                  if (pMVar18 != (MVNetworkGame *)0x0) {
                                    pGVar68 = (pMVar18->fields).gameStatCounterManager;
                                    bVar13 = 0;
                                    if (pGVar68 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar68,(int32_t)pMVar43,
                                                 (pMStack_50->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar18 = (this->fields).networkGame;
                                      bVar13 = 0;
                                      if (pMVar18 != (MVNetworkGame *)0x0) {
                                        pGVar68 = (pMVar18->fields).gameStatCounterManager;
                                        bVar13 = 0;
                                        if (pGVar68 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar68,(int32_t)pMVar43,(MethodInfo *)0x0);
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
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          unaff_ESI = (MVNetworkGame *)photonEvent;
          if (pIVar15 == pIVar16) {
            puVar21 = (undefined4 *)func_?();
            pMStack_60 = (MVWorldObject *)*puVar21;
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar13 = 0;
            pMVar12 = unaff_EDI;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              piVar39 = (int *)func_?();
              iVar40 = *piVar39;
              pMVar12 = (MVAvatar__Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar12 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar12->_0).image == TypeInfo__System__String) {
                  unaff_EDI = pMVar12;
                }
                bVar13 = 0;
                pSVar29 = TypeInfo__System__String;
                if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
              }
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar13 = 0;
              pMVar12 = unaff_EDI;
              if (pOVar14 != (Object *)0x0) {
                pIVar15 = (pOVar14->klass->_0).element_class;
                pIVar16 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar13 = pIVar15 < pIVar16;
                if (pIVar15 != pIVar16) goto code_?;
                puVar61 = (undefined1 *)func_?();
                pMStack_57 = (MVAvatar__Class *)CONCAT31(pMStack_57._1_3_,*puVar61);
                pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar13 = 0;
                if (pOVar14 != (Object *)0x0) {
                  pIVar15 = (pOVar14->klass->_0).element_class;
                  pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                  bVar13 = pIVar15 < pIVar16;
                  if (pIVar15 != pIVar16) goto code_?;
                  puVar21 = (undefined4 *)func_?();
                  pMStack_33 = (MVAvatar__Class *)*puVar21;
                  pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar13 = 0;
                  if (pOVar14 != (Object *)0x0) {
                    pIVar15 = (pOVar14->klass->_0).element_class;
                    pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    if (pIVar15 != pIVar16) goto code_?;
                    puVar61 = (undefined1 *)func_?();
                    pMStack_11 = (MVAvatar__Class *)CONCAT31(pMStack_11._1_3_,*puVar61);
                    unaff_ESI = (MVNetworkGame *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                    }
                    pMVar18 = (MVNetworkGame *)0x0;
                    if (unaff_ESI != (MVNetworkGame *)0x0) {
                      if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
                        pMVar18 = unaff_ESI;
                      }
                      bVar13 = 0;
                      pSVar29 = TypeInfo__System__String;
                      if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pMVar18,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar18,(MethodInfo *)0x0);
                      bVar13 = 0;
                      if (pMVar42 != (MVLocalPlayer *)0x0) {
                        if (iVar40 == (pMVar42->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pvStack_3;
                          return;
                        }
                        pMVar78 = (MVPlayer *)func_?();
                        MVPlayer::MVPlayer__ctor
                                  (pMVar78,iVar40,(int32_t)pMStack_60,(String *)unaff_EDI,
                                   (BuildTarget__Enum)pMStack_57,(UserProfileData *)VStack_8.z,0,
                                   (bool)pMStack_11,(MethodInfo *)0x0);
                        bVar13 = 0;
                        if (pMVar78 != (MVPlayer *)0x0) {
                          (pMVar78->fields)._Team_k__BackingField = (int32_t)pMStack_33;
                          pMVar18 = (this->fields).networkGame;
                          bVar13 = 0;
                          if (pMVar18 != (MVNetworkGame *)0x0) {
                            pMVar77 = (pMVar18->fields).playerContainer;
                            bVar13 = 0;
                            if (pMVar77 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar77,pMVar78,(MethodInfo *)0x0);
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
  unaff_EDI = pMVar12;
code_?:
  func_?();
  pMVar12 = unaff_EDI;
code_?:
  unaff_EDI = pMVar12;
  func_?(unaff_EDI,pMStack_11);
code_?:
  func_?();
  pIStack_90 = (Il2CppClass *)(unaff_EDI->_0).image;
  func_?(&pIStack_90);
code_?:
  func_?();
code_?:
  pMVar12 = (MVAvatar__Class *)func_?();
  pSVar29 = extraout_ECX_00;
code_?:
  func_?(pMVar12,pSVar29);
code_?:
  func_?();
  uVar91 = func_?();
  if (extraout_ECX_01 != 1) {
    return;
  }
  pbVar54 = (byte *)(in_GS_OFFSET + (int)uVar91 + -0x75);
  bVar92 = *pbVar54;
  *pbVar54 = bVar92 + bVar13;
  pbVar54 = &stack0xffffff87 + in_GS_OFFSET;
  bVar93 = (byte)((ulonglong)uVar91 >> 0x28);
  bVar94 = *pbVar54 + bVar93;
  bVar95 = CARRY1(*pbVar54,bVar93) || CARRY1(bVar94,CARRY1(bVar92,bVar13));
  *pbVar54 = bVar94 + CARRY1(bVar92,bVar13);
  pbVar54 = &stack0xffffff60 + in_GS_OFFSET;
  bVar13 = (byte)((ulonglong)uVar91 >> 8);
  bVar96 = CARRY1(*pbVar54,bVar13) || CARRY1(*pbVar54 + bVar13,bVar95);
  *pbVar54 = *pbVar54 + bVar13 + bVar95;
  pbVar54 = (byte *)((int)&unaff_EDI[0xae631]._1.cctor_started + in_GS_OFFSET);
  bVar95 = CARRY1(*pbVar54,bVar13) || CARRY1(*pbVar54 + bVar13,bVar96);
  *pbVar54 = *pbVar54 + bVar13 + bVar96;
  bVar13 = (byte)((ulonglong)uVar91 >> 0x20);
  cVar97 = bVar13 + bVar95;
  pcVar67 = (char *)(in_GS_OFFSET + CONCAT31((int3)((ulonglong)uVar91 >> 0x28),cVar97));
  *pcVar67 = *pcVar67 + cVar97 + CARRY1(bVar13,bVar95);
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

