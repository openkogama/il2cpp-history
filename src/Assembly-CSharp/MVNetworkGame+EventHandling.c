
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
  this_10 = (MethodInfo **)unaff_EDI;
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
    func_?(&StringLiteral_FirstTime_Success);
    func_?(&StringLiteral_MVEventCodes_ForceDetachWorldObj);
    func_?(&StringLiteral_vehicle____null);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  _Var56 = (_union_86)photonEvent;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  uStack_9 = 0;
  MStack_10 = MVEventCodes__Enum_NoCodeSet;
  _Stack_48.dummy = (Object__Class *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI.dummy != (void *)0x0)) && (unaff_EDI = unaff_EDI, pOVar11 != (Object *)0x0)) {
      if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (_union_86)(pWVar14->fields)._.worldObjectClientManager, unaff_ESI = _Var56,
       photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_ESI.dummy =
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (_Var56.dummy,0x12,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        if ((unaff_ESI.dummy == (Object__Class *)0x0) ||
           (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <=
             *(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly &&
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
              ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1) * 4) ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        {
          piVar12 = (int32_t *)func_?();
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                    ((MVWorldObjectClientManagerNetwork *)unaff_EDI.typeHandle,*piVar12,
                     (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
code_?:
        func_?();
        pSVar15 = extraout_ECX;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x12,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar11,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar13 = (this->fields).networkGame;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) &&
         (pMVar17 = (pWVar14->fields)._.worldObjectClientManager,
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
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x13,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar11,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar13 = (this->fields).networkGame;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) &&
         (pMVar17 = (pWVar14->fields)._.worldObjectClientManager,
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar13,photonEvent,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)this;
    if (unaff_ESI.dummy != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs !=
          (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar18 == 0) {
          pSVar19 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar19 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar19,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
        if (unaff_ESI.dummy != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) &&
             (unaff_ESI.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)
                              unaff_ESI.type[1].data.typeHandle,eventCode,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                             ), unaff_ESI.dummy != (Object *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (unaff_ESI.type[1].data.dummy == (Object__Class *)0x0) {
              pSVar19 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar19 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            pOVar20 = (Object__Class *)unaff_ESI.type[1].data.array;
            if (pOVar20 != (Object__Class *)0x0) {
              (*(code *)(pOVar20->_0).namespaze)((pOVar20->_0).element_class,photonEvent);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI.dummy != (void *)0x0)) && (unaff_EDI = unaff_EDI, pOVar11 != (Object *)0x0)) {
      if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar14->fields)._.worldInventory, unaff_EDI = _Var56,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x2f,(MethodInfo *)0x0);
      _Var56.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var56.dummy,0x31,(MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var56.typeHandle;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
        if ((_Var56.dummy != (Object__Class *)0x0) &&
           (unaff_EDI.dummy = (void *)func_?(), _Stack_28.dummy = unaff_EDI.dummy,
           unaff_EDI.dummy == (Object__Class *)0x0)) goto code_?;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          pSVar15 = (String__Class *)TypeInfo__System__Int32;
          if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          p_Var60 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          if (cRam_? == '\0') {
            func_?();
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          if (*(Dictionary_2_System_Int32_System_Object_ **)
               (eventCode + MVEventCodes__Enum_RegisterPrototype) !=
              (Dictionary_2_System_Int32_System_Object_ *)0x0) {
            pRVar21 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (*(Dictionary_2_System_Int32_System_Object_ **)
                                  (eventCode + MVEventCodes__Enum_RegisterPrototype),
                                 unaff_ESI.__klassIndex,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            eventCode = func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      ((BytePacker *)eventCode,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0
                      );
            unaff_ESI.dummy = (void *)0x0;
            if (pRVar21 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar21,(BytePacker *)eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar14->fields)._.worldInventory, unaff_EDI = _Var56,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x22,(MethodInfo *)0x0);
      unaff_EDI = (_union_86)eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar11 != (Object *)0x0)) {
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pMVar22 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar22;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          pSVar15 = (String__Class *)TypeInfo__System__Int32;
          if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          p_Var60 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((*(Dictionary_2_System_Int32_System_Object_ **)
                ((int)unaff_EDI.generic_class + MVEventCodes__Enum_RegisterPrototype) !=
               (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
             (pRVar21 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  (*(Dictionary_2_System_Int32_System_Object_ **)
                                    ((int)unaff_EDI.generic_class +
                                    MVEventCodes__Enum_RegisterPrototype),unaff_ESI.__klassIndex,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar21 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar21->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar21->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar21->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar21,(float)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = _Var56;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar24 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar12,iVar24,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (void *)0x0)) {
      piVar12 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (void *)0x0)) {
      piVar12 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar22 = (MVEventCodes__Enum *)func_?(pOVar11,TypeInfo__System__Int32);
      eventCode = *pMVar22;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x35,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11,TypeInfo__System__Int32);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar13,unaff_EDI.__klassIndex,eventCode,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar22 = (MVEventCodes__Enum *)func_?(pOVar11,TypeInfo__System__Int32);
      eventCode = *pMVar22;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x36,(MethodInfo *)0x0);
      pFVar25 = (FriendStatus__Enum *)func_?(pOVar11,TypeInfo__MV__Common__FriendStatus);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar13,unaff_EDI.__klassIndex,eventCode,*pFVar25,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11,TypeInfo__System__Int32);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar13,*piVar12,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11,TypeInfo__System__Int32);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar13,*piVar12,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11,TypeInfo__System__Int32);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar13,unaff_EDI.__klassIndex,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar13,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar13 = (this->fields).networkGame;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if ((pMVar13 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (_union_86)(pMVar13->fields)._NetworkGameStateListener_k__BackingField,
       unaff_EDI = _Var56, photonEvent != (EventData *)0x0)) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x42,(MethodInfo *)0x0);
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        p_Var60 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var60->type;
        pMVar22 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar22;
        p_Var60 = (_union_86 *)func_?();
        _Stack_28 = *p_Var60;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GameStateChangeEventArgs);
          cRam_? = '\x01';
        }
        unaff_ESI.type[2].data = _Stack_28;
        unaff_ESI.type[1].data.__klassIndex = eventCode;
        *(_union_86 *)&unaff_ESI.type[1].attrs = (Il2CppType *)unaff_EDI;
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar13 != (MVNetworkGame *)0x0) {
          iVar23 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar13,(MethodInfo *)0x0);
          *(undefined **)&unaff_ESI.type[2].attrs =
               (undefined *)((int)unaff_EDI.dummy + (eventCode - iVar23));
          pIVar26 = unaff_ESI.type[3].data.array;
          if (pIVar26 != (Il2CppArrayType *)0x0) {
            eventCode = func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)eventCode,
                       (MethodInfo *)0x0);
            (*(code *)pIVar26->lobounds)(pIVar26[2].etype);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (MVNetworkGame *)0x0)) {
      piVar12 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pMVar27 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
         pMVar27 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (_union_86)(pMVar27->fields)._._ActorNr_k__BackingField;
        puVar28 = (undefined4 *)func_?();
        if ((Object__Class *)*puVar28 == unaff_ESI.dummy) goto code_?;
        pMVar13 = (this->fields).networkGame;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
          _Var67 = (_union_86)(pWVar14->fields)._.worldObjectClientManager;
          _Stack_28 = _Var67;
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0x16,(MethodInfo *)0x0);
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0x46,(MethodInfo *)0x0);
          unaff_ESI.dummy = (Object__Class *)0x0;
          if (_Var67.dummy != (Object__Class *)0x0) {
            pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?(pOVar11);
            piVar12 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar12,pDVar16,
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
    unaff_ESI = _Var56;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar24 = *piVar12;
        pPVar29 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar29,iVar24,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar30 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x4b,(MethodInfo *)0x0);
      pOVar31 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar31);
      _Stack_28 = *p_Var60;
      pMVar22 = (MVEventCodes__Enum *)func_?(pOVar30,TypeInfo__System__Single);
      eventCode = *pMVar22;
      pfVar32 = (float *)func_?(pOVar11,TypeInfo__System__Single);
      pEVar33 = photonEvent;
      VStack_8.x = *pfVar32;
      VStack_8.y = (float)eventCode;
      VStack_8.z = (float)_Stack_28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (pEVar33,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Stack_28 = *p_Var60;
      pMVar22 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar22;
      puVar28 = (undefined4 *)func_?();
      uStack_9 = *puVar28;
      MStack_10 = eventCode;
      pMVar13 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        piVar12 = (int32_t *)func_?(pOVar11);
        camOrigin.y = VStack_8.y;
        camOrigin.x = VStack_8.x;
        camOrigin.z = VStack_8.z;
        camDir.y = (float)MStack_10;
        camDir.x = (float)uStack_9;
        camDir.z = (float)_Stack_48.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar13,*piVar12,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar13,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar30 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x58,(MethodInfo *)0x0);
      pDVar16 = (Dictionary_2_System_Object_System_Object_ *)func_?(pOVar30);
      pMVar34 = (MVGameMsgType__Enum *)func_?(pOVar11,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar34,pDVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_EDI = _Var56;
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
                ((EventData *)_Var56.typeHandle,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar12 = (int32_t *)func_?();
      pOVar11 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      MVar35 = eventCode;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar36 = (MVTeam__Enum *)func_?(pOVar11);
        team = *pMVar36;
        piVar12 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar35,*piVar12,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = _Var56;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar24 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar12,iVar24,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (MVNetworkGame *)0x0)) {
      piVar12 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar13,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x28,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar22 = (MVEventCodes__Enum *)func_?(pOVar11);
      eventCode = *pMVar22;
      pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar30 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x81,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar30,TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var60;
      pOVar30 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&_Stack_28);
      pSVar19 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar11,pOVar30,
                           (MethodInfo *)0x0);
      uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar38 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar11);
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar11 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pDVar38 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar38,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar28 = (undefined4 *)func_?(TVar39.m_Index);
        pIStack_40 = (Il2CppClass *)*puVar28;
        uStack_41 = 0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Byte,&uStack_41);
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar38,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar39.m_Index,TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var60->__klassIndex;
        pMVar13 = (this->fields).networkGame;
        unaff_EDI.dummy = (Object__Class *)0x0;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          pMVar42 = (pMVar13->fields)._PlayerController_k__BackingField;
          _Stack_28.dummy =
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (_Var56.dummy,0xfe,(MethodInfo *)0x0);
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0x8d,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pMVar42 != (MVLocalObjectController *)0x0) {
            pbVar43 = (byte *)func_?(pOVar11);
            bVar44 = *pbVar43;
            piVar12 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar42,*piVar12,(int32_t)pIStack_40,_Stack_24.__klassIndex,(uint)bVar44,
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
      p_Var60 = (_union_86 *)func_?();
      unaff_ESI = (_union_86)p_Var60->__klassIndex;
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar13,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pMVar45 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar45,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)TypeInfo__MVAvatar;
        if ((unaff_ESI.dummy == (Object__Class *)0x0) || (iVar46 = func_?(), iVar46 == 0))
        goto code_?;
        iVar46 = func_?();
        if (iVar46 != 0) {
          uVar47 = func_?(unaff_ESI.dummy);
          func_?(0x5b,uVar47);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(pOVar11);
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar11 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar39.m_Index);
        _Stack_28 = (_union_86)p_Var60->__klassIndex;
        uStack_41 = 0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Byte,&uStack_41);
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar39.m_Index,TypeInfo__System__Int32);
        _Stack_34 = *p_Var60;
        pMVar13 = (this->fields).networkGame;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar13,(MethodInfo *)0x0),
           pMVar45 != (MVWorldObjectClientManager *)0x0)) {
          pMVar48 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar45,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          _Stack_48.dummy = (void *)func_?(pMVar48);
          if (_Stack_48.dummy != (Object__Class *)0x0) {
            pIStack_40 = *(Il2CppClass **)(_Stack_48.__klassIndex + 0xfc);
            uStack_49 = 3;
            pOVar11 = (Object *)func_?(TypeInfo__System__Byte);
            TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                unaff_EDI.typeHandle,pOVar11,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            puVar28 = (undefined4 *)func_?(TVar39.m_Index,TypeInfo__System__Int32);
            pDStack_50 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar28;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
            puVar28 = (undefined4 *)func_?(pOVar11,TypeInfo__System__Int32);
            pMStack_51 = (MVWorldObject *)*puVar28;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0x3a,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?(pOVar11,TypeInfo__System__Int32);
            _Stack_24 = (_union_86)p_Var60->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)_Var56.typeHandle,0x5c,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?();
            _Stack_28 = (_union_86)p_Var60->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)_Var56.typeHandle,0x23,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?();
            VStack_8.z = *(float *)p_Var60;
            pMVar13 = (this->fields).networkGame;
            unaff_EDI = (_union_86)this;
            if ((pMVar13 != (MVNetworkGame *)0x0) &&
               (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar14,(int32_t)pMStack_51,0,1,(int32_t)pIStack_40,(int32_t)pDStack_50,
                         _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar13,(MethodInfo *)0x0),
                 pMVar45 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_51 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar45,(int32_t)pDStack_50,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                unaff_EDI = (_union_86)
                            TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                if (unaff_EDI.dummy == (Object__Class *)0x0) {
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
                  func_?(&TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                   __9__10_0,unaff_EDI.dummy);
                  _Var56 = (_union_86)photonEvent;
                }
                unaff_ESI = _Var56;
                if (pMStack_51 != (MVWorldObject *)0x0) {
                  func_?(0x2d,pMStack_51);
                  pMVar13 = (this->fields).networkGame;
                  if (pMVar13 != (MVNetworkGame *)0x0) {
                    pMVar42 = (pMVar13->fields)._PlayerController_k__BackingField;
                    pMStack_51 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item((EventData *)_Var56.typeHandle,0xfe,
                                                    (MethodInfo *)0x0);
                    pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                              EventData_get_Item((EventData *)_Var56.typeHandle,0x8d,
                                                 (MethodInfo *)0x0);
                    unaff_EDI.dummy = (Object__Class *)0x0;
                    if (pMVar42 != (MVLocalObjectController *)0x0) {
                      pbVar43 = (byte *)func_?(pOVar11);
                      bVar44 = *pbVar43;
                      piVar12 = (int32_t *)func_?(pMStack_51,TypeInfo__System__Int32);
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar42,*piVar12,(int32_t)pDStack_50,_Stack_34.__klassIndex,
                                 (uint)bVar44,(MethodInfo *)0x0);
                      MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                ((MVWorldObjectSpawner *)_Stack_48.typeHandle,(int32_t)VStack_8.z,
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
    break;
  case MVEventCodes__Enum_Reward:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      _Var67 = *p_Var60;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar11,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x90,(MethodInfo *)0x0);
      pfVar32 = (float *)func_?(pOVar11,TypeInfo__MV__Common__RewardType);
      fVar52 = *pfVar32;
      _Stack_48 = _Var67;
      _Stack_34.dummy = (void *)func_?(TypeInfo__System__Int32,&_Stack_48);
      uStack_49 = eventCode._3_1_;
      pOVar11 = (Object *)func_?();
      VStack_8.z = fVar52;
      pOVar30 = (Object *)func_?();
      pSVar19 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar11,pOVar30,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar19,(MethodInfo *)0x0);
      pMVar53 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar54 = (pMVar53->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar54->vtable[0].methodPtr & 0x100) == 0) {
        pIVar54 = (Il2CppClass *)func_?();
      }
      if (pIVar54->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar54 = (pMVar53->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar54->vtable[0].methodPtr & 0x100) == 0) {
        pIVar54 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar54->static_fields;
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
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar11);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
         pWVar14 != (WorldNetwork *)0x0)) {
        this_00 = (pWVar14->fields)._.runtimeEventManagerNetwork;
        unaff_ESI.dummy = (void *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI.typeHandle,(Byte__Array *)eventCode,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        unaff_EDI.dummy = (Object__Class *)0x0;
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (this_01 = (RuntimeEventManager *)(pWVar14->fields)._.runtimeEventManagerNetwork,
       unaff_EDI = unaff_EDI, this_01 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x59,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11,TypeInfo__System__Int32);
      _Stack_24 = *p_Var60;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar11,TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa0,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pDStack_50 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa1,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pIStack_40 = (Il2CppClass *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa3,(MethodInfo *)0x0);
      pcVar55 = (char *)func_?();
      pMVar13 = (this->fields).networkGame;
      if (*pcVar55 == '\0') {
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pGVar56 = (pMVar13->fields).gameStatCounterManager,
           pGVar56 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar56,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                     (int32_t)pDStack_50,(int32_t)pIStack_40,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else if ((pMVar13 != (MVNetworkGame *)0x0) &&
              (pGVar56 = (pMVar13->fields).gameStatCounterManager,
              pGVar56 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar56,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                   (int32_t)pDStack_50,(int32_t)pIStack_40,(bool)eventCode,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar57 = (Byte__Array *)func_?(pOVar11);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pGVar56 = (pMVar13->fields).gameStatCounterManager, unaff_EDI = unaff_EDI,
         pGVar56 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar56,pBVar57,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar22 = (MVEventCodes__Enum *)func_?(pOVar11);
      eventCode = *pMVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pMVar53 = (MethodInfo *)0x0;
      pBVar57 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar57,pMVar53);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (this_02 = (pMVar13->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_02 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_02,eventCode,(MvAvatarMetaData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar58 = (bool *)func_?(pOVar11);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar58);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pMVar59 = (pMVar13->fields)._GameCoinManager_k__BackingField, unaff_EDI = unaff_EDI,
         pMVar59 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar59,*pbVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar11 != (Object *)0x0)) {
      if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var60 = (_union_86 *)func_?();
      _Var67 = (_union_86)p_Var60->__klassIndex;
      eventCode = (MVEventCodes__Enum)_Var67;
      this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)_Var56.typeHandle,200,(MethodInfo *)0x0);
      if ((this_05 !=
           (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0) &&
         ((unaff_EDI = (_union_86)this_05->klass,
          unaff_ESI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          , *(uint8_t *)(unaff_EDI.__klassIndex + 0xb8) <
            (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment ||
          (_Var67 = (_union_86)eventCode,
          (Dictionary_2_System_Object_System_Object___Class *)
          ((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      pMVar13 = (this->fields).networkGame;
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      unaff_EDI = _Var67;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar13,_Var67.__klassIndex,(Dictionary_2_System_Object_System_Object_ *)this_05,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent == (EventData *)0x0) ||
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x5d,(MethodInfo *)0x0), unaff_EDI.dummy == (void *)0x0)
       ) break;
    if (this_05 ==
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    unaff_ESI = (_union_86)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <=
         (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).naturalAligment)
       && ((Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
           [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment - 1] ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,1,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,1,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar13 = (this->fields).networkGame;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var56;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar13,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    eventCode = func_?();
    _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
    if (unaff_EDI.dummy == (Object__Class *)0x0) {
      pBVar57 = (Byte__Array *)0x0;
code_?:
      unaff_EDI = (_union_86)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar57,(MethodInfo *)0x0);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x85,(MethodInfo *)0x0);
      if (pOVar11 != (Object *)0x0) {
        if ((pOVar11->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?(pOVar11);
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,100,(MethodInfo *)0x0);
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar58 = (bool *)func_?();
          pMVar13 = (this->fields).networkGame;
          if (pMVar13 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar13,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar58,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar57 = (Byte__Array *)func_?(unaff_EDI.dummy,TypeInfo__System__Byte);
    if (pBVar57 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pMVar27 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
          pMVar27 != (MVLocalPlayer *)0x0)) &&
         (eventCode = (pMVar27->fields)._._ActorNr_k__BackingField,
         unaff_ESI.dummy != (Object__Class *)0x0)) {
        pSVar15 = (String__Class *)TypeInfo__System__Int32;
        if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar22 = (MVEventCodes__Enum *)func_?();
        if (*pMVar22 == eventCode) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar13 = (this->fields).networkGame;
          unaff_ESI = (_union_86)this;
          if ((pMVar13 != (MVNetworkGame *)0x0) &&
             (pMVar59 = (pMVar13->fields)._GameCoinManager_k__BackingField,
             unaff_ESI = (_union_86)this, pMVar59 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar59,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar13 = (this->fields).networkGame;
            unaff_ESI = (_union_86)this;
            if (pMVar13 != (MVNetworkGame *)0x0) {
              pMVar60 = (pMVar13->fields).operationRequests;
              unaff_ESI.dummy = (Object__Class *)0x0;
              if (pMVar60 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?(&
                                  TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
                  func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                  cRam_? = '\x01';
                }
                _Stack_48.dummy = (void *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          ((Dictionary_2_System_Byte_System_Object_ *)_Stack_48.typeHandle,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                unaff_ESI = (_union_86)(pMVar60->fields).peer;
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pSVar61 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                eventCode._0_1_ = (pSVar61->SendReliable).Encrypt;
                eventCode._1_1_ = (pSVar61->SendReliable).Channel;
                eventCode._2_2_ = *(undefined2 *)&(pSVar61->SendReliable).field_0x6;
                if (unaff_ESI.dummy != (Object__Class *)0x0) {
                  (*(code *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[6].assembly)
                            (unaff_ESI.dummy,0x66,_Stack_48.dummy,
                             (pSVar61->SendReliable).DeliveryMode,eventCode);
                  goto code_?;
                }
              }
            }
          }
        }
        else {
code_?:
          uStack_1 = 0;
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar13 != (MVNetworkGame *)0x0) {
            eventCode = (MVEventCodes__Enum)(pMVar13->fields).playerContainer;
            unaff_ESI.dummy =
                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (_Var56.dummy,0xfe,(MethodInfo *)0x0);
            pSVar62 = (String *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0xd0,(MethodInfo *)0x0);
            unaff_EDI = (_union_86)eventCode;
            if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pSVar62 != (String *)0x0)) {
              if ((pSVar62->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              puVar5 = (undefined1 *)func_?();
              eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                pSVar15 = (String__Class *)TypeInfo__System__Int32;
                if ((Il2CppClass *)
                    ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar12 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,(bool)eventCode,
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
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x33,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)
       ) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xf5,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)
       ) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,7,(MethodInfo *)0x0);
      unaff_EDI = (_union_86)eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar11 != (Object *)0x0)) {
        if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pcVar55 = (char *)func_?();
          bVar63 = *pcVar55 == '\0';
          eventCode = CONCAT31((int3)((uint)pcVar55 >> 8),bVar63);
          if (unaff_ESI.dummy == (Object__Class *)0x0) {
            MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,
                       (Dictionary_2_System_Object_System_Object_ *)0x0,bVar63,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment <=
               *(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly) &&
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,bVar63,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x83,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)
       ) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xf5,(MethodInfo *)0x0), unaff_EDI.dummy != (void *)0x0)
       ) {
      if (this_05 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <=
           (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).
           naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)this_05->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var56.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (_Var56.dummy == (Object *)0x0) {
      pBVar57 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI.typeHandle,pBVar57,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI.typeHandle,
                 (MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        ((_union_86 *)(eventCode + 0xa4))->type = (Il2CppType *)unaff_EDI;
        func_?(eventCode + 0xa4);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar57 = (Byte__Array *)func_?();
    unaff_EDI.dummy = (Object__Class *)0x0;
    if (pBVar57 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI.dummy != (void *)0x0)) && (unaff_EDI = unaff_EDI, pOVar11 != (Object *)0x0)) {
      if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar60 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar60 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        cRam_? = '\x01';
      }
      pPVar64 = (pMVar60->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar61 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar47._0_1_ = (pSVar61->SendReliable).Encrypt;
      uVar47._1_1_ = (pSVar61->SendReliable).Channel;
      uVar47._2_2_ = *(undefined2 *)&(pSVar61->SendReliable).field_0x6;
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pPVar64 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar64->klass->vtable).SendOperation.method)
                  (pPVar64,0x3c,unaff_EDI.dummy,(pSVar61->SendReliable).DeliveryMode,uVar47);
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
    unaff_ESI.dummy = (void *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI.typeHandle,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI.dummy = (void *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar11);
      _Stack_48 = *p_Var60;
      pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (Object *)unaff_EDI.typeHandle,pOVar11,
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      pMVar65 = (pMVar13->fields).logicObjectManagerClientWrapper;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if ((pMVar65 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (_union_86)(pMVar65->fields).logicEventQueue, unaff_EDI = unaff_EDI,
         unaff_ESI.dummy != (Object__Class *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
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
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0), pOVar11 != (Object *)0x0)) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar22 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar22;
          if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
            bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               ((Dictionary_2_System_Int32_System_Single_ *)
                                unaff_ESI.type[1].data.typeHandle,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar18 == 0) {
              _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
              VStack_8.z = (float)func_?();
              System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System
              ::Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                        ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              if (_Stack_48.dummy == (Object__Class *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,eventCode,
                         (Object *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            if (((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) &&
               (this_06 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)
                                     unaff_ESI.type[1].data.typeHandle,eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), this_06 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_06,(Object *)unaff_EDI.typeHandle,
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
    pMVar13 = (this->fields).networkGame;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      pMVar65 = (pMVar13->fields).logicObjectManagerClientWrapper;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar65 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar65,(MethodInfo *)0x0);
        pMVar66 = (pMVar65->fields).updateEvaluatorStep;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar66 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar12 = &(pMVar66->fields).stepTimestamp;
          *piVar12 = *piVar12 + 1000;
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (_union_86)(pMVar13->fields).logicObjectManagerClientWrapper,
        unaff_EDI = unaff_EDI, photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (Object__Class *)0x0)) {
      piVar12 = (int32_t *)func_?();
      pMVar66 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar66 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar66->fields).stepTimestamp = *piVar12;
code_?:
        iVar23 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar66->fields).lastUpdateTick = iVar23;
        (pMVar66->fields).accumulatedTime = 0;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar13 = (this->fields).networkGame;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (_union_86)(pMVar13->fields).logicObjectManagerClientWrapper,
        unaff_EDI = unaff_EDI, photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI.dummy != (Object__Class *)0x0)) {
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      pcVar55 = *(char **)&unaff_ESI.type[1].attrs;
      while ((pcVar55 != (char *)0x0 && (*(int *)(pcVar55 + 0x44) != 0))) {
        if (unaff_EDI.__klassIndex <= *(int *)(*(int *)(pcVar55 + 0x44) + 0x10))
        goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                   (MethodInfo *)0x0);
        pcVar55 = *(char **)&unaff_ESI.type[1].attrs;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    _Var56.dummy = (void *)func_?(pOVar11);
    pMVar13 = (this->fields).networkGame;
    unaff_ESI.dummy = _Var56.dummy;
    unaff_EDI = (_union_86)this;
    if ((pMVar13 == (MVNetworkGame *)0x0) ||
       (pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar13,(MethodInfo *)0x0), _Var56.dummy == (Object__Class *)0x0))
    break;
    if (*(char **)&_Var56.type[1].attrs != (char *)0x0) {
      if (pMVar45 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar45,_Var56.type[2].data.__klassIndex,(MethodInfo *)0x0);
        pMVar13 = (this->fields).networkGame;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar13,(MethodInfo *)0x0);
          if (*(char **)&_Var56.type[1].attrs < (char *)0x2) goto code_?;
          if (pMVar45 != (MVWorldObjectClientManager *)0x0) {
            iVar23._0_2_ = ((Il2CppType *)((int)_Var56 + 0x10))->attrs;
            iVar23._2_1_ = ((Il2CppType *)((int)_Var56 + 0x10))->type;
            iVar23._3_1_ = ((Il2CppType *)((int)_Var56 + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar45,iVar23,(MethodInfo *)0x0);
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
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              if (*(char **)&unaff_ESI.type[1].attrs !=
                  *(char **)(eventCode + MVEventCodes__Enum_RegisterPrototype))
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar46 = func_?(unaff_ESI.dummy);
              if (iVar46 != 0) {
                bVar18 = 0x7e;
                _Var56.typeHandle = unaff_ESI.typeHandle;
                this_07 = (MVAvatarLocal *)
                          func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal,1);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_07,bVar18,(MethodInfo *)_Var56.typeHandle);
                pMVar13 = (this->fields).networkGame;
                if ((pMVar13 != (MVNetworkGame *)0x0) &&
                   (pMVar42 = (pMVar13->fields)._PlayerController_k__BackingField,
                   pMVar42 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar42,1,(MethodInfo *)0x0);
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((pMVar13 != (MVNetworkGame *)0x0) &&
       (unaff_EDI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
       unaff_ESI = (_union_86)photonEvent, _Stack_34.typeHandle = unaff_EDI.typeHandle,
       photonEvent != (EventData *)0x0)) {
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
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar23 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar24 = *piVar12;
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
        piVar12 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar12,eventCode,iVar24,iVar23,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar11);
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
                            ((EventData *)_Var56.typeHandle,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar53 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar53);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pOVar11 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar11[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar19 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar19,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar11[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar67 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0xc4,(MethodInfo *)0x0);
        unaff_ESI.dummy = (Object__Class *)0x0;
        if (pGVar67 != (GoldRewardManager *)0x0) {
          pbVar58 = (bool *)func_?(pOVar11);
          (pGVar67->fields).isGoldRewardGame = *pbVar58;
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0xc4,(MethodInfo *)0x0);
          pbVar58 = (bool *)func_?(pOVar11,TypeInfo__System__Boolean);
          BStack_7.m_value = *pbVar58;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar19 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar19 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar19,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar62 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar19 = (String *)0x0;
    if (pSVar62 == (String *)0x0) {
code_?:
      pSVar19 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar19,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar19,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (pSVar62->klass == TypeInfo__System__String) {
      pSVar19 = pSVar62;
    }
    if (pSVar19 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar46 = func_?(eventCode);
      pMVar53 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar19 = StringLiteral_V;
      unaff_EDI = unaff_EDI;
      if (iVar46 != 0) {
        pDVar38 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode);
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar38,(Object *)pSVar19,pMVar53);
        puVar5 = (undefined1 *)func_?(TVar39.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar13 = (this->fields).networkGame;
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)pSVar19;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          piVar12 = (int32_t *)func_?(pOVar11);
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar13,*piVar12,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var67.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var93.dummy = (Object__Class *)0x0;
    if (_Var67.dummy == (Object__Class *)0x0) {
code_?:
      bVar18 = mscorlib.dll::System::String::String_IsNullOrEmpty
                         ((String *)_Var93.typeHandle,(MethodInfo *)0x0);
      if (bVar18 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var93.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar11 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar11[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar11[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
        func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
                        message);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if ((String__Class *)((Il2CppClass_0 *)&(_Var67.array)->etype)->image ==
        TypeInfo__System__String) {
      _Var93.typeHandle = _Var67.typeHandle;
    }
    _Var56.dummy = (void *)0x0;
    pSVar15 = TypeInfo__System__String;
    if (_Var93.dummy != (Object__Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var56.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var56.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pMVar68 = (pMVar13->fields).playerContainer, unaff_EDI = unaff_EDI,
          pMVar68 != (MVPlayerContainer *)0x0)) &&
         (pMVar27 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar68,(MethodInfo *)0x0),
         unaff_EDI = unaff_EDI, pMVar27 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar27,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var67.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var67.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var67.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var67.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar13->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)eventCode;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar12 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          if (pMVar69 != (MVPlayer *)0x0) {
            (pMVar69->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar69->fields).playerPlanetDataRemote);
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
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var56.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar19 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar19,(MethodInfo *)0x0);
code_?:
      uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar37 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar19,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var56.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      unaff_EDI = unaff_EDI;
      if (((pOVar11 != (Object *)0x0) &&
          (pMVar13 = (this->fields).networkGame, unaff_EDI = unaff_EDI,
          pMVar13 != (MVNetworkGame *)0x0)) &&
         (pLVar70 = (pMVar13->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
         pLVar70 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar70,(Dictionary_2_System_Int32_System_Int32_ *)pOVar11[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var56.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pLVar70 = (pMVar13->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
          pOVar11 != (Object *)0x0)) &&
         (unaff_EDI = unaff_EDI, pLVar70 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar70,(int32_t)pOVar11[1].klass,(int32_t)pOVar11[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var56.typeHandle = unaff_ESI.typeHandle;
        }
        pSVar15 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var56.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)_Var56.typeHandle,
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
        _Var56.typeHandle = unaff_ESI.typeHandle;
      }
      pSVar15 = TypeInfo__System__String;
      if (_Var56.dummy != (Object__Class *)0x0) goto code_?;
code_?:
      func_?(unaff_ESI.dummy,pSVar15);
      _Var56 = unaff_EDI;
code_?:
      func_?(_Var56.dummy);
      unaff_EDI = _Var56;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar53 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar19 = (String *)func_?();
      pSVar19 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar19,pMVar53);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar19,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar53 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar19 = (String *)func_?();
      pKVar71 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar19,pMVar53);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar71;
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        pSVar15 = (String__Class *)TypeInfo__System__Int32;
        if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar12 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar12,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar13 = (this->fields).networkGame;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar13 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var56;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar13,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
        pMVar13 = (this->fields).networkGame;
        unaff_ESI = (_union_86)this;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup
                    (pMVar13,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar72 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar73 = pVVar72->x;
      uVar74 = pVVar72->y;
      eventCode = (MVEventCodes__Enum)pVVar72->z;
      MStack_10 = uVar73;
      _Stack_48 = (_union_86)uVar74;
      pQVar75 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,
                           (((EventData *)_Var56.generic_class)->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_76 = pQVar75->x;
      VStack_8.x = pQVar75->y;
      VStack_8.y = pQVar75->z;
      VStack_8.z = pQVar75->w;
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar13->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar12 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          if (pMVar69 != (MVPlayer *)0x0) {
            this_03 = (pMVar69->fields).spawnRolesManager;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0xbf,(MethodInfo *)0x0);
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (this_03 != (SpawnRolesManager *)0x0) {
              piVar12 = (int32_t *)func_?(pOVar11);
              position.y = (float)_Stack_48.dummy;
              position.x = (float)MStack_10;
              position.z = (float)eventCode;
              rotation.y = VStack_8.x;
              rotation.x = fStack_76;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_03,*piVar12,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_EDI = _Var56;
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
      pSVar19 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar19,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar13 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar13->fields).playerContainer;
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        if ((unaff_ESI.dummy != (Object__Class *)0x0) && (pOVar11 != (Object *)0x0)) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar12 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          if (pMVar69 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar69,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    _Var56.dummy = (Object__Class *)0x0;
    if (unaff_ESI.dummy != (Object__Class *)0x0) {
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var56.typeHandle = unaff_ESI.typeHandle;
      }
      pSVar15 = TypeInfo__System__String;
      if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
    }
    _Var56.dummy = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             (_Var56.dummy,
                              MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                             );
    pMVar45 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_ESI.typeHandle = _Var56.typeHandle;
    unaff_EDI = unaff_EDI;
    if ((_Var56.dummy == (Object__Class *)0x0) ||
       (unaff_EDI = unaff_EDI, pMVar45 == (MVWorldObjectClientManager *)0x0)) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                   (pMVar45,_Var56.type[3].data.__klassIndex,(MethodInfo *)0x0);
    this_10 = (MethodInfo **)(this->fields).networkGame;
    if (this_10 == (void *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              ((MVNetworkGame *)this_10,_Var56.type[2].data.__klassIndex,(MethodInfo *)0x0);
    pMVar13 = (this->fields).networkGame;
    if (pMVar13 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              (pMVar13,(int32_t)_Var56.type[1].data.__klassIndex,(MethodInfo *)0x0);
    pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    if (pOVar11 == (Object *)0x0) break;
    if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar58 = (bool *)func_?();
    eventCode = CONCAT31(eventCode._1_3_,*pbVar58);
    if (unaff_EDI.dummy == (void *)0x0) break;
    if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
         *(byte *)&(unaff_EDI.array)->etype[0x17].data) &&
       (*(MVAvatarSpawnRoleCreator__Class **)
         (*(int *)&(unaff_EDI.array)->etype[0xc].attrs +
         ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                ((MVAvatarSpawnRoleCreator *)unaff_EDI.typeHandle,
                 (SpawnRoleBodySwitchData *)_Var56.typeHandle,*pbVar58,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_VehicleGotEnergy:
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(pOVar11);
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar11 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar39.m_Index);
        _Stack_48 = (_union_86)p_Var60->__klassIndex;
        uStack_49 = 0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Byte,&uStack_49);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar13 = (this->fields).networkGame;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar45 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar13,(MethodInfo *)0x0),
           pMVar45 != (MVWorldObjectClientManager *)0x0)) {
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar45,_Stack_48.__klassIndex,(MethodInfo *)0x0);
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0x23,(MethodInfo *)0x0);
          p_Var60 = (_union_86 *)func_?(pOVar11);
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          iVar46 = func_?(unaff_EDI.dummy,
                                   TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                  );
          if (iVar46 != 0) {
            pMVar53 = (MethodInfo *)0x0;
            this_08 = (MVWorldObjectSpawner *)
                      func_?(unaff_EDI.dummy,
                                      TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                     );
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_08,unaff_ESI.__klassIndex,pMVar53)
            ;
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (_union_86)(pMVar13->fields).playerContainer, unaff_ESI = _Var56,
        photonEvent != (EventData *)0x0)) &&
       (iVar23 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0), unaff_EDI.dummy != (Object__Class *)0x0)
       ) {
      bVar18 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar23,&pMStack_6,
                          (MethodInfo *)0x0);
      if (bVar18 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xde,(MethodInfo *)0x0);
      puVar77 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar77);
      if (pMStack_6 != (MVPlayer *)0x0) {
        if ((pMStack_6->fields).playerState != *puVar77) {
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
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        _Var56.dummy = (Object__Class *)0x0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
              TypeInfo__System__String) {
            _Var56.typeHandle = unaff_ESI.typeHandle;
          }
          pSVar15 = TypeInfo__System__String;
          if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var56.dummy,(MethodInfo *)0x0);
        pMVar60 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar60 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar60,(String *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if ((photonEvent != (EventData *)0x0) &&
         (_Var93 = (_union_86)photonEvent,
         this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfb,(MethodInfo *)0x0),
         unaff_ESI = (_union_86)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
         , eventCode = (MVEventCodes__Enum)this_05,
         this_05 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        if (((this_05->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_05->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        this_10 = (MethodInfo **)&UNK_?;
        this_09 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            (this_05,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            );
        if (this_09 !=
            (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar78 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                    StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)&stack0xffffff78,
                               (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)this_09,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                              );
          _Var56.dummy = &stack0xffffff88;
          VStack_8.y = 0.0;
          _Var67 = (_union_86)pDVar78->_currentValue;
          uStack_1 = 3;
          VStack_8.z = (float)_Var56.dummy;
          do {
            bVar18 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                               ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                 *)&stack0xffffff88,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               );
            if (bVar18 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)_Var56.typeHandle,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)_Var93.typeHandle);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            str0.dummy = (Object__Class *)0x0;
            if (_Var67.dummy != (Object__Class *)0x0) {
              if ((String__Class *)((Il2CppClass_0 *)&(_Var67.array)->etype)->image ==
                  TypeInfo__System__String) {
                str0 = _Var67;
              }
              unaff_EDI.dummy = (Object__Class *)0x0;
              pSVar15 = TypeInfo__System__String;
              if (str0.dummy == (Object__Class *)0x0) goto code_?;
            }
            TVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                eventCode,(Object *)str0.typeHandle,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar39.m_Index == 0) {
              pSVar19 = (String *)0x0;
              _Var93 = (_union_86)::StringLiteral___;
            }
            else {
              _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
              pSVar19 = (String *)func_?(3);
              _Var93 = _Stack_48;
            }
            pSVar19 = mscorlib.dll::System::String::String_Concat_4
                                ((String *)str0.typeHandle,(String *)_Var93.typeHandle,pSVar19,
                                 (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar19,(MethodInfo *)0x0);
          } while( true );
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar11 != (Object *)0x0)) {
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var60 = (_union_86 *)func_?();
        unaff_ESI = (_union_86)p_Var60->__klassIndex;
        pMVar13 = (this->fields).networkGame;
        unaff_EDI = (_union_86)this;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar27 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
           pMVar27 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI.dummy == (Object__Class *)(pMVar27->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          pMVar13 = (this->fields).networkGame;
          if ((pMVar13 != (MVNetworkGame *)0x0) &&
             (pMVar68 = (pMVar13->fields).playerContainer, pMVar68 != (MVPlayerContainer *)0x0)) {
            bVar18 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar68,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
            if (bVar18 == 0) {
code_?:
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar68 = (pMVar13->fields).playerContainer, pMVar68 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar68,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar68 = (pMVar13->fields).playerContainer, pMVar68 != (MVPlayerContainer *)0x0))
              {
                pIStack_40 = (Il2CppClass *)
                             MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar68,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                pDStack_50 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_50,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                eventCode = eventCode & 0xffffff;
                VStack_8.z = (float)func_?(TypeInfo__System__Byte,
                                                     (byte *)((int)&eventCode + 3));
                _Stack_48 = unaff_ESI;
                pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
                if (pDStack_50 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_50,
                             (Object *)VStack_8.z,pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_49 = 3;
                  pOVar11 = (Object *)func_?(TypeInfo__System__Byte);
                  if ((pIStack_40 != (Il2CppClass *)0x0) &&
                     (pIStack_40->klass != (Il2CppClass *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_50,pOVar11,
                               (Object *)pIStack_40->klass->namespaze,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_41 = 6;
                    VStack_8.z = (float)func_?(TypeInfo__System__Byte);
                    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar13 != (MVNetworkGame *)0x0) &&
                       (this_04 = (pMVar13->fields)._Friends_k__BackingField,
                       this_04 != (FriendList *)0x0)) {
                      bStack_79 = FriendList::FriendList_IsFriend
                                            (this_04,(int32_t)pIStack_40->parent,(MethodInfo *)0x0);
                      pOVar11 = (Object *)func_?(TypeInfo__System__Boolean);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_50,
                                 (Object *)VStack_8.z,pOVar11,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_50,
                                 (MethodInfo *)0x0);
                      pMVar13 = (this->fields).networkGame;
                      if ((pMVar13 != (MVNetworkGame *)0x0) &&
                         (pGVar56 = (pMVar13->fields).gameStatCounterManager,
                         pGVar56 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar56,unaff_ESI.__klassIndex,
                                   (MVTeam__Enum)pIStack_40->properties,(MethodInfo *)0x0);
                        pMVar13 = (this->fields).networkGame;
                        if ((pMVar13 != (MVNetworkGame *)0x0) &&
                           (pGVar56 = (pMVar13->fields).gameStatCounterManager,
                           pGVar56 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar56,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
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
      unaff_ESI = _Var56;
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar11 != (Object *)0x0)) {
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar28 = (undefined4 *)func_?();
        pMStack_51 = (MVWorldObject *)*puVar28;
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = unaff_EDI;
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar22 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar22;
          _Var67.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var56.dummy,0x9a,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (_Var67.dummy != (Object__Class *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&(_Var67.array)->etype)->image ==
                TypeInfo__System__String) {
              unaff_EDI.typeHandle = _Var67.typeHandle;
            }
            pSVar15 = TypeInfo__System__String;
            if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
          }
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0xbc,(MethodInfo *)0x0);
          if (pOVar11 != (Object *)0x0) {
            if ((pOVar11->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar5 = (undefined1 *)func_?();
            _Stack_34.__klassIndex._0_1_ = *puVar5;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0x59,(MethodInfo *)0x0);
            if (pOVar11 != (Object *)0x0) {
              if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              p_Var60 = (_union_86 *)func_?();
              _Stack_28 = *p_Var60;
              pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var56.typeHandle,0xd0,(MethodInfo *)0x0);
              if (pOVar11 != (Object *)0x0) {
                if ((pOVar11->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                puVar5 = (undefined1 *)func_?();
                _Stack_48.__klassIndex._0_1_ = *puVar5;
                unaff_ESI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var56.dummy,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                }
                _Var56.dummy = (Object__Class *)0x0;
                if (unaff_ESI.dummy != (Object__Class *)0x0) {
                  if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
                      TypeInfo__System__String) {
                    _Var56.typeHandle = unaff_ESI.typeHandle;
                  }
                  pSVar15 = TypeInfo__System__String;
                  if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
                }
                VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)_Var56.typeHandle,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar13 = (this->fields).networkGame;
                if ((pMVar13 != (MVNetworkGame *)0x0) &&
                   (pMVar27 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar13,(MethodInfo *)0x0), pMVar27 != (MVLocalPlayer *)0x0
                   )) {
                  if (eventCode == (pMVar27->fields)._._ActorNr_k__BackingField) {
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
                            ((MVPlayer *)unaff_ESI.typeHandle,eventCode,(int32_t)pMStack_51,
                             (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                             (UserProfileData *)VStack_8.z,0,(bool)_Stack_48.__klassIndex,
                             (MethodInfo *)0x0);
                  if (unaff_ESI.dummy != (void *)0x0) {
                    unaff_ESI.type[9].data = _Stack_28;
                    pMVar13 = (this->fields).networkGame;
                    if ((pMVar13 != (MVNetworkGame *)0x0) &&
                       (pMVar68 = (pMVar13->fields).playerContainer,
                       pMVar68 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar68,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
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
  this_05 = extraout_EDX;
code_?:
  func_?(this_05);
code_?:
  func_?(unaff_EDI.dummy,_Stack_48.dummy);
  pSVar62 = extraout_ECX_00;
code_?:
  func_?(pSVar62);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?(&_Stack_54,&UNK_?);
  _Var56 = unaff_ESI;
code_?:
  this_10 = (MethodInfo **)&UNK_?;
  func_?();
code_?:
  _Var67.dummy = (void *)func_?();
  pSVar15 = extraout_ECX_01;
code_?:
  func_?(_Var67.dummy,pSVar15);
code_?:
  uVar47 = func_?(unaff_EDI.dummy);
  uVar80 = func_?(uVar47);
  iVar81 = (int)((ulonglong)uVar80 >> 0x20);
  iVar82 = iVar81 + 1;
  in_AF = 9 < ((byte)uVar80 & 0xf) | in_AF;
  uVar83 = CONCAT31((int3)((ulonglong)uVar80 >> 8),(byte)uVar80 + in_AF * -6) & 0xffffff0f;
  bVar44 = (byte)uVar83;
  cVar84 = (char)((ulonglong)uVar80 >> 8) - in_AF;
  iVar46 = CONCAT22((short)(uVar83 >> 0x10),CONCAT11(cVar84,bVar44));
  pcVar55 = (char *)(in_GS_OFFSET + iVar46 + -0x2aef9ac1);
  bVar85 = (byte)((uint)extraout_ECX_02 >> 8);
  *pcVar55 = *pcVar55 + bVar85 + in_AF;
  in_AF = 9 < bVar44 | in_AF;
  uVar83 = CONCAT31((int3)((uint)iVar46 >> 8),bVar44 + in_AF * -6) & 0xffffff0f;
  uVar86 = (undefined2)(uVar83 >> 0x10);
  bVar87 = (byte)uVar83;
  bVar88 = cVar84 - in_AF;
  pbVar43 = (byte *)(in_GS_OFFSET + CONCAT22(uVar86,CONCAT11(bVar88,bVar87)) * 3 + 0x41071065);
  bVar89 = *pbVar43;
  bVar44 = *pbVar43;
  *pbVar43 = bVar44 + bVar87 + in_AF;
  pcVar55 = (char *)(in_GS_OFFSET + iVar81 + 0x72106542);
  bVar90 = (byte)extraout_ECX_02;
  *pcVar55 = *pcVar55 + bVar90 + (CARRY1(bVar89,bVar87) || CARRY1(bVar44 + bVar87,in_AF));
  pbVar43 = (undefined *)(unaff_EDI.__klassIndex + 0x1d106541) + in_GS_OFFSET;
  bVar44 = *pbVar43;
  bVar91 = (byte)((uint)iVar82 >> 8);
  *pbVar43 = *pbVar43 + bVar91;
  pbVar43 = (byte *)((int)&(_Var56.type)->data + in_GS_OFFSET);
  bVar92 = (byte)((uint)unaff_EBX >> 8);
  bVar89 = *pbVar43 + bVar92;
  bVar63 = CARRY1(*pbVar43,bVar92) || CARRY1(bVar89,CARRY1(bVar44,bVar91));
  *pbVar43 = bVar89 + CARRY1(bVar44,bVar91);
  iVar93 = unaff_EBX + 1;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar81 + -0x79);
  bVar92 = (byte)((uint)(iVar81 + 2) >> 8);
  bVar94 = CARRY1(*pbVar43,bVar92) || CARRY1(*pbVar43 + bVar92,bVar63);
  *pbVar43 = *pbVar43 + bVar92 + bVar63;
  pbVar43 = (byte *)(in_GS_OFFSET + unaff_EBX + 0x45);
  bVar44 = (byte)(iVar81 + 2);
  bVar63 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar94);
  *pbVar43 = *pbVar43 + bVar44 + bVar94;
  bVar94 = CARRY1(bVar88,bVar88) || CARRY1(bVar88 * '\x02',bVar63);
  iVar46 = CONCAT22(uVar86,CONCAT11(bVar88 * '\x02' + bVar63,bVar87));
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 * 2 + 0x45841065);
  bVar63 = CARRY1(*pbVar43,bVar92) || CARRY1(*pbVar43 + bVar92,bVar94);
  *pbVar43 = *pbVar43 + bVar92 + bVar94;
  pbVar43 = (byte *)((int)&(_Var56.type)->data + in_GS_OFFSET + iVar46 * 2);
  bVar94 = CARRY1(*pbVar43,bVar90) || CARRY1(*pbVar43 + bVar90,bVar63);
  *pbVar43 = *pbVar43 + bVar90 + bVar63;
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + iVar46 * 2 + 0x47011065);
  bVar63 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar94);
  *pbVar43 = *pbVar43 + bVar44 + bVar94;
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + 0x47);
  bVar94 = CARRY1(*pbVar43,bVar85) || CARRY1(*pbVar43 + bVar85,bVar63);
  *pbVar43 = *pbVar43 + bVar85 + bVar63;
  bVar44 = (byte)iVar93;
  bVar63 = CARRY1(bVar44,bVar44) || CARRY1(bVar44 * '\x02',bVar94);
  bVar95 = bVar44 * '\x02' + bVar94;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar81 + -0x79);
  bVar94 = CARRY1(*pbVar43,bVar92) || CARRY1(*pbVar43 + bVar92,bVar63);
  *pbVar43 = *pbVar43 + bVar92 + bVar63;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + extraout_ECX_02 * 2);
  bVar63 = CARRY1(*pbVar43,bVar85) || CARRY1(*pbVar43 + bVar85,bVar94);
  *pbVar43 = *pbVar43 + bVar85 + bVar94;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar81 + -0x79);
  bVar94 = CARRY1(*pbVar43,bVar92) || CARRY1(*pbVar43 + bVar92,bVar63);
  *pbVar43 = *pbVar43 + bVar92 + bVar63;
  pbVar43 = (byte *)(in_GS_OFFSET + extraout_ECX_02 + 0x48);
  bVar63 = CARRY1(*pbVar43,bVar95) || CARRY1(*pbVar43 + bVar95,bVar94);
  *pbVar43 = *pbVar43 + bVar95 + bVar94;
  bVar44 = (byte)((uint)iVar93 >> 8);
  bVar88 = bVar44 + bVar87;
  bVar94 = CARRY1(bVar44,bVar87) || CARRY1(bVar88,bVar63);
  uVar96 = (undefined2)((uint)iVar93 >> 0x10);
  bVar88 = bVar88 + bVar63;
  iVar93 = iVar46 + -1;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar81 + -0x79);
  bVar44 = *pbVar43;
  bVar89 = *pbVar43;
  *pbVar43 = bVar89 + bVar92 + bVar94;
  *(char *)(in_GS_OFFSET + extraout_ECX_02) =
       *(char *)(in_GS_OFFSET + extraout_ECX_02) + bVar88 +
       (CARRY1(bVar44,bVar92) || CARRY1(bVar89 + bVar92,bVar94));
                    /* WARNING: Ignoring partial resolution of indirect */
  photonEvent._0_1_ = (byte)photonEvent & 0x16;
  bVar44 = (byte)iVar82;
  piVar97 = (int *)(CONCAT31((int3)((uint)iVar82 >> 8),bVar44 + bVar91) + -1);
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + -0x4ef9ab5);
  bVar89 = (byte)iVar93;
  bVar63 = CARRY1(*pbVar43,bVar89) || CARRY1(*pbVar43 + bVar89,CARRY1(bVar44,bVar91));
  *pbVar43 = *pbVar43 + bVar89 + CARRY1(bVar44,bVar91);
  pbVar43 = (byte *)(in_GS_OFFSET + iVar93);
  bVar94 = CARRY1(*pbVar43,bVar85) || CARRY1(*pbVar43 + bVar85,bVar63);
  *pbVar43 = *pbVar43 + bVar85 + bVar63;
  pbVar43 = &stack0x00000048 + in_GS_OFFSET;
  bVar63 = CARRY1(*pbVar43,bVar95) || CARRY1(*pbVar43 + bVar95,bVar94);
  *pbVar43 = *pbVar43 + bVar95 + bVar94;
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + -0x7aef9ab3);
  bVar91 = (byte)((uint)piVar97 >> 8);
  bVar94 = CARRY1(*pbVar43,bVar91) || CARRY1(*pbVar43 + bVar91,bVar63);
  *pbVar43 = *pbVar43 + bVar91 + bVar63;
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + -1);
  bVar44 = (byte)piVar97;
  bVar63 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar94);
  *pbVar43 = *pbVar43 + bVar44 + bVar94;
  pbVar43 = (byte *)((int)_Var56.dummy + in_GS_OFFSET + 0x4e);
  bVar87 = (byte)((uint)iVar93 >> 8);
  bVar94 = CARRY1(*pbVar43,bVar87) || CARRY1(*pbVar43 + bVar87,bVar63);
  *pbVar43 = *pbVar43 + bVar87 + bVar63;
  pbVar43 = (byte *)(in_GS_OFFSET + CONCAT22(uVar96,CONCAT11(bVar88,bVar95)) + -0x3fef9ab1);
  bVar63 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar94);
  *pbVar43 = *pbVar43 + bVar44 + bVar94;
  bVar94 = CARRY1(bVar85,bVar85) || CARRY1(bVar85 * '\x02',bVar63);
  uVar86 = (undefined2)((uint)extraout_ECX_02 >> 0x10);
  bVar44 = bVar85 * '\x02' + bVar63;
  pcVar55 = (char *)(unaff_EDI.__klassIndex + -2);
  pbVar43 = (byte *)(in_GS_OFFSET + (int)piVar97);
  bVar63 = CARRY1(*pbVar43,bVar95) || CARRY1(*pbVar43 + bVar95,bVar94);
  *pbVar43 = *pbVar43 + bVar95 + bVar94;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + 100 + (int)piVar97 * 2);
  bVar94 = CARRY1(*pbVar43,bVar89) || CARRY1(*pbVar43 + bVar89,bVar63);
  *pbVar43 = *pbVar43 + bVar89 + bVar63;
  pbVar43 = (byte *)(CONCAT22(uVar86,CONCAT11(bVar44,bVar90)) + 0x50);
  bVar63 = CARRY1(*pbVar43,bVar91) || CARRY1(*pbVar43 + bVar91,bVar94);
  *pbVar43 = *pbVar43 + bVar91 + bVar94;
  bVar94 = CARRY1(bVar88,bVar95) || CARRY1(bVar88 + bVar95,bVar63);
  bVar98 = bVar88 + bVar95 + bVar63;
  iVar81 = CONCAT22(uVar96,CONCAT11(bVar98,bVar95));
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + -0x66ef9ab0);
  bVar63 = CARRY1(*pbVar43,bVar90) || CARRY1(*pbVar43 + bVar90,bVar94);
  *pbVar43 = *pbVar43 + bVar90 + bVar94;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar81 + 0x65 + (int)piVar97 * 2);
  bVar94 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar63);
  *pbVar43 = *pbVar43 + bVar44 + bVar63;
  bVar63 = CARRY1(in_stack_99,bVar98) || CARRY1(in_stack_99 + bVar98,bVar94);
  in_stack_99 = in_stack_99 + bVar98 + bVar94;
  bVar94 = CARRY1(bVar95,bVar87) || CARRY1(bVar95 + bVar87,bVar63);
  uVar100 = (undefined3)((uint)iVar81 >> 8);
  bVar88 = bVar95 + bVar87 + bVar63;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + 100 + CONCAT31(uVar100,bVar88) * 2);
  bVar63 = CARRY1(*pbVar43,bVar91) || CARRY1(*pbVar43 + bVar91,bVar94);
  *pbVar43 = *pbVar43 + bVar91 + bVar94;
  puVar101 = (undefined *)(unaff_EDI.__klassIndex + 0x18106556);
  bVar94 = CARRY1(*puVar101,bVar91) || CARRY1(*puVar101 + bVar91,bVar63);
  *puVar101 = *puVar101 + bVar91 + bVar63;
  pbVar43 = &stack0x00000055 + in_GS_OFFSET;
  bVar91 = (byte)((uint)pcVar55 >> 8);
  bVar63 = CARRY1(*pbVar43,bVar91) || CARRY1(*pbVar43 + bVar91,bVar94);
  *pbVar43 = *pbVar43 + bVar91 + bVar94;
  pbVar43 = (undefined1 *)(_Var56.__klassIndex + 0x5a) + in_GS_OFFSET;
  bVar94 = CARRY1(*pbVar43,bVar89) || CARRY1(*pbVar43 + bVar89,bVar63);
  *pbVar43 = *pbVar43 + bVar89 + bVar63;
  pbVar43 = (undefined *)(unaff_EDI.__klassIndex + 0x1e106559) + in_GS_OFFSET;
  bVar63 = CARRY1(*pbVar43,bVar98) || CARRY1(*pbVar43 + bVar98,bVar94);
  *pbVar43 = *pbVar43 + bVar98 + bVar94;
  bVar85 = (byte)pcVar55;
  bVar94 = CARRY1(bVar88,bVar85) || CARRY1(bVar88 + bVar85,bVar63);
  bVar92 = bVar88 + bVar85 + bVar63;
  piVar97 = (int *)*piVar97;
  pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + 0x5c);
  bVar63 = CARRY1(*pbVar43,bVar44) || CARRY1(*pbVar43 + bVar44,bVar94);
  *pbVar43 = *pbVar43 + bVar44 + bVar94;
  bVar94 = CARRY1(bVar44,bVar98) || CARRY1(bVar44 + bVar98,bVar63);
  bVar88 = bVar44 + bVar98 + bVar63;
  puVar102 = (ushort *)CONCAT22(uVar86,CONCAT11(bVar88,bVar90));
  puVar28 = (undefined4 *)*piVar97;
  pbVar43 = (byte *)((int)unaff_EDI.dummy + in_GS_OFFSET + -0x28ef9aa4);
  bVar63 = CARRY1(*pbVar43,bVar85) || CARRY1(*pbVar43 + bVar85,bVar94);
  *pbVar43 = *pbVar43 + bVar85 + bVar94;
  pEVar33 = (EventData *)piVar97[1];
  bVar44 = bVar92 + bVar90;
  bVar94 = CARRY1(bVar92,bVar90) || CARRY1(bVar44,bVar63);
  cVar84 = bVar44 + bVar63;
  iVar46 = CONCAT31(uVar100,cVar84);
  _Var56 = (_union_86)((_union_86 *)(piVar97 + 2))->type;
  pbVar43 = (undefined *)(_Var56.__klassIndex + 99) + in_GS_OFFSET;
  bVar63 = CARRY1(*pbVar43,bVar90) || CARRY1(*pbVar43 + bVar90,bVar94);
  *pbVar43 = *pbVar43 + bVar90 + bVar94;
  bVar44 = bVar87 * '\x02';
  bVar94 = CARRY1(bVar87,bVar87) || CARRY1(bVar44,bVar63);
  piVar97 = (int *)CONCAT22((short)((uint)iVar93 >> 0x10),CONCAT11(bVar44 + bVar63,bVar89));
  puVar103 = (ushort *)(puVar28 + 4);
  *puVar103 = *puVar103 + (ushort)(0 < (short)-(*puVar103 & 3)) * -(*puVar103 & 3);
  if ((SCARRY1(bVar87,bVar87) != SCARRY1(bVar44,bVar63)) == (char)(bVar44 + bVar63) < '\0') {
    pbVar43 = (undefined *)(_Var56.__klassIndex + 0x65) + in_GS_OFFSET;
    bVar63 = CARRY1(*pbVar43,bVar85) || CARRY1(*pbVar43 + bVar85,bVar94);
    *pbVar43 = *pbVar43 + bVar85 + bVar94;
    bVar94 = CARRY1(bVar98,bVar88) || CARRY1(bVar98 + bVar88,bVar63);
    bVar92 = bVar98 + bVar88 + bVar63;
    iVar46 = CONCAT22(uVar96,CONCAT11(bVar92,cVar84));
    pbVar43 = (byte *)((int)(_Var56.__klassIndex + 0x31106566) + in_GS_OFFSET);
    bVar63 = CARRY1(*pbVar43,bVar89) || CARRY1(*pbVar43 + bVar89,bVar94);
    *pbVar43 = *pbVar43 + bVar89 + bVar94;
    bVar94 = CARRY1(bVar89,bVar89) || CARRY1(bVar89 * '\x02',bVar63);
    uVar100 = (undefined3)((uint)piVar97 >> 8);
    bVar87 = bVar89 * '\x02' + bVar63;
    pbVar43 = (byte *)((int)unaff_EDI.dummy + in_GS_OFFSET + -0x7d);
    bVar89 = *pbVar43;
    bVar44 = *pbVar43;
    *pbVar43 = bVar44 + bVar91 + bVar94;
    ((undefined *)(_Var56.__klassIndex + 0x72106566))[in_GS_OFFSET] =
         ((undefined *)(_Var56.__klassIndex + 0x72106566))[in_GS_OFFSET] + bVar85 +
         (CARRY1(bVar89,bVar91) || CARRY1(bVar44 + bVar91,bVar94));
    pbVar43 = (byte *)((int)unaff_EDI.dummy + in_GS_OFFSET + -0x7d);
    bVar44 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar91;
    puVar77 = &pEVar33[3].fields.Code + in_GS_OFFSET;
    bVar89 = *puVar77;
    bVar88 = *puVar77;
    *puVar77 = bVar88 + bVar90 + CARRY1(bVar44,bVar91);
    pcVar104 = (char *)((int)_Var56.dummy + in_GS_OFFSET + -1);
    *pcVar104 = *pcVar104 + bVar90 +
              (CARRY1(bVar89,bVar90) || CARRY1(bVar88 + bVar90,CARRY1(bVar44,bVar91)));
    puVar28 = *(undefined4 **)*puVar28;
    bVar63 = (longlong)(int)&stack0xffffff6c != (longlong)(int)puVar28[4] * 0x2b;
    ppvVar105 = (void **)&(_Var56.type)->attrs;
    uVar106 = (ushort)pcVar55;
    uVar107 = in(uVar106);
    *(undefined1 *)((int)&(_Var56.type)->data + 3) = uVar107;
    bVar94 = CARRY1(bVar90,bVar87) || CARRY1(bVar90 + bVar87,bVar63);
    bVar88 = bVar90 + bVar87 + bVar63;
    puVar102 = (ushort *)CONCAT31((int3)((uint)puVar102 >> 8),bVar88);
    _Var56.type = _Var56.type + 1;
    pvVar108 = (void *)in(uVar106);
    *ppvVar105 = pvVar108;
    pbVar43 = (byte *)(in_GS_OFFSET + iVar46 + -0x4bef9a92);
    bVar44 = *pbVar43;
    bVar89 = *pbVar43 + bVar85;
    bVar63 = CARRY1(*pbVar43,bVar85) || CARRY1(bVar89,bVar94);
    *pbVar43 = bVar89 + bVar94;
    if (SCARRY1(bVar44,bVar85) == SCARRY1(bVar89,bVar94)) {
      cVar84 = *(char *)&pEVar33->klass;
      bVar44 = *(char *)&pEVar33->klass + bVar85;
      bVar94 = CARRY1(*(byte *)&pEVar33->klass,bVar85) || CARRY1(bVar44,bVar63);
      *(byte *)&pEVar33->klass = bVar44 + bVar63;
      if (SCARRY1(cVar84,bVar85) == SCARRY1(bVar44,bVar63)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(CONCAT31(uVar100,bVar87) + -0x20))();
        return;
      }
      bVar44 = bVar87 + bVar88;
      bVar63 = CARRY1(bVar87,bVar88) || CARRY1(bVar44,bVar94);
      piVar97 = (int *)CONCAT31(uVar100,bVar44 + bVar94);
      if (SCARRY1(bVar87,bVar88) != SCARRY1(bVar44,bVar94)) {
        puVar109 = (uint32_t *)(unaff_EDI.__klassIndex + 0x70);
        bVar94 = CARRY1(*(byte *)puVar109,bVar92) || CARRY1(*(char *)puVar109 + bVar92,bVar63);
        *(byte *)puVar109 = *(char *)puVar109 + bVar92 + bVar63;
        goto code_?;
      }
      sVar110 = (uVar106 & 3) - (*puVar102 & 3);
      *puVar102 = *puVar102 + (ushort)(0 < sVar110) * sVar110;
    }
    else {
      puVar28 = (undefined4 *)&stack0xffffff68;
    }
    *unaff_FS_OFFSET = &stack0xffffff6c;
code_?:
    bVar63 = cRam_? == '\0';
code_?:
    pEVar33 = (EventData *)puVar28[3];
    this_10 = (MethodInfo **)_Var56;
code_?:
    puVar28[-4] = &stack0xffffff6c;
    if (bVar63) {
code_?:
      func_?();
      this_10 = &
                MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
      ;
code_?:
      func_?();
      puVar102 = extraout_ECX_03;
      pcVar55 = extraout_EDX_00;
code_?:
      cRam_? = '\x01';
    }
    _Var56 = (_union_86)((_union_86 *)(puVar28 + 2))->type;
code_?:
    bVar44 = *(byte *)&_Var56.type[1].attrs;
code_?:
    if (bVar44 != 0) {
      if ((Queue_1_System_Object_ *)_Var56.type[2].data.typeHandle != (Queue_1_System_Object_ *)0x0)
      {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)_Var56.type[2].data.typeHandle,(Object *)pEVar33,
                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                  );
        *unaff_FS_OFFSET = puVar28[-3];
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    pbVar43 = (byte *)((int)piVar97 + in_GS_OFFSET + 0x73);
    bVar89 = (byte)puVar102;
    bVar63 = CARRY1(*pbVar43,bVar89) || CARRY1(*pbVar43 + bVar89,bVar94);
    *pbVar43 = *pbVar43 + bVar89 + bVar94;
    pbVar43 = (byte *)((int)&pEVar33->klass + in_GS_OFFSET);
    bVar94 = CARRY1(*pbVar43,bVar91) || CARRY1(*pbVar43 + bVar91,bVar63);
    *pbVar43 = *pbVar43 + bVar91 + bVar63;
    bVar44 = (byte)piVar97;
    if (*pbVar43 == 0) {
      *(byte *)piVar97 = (char)*piVar97 + bVar44;
      *(byte *)piVar97 = (char)*piVar97 + bVar44;
      goto code_?;
    }
    piVar12 = &pEVar33[0x238832b].fields.sender;
    bVar87 = (byte)((uint)puVar102 >> 8);
    bVar88 = (char)*piVar12 + bVar87;
    bVar63 = CARRY1((byte)*piVar12,bVar87) || CARRY1(bVar88,bVar94);
    *(byte *)piVar12 = bVar88 + bVar94;
    if ((char)*piVar12 != '\0') {
      pcVar104 = (char *)(iVar46 + 0x56);
      *pcVar104 = *pcVar104 + bVar85;
      bVar63 = *pcVar104 == '\0';
      goto code_?;
    }
    bVar90 = (byte)((uint)piVar97 >> 8);
    bVar88 = (byte)iVar46 + bVar90;
    bVar94 = CARRY1((byte)iVar46,bVar90) || CARRY1(bVar88,bVar63);
    uVar100 = (undefined3)((uint)iVar46 >> 8);
    cVar84 = bVar88 + bVar63;
    if (cVar84 != '\0') {
      *piVar97 = (int)((int)piVar97 + (uint)bVar94 + *piVar97);
      bVar63 = *piVar97 == 0;
      goto code_?;
    }
    pbVar43 = (byte *)(CONCAT31(uVar100,cVar84) + 0x76);
    bVar63 = CARRY1(*pbVar43,bVar87) || CARRY1(*pbVar43 + bVar87,bVar94);
    *pbVar43 = *pbVar43 + bVar87 + bVar94;
    bVar94 = CARRY1(bVar87,bVar63);
    bVar87 = bVar87 + bVar63;
    puVar102 = (ushort *)CONCAT22((short)((uint)puVar102 >> 0x10),CONCAT11(bVar87,bVar89));
    bVar63 = bVar87 == 0;
    if (bVar94 || bVar63) goto code_?;
    bVar89 = *pcVar55;
    bVar92 = (byte)((uint)iVar46 >> 8);
    bVar88 = *pcVar55 + bVar92;
    bVar63 = CARRY1(bVar89,bVar92) || CARRY1(bVar88,bVar94);
    *pcVar55 = bVar88 + bVar94;
    if ((!CARRY1(bVar89,bVar92) && !CARRY1(bVar88,bVar94)) && *pcVar55 != '\0')
    goto code_?;
    bVar89 = (byte)*puVar102 + bVar44;
    bVar94 = CARRY1((byte)*puVar102,bVar44) || CARRY1(bVar89,bVar63);
    *(byte *)puVar102 = bVar89 + bVar63;
    if ((char)(byte)*puVar102 < '\0') goto code_?;
    puVar103 = puVar102 + 0x3c;
    bVar89 = (byte)*puVar103 + bVar91;
    bVar111 = CARRY1((byte)*puVar103,bVar91) || CARRY1(bVar89,bVar94);
    *(byte *)puVar103 = bVar89 + bVar94;
    pbVar43 = (byte *)((int)pEVar33 + in_GS_OFFSET + -0x5ef9a88);
    bVar89 = *pbVar43;
    bVar63 = CARRY1(bVar89,bVar111);
    *pbVar43 = bVar89 + bVar111;
    if ((char)*pbVar43 < '\0') goto code_?;
    bVar94 = CARRY1(bVar91,bVar63);
    cVar84 = bVar91 + bVar63;
    if (-1 < cVar84) {
      piVar112 = (int *)(CONCAT31(uVar100,cVar84) + 0x5c608c4);
      *piVar112 = *piVar112 + 1;
      pEVar33 = (EventData *)&uRam_?;
      *(byte *)((int)piVar97 + 0xf000c7f) = *(byte *)((int)piVar97 + 0xf000c7f) | bVar44;
      *piVar97 = (int)(*piVar97 + (int)piVar97);
      goto code_?;
    }
    bVar63 = CARRY1(bVar90,bVar90) || CARRY1(bVar90 * '\x02',bVar94);
    bVar89 = bVar90 * '\x02' + bVar94;
    piVar97 = (int *)CONCAT22((short)((uint)piVar97 >> 0x10),CONCAT11(bVar89,bVar44));
    if ((POPCOUNT(bVar89) & 1U) == 0) goto code_?;
    puVar101 = (undefined *)(unaff_EDI.__klassIndex + -0x7d);
    bVar94 = CARRY1(*puVar101,bVar91) || CARRY1(*puVar101 + bVar91,bVar63);
    *puVar101 = *puVar101 + bVar91 + bVar63;
    pbVar43 = (byte *)((int)&(_Var56.type)->data + in_GS_OFFSET);
    bVar88 = *pbVar43 + bVar87;
    bVar63 = CARRY1(*pbVar43,bVar87) || CARRY1(bVar88,bVar94);
    bVar111 = SCARRY1(*pbVar43,bVar87) != SCARRY1(bVar88,bVar94);
    *pbVar43 = bVar88 + bVar94;
    if (bVar111 == (char)*pbVar43 < '\0') {
      cVar84 = *pcVar55;
      bVar88 = *pcVar55 + bVar92;
      bVar94 = CARRY1(*pcVar55,bVar92) || CARRY1(bVar88,bVar63);
      *pcVar55 = bVar88 + bVar63;
      if ((SCARRY1(cVar84,bVar92) != SCARRY1(bVar88,bVar63)) != *pcVar55 < '\0') {
        uVar106 = *puVar102;
        bVar44 = (byte)*puVar102 + bVar89;
        bVar63 = CARRY1((byte)*puVar102,bVar89) || CARRY1(bVar44,bVar94);
        *(byte *)puVar102 = bVar44 + bVar94;
        if ((byte)*puVar102 != 0 &&
            (SCARRY1((byte)uVar106,bVar89) != SCARRY1(bVar44,bVar94)) == (char)(byte)*puVar102 < '\0')
        {
          pbVar43 = (byte *)((int)pEVar33 + _Var56.__klassIndex * 2 + -0x7f76ef9b);
          bVar44 = *pbVar43;
          bVar88 = *pbVar43;
          *pbVar43 = bVar88 + bVar89 + bVar63;
          *(byte *)(in_GS_OFFSET + (int)puVar102) =
               *(byte *)(in_GS_OFFSET + (int)puVar102) + bVar85 +
               (CARRY1(bVar44,bVar89) || CARRY1(bVar88 + bVar89,bVar63));
          puVar28[4] = puVar28[4] & 0xffffffcc;
          pcVar113 = (code *)swi(3);
          (*pcVar113)();
          return;
        }
        *piVar97 = (int)(*piVar97 + (int)piVar97);
        goto code_?;
      }
      goto code_?;
    }
    if (bVar111 != (char)*pbVar43 < '\0') goto code_?;
    *(byte *)piVar97 = (char)*piVar97 + bVar44;
  }
code_?:
  *pcVar55 = *pcVar55 + (char)((uint)puVar102 >> 8);
  MVar114 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)this_10);
  if (pEVar33 != (EventData *)0x0) {
    if (MVar114 != MVJoinState__Enum_Playing) {
      *(uint8_t *)(puVar28 + 2) = (pEVar33->fields).Code;
      if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI(puVar28[2],(MethodInfo *)0x0);
    }
    pMVar53 = (MethodInfo *)0x0;
    *(uint8_t *)(puVar28 + 2) = (pEVar33->fields).Code;
    MVar35 = puVar28[2];
    puVar28[-1] = 0;
    MVNetworkGame_EventHandling_HandleEvent
              ((MVNetworkGame_EventHandling *)_Var56.typeHandle,MVar35,pEVar33,pMVar53);
    *unaff_FS_OFFSET = puVar28[-3];
    return;
  }
code_?:
  uVar47 = func_?();
  puVar28[-6] = uVar47;
  func_?();
  pcVar113 = (code *)swi(3);
  (*pcVar113)();
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

