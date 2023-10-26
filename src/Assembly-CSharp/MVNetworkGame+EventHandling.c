
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
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
  pMVar10 = (this->fields).networkGame;
  if (bVar9 == 0) {
    if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
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
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).embedded != 0) {
      if ((this->fields).networkGame == (MVNetworkGame *)0x0) goto code_?;
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
    if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
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
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).embedded != 0) {
      if ((this->fields).networkGame == (MVNetworkGame *)0x0) goto code_?;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
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
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData);
    func_?(&TypeInfo__MV__Common__PlayerGameState);
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
  RVar6 = (RegexCharClass_SingleRange)photonEvent;
  pMStack_7 = (MVPlayer *)0x0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  RStack_9.First = 0;
  RStack_9.Last = 0;
  BStack_10.m_value = 0;
  pMVar11 = (MethodInfo *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar12 != (Object *)0x0)) {
      pIVar13 = TypeInfo__System__Int32;
      if ((pOVar12->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar14 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (pWVar16 = (pMVar15->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar16 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (RegexCharClass_SingleRange)(pWVar16->fields)._.worldObjectClientManager,
       unaff_ESI = RVar6, RStack_17 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      RVar18 = (RegexCharClass_SingleRange)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (RVar18 != (RegexCharClass_SingleRange)0x0) {
          if ((*(byte *)(*(int *)RVar18 + 0xb4) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)RVar18 + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          RVar6.First = 0;
          RVar6.Last = 0;
          if (bVar19) {
            RVar6 = RVar18;
          }
          RVar18 = (RegexCharClass_SingleRange)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (RVar6 != (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
        RVar6.First = 0;
        RVar6.Last = 0;
code_?:
        unaff_ESI = RVar6;
        unaff_EDI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          RVar18 = (RegexCharClass_SingleRange)eventCode;
          pIVar13 = TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)eventCode + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar14 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)RStack_17,*piVar14,
                       (Dictionary_2_System_Object_System_Object_ *)RVar6,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = RVar6;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar12 != (Object *)0x0)) {
      pIVar13 = TypeInfo__System__Int32;
      if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar20;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectData.First = 0;
        worldObjectData.Last = 0;
code_?:
        pMVar15 = (this->fields).networkGame;
        if (((pMVar15 != (MVNetworkGame *)0x0) &&
            (pWVar16 = (pMVar15->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) &&
           (pMVar21 = (pWVar16->fields)._.worldObjectClientManager,
           pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                    (pMVar21,(int32_t)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)worldObjectData,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      RVar18 = *(RegexCharClass_SingleRange *)unaff_ESI;
      if ((*(byte *)((int)RVar18 + 0xb4) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((int)((Il2CppClass_1 *)((int)RVar18 + 100))->typeHierarchy +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth * 4 + -4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      worldObjectData.First = 0;
      worldObjectData.Last = 0;
      if (bVar19) {
        worldObjectData = unaff_ESI;
      }
      pMVar22 = (MVAvatarSpawnRoleCreator__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      if (worldObjectData != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
      func_?(unaff_ESI,pMVar22);
      pSVar23 = extraout_ECX_00;
      unaff_EDI = RVar18;
code_?:
      func_?(unaff_ESI,pSVar23);
code_?:
      func_?(unaff_EDI,RStack_24);
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = RVar6;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar12 != (Object *)0x0)) {
      pIVar13 = TypeInfo__System__Int32;
      if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar20;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x13,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
      }
      else {
        RVar18 = *(RegexCharClass_SingleRange *)unaff_ESI;
        if ((*(byte *)((int)RVar18 + 0xb4) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             ((int)((Il2CppClass_1 *)((int)RVar18 + 100))->typeHierarchy +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth * 4 + -4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
        if (bVar19) {
          worldObjectDataToRemove = unaff_ESI;
        }
        pMVar22 = (MVAvatarSpawnRoleCreator__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (worldObjectDataToRemove == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      pMVar15 = (this->fields).networkGame;
      if (((pMVar15 != (MVNetworkGame *)0x0) &&
          (pWVar16 = (pMVar15->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) &&
         (pMVar21 = (pWVar16->fields)._.worldObjectClientManager,
         pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar21,(int32_t)unaff_EDI,
                   (Dictionary_2_System_Object_System_Object_ *)worldObjectDataToRemove,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
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
    pMVar25 = (this->fields).dynamicEventCallbackManager;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar25 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      bVar26 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
               MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                         (pMVar25,eventCode,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        pSVar27 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffa0,(MethodInfo *)0x0);
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Unknown_event__,pSVar27,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar25 = (this->fields).dynamicEventCallbackManager;
      if (pMVar25 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar25,eventCode,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar12 != (Object *)0x0)) {
      pIVar13 = TypeInfo__System__Int32;
      if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar14 = (int32_t *)func_?();
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if ((pOVar28 != (Object__Class *)0x0) &&
         (pMVar29 = (MVWorldInventory *)(pOVar28->_0).namespaze, pMVar29 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar29,*piVar14,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (pWVar16 = (pMVar15->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar16 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar16->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar6, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x31,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        RStack_24 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
        RVar6 = unaff_EDI;
        if ((unaff_EDI != (RegexCharClass_SingleRange)0x0) &&
           (RStack_17 = (RegexCharClass_SingleRange)func_?(), RVar6 = RStack_17,
           RStack_17 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        unaff_EDI = RVar6;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          pSVar23 = (String__Class *)TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar14 = (int32_t *)func_?(unaff_ESI);
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                      ((MVWorldInventory *)eventCode,*piVar14,(Byte__Array *)unaff_EDI,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (pWVar16 = (pMVar15->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar16 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar16->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar6, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x22,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar12 != (Object *)0x0)) {
        pIVar13 = (Int32__Class *)TypeInfo__System__Single;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          pSVar23 = (String__Class *)TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar14 = (int32_t *)func_?(unaff_ESI);
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                      ((MVWorldInventory *)unaff_EDI,*piVar14,(float)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_17 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar12 != (Object *)0x0)) {
        pIVar13 = TypeInfo__System__Int32;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar31 = (undefined4 *)func_?();
        pEStack_32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar31;
        if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
        pIVar13 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_EDI + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pRVar20 = (RegexCharClass_SingleRange *)func_?(unaff_EDI);
        RStack_24 = *pRVar20;
        if (RStack_17 == (RegexCharClass_SingleRange)0x0) break;
        RVar18 = RStack_17;
        pIVar13 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)RStack_17 + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          pRVar20 = (RegexCharClass_SingleRange *)func_?(RStack_17);
          unaff_EDI = *pRVar20;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            func_?(&TypeInfo__MV__WorldObject__Link);
            func_?(&StringLiteral_reset_count_);
            cRam_? = '\x01';
          }
          IStack_33.m_value = 0;
          unaff_ESI = (RegexCharClass_SingleRange)func_?(TypeInfo__MV__WorldObject__Link);
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
            MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1
                      ((Link *)unaff_ESI,(MethodInfo *)0x0);
            MVar34 = eventCode;
            *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0xc) = unaff_EDI;
            *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_24;
            ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery = pEStack_32;
            unaff_EDI = (RegexCharClass_SingleRange)eventCode;
            if (*(WorldNetwork **)(eventCode + 0xb0) != (WorldNetwork *)0x0) {
              WorldNetwork::WorldNetwork_AddLink_1
                        (*(WorldNetwork **)(eventCode + 0xb0),(Link *)unaff_ESI,(MethodInfo *)0x0);
              this_00 = *(LogicObjectManagerClient **)
                         (MVar34 + MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent);
              pMVar35 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              unaff_EDI.First = 0;
              unaff_EDI.Last = 0;
              if (this_00 != (LogicObjectManagerClient *)0x0) {
                IStack_33.m_value =
                     LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                               (this_00,(Link *)unaff_ESI,(IWorldObjectManager *)pMVar35,
                                (MethodInfo *)0x0);
                this_07 = &IStack_33;
                goto code_?;
              }
            }
          }
          break;
        }
code_?:
        func_?(RVar18,pIVar13);
        RVar18 = unaff_EDI;
code_?:
        func_?();
        pMVar22 = extraout_EDX_00;
        unaff_ESI = RVar6;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar20;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&StringLiteral_reset_count_);
        cRam_? = '\x01';
      }
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      eventCode = MVEventCodes__Enum_NoCodeSet;
      if (pOVar28 != (Object__Class *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)
                    WorldNetwork::WorldNetwork_RemoveLink
                              ((WorldNetwork *)pOVar28,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
        this_01 = *(Il2CppClass **)((int)unaff_ESI + 0x2c);
        pMVar35 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (this_01 != (Il2CppClass *)0x0) {
          eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                ((LogicObjectManagerClient *)this_01,(Link *)unaff_EDI,
                                 (IWorldObjectManager *)pMVar35,(MethodInfo *)0x0);
          this_07 = (Int32 *)&eventCode;
code_?:
          pSVar27 = mscorlib.dll::System::Int32::Int32_ToString(this_07,(MethodInfo *)0x0);
          pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_reset_count_,pSVar27,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      unaff_ESI = *pRVar20;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__IEditModeUI);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar37 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if ((pIVar37 != (IEditModeUI *)0x0) &&
         (pPVar38 = (PlayerShopInventoryRepository *)
                    func_?(4,TypeInfo__IEditModeUI,pIVar37),
         pPVar38 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveItemFromInventory
                  (pPVar38,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x35,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pFVar39 = (pMVar15->fields)._Friends_k__BackingField, pFVar39 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar39,(int32_t)unaff_EDI,eventCode,*piVar14,FriendStatus__Enum_Pending,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x36,(MethodInfo *)0x0);
      pFVar40 = (FriendStatus__Enum *)func_?(pOVar12,TypeInfo__MV__Common__FriendStatus);
      pMVar15 = (this->fields).networkGame;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pFVar39 = (pMVar15->fields)._Friends_k__BackingField, pFVar39 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend
                  (pFVar39,(int32_t)unaff_EDI,eventCode,*pFVar40,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar15,*piVar14,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar15,*piVar14,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_ESI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      RStack_17 = *pRVar20;
      unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
      eventCode = (MVEventCodes__Enum)unaff_ESI;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&TypeInfo__ITriggerBoxEventsHandler);
        func_?(&StringLiteral__does_not_exist);
        func_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
        func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
        cRam_? = '\x01';
      }
      if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) == (WorldNetwork *)0x0) {
        pMVar35 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        unaff_ESI = (RegexCharClass_SingleRange)eventCode;
        if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) == (WorldNetwork *)0x0) break;
        pMVar35 = (MVWorldObjectClientManager *)
                  ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldObjectClientManager;
      }
      unaff_ESI = (RegexCharClass_SingleRange)eventCode;
      if (pMVar35 == (MVWorldObjectClientManager *)0x0) break;
      pMVar41 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar35,eventCode,(MethodInfo *)0x0);
      if (pMVar41 == (MVWorldObject *)0x0) {
        pSVar27 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar27 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar27,
                             StringLiteral__does_not_exist,(MethodInfo *)0x0);
      }
      else {
        iVar42 = func_?();
        if (iVar42 != 0) {
          func_?(0,TypeInfo__ITriggerBoxEventsHandler,iVar42,RStack_17);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pSVar27 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar27 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar27,
                             StringLiteral__is_not_a_triggerbox_or_a_toggle,(MethodInfo *)0x0);
      }
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar27,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__ITriggerBoxEventsHandler);
          func_?(&StringLiteral__does_not_exist);
          func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
          func_?(&StringLiteral_OnTriggerBoxStayEnd_received__bu);
          cRam_? = '\x01';
        }
        if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
          pMVar35 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          if (pOVar28 == (Object__Class *)0x0) break;
          pMVar35 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
        }
        if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
          pMVar41 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar35,eventCode,(MethodInfo *)0x0);
          if (pMVar41 == (MVWorldObject *)0x0) {
            pSVar27 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar27 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar27,
                                 StringLiteral__does_not_exist,(MethodInfo *)0x0);
          }
          else {
            iVar42 = func_?();
            if (iVar42 != 0) {
              func_?(1,TypeInfo__ITriggerBoxEventsHandler,iVar42);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pSVar27 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar27 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar27,
                                 StringLiteral__is_not_a_triggerbox_or_a_toggle,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Int32);
        cRam_? = '\x01';
      }
      pEVar43 = photonEvent;
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar28 != (Object__Class *)0x0) {
        eventCode = (MVEventCodes__Enum)(pOVar28->_0).name;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar43,0x14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar12 != (Object *)0x0)) {
            pIVar13 = TypeInfo__System__Int32;
            if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar30;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pSVar23 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar14 = (int32_t *)func_?(unaff_ESI);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                          ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar14,eventCode,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar20 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar20;
        piVar14 = (int32_t *)func_?();
        if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
           (pMVar29 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldInventory,
           pMVar29 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar29,*piVar14,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar15 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    (pMVar15->fields)._NetworkGameStateListener_k__BackingField, unaff_ESI = RVar6,
       RStack_24 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      RStack_17 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x42,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        iVar44 = *piVar14;
        piVar14 = (int32_t *)func_?();
        iVar45 = *piVar14;
        pMVar46 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)RStack_24,*pMVar46,iVar45,iVar44,0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar14 = (int32_t *)func_?();
      iVar44 = *piVar14;
      pMVar35 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                (iVar44,(IWorldObjectManager *)pMVar35,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    if (((pMVar15 == (MVNetworkGame *)0x0) ||
        (pMVar47 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
        pMVar47 == (MVLocalPlayer *)0x0)) ||
       (eventCode = (pMVar47->fields)._._ActorNr_k__BackingField,
       unaff_EDI == (RegexCharClass_SingleRange)0x0)) break;
    pIVar13 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)unaff_EDI + 0x20) == (TypeInfo__System__Int32->_0).element_class)
    {
      pMVar30 = (MVEventCodes__Enum *)func_?();
      if (*pMVar30 == eventCode) goto code_?;
      pMVar15 = (this->fields).networkGame;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pWVar16 = (pMVar15->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) {
        pMVar21 = (pWVar16->fields)._.worldObjectClientManager;
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x16,(MethodInfo *)0x0);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x46,(MethodInfo *)0x0);
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
          pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(pOVar12,
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
          piVar14 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                    (pMVar21,*piVar14,pDVar36,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    RStack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      RStack_17 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        iVar44 = *piVar14;
        piVar14 = (int32_t *)func_?();
        iVar45 = *piVar14;
        pPVar48 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)RStack_24,*pPVar48,iVar45,iVar44,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar49 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x4b,(MethodInfo *)0x0);
      pOVar50 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar50,TypeInfo__System__Single);
      RStack_17 = *pRVar20;
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar49,TypeInfo__System__Single);
      eventCode = *pMVar30;
      pfVar51 = (float *)func_?(pOVar12,TypeInfo__System__Single);
      pEVar43 = photonEvent;
      VStack_8.x = *pfVar51;
      VStack_8.y = (float)eventCode;
      VStack_8.z = (float)RStack_17;
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar43,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      RStack_17 = *pRVar20;
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      puVar31 = (undefined4 *)func_?();
      MVar34 = eventCode;
      uVar52 = *puVar31;
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      RStack_9 = RStack_17;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&StringLiteral_Pickup_owner_not_found);
        cRam_? = '\x01';
      }
      if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
        pMVar35 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        if (pOVar28 == (Object__Class *)0x0) break;
        pMVar35 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
      }
      if (((pMVar35 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar41 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar35,(int32_t)unaff_EDI,(MethodInfo *)0x0),
          pMVar41 == (MVWorldObject *)0x0)) ||
         (this_02 = pMVar41[1].fields.inputLinkRefs, this_02 == (List_1_MV_WorldObject_Link_ *)0x0))
      break;
      this_08 = (MVPickupOwner *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          ((GameObject *)this_02,
                           MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)this_08,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (this_08 != (MVPickupOwner *)0x0) {
          lookOrigin.y = VStack_8.y;
          lookOrigin.x = VStack_8.x;
          lookOrigin.z = VStack_8.z;
          lookDirection.y = (float)MVar34;
          lookDirection.x = (float)uVar52;
          lookDirection.z = (float)RStack_9;
          MVPickupOwner::MVPickupOwner_SetLineOfFire
                    (this_08,lookOrigin,lookDirection,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      pSVar27 = StringLiteral_Pickup_owner_not_found;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
        pSVar27 = StringLiteral_Pickup_owner_not_found;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
              StringLiteral_MVEventCodes_XPReceivedEvent;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                StringLiteral_MVEventCodes_XPReceivedEvent;
    }
    goto code_?;
  case MVEventCodes__Enum_PostGameMsgEvent:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar49 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x58,(MethodInfo *)0x0);
      pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar49,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar53 = (MVGameMsgType__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar53,pDVar36,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_17 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (RegexCharClass_SingleRange)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar14 = (int32_t *)func_?();
      pOVar12 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      MVar34 = eventCode;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar54 = (MVTeam__Enum *)func_?(pOVar12,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar54;
        piVar14 = (int32_t *)func_?(RStack_17,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar34,*piVar14,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_17 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar31 = (undefined4 *)func_?();
        pEStack_32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar31;
        pRVar20 = (RegexCharClass_SingleRange *)func_?();
        RStack_24 = *pRVar20;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                    ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
          *(MVEventCodes__Enum *)((int)unaff_ESI + 0xc) = eventCode;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_24;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery = pEStack_32;
          if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1
                      (*(WorldNetwork **)((int)unaff_EDI + 0xb0),(ObjectLink *)unaff_ESI,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      pRVar20 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar20;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&StringLiteral_Remove_objectLink_);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Remove_objectLink_,(MethodInfo *)0x0);
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar28 != (Object__Class *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink
                  ((WorldNetwork *)pOVar28,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar12 == (Object *)0x0)) break;
    pIVar13 = TypeInfo__System__Int32;
    if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    RVar6 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    RStack_17 = (RegexCharClass_SingleRange)TypeInfo__System__Int32;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      unaff_ESI = RVar6;
      if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
         (pMVar21 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldObjectClientManager,
         pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (pMVar21,eventCode,worldObjectsToGroup,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    worldObjectsToGroup = (Int32__Array *)func_?(RVar6,TypeInfo__System__Int32);
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Int32);
        cRam_? = '\x01';
      }
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,99,(MethodInfo *)0x0), pOVar12 != (Object *)0x0)) {
        pIVar13 = TypeInfo__System__Int32;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar14 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_ESI + 0x20))->klass;
        if (pOVar28 != (Object__Class *)0x0) {
          MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                    ((MVNetworkGame_GameDataQueryManager *)pOVar28,*piVar14,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                       );
        func_?(&StringLiteral_Only_1_winning_condition_current);
        func_?(&StringLiteral_Round_was_reset_without_winning_);
        func_?(&StringLiteral_No_winning_condition_found_even_);
        cRam_? = '\x01';
      }
      this_03 = *(WinningConditionManager **)((int)unaff_ESI + 0xac);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (this_03 != (WinningConditionManager *)0x0) {
        if ((this_03->fields)._WinningConditionFound_k__BackingField == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
        }
        else {
          if ((this_03 == (WinningConditionManager *)0x0) ||
             (this_09 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        MVWorldObject.dll::WinningConditionManager::
                        WinningConditionManager_GetForfilledWinningConditions
                                  (this_03,(MethodInfo *)0x0),
             this_09 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          break;
          if ((this_09->fields)._size == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar11 = (MethodInfo *)0x0;
            pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                      StringLiteral_No_winning_condition_found_even_;
            goto code_?;
          }
          if (1 < (this_09->fields)._size) {
            pSVar27 = StringLiteral_Only_1_winning_condition_current;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              pSVar27 = StringLiteral_Only_1_winning_condition_current;
            }
            goto code_?;
          }
          unaff_EDI = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_09,0,
                                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                                );
        }
        if (((Object *)((int)unaff_ESI + 0xb8))->klass == (Object__Class *)0x0)
        goto code_?;
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb8))->klass;
        if (pOVar28 != (Object__Class *)0x0) {
          uVar52._0_2_ = (pOVar28->_0).byval_arg.attrs;
          uVar52._2_1_ = (pOVar28->_0).byval_arg.type;
          uVar52._3_1_ = (pOVar28->_0).byval_arg.field_0x7;
          (*(code *)(pOVar28->_0).namespaze)((pOVar28->_0).element_class,unaff_EDI,uVar52);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x28,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar20 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar20;
        piVar14 = (int32_t *)func_?();
        if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
           (pMVar21 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.
                     worldObjectClientManager, pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0))
        {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar21,*piVar14,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar49 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x81,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)
                func_?(pOVar49,TypeInfo__MV__Common__AchievementType);
      RStack_17 = *pRVar20;
      pOVar49 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&RStack_17);
      pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar12,pOVar49,
                           (MethodInfo *)0x0);
code_?:
      uVar55 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar55 == 0) {
        func_?();
      }
      pMVar11 = (MethodInfo *)0x0;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pDVar36,pMVar11);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar12,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (pDVar36 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar36,pOVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        puVar31 = (undefined4 *)func_?(pOVar12,TypeInfo__System__Int32);
        pEStack_32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar31;
        auStack_56[1] = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,auStack_56 + 1);
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar36,pOVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
        RStack_24 = *pRVar20;
        pMVar15 = (this->fields).networkGame;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pMVar57 = (pMVar15->fields)._PlayerController_k__BackingField;
          RStack_17 = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (pMVar57 != (MVLocalObjectController *)0x0) {
            pbVar58 = (byte *)func_?(pOVar12,TypeInfo__System__Byte);
            bVar59 = *pbVar58;
            piVar14 = (int32_t *)func_?(RStack_17,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar57,*piVar14,(int32_t)pEStack_32,(int32_t)RStack_24,(uint)bVar59,
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
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?();
      pMVar15 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar35 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar16 = (pMVar15->fields).worldNetwork;
          unaff_ESI = unaff_ESI;
          if (pWVar16 == (WorldNetwork *)0x0) break;
          pMVar35 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
        }
        unaff_ESI = unaff_ESI;
        if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar35,*piVar14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__MVAvatar;
          if ((unaff_ESI == (RegexCharClass_SingleRange)0x0) ||
             (iVar42 = func_?(), iVar42 == 0)) goto code_?;
          iVar42 = func_?();
          if (iVar42 != 0) {
            uVar52 = func_?(unaff_ESI,TypeInfo__MVAvatar);
            func_?(0x5b,uVar52);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_ESI = (RegexCharClass_SingleRange)
                  func_?(pOVar12,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
        RStack_17 = *pRVar20;
        auStack_56[1] = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,auStack_56 + 1);
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
        RStack_60 = *pRVar20;
        pMVar15 = (this->fields).networkGame;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar35 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar35 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
            pMVar41 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar35,(int32_t)RStack_17,(MethodInfo *)0x0);
            RStack_9 = (RegexCharClass_SingleRange)
                        func_?(pMVar41,TypeInfo__MVWorldObjectSpawnerVehicle);
            if (RStack_9 != (RegexCharClass_SingleRange)0x0) {
              pEStack_32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                           ((VirtualInvokeData *)((int)RStack_9 + 0xfc))->methodPtr;
              auStack_56[0] = 3;
              pOVar12 = (Object *)func_?(TypeInfo__System__Byte,auStack_56);
              pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar12,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              puVar31 = (undefined4 *)func_?(pOVar12,TypeInfo__System__Int32);
              IStack_33.m_value = *puVar31;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
              puVar31 = (undefined4 *)func_?(pOVar12,TypeInfo__System__Int32);
              pMStack_61 = (MVNetworkGame_EventHandling_c *)*puVar31;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
              pRVar20 = (RegexCharClass_SingleRange *)
                        func_?(pOVar12,TypeInfo__System__Int32);
              RStack_24 = *pRVar20;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x5c,(MethodInfo *)0x0);
              pRVar20 = (RegexCharClass_SingleRange *)func_?();
              RStack_17 = *pRVar20;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
              pRVar20 = (RegexCharClass_SingleRange *)func_?();
              VStack_8.z = *(float *)pRVar20;
              pMVar15 = (this->fields).networkGame;
              unaff_ESI = (RegexCharClass_SingleRange)this;
              if ((pMVar15 != (MVNetworkGame *)0x0) &&
                 (pWVar16 = (pMVar15->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) {
                WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                          (pWVar16,(int32_t)pMStack_61,0,1,(int32_t)pEStack_32,IStack_33.m_value,
                           (int32_t)RStack_24,(int32_t)RStack_17,(MethodInfo *)0x0);
                pMVar15 = (this->fields).networkGame;
                if (pMVar15 != (MVNetworkGame *)0x0) {
                  if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
                    pMVar35 = (MVWorldObjectClientManager *)0x0;
                  }
                  else {
                    pWVar16 = (pMVar15->fields).worldNetwork;
                    if (pWVar16 == (WorldNetwork *)0x0) break;
                    pMVar35 = (MVWorldObjectClientManager *)
                              (pWVar16->fields)._.worldObjectClientManager;
                  }
                  if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
                    RStack_17 = (RegexCharClass_SingleRange)
                                MVWorldObjectClientManager::
                                MVWorldObjectClientManager_GetWorldObject
                                          (pMVar35,IStack_33.m_value,(MethodInfo *)0x0);
                    if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                    }
                    unaff_ESI = (RegexCharClass_SingleRange)
                                TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0
                    ;
                    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      pMStack_61 = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                      unaff_ESI = (RegexCharClass_SingleRange)
                                  func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
                      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                ((UnityAction_1_System_Object_ *)unaff_ESI,(Object *)pMStack_61,
                                 MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                           (MVWorldObjectClient_CallBackDelegate *)unaff_ESI;
                      func_?(&TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                       __9__10_0,unaff_ESI);
                    }
                    if (RStack_17 != (RegexCharClass_SingleRange)0x0) {
                      func_?(0x2d,RStack_17,unaff_ESI);
                      pMVar15 = (this->fields).networkGame;
                      if (pMVar15 != (MVNetworkGame *)0x0) {
                        RVar18 = (RegexCharClass_SingleRange)
                                 (pMVar15->fields)._PlayerController_k__BackingField;
                        RStack_17 = RVar18;
                        pMStack_61 = (MVNetworkGame_EventHandling_c *)
                                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                     EventData_get_Item((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
                        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                  EventData_get_Item((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
                        unaff_ESI.First = 0;
                        unaff_ESI.Last = 0;
                        if (RVar18 != (RegexCharClass_SingleRange)0x0) {
                          pbVar58 = (byte *)func_?(pOVar12,TypeInfo__System__Byte);
                          bVar59 = *pbVar58;
                          piVar14 = (int32_t *)func_?(pMStack_61,TypeInfo__System__Int32);
                          MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                    ((MVLocalObjectController *)RStack_17,*piVar14,IStack_33.m_value
                                     ,(int32_t)RStack_60,(uint)bVar59,(MethodInfo *)0x0);
                          MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                    ((MVWorldObjectSpawner *)RStack_9,(int32_t)VStack_8.z,
                                     (MethodInfo *)0x0);
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
    break;
  case MVEventCodes__Enum_Reward:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      RVar18 = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x90,(MethodInfo *)0x0);
      pfVar51 = (float *)func_?(pOVar12,TypeInfo__MV__Common__RewardType);
      fVar62 = *pfVar51;
      RStack_9 = RVar18;
      RStack_60 = (RegexCharClass_SingleRange)func_?(TypeInfo__System__Int32,&RStack_9);
      auStack_56[0] = eventCode._3_1_;
      pOVar12 = (Object *)func_?();
      VStack_8.z = fVar62;
      pOVar49 = (Object *)func_?();
      pSVar27 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)RStack_60,
                           pOVar12,pOVar49,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar27,(MethodInfo *)0x0);
      args = (Object__Array *)func_?();
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
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar12,TypeInfo__System__Byte);
      pMVar15 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pWVar16 = (pMVar15->fields).worldNetwork, unaff_ESI = unaff_ESI,
         pWVar16 != (WorldNetwork *)0x0)) {
        unaff_EDI = (RegexCharClass_SingleRange)(pWVar16->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (RegexCharClass_SingleRange)
                    func_?(TypeInfo__MV__WorldObject__BytePacker);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      ((RuntimeEventManagerNetwork *)unaff_EDI,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (pWVar16 = (pMVar15->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar16 != (WorldNetwork *)0x0)) &&
       (this_04 = (RuntimeEventManager *)(pWVar16->fields)._.runtimeEventManagerNetwork,
       unaff_ESI = unaff_ESI, this_04 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_04,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      unaff_EDI = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
      pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
      RStack_24 = *pRVar20;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Byte);
      RStack_17.First._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa0,(MethodInfo *)0x0);
      puVar31 = (undefined4 *)func_?();
      pEStack_32 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa1,(MethodInfo *)0x0);
      puVar31 = (undefined4 *)func_?();
      IStack_33.m_value = *puVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa3,(MethodInfo *)0x0);
      pcVar63 = (char *)func_?();
      pMVar15 = (this->fields).networkGame;
      if (*pcVar63 == '\0') {
        if ((pMVar15 != (MVNetworkGame *)0x0) &&
           (pGVar64 = (pMVar15->fields).gameStatCounterManager,
           pGVar64 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar64,(GameStatCounterType__Enum)RStack_17,(int32_t)unaff_EDI,
                     (MVTeam__Enum)RStack_24,(int32_t)pEStack_32,IStack_33.m_value,(bool)eventCode,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      else if ((pMVar15 != (MVNetworkGame *)0x0) &&
              (pGVar64 = (pMVar15->fields).gameStatCounterManager,
              pGVar64 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar64,(GameStatCounterType__Enum)RStack_17,(MVTeam__Enum)RStack_24,
                   (int32_t)unaff_EDI,(int32_t)pEStack_32,IStack_33.m_value,(bool)eventCode,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar65 = (Byte__Array *)func_?(pOVar12,TypeInfo__System__Byte);
      pMVar15 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pGVar64 = (pMVar15->fields).gameStatCounterManager, unaff_ESI = unaff_ESI,
         pGVar64 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar64,pBVar65,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?(TypeInfo__MV__WorldObject__BytePacker)
      ;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pMVar11 = (MethodInfo *)0x0;
        pBVar65 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_EDI,pBVar65,pMVar11);
        unaff_ESI = (RegexCharClass_SingleRange)
                    func_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor_1
                    ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)unaff_ESI,(MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          if ((pMVar15 != (MVNetworkGame *)0x0) &&
             (this_05 = (pMVar15->fields)._AvatarMetaDataWoMap_k__BackingField,
             this_05 != (MvAvatarMetaDataWoMap *)0x0)) {
            MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                      (this_05,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar20 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar20;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&StringLiteral_MVNetworkGame_OnLevelChanged);
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        pMVar66 = (MVPlayerContainer *)((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
        if ((pMVar66 != (MVPlayerContainer *)0x0) &&
           (pMVar67 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (pMVar66,eventCode,(MethodInfo *)0x0), pMVar67 != (MVPlayer *)0x0))
        {
          MVPlayer::MVPlayer_set_Level(pMVar67,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar68 = (bool *)func_?(pOVar12,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar68);
      pMVar15 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pMVar69 = (pMVar15->fields)._GameCoinManager_k__BackingField, unaff_ESI = unaff_ESI,
         pMVar69 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar69,*pbVar68,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = RVar6;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), pOVar12 == (Object *)0x0)) break;
    pIVar13 = TypeInfo__System__Int32;
    if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,200,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      RVar6.First = 0;
      RVar6.Last = 0;
code_?:
      unaff_ESI = RVar6;
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar70 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        if (pMVar70 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar70->fields)._._.invoke_impl)
                    ((pMVar70->fields)._._.method_code,eventCode,RVar6,(pMVar70->fields)._._.method
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    if ((*(byte *)(*(int *)unaff_EDI + 0xb4) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    RVar6.First = 0;
    RVar6.Last = 0;
    if (bVar19) {
      RVar6 = unaff_EDI;
    }
    pDVar71 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (RVar6 != (RegexCharClass_SingleRange)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI == (RegexCharClass_SingleRange)0x0)) break;
    if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pDVar36->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar36->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar72 = pDVar36;
    }
    RVar6 = (RegexCharClass_SingleRange)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      unaff_EDI = RVar6;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,(EventData *)RVar6,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
    if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
    RStack_9 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      pBVar65 = (Byte__Array *)0x0;
code_?:
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar65,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x85,(MethodInfo *)0x0);
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if ((pOVar12->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?(pOVar12,pIVar13);
          RVar18 = extraout_ECX;
          pIVar13 = extraout_EDX;
          RVar6 = unaff_ESI;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?(pOVar12);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,100,(MethodInfo *)0x0);
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
          if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar68 = (bool *)func_?(pOVar12);
          pMVar15 = (this->fields).networkGame;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar15,(BytePacker *)unaff_EDI,eventCode,*pbVar68,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar65 = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
    if (pBVar65 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar15 != (MVNetworkGame *)0x0) &&
          (pMVar47 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
          pMVar47 != (MVLocalPlayer *)0x0)) &&
         (eventCode = (pMVar47->fields)._._ActorNr_k__BackingField,
         unaff_ESI != (RegexCharClass_SingleRange)0x0)) {
        pSVar23 = (String__Class *)TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        if (*pMVar30 == eventCode) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          unaff_ESI = (RegexCharClass_SingleRange)this;
          if ((pMVar15 != (MVNetworkGame *)0x0) &&
             (pMVar69 = (pMVar15->fields)._GameCoinManager_k__BackingField,
             pMVar69 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar69,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar15 = (this->fields).networkGame;
            if ((pMVar15 != (MVNetworkGame *)0x0) &&
               (pMVar73 = (pMVar15->fields).operationRequests,
               pMVar73 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_StartSessionTime
                        (pMVar73,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
code_?:
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar15 != (MVNetworkGame *)0x0) {
            eventCode = (MVEventCodes__Enum)(pMVar15->fields).playerContainer;
            unaff_ESI = (RegexCharClass_SingleRange)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
            unaff_EDI = (RegexCharClass_SingleRange)eventCode;
            if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar12 != (Object *)0x0)) {
              pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
              if ((pOVar12->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              puVar5 = (undefined1 *)func_?(pOVar12);
              eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                pSVar23 = (String__Class *)TypeInfo__System__Int32;
                if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar14 = (int32_t *)func_?(unaff_ESI);
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI,*piVar14,(bool)eventCode,
                             (MethodInfo *)0x0);
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
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,7,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar12 != (Object *)0x0)) {
        pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pcVar63 = (char *)func_?();
        RStack_9.First._0_1_ = *pcVar63 == '\0';
        if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
          RVar6.First = 0;
          RVar6.Last = 0;
        }
        else {
          if ((*(byte *)(*(int *)unaff_EDI + 0xb4) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_EDI + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          RVar6.First = 0;
          RVar6.Last = 0;
          if (bVar19) {
            RVar6 = unaff_EDI;
          }
          pDVar71 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__IEditModeUI);
          func_?(&
                          TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                         );
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        unaff_EDI = (RegexCharClass_SingleRange)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        unaff_ESI = RVar6;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          iVar42 = func_?(4,TypeInfo__IEditModeUI,unaff_EDI);
          if (iVar42 == 0) {
            eventCode = func_?(
                                       TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                                       );
            if ((PlayerShopInventoryRepository *)eventCode == (PlayerShopInventoryRepository *)0x0)
            break;
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor
                      ((PlayerShopInventoryRepository *)eventCode,(MethodInfo *)0x0);
            func_?(5,TypeInfo__IEditModeUI,unaff_EDI,eventCode);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar37 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if ((pIVar37 != (IEditModeUI *)0x0) &&
             (pPVar38 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,pIVar37),
             pPVar38 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_AddShopItems
                      (pPVar38,(Dictionary_2_System_Object_System_Object_ *)RVar6,
                       (bool)RStack_9.First,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar36 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar36->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar36->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar19) {
        pDVar72 = pDVar36;
      }
      RVar6 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    RVar6 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xa4,(MethodInfo *)0x0);
    unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
    unaff_ESI = RVar6;
    if ((RVar6 == (RegexCharClass_SingleRange)0x0) ||
       (unaff_ESI = (RegexCharClass_SingleRange)func_?(),
       eventCode = (MVEventCodes__Enum)unaff_ESI, unaff_ESI != (RegexCharClass_SingleRange)0x0)) {
      unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      eventCode = func_?();
      if ((BytePacker *)eventCode != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)eventCode,(Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
        unaff_ESI = (RegexCharClass_SingleRange)
                    func_?(TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap);
        if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) &&
           (MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor_1
                      ((MvAvatarMetaDataWoMap *)unaff_ESI,(BytePacker *)eventCode,(MethodInfo *)0x0)
           , unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
          *(RegexCharClass_SingleRange *)((int)unaff_EDI + 0x9c) = unaff_ESI;
          func_?((MvAvatarMetaDataWoMap **)((int)unaff_EDI + 0x9c),unaff_ESI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar12 != (Object *)0x0)) {
      pIVar13 = TypeInfo__System__Int32;
      if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar31 = (undefined4 *)func_?();
      if ((Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr ==
          (Action_1_Int32_ *)0x0) goto code_?;
      pAVar74 = (Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr
      ;
      if (pAVar74 != (Action_1_Int32_ *)0x0) {
        (*(pAVar74->fields)._._.invoke_impl)
                  ((pAVar74->fields)._._.method_code,*puVar31,(pAVar74->fields)._._.method);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar73 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = unaff_ESI;
    if (pMVar73 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar73,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)unaff_ESI,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      eventCode = eventCode & 0xffffff;
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
        RStack_9 = *pRVar20;
        pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&RStack_9);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar15 != (MVNetworkGame *)0x0) &&
       (pMVar75 = (pMVar15->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                (pMVar75,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar15 != (MVNetworkGame *)0x0) &&
       (pMVar75 = (pMVar15->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar75 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar75,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar15->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar14,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar15->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar14,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    RVar6 = (RegexCharClass_SingleRange)func_?(pOVar12,TypeInfo__System__Int32);
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = RVar6;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (pMVar15 == (MVNetworkGame *)0x0) break;
    if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar35 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar16 = (pMVar15->fields).worldNetwork;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pWVar16 == (WorldNetwork *)0x0) break;
      pMVar35 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
    }
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar35,(int32_t)((Object *)((int)RVar6 + 0x10))->klass,
                               (MethodInfo *)0x0);
        pMVar15 = (this->fields).networkGame;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar35 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar35 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar35,(int32_t)*(MonitorData **)((int)RVar6 + 0x14),
                                   (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) !=
                  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype)) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar42 = func_?(unaff_ESI,TypeInfo__MVAvatarLocal);
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (iVar42 != 0) {
                bVar26 = 0x20;
                this_10 = (MVAvatarLocal *)func_?(unaff_ESI,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_10,bVar26,(MethodInfo *)unaff_ESI);
                pMVar15 = (this->fields).networkGame;
                unaff_ESI.First = 0;
                unaff_ESI.Last = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar15 != (MVNetworkGame *)0x0) {
                  pMVar57 = (pMVar15->fields)._PlayerController_k__BackingField;
                  unaff_ESI.First = 0;
                  unaff_ESI.Last = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar57 != (MVLocalObjectController *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Debug);
                      func_?(&StringLiteral_HandleDetachWorldObjectFromVehic);
                      cRam_? = '\x01';
                    }
                    (pMVar57->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
                    func_?(&(pMVar57->fields).attachState,0);
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
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar15 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
       unaff_ESI = (RegexCharClass_SingleRange)photonEvent, RStack_60 = unaff_EDI,
       photonEvent != (EventData *)0x0)) {
      VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      RStack_9 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        iVar44 = *piVar14;
        piVar14 = (int32_t *)func_?();
        iVar45 = *piVar14;
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
        piVar14 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)RStack_60,*piVar14,eventCode,iVar45,iVar44,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Boolean);
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
                            ((EventData *)RVar6,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pOVar12 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      pMVar11 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar12 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar12[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar27 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar27,pMVar11);
        eventCode = (MVEventCodes__Enum)pOVar12[2].monitor;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVInputWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = (float)eventCode;
        pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pGVar76 != (GoldRewardManager *)0x0) {
          pbVar68 = (bool *)func_?(pOVar12,TypeInfo__System__Boolean);
          (pGVar76->fields).isGoldRewardGame = *pbVar68;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
          method_00 = TypeInfo__System__Boolean;
          pbVar68 = (bool *)func_?(pOVar12);
          BStack_10.m_value = *pbVar68;
          pSVar27 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                              (&BStack_10,(IFormatProvider *)0x0,(MethodInfo *)method_00);
          pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar27,
                               (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?(pOVar12,TypeInfo__System__String);
      pSVar27 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar27,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar27,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar42 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pSVar27 = StringLiteral_V;
      pMVar11 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      unaff_ESI = unaff_ESI;
      if (iVar42 != 0) {
        pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar36,(Object *)pSVar27,pMVar11);
        puVar5 = (undefined1 *)func_?(pOVar12,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar15 = (this->fields).networkGame;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        unaff_EDI = (RegexCharClass_SingleRange)pSVar27;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
          unaff_ESI = *pRVar20;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__SayChatBubbleVisibilityManager);
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar77 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (pAVar77 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar77->fields)._._.invoke_impl)
                      ((pAVar77->fields)._._.method_code,unaff_ESI,eventCode,
                       (pAVar77->fields)._._.method);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?(pOVar12,TypeInfo__System__String);
      bVar26 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar27,(MethodInfo *)0x0);
      if (bVar26 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pOVar12 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                          (pSVar27,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar12 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar12[1].klass,(MethodInfo *)0x0);
        pPVar78 = (PlayerTierStateCalculator *)pOVar12[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = pPVar78;
        func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
                        pPVar78);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      if (((pMVar15 != (MVNetworkGame *)0x0) &&
          (pMVar66 = (pMVar15->fields).playerContainer, pMVar66 != (MVPlayerContainer *)0x0)) &&
         (pMVar47 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar66,(MethodInfo *)0x0),
         pMVar47 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar47,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar15->fields).playerContainer;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
          pMVar67 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar14,(MethodInfo *)0x0);
          if (pMVar67 != (MVPlayer *)0x0) {
            (pMVar67->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar67->fields).playerPlanetDataRemote,unaff_ESI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pDVar36 = (Dictionary_2_System_Object_System_Object_ *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pDVar36,(MethodInfo *)0x0);
      uVar55 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (RegexCharClass_SingleRange)
                  MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pOVar12 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                          (pSVar27,(MethodInfo *)unaff_ESI);
      if (((pOVar12 != (Object *)0x0) &&
          (pMVar15 = (this->fields).networkGame, pMVar15 != (MVNetworkGame *)0x0)) &&
         (pLVar79 = (pMVar15->fields).levelRewardsManager, pLVar79 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar79,(Dictionary_2_System_Int32_System_Int32_ *)pOVar12[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (RegexCharClass_SingleRange)
                  MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pOVar12 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                          (pSVar27,(MethodInfo *)unaff_ESI);
      pMVar15 = (this->fields).networkGame;
      if (((pMVar15 != (MVNetworkGame *)0x0) &&
          (pLVar79 = (pMVar15->fields).levelRewardsManager, pOVar12 != (Object *)0x0)) &&
         (pLVar79 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar79,(int32_t)pOVar12[1].klass,(int32_t)pOVar12[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pPVar78 = (PlayerTierStateCalculator *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pPVar78,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = pPVar78;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar27 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pKVar80 = (KogamaVatValues *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
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
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar14 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      unaff_EDI = RVar6;
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,(EventData *)RVar6,(MethodInfo *)0x0),
         (this->fields).networkGame != (MVNetworkGame *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          iVar42 = func_?(4,TypeInfo__IEditModeUI,unaff_ESI);
          if (iVar42 == 0) {
            eventCode = func_?(
                                       TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                                       );
            if ((PlayerShopInventoryRepository *)eventCode == (PlayerShopInventoryRepository *)0x0)
            break;
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor
                      ((PlayerShopInventoryRepository *)eventCode,(MethodInfo *)0x0);
            func_?(5,TypeInfo__IEditModeUI,unaff_ESI,eventCode);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar37 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if ((pIVar37 != (IEditModeUI *)0x0) &&
             (pPVar38 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,pIVar37),
             pPVar38 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_Setup(pPVar38,(EventData *)RVar6,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pVVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition_1
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar82 = pVVar81->x;
      uVar83 = pVVar81->y;
      eventCode = (MVEventCodes__Enum)pVVar81->z;
      RStack_9 = (RegexCharClass_SingleRange)uVar83;
      pQVar84 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation_1
                          ((Quaternion *)&stack0xffffff80,(((EventData *)RVar6)->fields).Parameters
                           ,(MethodInfo *)0x0);
      fStack_85 = pQVar84->x;
      VStack_8.x = pQVar84->y;
      VStack_8.y = pQVar84->z;
      VStack_8.z = pQVar84->w;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar15 != (MVNetworkGame *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pMVar15->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          pMVar67 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar14,(MethodInfo *)0x0);
          if (pMVar67 != (MVPlayer *)0x0) {
            this_06 = (pMVar67->fields).spawnRolesManager;
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xbf,(MethodInfo *)0x0);
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_06 != (SpawnRolesManager *)0x0) {
              piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
              position.y = (float)RStack_9;
              position.x = (float)uVar82;
              position.z = (float)eventCode;
              rotation.y = VStack_8.x;
              rotation.x = fStack_85;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_06,*piVar14,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      RStack_9 = (RegexCharClass_SingleRange)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6(pSVar27,pMVar11);
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)unaff_ESI,(MethodInfo *)0x0);
        pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar15 != (MVNetworkGame *)0x0) {
          eventCode = (MVEventCodes__Enum)(pMVar15->fields).playerContainer;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if (eventCode != MVEventCodes__Enum_NoCodeSet) {
            piVar14 = (int32_t *)func_?(pOVar12,TypeInfo__System__Int32);
            pMVar67 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                ((MVPlayerContainer *)unaff_EDI,*piVar14,(MethodInfo *)0x0);
            if (pMVar67 != (MVPlayer *)0x0) {
              MVPlayer::MVPlayer_SetupSpawnRoleManager
                        (pMVar67,(ISpawnRoleChangeHandler *)unaff_ESI,
                         (SpawnRolesRuntimeData *)RStack_9,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (RegexCharClass_SingleRange)
                  MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_EDI = (RegexCharClass_SingleRange)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                            (pSVar27,(MethodInfo *)unaff_ESI);
      pMVar35 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((unaff_EDI != (RegexCharClass_SingleRange)0x0) &&
         (pMVar35 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar35,(int32_t)(((Il2CppType *)((int)unaff_EDI + 0x18))->data).
                                                __klassIndex,(MethodInfo *)0x0);
        pMVar15 = (this->fields).networkGame;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar15,(int32_t)(((Il2CppType *)((int)unaff_EDI + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar15,(int32_t)((MVNetworkGame__Fields *)((int)unaff_EDI + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
              if ((pOVar12->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar68 = (bool *)func_?(pOVar12);
              eventCode = CONCAT31(eventCode._1_3_,*pbVar68);
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if ((*(byte *)(*(int *)unaff_ESI + 0xb4) <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                     (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                RVar86.First = 0;
                RVar86.Last = 0;
                if (bVar19) {
                  RVar86 = unaff_ESI;
                }
                pMVar22 = TypeInfo__MVAvatarSpawnRoleCreator;
                RVar18 = unaff_EDI;
                if (RVar86 != (RegexCharClass_SingleRange)0x0) {
                  if ((*(byte *)(*(int *)unaff_ESI + 0xb4) <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                       (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar19 = false;
                  }
                  else {
                    bVar19 = true;
                  }
                  this_11.First = 0;
                  this_11.Last = 0;
                  if (bVar19) {
                    this_11 = unaff_ESI;
                  }
                  if (this_11 != (RegexCharClass_SingleRange)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)this_11,
                               (SpawnRoleBodySwitchData *)unaff_EDI,*pbVar68,(MethodInfo *)0x0);
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
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(pOVar12,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32);
        RStack_9 = *pRVar20;
        auStack_56[0] = 0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Byte,auStack_56);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__get_Item
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar15 = (this->fields).networkGame;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar35 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar35 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          if (pMVar35 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar35,(int32_t)RStack_9,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
            pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12,TypeInfo__System__Int32)
            ;
            unaff_ESI = *pRVar20;
            iVar42 = func_?(unaff_EDI,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            if (iVar42 != 0) {
              pMVar11 = (MethodInfo *)0x0;
              this_12 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_12,(int32_t)unaff_ESI,pMVar11);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar15 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar15 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (RegexCharClass_SingleRange)(pMVar15->fields).playerContainer,
        unaff_ESI = RVar6, photonEvent != (EventData *)0x0)) &&
       (iVar44 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      bVar26 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI,iVar44,&pMStack_7,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xde,(MethodInfo *)0x0);
      puVar87 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar87);
      if (pMStack_7 != (MVPlayer *)0x0) {
        if ((pMStack_7->fields).playerState != *puVar87) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_7,eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
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
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        inputText.First = 0;
        inputText.Last = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
            inputText = unaff_ESI;
          }
          pSVar23 = TypeInfo__System__String;
          if (inputText == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)inputText,(MethodInfo *)0x0);
        pMVar73 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar73 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar73,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if (photonEvent != (EventData *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            eventCode !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          unaff_EDI = (RegexCharClass_SingleRange)
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)eventCode)->klass;
          if ((*(byte *)((int)unaff_EDI + 0xb4) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               ((int)((Il2CppClass_1 *)((int)unaff_EDI + 100))->typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          pDVar88 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0;
          if (bVar19) {
            pDVar88 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)eventCode;
          }
          eventCode = (MVEventCodes__Enum)pDVar88;
          RVar6 = (RegexCharClass_SingleRange)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar88 ==
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) goto code_?;
        }
        if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            eventCode !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          RVar6 = (RegexCharClass_SingleRange)&UNK_?;
          this_13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                              ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_13 !=
              (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)0x0) {
            pDVar89 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                      Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&stack0xffffff80,
                                 (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)this_13,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (RegexCharClass_SingleRange)&stack0xffffff90;
            VStack_8.y = 0.0;
            RVar18 = (RegexCharClass_SingleRange)pDVar89->_currentValue;
            uStack_1 = 1;
            VStack_8.z = (float)unaff_ESI;
            do {
              bVar26 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,System::Object]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                   *)&stack0xffffff90,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar26 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)RVar6);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              unaff_EDI.First = 0;
              unaff_EDI.Last = 0;
              if (RVar18 != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)RVar18 == TypeInfo__System__String) {
                  unaff_EDI = RVar18;
                }
                pSVar23 = TypeInfo__System__String;
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  ((Dictionary_2_System_Object_System_Object_ *)eventCode,
                                   (Object *)unaff_EDI,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              RStack_9 = (RegexCharClass_SingleRange)::StringLiteral___;
              if (pOVar12 == (Object *)0x0) {
                pSVar27 = (String *)0x0;
              }
              else {
                pSVar27 = (String *)func_?();
              }
              RVar6 = RStack_9;
              pSVar27 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI,(String *)RStack_9,pSVar27,(MethodInfo *)0x0
                                  );
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar27,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      unaff_ESI = unaff_ESI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
         pOVar12 != (Object *)0x0)) {
        pIVar13 = TypeInfo__System__Int32;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pRVar20 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar20;
        pMVar15 = (this->fields).networkGame;
        unaff_ESI = (RegexCharClass_SingleRange)this;
        if ((pMVar15 != (MVNetworkGame *)0x0) &&
           (pMVar47 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
           pMVar47 != (MVLocalPlayer *)0x0)) {
          if (unaff_EDI == (RegexCharClass_SingleRange)(pMVar47->fields)._._ActorNr_k__BackingField)
          {
            pSVar27 = StringLiteral_Local_player_leave_event;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
              pSVar27 = StringLiteral_Local_player_leave_event;
            }
            goto code_?;
          }
          pMVar15 = (this->fields).networkGame;
          if ((pMVar15 != (MVNetworkGame *)0x0) &&
             (pMVar66 = (pMVar15->fields).playerContainer, pMVar66 != (MVPlayerContainer *)0x0)) {
            bVar26 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar66,(int32_t)unaff_EDI,(MethodInfo *)0x0);
            if (bVar26 == 0) {
code_?:
              pMVar15 = (this->fields).networkGame;
              unaff_ESI = (RegexCharClass_SingleRange)this;
              if ((pMVar15 != (MVNetworkGame *)0x0) &&
                 (pMVar66 = (pMVar15->fields).playerContainer, pMVar66 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar66,(int32_t)unaff_EDI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
            else {
              pMVar15 = (this->fields).networkGame;
              if ((pMVar15 != (MVNetworkGame *)0x0) &&
                 (pMVar66 = (pMVar15->fields).playerContainer, pMVar66 != (MVPlayerContainer *)0x0))
              {
                IStack_33.m_value =
                     (int32_t)MVPlayerContainer::MVPlayerContainer_get_Item
                                        (pMVar66,(int32_t)unaff_EDI,(MethodInfo *)0x0);
                VStack_8.z = (float)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                if ((RegexCharClass_SingleRange)VStack_8.z != (RegexCharClass_SingleRange)0x0) {
                  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                            ((ParameterOverride_1_System_Object_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                            );
                  eventCode = eventCode & 0xffffff;
                  pOVar12 = (Object *)
                            func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
                  RStack_9 = unaff_EDI;
                  pOVar49 = (Object *)func_?(TypeInfo__System__Int32,&RStack_9);
                  unaff_ESI = (RegexCharClass_SingleRange)VStack_8.z;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)VStack_8.z,pOVar12,
                             pOVar49,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  auStack_56[0] = 3;
                  pOVar12 = (Object *)func_?(TypeInfo__System__Byte,auStack_56);
                  if (((MVPlayer *)IStack_33.m_value != (MVPlayer *)0x0) &&
                     (*(UserProfileData **)(IStack_33.m_value + 0x3c) != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar12,
                               (Object *)
                               ((*(UserProfileData **)(IStack_33.m_value + 0x3c))->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    auStack_56[1] = 6;
                    VStack_8.z = (float)func_?(TypeInfo__System__Byte,auStack_56 + 1);
                    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar15 != (MVNetworkGame *)0x0) &&
                       (pFVar39 = (pMVar15->fields)._Friends_k__BackingField,
                       pFVar39 != (FriendList *)0x0)) {
                      bStack_90 = FriendList::FriendList_IsFriend
                                            (pFVar39,*(int32_t *)(IStack_33.m_value + 0x2c),
                                             (MethodInfo *)0x0);
                      pOVar12 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_90);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                                 (Object *)VStack_8.z,pOVar12,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                                 (MethodInfo *)0x0);
                      pMVar15 = (this->fields).networkGame;
                      unaff_ESI = (RegexCharClass_SingleRange)this;
                      if ((pMVar15 != (MVNetworkGame *)0x0) &&
                         (pGVar64 = (pMVar15->fields).gameStatCounterManager,
                         pGVar64 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar64,(int32_t)unaff_EDI,*(int32_t *)(IStack_33.m_value + 0x48),
                                   (MethodInfo *)0x0);
                        pMVar15 = (this->fields).networkGame;
                        if ((pMVar15 != (MVNetworkGame *)0x0) &&
                           (pGVar64 = (pMVar15->fields).gameStatCounterManager,
                           pGVar64 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar64,(int32_t)unaff_EDI,(MethodInfo *)0x0);
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
      unaff_ESI = RVar6;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), pOVar12 != (Object *)0x0)) {
        pIVar13 = TypeInfo__System__Int32;
        if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar31 = (undefined4 *)func_?();
        pMStack_61 = (MVNetworkGame_EventHandling_c *)*puVar31;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = TypeInfo__System__Int32;
          if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar30 = (MVEventCodes__Enum *)func_?(pOVar12);
          eventCode = *pMVar30;
          RVar18 = (RegexCharClass_SingleRange)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)RVar6,0x9a,(MethodInfo *)0x0);
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (RVar18 != (RegexCharClass_SingleRange)0x0) {
            if (*(String__Class **)RVar18 == TypeInfo__System__String) {
              unaff_EDI = RVar18;
            }
            pSVar23 = TypeInfo__System__String;
            if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
          }
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xbc,(MethodInfo *)0x0);
          if (pOVar12 != (Object *)0x0) {
            pIVar13 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
            if ((pOVar12->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar5 = (undefined1 *)func_?();
            RStack_60.First._0_1_ = *puVar5;
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = TypeInfo__System__Int32;
              if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              pRVar20 = (RegexCharClass_SingleRange *)func_?(pOVar12);
              RStack_17 = *pRVar20;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
              if (pOVar12 != (Object *)0x0) {
                pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
                if ((pOVar12->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                puVar5 = (undefined1 *)func_?(pOVar12);
                RStack_9.First._0_1_ = *puVar5;
                unaff_ESI = (RegexCharClass_SingleRange)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)RVar6,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                }
                RVar18.First = 0;
                RVar18.Last = 0;
                if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                  if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
                    RVar18 = unaff_ESI;
                  }
                  pSVar23 = TypeInfo__System__String;
                  if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
                }
                VStack_8.z = (float)Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                                               ((String *)RVar18,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar15 = (this->fields).networkGame;
                if ((pMVar15 != (MVNetworkGame *)0x0) &&
                   (pMVar47 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar15,(MethodInfo *)0x0), pMVar47 != (MVLocalPlayer *)0x0
                   )) {
                  if (eventCode == (pMVar47->fields)._._ActorNr_k__BackingField) {
                    pSVar27 = StringLiteral_Received_join_event_for_localPla;
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                      pSVar27 = StringLiteral_Received_join_event_for_localPla;
                    }
                    goto code_?;
                  }
                  unaff_ESI = (RegexCharClass_SingleRange)func_?();
                  if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                    MVPlayer::MVPlayer__ctor
                              ((MVPlayer *)unaff_ESI,eventCode,(int32_t)pMStack_61,
                               (String *)unaff_EDI,(BuildTarget__Enum)RStack_60,
                               (UserProfileData *)VStack_8.z,0,(bool)RStack_9.First,
                               (MethodInfo *)0x0);
                    *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x48) = RStack_17;
                    pMVar15 = (this->fields).networkGame;
                    if ((pMVar15 != (MVNetworkGame *)0x0) &&
                       (pMVar66 = (pMVar15->fields).playerContainer,
                       pMVar66 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar66,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
    default:
      goto code_?;
    }
  }
  func_?();
  pIVar13 = extraout_ECX_01;
  RVar6 = unaff_ESI;
code_?:
  func_?(unaff_EDI,pIVar13);
code_?:
  func_?(RVar6,RStack_17);
  pDVar71 = extraout_EDX_01;
code_?:
  func_?(unaff_EDI,pDVar71);
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,RStack_9);
code_?:
  func_?();
code_?:
  RVar18 = (RegexCharClass_SingleRange)func_?();
  pSVar23 = extraout_ECX_02;
  unaff_ESI = RVar6;
code_?:
  uVar52 = func_?(RVar18,pSVar23);
  iVar42 = func_?(uVar52);
  pbVar58 = (byte *)(iVar42 + -0x4aefb12e);
  bVar59 = *pbVar58;
  bVar91 = (byte)extraout_ECX_03;
  *pbVar58 = *pbVar58 + bVar91;
  pbVar58 = (byte *)((int)unaff_ESI + 0xf);
  *pbVar58 = *pbVar58 >> (bVar91 & 7) | *pbVar58 << 8 - (bVar91 & 7);
  bVar19 = (extraout_ECX_03 & 0x1f) == 0;
  bVar92 = *pbVar58;
  puVar93 = (uint *)((int)unaff_ESI + 0xf);
  *puVar93 = *puVar93 >> (bVar91 & 0x1f) | *puVar93 << 0x20 - (bVar91 & 0x1f);
  bVar94 = (extraout_ECX_03 & 0x1f) == 0;
  bVar59 = bVar94 * (bVar19 * CARRY1(bVar59,bVar91) | !bVar19 * ((char)bVar92 < '\0')) |
           !bVar94 * ((int)*puVar93 < 0);
  out(*(undefined1 *)((int)unaff_ESI + -1),(short)iVar42);
  pbVar58 = (byte *)(iVar42 + -0x2b);
  bVar19 = CARRY1(*pbVar58,bVar91) || CARRY1(*pbVar58 + bVar91,bVar59);
  *pbVar58 = *pbVar58 + bVar91 + bVar59;
  bVar92 = (byte)((uint)iVar42 >> 8);
  bVar95 = (byte)((uint)unaff_EBX >> 8);
  bVar59 = bVar92 + bVar95;
  bVar94 = CARRY1(bVar92,bVar95) || CARRY1(bVar59,bVar19);
  bVar59 = bVar59 + bVar19;
  bVar96 = bVar59 + bVar95;
  bVar19 = CARRY1(bVar59,bVar95) || CARRY1(bVar96,bVar94);
  bVar96 = bVar96 + bVar94;
  pbVar58 = (byte *)((int)unaff_EDI + -0x2d);
  bVar94 = CARRY1(*pbVar58,bVar96) || CARRY1(*pbVar58 + bVar96,bVar19);
  *pbVar58 = *pbVar58 + bVar96 + bVar19;
  bVar19 = CARRY1(bVar91,bVar95) || CARRY1(bVar91 + bVar95,bVar94);
  pbVar58 = (byte *)(CONCAT31((int3)(extraout_ECX_03 >> 8),bVar91 + bVar95 + bVar94) + -0x1efb12a);
  bVar94 = CARRY1(*pbVar58,bVar96) || CARRY1(*pbVar58 + bVar96,bVar19);
  *pbVar58 = *pbVar58 + bVar96 + bVar19;
  pbVar68 = (bool *)((int)unaff_ESI + -0x2b);
  bVar59 = *pbVar68;
  bVar92 = *pbVar68;
  *pbVar68 = bVar92 + bVar95 + bVar94;
  cRam_? = cRam_? + bVar96 + (CARRY1(bVar59,bVar95) || CARRY1(bVar92 + bVar95,bVar94));
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
    pMVar2 = (MethodInfo *)(pMVar1->fields).eventsHandledByDynamicEventCallbackManager;
    if (pMVar2 != (MethodInfo *)0x0) {
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        ((HashSet_1_System_ByteEnum_ *)pMVar2,eventCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                        );
      if (bVar3 == 0) {
code_?:
        func_?();
        this_03 = (Exception *)func_?();
        func_?();
        pMVar2 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_03,message,pMVar2);
        func_?();
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pMVar1->fields).eventCallbacks;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,(Object *)eventCode,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          );
        if (bVar3 == 0) {
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).eventCallbacks;
          pOVar5 = (Object *)func_?();
          if ((pOVar5 == (Object *)0x0) ||
             (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar5,ExceptionArgument__Enum_obj,pMVar2),
             this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,(Object *)eventCode,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                    );
        }
        this_02 = (pMVar1->fields).eventCallbacks;
        if ((this_02 !=
             (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
              *)0x0) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                               ), pOVar5 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar5[1].klass;
          while ((pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0),
                 pDVar6 == (Delegate *)0x0 || (iVar7 = func_?(), iVar7 != 0))) {
            pOVar8 = (Object__Class *)func_?();
            bVar9 = pOVar8 == a;
            a = pOVar8;
            if (bVar9) {
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
  uVar10 = func_?(&stack0xffffffec);
  func_?(uVar10);
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
  if (this_00 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    MVNetworkGame+EventHandling+DynamicEventCallbackManager::
    MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).dynamicEventCallbackManager = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                             );
    if (this_01 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                );
      method_00 = (MethodInfo *)&(this->fields).cachedEvents;
      (this->fields).cachedEvents = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields).networkGame = networkGame;
      func_?(&(this->fields).networkGame,networkGame);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

