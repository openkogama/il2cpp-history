
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_JoinCompleted,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  BStack_8.m_value = 0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar9 != (Object *)0x0)) {
      pIVar10 = TypeInfo__System__Int32;
      if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (RegexCharClass_SingleRange)(pWVar13->fields)._.worldObjectClientManager,
       unaff_ESI = RVar6, RStack_14 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      RVar15 = (RegexCharClass_SingleRange)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (RVar15 != (RegexCharClass_SingleRange)0x0) {
          if ((*(byte *)(*(int *)RVar15 + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)RVar15 + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (bVar16) {
            unaff_ESI = RVar15;
          }
          outData = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
code_?:
        unaff_EDI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          pOVar9 = (Object *)eventCode;
          pIVar10 = TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)eventCode + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)RStack_14,*piVar11,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
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
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
      pIVar10 = TypeInfo__System__Int32;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar17 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar17;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectData.First = 0;
        worldObjectData.Last = 0;
code_?:
        pMVar12 = (this->fields).networkGame;
        if (((pMVar12 != (MVNetworkGame *)0x0) &&
            (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
           (pMVar18 = (pWVar13->fields)._.worldObjectClientManager,
           pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                    (pMVar18,(int32_t)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)worldObjectData,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      outData = *(RegexCharClass_SingleRange *)unaff_ESI;
      if ((*(byte *)&((Object *)((int)outData + 0xb8))->klass <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)((int)outData + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      worldObjectData.First = 0;
      worldObjectData.Last = 0;
      if (bVar16) {
        worldObjectData = unaff_ESI;
      }
      pMVar19 = (MVAvatarSpawnRoleCreator__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      if (worldObjectData != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
      func_?(unaff_ESI,pMVar19);
      pSVar20 = extraout_ECX_00;
      unaff_EDI = outData;
code_?:
      func_?(unaff_ESI,pSVar20);
code_?:
      func_?(unaff_EDI,RStack_21);
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = RVar6;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
      pIVar10 = TypeInfo__System__Int32;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar17 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar17;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x13,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
      }
      else {
        outData = *(RegexCharClass_SingleRange *)unaff_ESI;
        if ((*(byte *)&((Object *)((int)outData + 0xb8))->klass <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)((int)outData + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
        if (bVar16) {
          worldObjectDataToRemove = unaff_ESI;
        }
        pMVar19 = (MVAvatarSpawnRoleCreator__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (worldObjectDataToRemove == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar13->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar18,(int32_t)unaff_EDI,
                   (Dictionary_2_System_Object_System_Object_ *)worldObjectDataToRemove,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
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
    pMVar22 = (this->fields).dynamicEventCallbackManager;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar22 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      bVar23 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
               MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                         (pMVar22,eventCode,(MethodInfo *)0x0);
      if (bVar23 == 0) {
        pSVar24 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
        pSVar24 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Unknown_event__,pSVar24,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar22 = (this->fields).dynamicEventCallbackManager;
      if (pMVar22 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar22,eventCode,photonEvent,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar9 != (Object *)0x0)) {
      pIVar10 = TypeInfo__System__Int32;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?();
      pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if ((pOVar25 != (Object__Class *)0x0) &&
         (pMVar26 = (MVWorldInventory *)(pOVar25->_0).namespaze, pMVar26 != (MVWorldInventory *)0x0))
      {
        MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar26,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar13->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar6, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x31,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        RStack_21 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
        RVar6 = unaff_EDI;
        if ((unaff_EDI != (RegexCharClass_SingleRange)0x0) &&
           (RStack_14 = (RegexCharClass_SingleRange)func_?(), RVar6 = RStack_14,
           RStack_14 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        unaff_EDI = RVar6;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          pSVar20 = (String__Class *)TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?(unaff_ESI);
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                      ((MVWorldInventory *)eventCode,*piVar11,(Byte__Array *)unaff_EDI,
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
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar13->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar6, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x22,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar9 != (Object *)0x0)) {
        pIVar10 = (Int32__Class *)TypeInfo__System__Single;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pMVar27 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar27;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          pSVar20 = (String__Class *)TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?(unaff_ESI);
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                      ((MVWorldInventory *)unaff_EDI,*piVar11,(float)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_14 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar28 = (undefined4 *)func_?();
        pMStack_29 = (MVPlayer *)*puVar28;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        RStack_21 = *pRVar17;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        RStack_14 = *pRVar17;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        eventCode = MVEventCodes__Enum_NoCodeSet;
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1((Link *)unaff_ESI,(MethodInfo *)0x0);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0xc) = RStack_14;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_21;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_29;
          pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          if (pOVar25 != (Object__Class *)0x0) {
            WorldNetwork::WorldNetwork_AddLink_1
                      ((WorldNetwork *)pOVar25,(Link *)unaff_ESI,(MethodInfo *)0x0);
            this_00 = *(LogicObjectManagerClient **)((int)unaff_EDI + 0x2c);
            pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_00 != (LogicObjectManagerClient *)0x0) {
              eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                    (this_00,(Link *)unaff_ESI,(IWorldObjectManager *)pMVar30,
                                     (MethodInfo *)0x0);
              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&eventCode,(MethodInfo *)0x0);
              pSVar24 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_reset_count_,pSVar24,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar24,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      pRVar17 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar17;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&StringLiteral_reset_count_);
        cRam_? = '\x01';
      }
      pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      eventCode = MVEventCodes__Enum_NoCodeSet;
      if (pOVar25 != (Object__Class *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)
                    WorldNetwork::WorldNetwork_RemoveLink
                              ((WorldNetwork *)pOVar25,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
        this_01 = *(Il2CppClass **)((int)unaff_ESI + 0x2c);
        pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (this_01 != (Il2CppClass *)0x0) {
          eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                ((LogicObjectManagerClient *)this_01,(Link *)unaff_EDI,
                                 (IWorldObjectManager *)pMVar30,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&eventCode,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_reset_count_,pSVar24,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar24,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
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
      pRVar17 = (RegexCharClass_SingleRange *)func_?();
      unaff_ESI = *pRVar17;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__IEditModeUI);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar31 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if ((pIVar31 != (IEditModeUI *)0x0) &&
         (pPVar32 = (PlayerShopInventoryRepository *)
                    func_?(4,TypeInfo__IEditModeUI,pIVar31),
         pPVar32 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveItemFromInventory
                  (pPVar32,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_EDI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      eventCode = *pMVar27;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x35,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?(pOVar9,TypeInfo__System__Int32);
      pMVar12 = (this->fields).networkGame;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pFVar33 = (pMVar12->fields)._Friends_k__BackingField, pFVar33 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar33,(int32_t)unaff_EDI,eventCode,*piVar11,FriendStatus__Enum_Pending,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_EDI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      eventCode = *pMVar27;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x36,(MethodInfo *)0x0);
      pFVar34 = (FriendStatus__Enum *)func_?(pOVar9,TypeInfo__MV__Common__FriendStatus);
      pMVar12 = (this->fields).networkGame;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pFVar33 = (pMVar12->fields)._Friends_k__BackingField, pFVar33 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend
                  (pFVar33,(int32_t)unaff_EDI,eventCode,*pFVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_EDI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?(pOVar9,TypeInfo__System__Int32);
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar12,*piVar11,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_EDI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?(pOVar9,TypeInfo__System__Int32);
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar12,*piVar11,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_ESI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      RStack_14 = *pRVar17;
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
      if (((Object *)((int)unaff_EDI + 0xb0))->klass == (Object__Class *)0x0) {
        pMVar30 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        unaff_ESI = (RegexCharClass_SingleRange)eventCode;
        if (pOVar25 == (Object__Class *)0x0) break;
        pMVar30 = (MVWorldObjectClientManager *)(pOVar25->_0).name;
      }
      unaff_ESI = (RegexCharClass_SingleRange)eventCode;
      if (pMVar30 == (MVWorldObjectClientManager *)0x0) break;
      pMVar35 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar30,eventCode,(MethodInfo *)0x0);
      if (pMVar35 == (MVWorldObject *)0x0) {
        str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
        pSVar24 = StringLiteral_OnTriggerBoxStayBegin_received__;
        str2 = StringLiteral__does_not_exist;
      }
      else {
        iVar36 = func_?();
        if (iVar36 != 0) {
          func_?(0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
        pSVar24 = StringLiteral_OnTriggerBoxStayBegin_received__;
        str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
      }
code_?:
      pSVar24 = mscorlib.dll::System::String::String_Concat_4(pSVar24,str1,str2,(MethodInfo *)0x0);
code_?:
      uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar37 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar24,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        eventCode = *pMVar27;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__ITriggerBoxEventsHandler);
          func_?(&StringLiteral__does_not_exist);
          func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
          func_?(&StringLiteral_OnTriggerBoxStayEnd_received__bu);
          cRam_? = '\x01';
        }
        if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
          pMVar30 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          if (pOVar25 == (Object__Class *)0x0) break;
          pMVar30 = (MVWorldObjectClientManager *)(pOVar25->_0).name;
        }
        if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
          pMVar35 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar30,eventCode,(MethodInfo *)0x0);
          if (pMVar35 == (MVWorldObject *)0x0) {
            pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar24 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar24,
                                 StringLiteral__does_not_exist,(MethodInfo *)0x0);
            uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
            goto joined_?;
          }
          iVar36 = func_?();
          if (iVar36 != 0) {
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
          pSVar24 = StringLiteral_OnTriggerBoxStayEnd_received__bu;
          str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
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
      pEVar38 = photonEvent;
      pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar25 != (Object__Class *)0x0) {
        eventCode = (MVEventCodes__Enum)(pOVar25->_0).name;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar38,0x14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar9 != (Object *)0x0)) {
            pIVar10 = TypeInfo__System__Int32;
            if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            pMVar27 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar27;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pSVar20 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar11 = (int32_t *)func_?(unaff_ESI);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                          ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar11,eventCode,
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
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar17;
        piVar11 = (int32_t *)func_?();
        pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        if ((pOVar25 != (Object__Class *)0x0) &&
           (pMVar26 = (MVWorldInventory *)(pOVar25->_0).namespaze, pMVar26 != (MVWorldInventory *)0x0)
           ) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar26,*piVar11,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    (pMVar12->fields)._NetworkGameStateListener_k__BackingField, unaff_ESI = RVar6,
       RStack_21 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      RStack_14 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x42,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar39 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar40 = *piVar11;
        pMVar41 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)RStack_21,*pMVar41,iVar40,iVar39,0,
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
      piVar11 = (int32_t *)func_?();
      iVar39 = *piVar11;
      pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                (iVar39,(IWorldObjectManager *)pMVar30,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         unaff_ESI = unaff_ESI, pMVar42 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)(pMVar42->fields)._._ActorNr_k__BackingField;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        if (*pRVar17 == unaff_ESI) goto code_?;
        pMVar12 = (this->fields).networkGame;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) {
          RVar15 = (RegexCharClass_SingleRange)(pWVar13->fields)._.worldObjectClientManager;
          RStack_14 = RVar15;
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x16,(MethodInfo *)0x0);
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x46,(MethodInfo *)0x0);
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (RVar15 != (RegexCharClass_SingleRange)0x0) {
            pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                      func_?(pOVar9,
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
            piVar11 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)RStack_14,*piVar11,pDVar43,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    RStack_21 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      RStack_14 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar39 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar40 = *piVar11;
        pPVar44 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)RStack_21,*pPVar44,iVar40,iVar39,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar45 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x4b,(MethodInfo *)0x0);
      pOVar46 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar46,TypeInfo__System__Single);
      RStack_21 = *pRVar17;
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar45,TypeInfo__System__Single);
      RStack_14 = *pRVar17;
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Single);
      pEVar38 = photonEvent;
      eventCode = *pMVar27;
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar38,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?();
      RStack_47 = *pRVar17;
      puVar28 = (undefined4 *)func_?();
      pIStack_48 = (Int32__Array *)*puVar28;
      puVar28 = (undefined4 *)func_?();
      pMStack_29 = (MVPlayer *)*puVar28;
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      VStack_49.x = (float)eventCode;
      VStack_49.y = (float)RStack_14;
      VStack_49.z = (float)RStack_21;
      pMStack_50 = pMStack_29;
      pIStack_51 = pIStack_48;
      RStack_52 = RStack_47;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
        unaff_EDI = *pRVar17;
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
          pMVar30 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          if (pOVar25 == (Object__Class *)0x0) break;
          pMVar30 = (MVWorldObjectClientManager *)(pOVar25->_0).name;
        }
        if (((pMVar30 != (MVWorldObjectClientManager *)0x0) &&
            (pMVar35 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar30,(int32_t)unaff_EDI,(MethodInfo *)0x0),
            pMVar35 != (MVWorldObject *)0x0)) &&
           (this_02 = pMVar35[1].fields.inputLinkRefs, this_02 != (List_1_MV_WorldObject_Link_ *)0x0
           )) {
          this_08 = (MVPickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              ((GameObject *)this_02,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)this_08,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar23 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (this_08 != (MVPickupOwner *)0x0) {
            lookOrigin.y = VStack_49.y;
            lookOrigin.x = VStack_49.x;
            lookOrigin.z = VStack_49.z;
            lookDirection.y = (float)pIStack_51;
            lookDirection.x = (float)pMStack_50;
            lookDirection.z = (float)RStack_52;
            MVPickupOwner::MVPickupOwner_SetLineOfFire
                      (this_08,lookOrigin,lookDirection,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar45 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x58,(MethodInfo *)0x0);
      pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar45,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar53 = (MVGameMsgType__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar53,pDVar43,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_47 = (RegexCharClass_SingleRange)
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
      piVar11 = (int32_t *)func_?();
      pOVar9 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      MVar54 = eventCode;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar55 = (MVTeam__Enum *)func_?(pOVar9,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar55;
        piVar11 = (int32_t *)func_?(RStack_47,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar54,*piVar11,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_47 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        RStack_21 = *pRVar17;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        RStack_14 = *pRVar17;
        pMVar27 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar27;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(MVEventCodes__Enum *)((int)unaff_ESI + 0xc) = eventCode;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_14;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 8) = RStack_21;
          pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          if (pOVar25 != (Object__Class *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1
                      ((WorldNetwork *)pOVar25,(ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
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
      piVar11 = (int32_t *)func_?();
      pOVar25 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar25 != (Object__Class *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink
                  ((WorldNetwork *)pOVar25,*piVar11,(MethodInfo *)0x0);
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
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar9 == (Object *)0x0)) break;
    pIVar10 = TypeInfo__System__Int32;
    if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar27 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar27;
    unaff_ESI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    RStack_47 = (RegexCharClass_SingleRange)TypeInfo__System__Int32;
    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
      if ((pOVar25 != (Object__Class *)0x0) &&
         (pMVar18 = (MVWorldObjectClientManagerNetwork *)(pOVar25->_0).name,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (pMVar18,eventCode,worldObjectsToGroup,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    worldObjectsToGroup = (Int32__Array *)func_?(unaff_ESI,TypeInfo__System__Int32);
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar12,photonEvent,(MethodInfo *)0x0);
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
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,99,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
        pIVar10 = TypeInfo__System__Int32;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?();
        pOVar25 = ((Object *)((int)unaff_ESI + 0x20))->klass;
        if (pOVar25 != (Object__Class *)0x0) {
          MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                    ((MVNetworkGame_GameDataQueryManager *)pOVar25,*piVar11,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (1 < (this_09->fields)._size) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
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
        pOVar25 = ((Object *)((int)unaff_ESI + 0xb8))->klass;
        if (pOVar25 != (Object__Class *)0x0) {
          uVar56._0_2_ = (pOVar25->_0).byval_arg.attrs;
          uVar56._2_1_ = (pOVar25->_0).byval_arg.type;
          uVar56._3_1_ = (pOVar25->_0).byval_arg.field_0x7;
          (*(code *)(pOVar25->_0).namespaze)((pOVar25->_0).element_class,unaff_EDI,uVar56);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar12,photonEvent,(MethodInfo *)0x0);
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
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar17;
        piVar11 = (int32_t *)func_?();
        pOVar25 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        if ((pOVar25 != (Object__Class *)0x0) &&
           (pMVar18 = (MVWorldObjectClientManagerNetwork *)(pOVar25->_0).name,
           pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar18,*piVar11,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      eventCode = *pMVar27;
      pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar45 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x81,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)
                func_?(pOVar45,TypeInfo__MV__Common__AchievementType);
      RStack_47 = *pRVar17;
      pOVar45 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&RStack_47);
      pSVar24 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar9,pOVar45,
                           (MethodInfo *)0x0);
code_?:
      uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar37 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar24,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar57 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar9,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar9 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (pDVar57 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar57,pOVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar17 = (RegexCharClass_SingleRange *)
                  func_?(TVar58.m_Index,TypeInfo__System__Int32);
        RStack_21 = *pRVar17;
        auStack_59[1] = 0;
        pOVar9 = (Object *)func_?(TypeInfo__System__Byte,auStack_59 + 1);
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar57,pOVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar17 = (RegexCharClass_SingleRange *)
                  func_?(TVar58.m_Index,TypeInfo__System__Int32);
        RStack_14 = *pRVar17;
        pMVar12 = (this->fields).networkGame;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar60 = (pMVar12->fields)._PlayerController_k__BackingField;
          RStack_47 = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (pMVar60 != (MVLocalObjectController *)0x0) {
            pbVar61 = (byte *)func_?(pOVar9,TypeInfo__System__Byte);
            bVar62 = *pbVar61;
            piVar11 = (int32_t *)func_?(RStack_47,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar60,*piVar11,(int32_t)RStack_21,(int32_t)RStack_14,(uint)bVar62,
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar30 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar13 = (pMVar12->fields).worldNetwork;
          unaff_ESI = unaff_ESI;
          if (pWVar13 == (WorldNetwork *)0x0) break;
          pMVar30 = (MVWorldObjectClientManager *)(pWVar13->fields)._.worldObjectClientManager;
        }
        unaff_ESI = unaff_ESI;
        if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar30,*piVar11,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__MVAvatar;
          if ((unaff_ESI == (RegexCharClass_SingleRange)0x0) ||
             (iVar36 = func_?(), iVar36 == 0)) goto code_?;
          iVar36 = func_?();
          if (iVar36 != 0) {
            uVar56 = func_?(unaff_ESI,TypeInfo__MVAvatar);
            func_?(0x5a,uVar56);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(pOVar9,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar9 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar17 = (RegexCharClass_SingleRange *)
                  func_?(TVar58.m_Index,TypeInfo__System__Int32);
        RStack_47 = *pRVar17;
        auStack_59[1] = 0;
        pOVar9 = (Object *)func_?(TypeInfo__System__Byte,auStack_59 + 1);
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar17 = (RegexCharClass_SingleRange *)
                  func_?(TVar58.m_Index,TypeInfo__System__Int32);
        RStack_63 = *pRVar17;
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar30 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar13 = (pMVar12->fields).worldNetwork;
            if (pWVar13 == (WorldNetwork *)0x0) break;
            pMVar30 = (MVWorldObjectClientManager *)(pWVar13->fields)._.worldObjectClientManager;
          }
          if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
            pMVar35 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar30,(int32_t)RStack_47,(MethodInfo *)0x0);
            RStack_52 = (RegexCharClass_SingleRange)
                        func_?(pMVar35,TypeInfo__MVWorldObjectSpawnerVehicle);
            if (RStack_52 != (RegexCharClass_SingleRange)0x0) {
              RStack_21 = *(RegexCharClass_SingleRange *)((int)RStack_52 + 0xfc);
              auStack_59[0] = 3;
              pOVar9 = (Object *)func_?(TypeInfo__System__Byte,auStack_59);
              TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI,pOVar9,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar28 = (undefined4 *)func_?(TVar58.m_Index,TypeInfo__System__Int32);
              pIStack_48 = (Int32__Array *)*puVar28;
              pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
              puVar28 = (undefined4 *)func_?(pOVar9,TypeInfo__System__Int32);
              pMStack_29 = (MVPlayer *)*puVar28;
              pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
              pRVar17 = (RegexCharClass_SingleRange *)
                        func_?(pOVar9,TypeInfo__System__Int32);
              RStack_14 = *pRVar17;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x5c,(MethodInfo *)0x0);
              pRVar17 = (RegexCharClass_SingleRange *)func_?();
              RStack_47 = *pRVar17;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
              pRVar17 = (RegexCharClass_SingleRange *)func_?();
              VStack_49.z = *(float *)pRVar17;
              pMVar12 = (this->fields).networkGame;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pWVar13 = (pMVar12->fields).worldNetwork,
                 unaff_EDI = (RegexCharClass_SingleRange)this, pWVar13 != (WorldNetwork *)0x0)) {
                WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                          (pWVar13,(int32_t)pMStack_29,0,1,(int32_t)RStack_21,(int32_t)pIStack_48,
                           (int32_t)RStack_14,(int32_t)RStack_47,(MethodInfo *)0x0);
                pMVar12 = (this->fields).networkGame;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar12 != (MVNetworkGame *)0x0) {
                  if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
                    pMVar30 = (MVWorldObjectClientManager *)0x0;
                  }
                  else {
                    pWVar13 = (pMVar12->fields).worldNetwork;
                    unaff_EDI = (RegexCharClass_SingleRange)this;
                    if (pWVar13 == (WorldNetwork *)0x0) break;
                    pMVar30 = (MVWorldObjectClientManager *)
                              (pWVar13->fields)._.worldObjectClientManager;
                  }
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
                    RStack_47 = (RegexCharClass_SingleRange)
                                MVWorldObjectClientManager::
                                MVWorldObjectClientManager_GetWorldObject
                                          (pMVar30,(int32_t)pIStack_48,(MethodInfo *)0x0);
                    if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                    }
                    unaff_EDI = (RegexCharClass_SingleRange)
                                TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0
                    ;
                    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                      unaff_EDI = (RegexCharClass_SingleRange)
                                  func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
                      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                      VideoCapture+OnVideoCaptureResourceCreatedCallback::
                      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)unaff_EDI,
                                 (Object *)object,
                                 MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                           (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                      func_?(&TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                       __9__10_0,unaff_EDI);
                      RVar6 = (RegexCharClass_SingleRange)photonEvent;
                    }
                    unaff_ESI = RVar6;
                    if (RStack_47 != (RegexCharClass_SingleRange)0x0) {
                      func_?(0x2c,RStack_47,unaff_EDI);
                      pMVar12 = (this->fields).networkGame;
                      if (pMVar12 != (MVNetworkGame *)0x0) {
                        pMVar60 = (pMVar12->fields)._PlayerController_k__BackingField;
                        RStack_47 = (RegexCharClass_SingleRange)
                                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                    EventData_get_Item((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
                        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                  EventData_get_Item((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
                        unaff_EDI.First = 0;
                        unaff_EDI.Last = 0;
                        if (pMVar60 != (MVLocalObjectController *)0x0) {
                          pbVar61 = (byte *)func_?(pOVar9,TypeInfo__System__Byte);
                          bVar62 = *pbVar61;
                          piVar11 = (int32_t *)func_?(RStack_47,TypeInfo__System__Int32);
                          MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                    (pMVar60,*piVar11,(int32_t)pIStack_48,(int32_t)RStack_63,
                                     (uint)bVar62,(MethodInfo *)0x0);
                          MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                    ((MVWorldObjectSpawner *)RStack_52,(int32_t)VStack_49.z,
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
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      RVar15 = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar9,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x90,(MethodInfo *)0x0);
      pfVar64 = (float *)func_?(pOVar9,TypeInfo__MV__Common__RewardType);
      fVar65 = *pfVar64;
      RStack_52 = RVar15;
      RStack_63 = (RegexCharClass_SingleRange)func_?(TypeInfo__System__Int32,&RStack_52);
      auStack_59[0] = eventCode._3_1_;
      pOVar9 = (Object *)func_?();
      VStack_49.z = fVar65;
      pOVar45 = (Object *)func_?();
      pSVar24 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)RStack_63,
                           pOVar9,pOVar45,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar24,(MethodInfo *)0x0);
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
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar9,TypeInfo__System__Byte);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pWVar13 = (pMVar12->fields).worldNetwork, unaff_ESI = unaff_ESI,
         pWVar13 != (WorldNetwork *)0x0)) {
        this_04 = (pWVar13->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (RegexCharClass_SingleRange)
                    func_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (this_04 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_04,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (this_05 = (RuntimeEventManager *)(pWVar13->fields)._.runtimeEventManagerNetwork,
       unaff_ESI = unaff_ESI, this_05 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_05,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      unaff_EDI = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      RStack_21 = *pRVar17;
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar9,TypeInfo__System__Byte);
      RStack_14.First._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa0,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pIStack_48 = (Int32__Array *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa1,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pMStack_29 = (MVPlayer *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa3,(MethodInfo *)0x0);
      pcVar66 = (char *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (*pcVar66 == '\0') {
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pGVar67 = (pMVar12->fields).gameStatCounterManager,
           pGVar67 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar67,(GameStatCounterType__Enum)RStack_14,(int32_t)unaff_EDI,
                     (MVTeam__Enum)RStack_21,(int32_t)pIStack_48,(int32_t)pMStack_29,(bool)eventCode
                     ,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      else if ((pMVar12 != (MVNetworkGame *)0x0) &&
              (pGVar67 = (pMVar12->fields).gameStatCounterManager,
              pGVar67 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar67,(GameStatCounterType__Enum)RStack_14,(MVTeam__Enum)RStack_21,
                   (int32_t)unaff_EDI,(int32_t)pIStack_48,(int32_t)pMStack_29,(bool)eventCode,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar68 = (Byte__Array *)func_?(pOVar9,TypeInfo__System__Byte);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pGVar67 = (pMVar12->fields).gameStatCounterManager, unaff_ESI = unaff_ESI,
         pGVar67 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar67,pBVar68,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9,TypeInfo__System__Int32);
      eventCode = *pMVar27;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?(TypeInfo__MV__WorldObject__BytePacker)
      ;
      pMVar69 = (MethodInfo *)0x0;
      pBVar68 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar68,pMVar69);
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (this_06 = (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_06 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_06,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
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
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar17;
        pMVar27 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar27;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&StringLiteral_MVNetworkGame_OnLevelChanged);
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        if ((*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) &&
           (pMVar70 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),eventCode,
                                 (MethodInfo *)0x0), pMVar70 != (MVPlayer *)0x0)) {
          MVPlayer::MVPlayer_set_Level(pMVar70,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar71 = (bool *)func_?(pOVar9,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar71);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar72 = (pMVar12->fields)._GameCoinManager_k__BackingField, unaff_ESI = unaff_ESI,
         pMVar72 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar72,*pbVar71,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = RVar6;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), pOVar9 == (Object *)0x0)) break;
    pIVar10 = TypeInfo__System__Int32;
    if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar27 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar27;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,200,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
code_?:
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar73 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        if (pMVar73 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar73->fields)._._.invoke_impl)
                    ((pMVar73->fields)._._.method_code,eventCode,unaff_ESI,
                     (pMVar73->fields)._._.method);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    if ((*(byte *)(*(int *)unaff_EDI + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    unaff_ESI.First = 0;
    unaff_ESI.Last = 0;
    if (bVar16) {
      unaff_ESI = unaff_EDI;
    }
    pDVar74 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI == (RegexCharClass_SingleRange)0x0)) break;
    if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pDVar43->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar43->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar16) {
      pDVar75 = pDVar43;
    }
    if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
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
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = RVar6;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,(EventData *)RVar6,(MethodInfo *)0x0);
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
    pIStack_48 = (Int32__Array *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      pBVar68 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pIStack_48,pBVar68,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x85,(MethodInfo *)0x0);
      if (pOVar9 != (Object *)0x0) {
        pIVar10 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if ((pOVar9->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?(pOVar9,pIVar10);
          pOVar9 = extraout_ECX;
          pIVar10 = extraout_EDX;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?(pOVar9);
        RStack_14.First._0_1_ = *puVar5;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,100,(MethodInfo *)0x0);
        if (pOVar9 != (Object *)0x0) {
          pIVar10 = (Int32__Class *)TypeInfo__System__Boolean;
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          puVar5 = (undefined1 *)func_?(pOVar9);
          unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
          eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
          RStack_21 = unaff_EDI;
          if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
              func_?(&MethodInfo__MVNetworkGame__CreateGame__);
              func_?(&TypeInfo__StatHatWrapper);
              func_?(&TypeInfo__UnityEngine__Events__UnityAction);
              func_?(&StringLiteral_GameSnapshotDataReceived);
              cRam_? = '\x01';
            }
            if (*(int *)((int)unaff_EDI + 0x10c) == 0) {
              if ((*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) &&
                 (pMVar42 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),
                                       (MethodInfo *)0x0), pMVar42 != (MVLocalPlayer *)0x0)) {
                unaff_ESI = (RegexCharClass_SingleRange)(pMVar42->fields)._._ActorNr_k__BackingField
                ;
                this_10 = (DefaultBinder_BinderState *)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          (this_10,pIStack_48,(int32_t)unaff_ESI,(bool)RStack_14.First,
                           (MethodInfo *)0x0);
                unaff_EDI = RStack_21;
                *(DefaultBinder_BinderState **)((int)RStack_21 + 0x10c) = this_10;
                func_?((MonitorData *)((int)RStack_21 + 0x10c));
code_?:
                if (eventCode._3_1_ != MVEventCodes__Enum_NoCodeSet >> 0x18) goto code_?;
                if (*(MethodInfo **)((int)unaff_EDI + 0x110) != (MethodInfo *)0x0) {
                  *(bool *)&(*(MethodInfo **)((int)unaff_EDI + 0x110))->name = 1;
                  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__StatHatWrapper);
                  }
                  StatHatWrapper::StatHatWrapper_Count
                            (StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0);
                  this_11 = (NavMesh_OnNavMeshPreUpdate *)
                            func_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_11,(Object *)unaff_EDI,MethodInfo__MVNetworkGame__CreateGame__,
                             (MethodInfo *)0x0);
                  coroutine = WaitForFrames::WaitForFrames_Frames
                                        (3,(UnityAction *)this_11,(MethodInfo *)0x0);
                  Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
            }
            else {
              RStack_52 = *(RegexCharClass_SingleRange *)((int)unaff_EDI + 0x10c);
              if ((*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) &&
                 (pMVar42 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),
                                       (MethodInfo *)0x0), pMVar42 != (MVLocalPlayer *)0x0)) {
                unaff_ESI = (RegexCharClass_SingleRange)(pMVar42->fields)._._ActorNr_k__BackingField
                ;
                VStack_49.z = (float)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          ((DefaultBinder_BinderState *)VStack_49.z,pIStack_48,(int32_t)unaff_ESI,
                           (bool)RStack_14.First,(MethodInfo *)0x0);
                if (RStack_52 != (RegexCharClass_SingleRange)0x0) {
                  MVNetworkGame+GameDataQueryManager+GameDataQuery::
                  MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                            ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)RStack_52,
                             (MVNetworkGame_GameDataQueryManager_GameDataQuery *)VStack_49.z,
                             (MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      break;
    }
    pBVar68 = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
    if (pBVar68 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
          pMVar42 != (MVLocalPlayer *)0x0)) &&
         (eventCode = (pMVar42->fields)._._ActorNr_k__BackingField,
         unaff_ESI != (RegexCharClass_SingleRange)0x0)) {
        pSVar20 = (String__Class *)TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar27 = (MVEventCodes__Enum *)func_?();
        if (*pMVar27 == eventCode) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (RegexCharClass_SingleRange)this;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar72 = (pMVar12->fields)._GameCoinManager_k__BackingField,
             pMVar72 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar72,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar12 = (this->fields).networkGame;
            if ((pMVar12 != (MVNetworkGame *)0x0) &&
               (pMVar76 = (pMVar12->fields).operationRequests,
               pMVar76 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_StartSessionTime
                        (pMVar76,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          break;
        }
code_?:
        uStack_1 = 0;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar12 == (MVNetworkGame *)0x0) break;
        eventCode = (MVEventCodes__Enum)(pMVar12->fields).playerContainer;
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (pOVar9 == (Object *)0x0)) break;
        pIVar10 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((pOVar9->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          puVar5 = (undefined1 *)func_?(pOVar9);
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
            pSVar20 = (String__Class *)TypeInfo__System__Int32;
            if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?(unaff_ESI);
              MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                        ((MVPlayerContainer *)unaff_EDI,*piVar11,(bool)eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            goto code_?;
          }
          break;
        }
code_?:
        func_?(pOVar9,pIVar10);
        outData = unaff_EDI;
code_?:
        func_?();
        pMVar19 = extraout_EDX_00;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
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
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,7,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar9 != (Object *)0x0)) {
        pIVar10 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pcVar66 = (char *)func_?();
        RStack_52.First._0_1_ = *pcVar66 == '\0';
        if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
          outData.First = 0;
          outData.Last = 0;
        }
        else {
          if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          outData.First = 0;
          outData.Last = 0;
          if (bVar16) {
            outData = unaff_ESI;
          }
          pMVar19 = (MVAvatarSpawnRoleCreator__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (outData == (RegexCharClass_SingleRange)0x0) goto code_?;
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
        eventCode = (MVEventCodes__Enum)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        unaff_EDI = outData;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar36 = func_?(4,TypeInfo__IEditModeUI,eventCode);
          if (iVar36 == 0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        func_?(
                                       TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                                       );
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor
                      ((PlayerShopInventoryRepository *)unaff_ESI,(MethodInfo *)0x0);
            func_?(5,TypeInfo__IEditModeUI,eventCode,unaff_ESI);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar31 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if ((pIVar31 != (IEditModeUI *)0x0) &&
             (pPVar32 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,pIVar31),
             pPVar32 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_AddShopItems
                      (pPVar32,(Dictionary_2_System_Object_System_Object_ *)outData,
                       (bool)RStack_52.First,(MethodInfo *)0x0);
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
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
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
       (pDVar43 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar43 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((pDVar43->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar43->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar75 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar75 = pDVar43;
      }
      if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar75,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (pOVar9 == (Object *)0x0) {
      pBVar68 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar68,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(RegexCharClass_SingleRange *)(eventCode + 0x9c) = unaff_EDI;
        func_?(eventCode + 0x9c,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    pBVar68 = (Byte__Array *)func_?();
    if (pBVar68 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar9 != (Object *)0x0)) {
      pIVar10 = TypeInfo__System__Int32;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar28 = (undefined4 *)func_?();
      if ((Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr ==
          (Action_1_Int32_ *)0x0) goto code_?;
      pAVar77 = (Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr
      ;
      if (pAVar77 != (Action_1_Int32_ *)0x0) {
        (*(pAVar77->fields)._._.invoke_impl)
                  ((pAVar77->fields)._._.method_code,*puVar28,(pAVar77->fields)._._.method);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar76 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = unaff_ESI;
    if (pMVar76 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar76,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI = (RegexCharClass_SingleRange)
                func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
      RStack_52 = *pRVar17;
      pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&RStack_52);
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar9,
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
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
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
    unaff_ESI = unaff_ESI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (pMVar78 = (pMVar12->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar78 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                (pMVar78,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (pMVar78 = (pMVar12->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar78 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar78,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar12->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar11,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar12->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar11,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)func_?(pOVar9,TypeInfo__System__Int32);
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (pMVar12 == (MVNetworkGame *)0x0) break;
    if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar30 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar13 = (pMVar12->fields).worldNetwork;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pWVar13 == (WorldNetwork *)0x0) break;
      pMVar30 = (MVWorldObjectClientManager *)(pWVar13->fields)._.worldObjectClientManager;
    }
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar30,(int32_t)((Object *)((int)unaff_ESI + 0x10))->klass,
                               (MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar30 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar13 = (pMVar12->fields).worldNetwork;
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (pWVar13 == (WorldNetwork *)0x0) break;
            pMVar30 = (MVWorldObjectClientManager *)(pWVar13->fields)._.worldObjectClientManager;
          }
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar30,(int32_t)*(MonitorData **)((int)unaff_ESI + 0x14),
                                   (MethodInfo *)0x0);
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
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) !=
                  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype)) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar36 = func_?(unaff_ESI,TypeInfo__MVAvatarLocal);
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (iVar36 != 0) {
                bVar23 = 0xcc;
                this_12 = (MVAvatarLocal *)func_?(unaff_ESI,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_12,bVar23,(MethodInfo *)unaff_ESI);
                pMVar12 = (this->fields).networkGame;
                unaff_ESI.First = 0;
                unaff_ESI.Last = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar12 != (MVNetworkGame *)0x0) {
                  pMVar60 = (pMVar12->fields)._PlayerController_k__BackingField;
                  unaff_ESI.First = 0;
                  unaff_ESI.Last = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar60 != (MVLocalObjectController *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Debug);
                      func_?(&StringLiteral_HandleDetachWorldObjectFromVehic);
                      cRam_? = '\x01';
                    }
                    (pMVar60->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
                    func_?(&(pMVar60->fields).attachState,0);
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
    unaff_ESI = unaff_ESI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
       unaff_ESI = (RegexCharClass_SingleRange)photonEvent, RStack_63 = unaff_EDI,
       photonEvent != (EventData *)0x0)) {
      VStack_49.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      RStack_52 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar39 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar40 = *piVar11;
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
        piVar11 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)RStack_63,*piVar11,eventCode,iVar40,iVar39,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar9,TypeInfo__System__Boolean);
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
      pMVar69 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar24 = (String *)func_?();
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,pMVar69);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      pMVar69 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar9 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar9[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar24 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar24,pMVar69);
        eventCode = (MVEventCodes__Enum)pOVar9[2].monitor;
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
        pGVar79 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pGVar79 != (GoldRewardManager *)0x0) {
          pbVar71 = (bool *)func_?(pOVar9,TypeInfo__System__Boolean);
          (pGVar79->fields).isGoldRewardGame = *pbVar71;
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
          pbVar71 = (bool *)func_?(pOVar9,TypeInfo__System__Boolean);
          BStack_8.m_value = *pbVar71;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar24 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_8,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar24,
                               (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar24 = (String *)func_?(pOVar9,TypeInfo__System__String);
      pSVar24 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar24,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar24,(MethodInfo *)0x0);
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
      iVar36 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pMVar69 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar24 = StringLiteral_V;
      unaff_ESI = unaff_ESI;
      if (iVar36 != 0) {
        pDVar57 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar57,(Object *)pSVar24,pMVar69);
        puVar5 = (undefined1 *)func_?(TVar58.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar12 = (this->fields).networkGame;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        unaff_EDI = (RegexCharClass_SingleRange)pSVar24;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32);
          unaff_ESI = *pRVar17;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__SayChatBubbleVisibilityManager);
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar80 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (pAVar80 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar80->fields)._._.invoke_impl)
                      ((pAVar80->fields)._._.method_code,unaff_ESI,eventCode,
                       (pAVar80->fields)._._.method);
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
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar24 = (String *)func_?(pOVar9,TypeInfo__System__String);
      bVar23 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar24,(MethodInfo *)0x0);
      if (bVar23 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar9 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar9[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar9[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
        goto code_?;
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar24 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar24,pMVar69);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar81 = (pMVar12->fields).playerContainer, pMVar81 != (MVPlayerContainer *)0x0)) &&
         (pMVar42 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar81,(MethodInfo *)0x0),
         pMVar42 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar42,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar24 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar24,pMVar69);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar12->fields).playerContainer;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar11 = (int32_t *)func_?(pOVar9,TypeInfo__System__Int32);
          pMVar70 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar11,(MethodInfo *)0x0);
          if (pMVar70 != (MVPlayer *)0x0) {
            (pMVar70->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar70->fields).playerPlanetDataRemote,unaff_ESI);
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar24 = (String *)func_?();
      pSVar24 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,pMVar69);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar24,(MethodInfo *)0x0);
      uVar37 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
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
      pSVar24 = (String *)func_?();
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,(MethodInfo *)unaff_ESI);
      if (((pOVar9 != (Object *)0x0) &&
          (pMVar12 = (this->fields).networkGame, pMVar12 != (MVNetworkGame *)0x0)) &&
         (pLVar82 = (pMVar12->fields).levelRewardsManager, pLVar82 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar82,(Dictionary_2_System_Int32_System_Int32_ *)pOVar9[1].klass,
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
      pSVar24 = (String *)func_?();
      pOVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,(MethodInfo *)unaff_ESI);
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pLVar82 = (pMVar12->fields).levelRewardsManager, pOVar9 != (Object *)0x0)) &&
         (pLVar82 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar82,(int32_t)pOVar9[1].klass,(int32_t)pOVar9[1].monitor,(MethodInfo *)0x0);
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar24 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,pMVar69);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
      func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,message
                     );
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar24 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar24,pMVar69);
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
      pMVar69 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar24 = (String *)func_?();
      pKVar83 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar24,pMVar69);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar83;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pSVar20 = (String__Class *)TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar11 = (int32_t *)func_?(unaff_ESI);
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar11,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = RVar6;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,(EventData *)RVar6,(MethodInfo *)0x0),
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
        eventCode = (MVEventCodes__Enum)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar36 = func_?(4,TypeInfo__IEditModeUI,eventCode);
          if (iVar36 == 0) {
            this = (MVNetworkGame_EventHandling *)
                   func_?(
                                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                                  );
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor
                      ((PlayerShopInventoryRepository *)this,(MethodInfo *)0x0);
            func_?(5,TypeInfo__IEditModeUI,eventCode,this);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar31 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          unaff_ESI = (RegexCharClass_SingleRange)this;
          if ((pIVar31 != (IEditModeUI *)0x0) &&
             (pPVar32 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,pIVar31),
             pPVar32 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_Setup(pPVar32,(EventData *)RVar6,(MethodInfo *)0x0);
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
      pVVar84 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_49,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar85 = pVVar84->x;
      uVar86 = pVVar84->y;
      eventCode = (MVEventCodes__Enum)pVVar84->z;
      pIStack_51 = (Int32__Array *)uVar85;
      RStack_52 = (RegexCharClass_SingleRange)uVar86;
      pQVar87 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(((EventData *)RVar6)->fields).Parameters
                           ,(MethodInfo *)0x0);
      fStack_88 = pQVar87->x;
      VStack_49.x = pQVar87->y;
      VStack_49.y = pQVar87->z;
      VStack_49.z = pQVar87->w;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar70 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar11,(MethodInfo *)0x0);
          if (pMVar70 != (MVPlayer *)0x0) {
            this_07 = (pMVar70->fields).spawnRolesManager;
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xbf,(MethodInfo *)0x0);
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_07 != (SpawnRolesManager *)0x0) {
              piVar11 = (int32_t *)func_?(pOVar9,TypeInfo__System__Int32);
              position.y = (float)RStack_52;
              position.x = (float)pIStack_51;
              position.z = (float)eventCode;
              rotation.y = VStack_49.x;
              rotation.x = fStack_88;
              rotation.z = VStack_49.y;
              rotation.w = VStack_49.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_07,*piVar11,position,rotation,(MethodInfo *)0x0);
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
      unaff_ESI = (RegexCharClass_SingleRange)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar24 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar24,(MethodInfo *)unaff_ESI);
      RStack_52 = (RegexCharClass_SingleRange)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)RStack_52,(MethodInfo *)0x0)
      ;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_ESI = (RegexCharClass_SingleRange)(pMVar12->fields).playerContainer;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (pOVar9 != (Object *)0x0)) {
          pIVar10 = TypeInfo__System__Int32;
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?(pOVar9);
          pMVar70 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
          if (pMVar70 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar70,(ISpawnRoleChangeHandler *)RStack_52,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value.First = 0;
      value.Last = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
          value = unaff_ESI;
        }
        pSVar20 = TypeInfo__System__String;
        if (value == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      outData = (RegexCharClass_SingleRange)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)value,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
      pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = outData;
      if ((outData != (RegexCharClass_SingleRange)0x0) &&
         (pMVar30 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar30,(int32_t)(((Il2CppType *)((int)outData + 0x18))->data).
                                                __klassIndex,(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar12,(int32_t)(((Il2CppType *)((int)outData + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar12,(int32_t)((MVNetworkGame__Fields *)((int)outData + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              pIVar10 = (Int32__Class *)TypeInfo__System__Boolean;
              if ((pOVar9->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              puVar5 = (undefined1 *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*puVar5);
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                     (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar16 = false;
                }
                else {
                  bVar16 = true;
                }
                RVar89.First = 0;
                RVar89.Last = 0;
                if (bVar16) {
                  RVar89 = unaff_ESI;
                }
                pMVar19 = TypeInfo__MVAvatarSpawnRoleCreator;
                if (RVar89 != (RegexCharClass_SingleRange)0x0) {
                  pMVar69 = (MethodInfo *)0x0;
                  MVar54 = eventCode;
                  this_13 = (MVAvatarSpawnRoleCreator *)
                            func_?(unaff_ESI,TypeInfo__MVAvatarSpawnRoleCreator);
                  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                            (this_13,(SpawnRoleBodySwitchData *)outData,(bool)MVar54,pMVar69);
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
  case MVEventCodes__Enum_VehicleGotEnergy:
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(pOVar9,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar9 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar17 = (RegexCharClass_SingleRange *)
                  func_?(TVar58.m_Index,TypeInfo__System__Int32);
        RStack_52 = *pRVar17;
        auStack_59[0] = 0;
        pOVar9 = (Object *)func_?(TypeInfo__System__Byte,auStack_59);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar9
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          if ((pMVar12->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar30 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar13 = (pMVar12->fields).worldNetwork;
            if (pWVar13 == (WorldNetwork *)0x0) break;
            pMVar30 = (MVWorldObjectClientManager *)(pWVar13->fields)._.worldObjectClientManager;
          }
          if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar30,(int32_t)RStack_52,(MethodInfo *)0x0);
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
            pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9,TypeInfo__System__Int32)
            ;
            unaff_ESI = *pRVar17;
            iVar36 = func_?(unaff_EDI,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            if (iVar36 != 0) {
              pMVar69 = (MethodInfo *)0x0;
              this_14 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_14,(int32_t)unaff_ESI,pMVar69);
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
    unaff_ESI = unaff_ESI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (RegexCharClass_SingleRange)(pMVar12->fields).playerContainer,
        unaff_ESI = RVar6, photonEvent != (EventData *)0x0)) &&
       (iVar39 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      bVar23 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI,iVar39,&pMStack_7,(MethodInfo *)0x0);
      if (bVar23 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xde,(MethodInfo *)0x0);
      puVar90 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar90);
      if (pMStack_7 != (MVPlayer *)0x0) {
        if ((pMStack_7->fields).playerState != *puVar90) {
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
        RVar15.First = 0;
        RVar15.Last = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
            RVar15 = unaff_ESI;
          }
          pSVar20 = TypeInfo__System__String;
          if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)RVar15,(MethodInfo *)0x0);
        pMVar76 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar76 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar76,(String *)unaff_ESI,(MethodInfo *)0x0);
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
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          unaff_EDI = (RegexCharClass_SingleRange)
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)eventCode)->klass;
          if ((*(byte *)&((Object *)((int)unaff_EDI + 0xb8))->klass <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)((int)unaff_EDI + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar91 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar16) {
            pDVar91 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          eventCode = (MVEventCodes__Enum)pDVar91;
          if (pDVar91 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          RVar6 = (RegexCharClass_SingleRange)&UNK_?;
          this_15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_15 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar92 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_15,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (RegexCharClass_SingleRange)&stack0xffffff88;
            VStack_49.y = 0.0;
            RVar15 = (RegexCharClass_SingleRange)pDVar92->_currentValue;
            uStack_1 = 3;
            VStack_49.z = (float)unaff_ESI;
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
                           ,(MethodInfo *)RVar6);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              unaff_EDI.First = 0;
              unaff_EDI.Last = 0;
              if (RVar15 != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)RVar15 == TypeInfo__System__String) {
                  unaff_EDI = RVar15;
                }
                pSVar20 = TypeInfo__System__String;
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar58.m_Index == 0) {
                pSVar24 = (String *)0x0;
                RVar6 = (RegexCharClass_SingleRange)::StringLiteral___;
              }
              else {
                RStack_52 = (RegexCharClass_SingleRange)::StringLiteral___;
                pSVar24 = (String *)func_?();
                RVar6 = RStack_52;
              }
              pSVar24 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI,(String *)RVar6,pSVar24,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar24,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
        pIVar10 = TypeInfo__System__Int32;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar17;
        pMVar12 = (this->fields).networkGame;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
           pMVar42 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI == (RegexCharClass_SingleRange)(pMVar42->fields)._._ActorNr_k__BackingField)
          {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pMVar12 = (this->fields).networkGame;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar81 = (pMVar12->fields).playerContainer, pMVar81 != (MVPlayerContainer *)0x0)) {
            bVar23 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar23 == 0) {
code_?:
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar81 = (pMVar12->fields).playerContainer, pMVar81 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
            else {
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar81 = (pMVar12->fields).playerContainer, pMVar81 != (MVPlayerContainer *)0x0))
              {
                pMStack_29 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pIStack_48 = (Int32__Array *)
                             func_?(
                                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                            );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)pIStack_48,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                eventCode = eventCode & 0xffffff;
                VStack_49.z = (float)func_?(TypeInfo__System__Byte,
                                                     (byte *)((int)&eventCode + 3));
                RStack_52 = unaff_ESI;
                pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&RStack_52);
                if (pIStack_48 != (Int32__Array *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                             (Object *)VStack_49.z,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  auStack_59[0] = 3;
                  pOVar9 = (Object *)func_?(TypeInfo__System__Byte,auStack_59);
                  if ((pMStack_29 != (MVPlayer *)0x0) &&
                     (pDVar93 = (Delegate__Array *)
                                (pMStack_29->fields)._UserProfileData_k__BackingField,
                     pDVar93 != (Delegate__Array *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,pOVar9,
                               (Object *)pDVar93->max_length,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    auStack_59[1] = 6;
                    VStack_49.z = (float)func_?(TypeInfo__System__Byte,auStack_59 + 1);
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (pFVar33 = (pMVar12->fields)._Friends_k__BackingField,
                       pFVar33 != (FriendList *)0x0)) {
                      bStack_94 = FriendList::FriendList_IsFriend
                                            (pFVar33,(int32_t)(pMStack_29->fields).
                                                             _ProfileID_k__BackingField,
                                             (MethodInfo *)0x0);
                      pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_94);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                                 (Object *)VStack_49.z,pOVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pIStack_48,
                                 (MethodInfo *)0x0);
                      pMVar12 = (this->fields).networkGame;
                      if ((pMVar12 != (MVNetworkGame *)0x0) &&
                         (pGVar67 = (pMVar12->fields).gameStatCounterManager,
                         pGVar67 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar67,(int32_t)unaff_ESI,
                                   (pMStack_29->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar12 = (this->fields).networkGame;
                        if ((pMVar12 != (MVNetworkGame *)0x0) &&
                           (pGVar67 = (pMVar12->fields).gameStatCounterManager,
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
      unaff_ESI = RVar6;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
        pIVar10 = TypeInfo__System__Int32;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pRVar17 = (RegexCharClass_SingleRange *)func_?();
        RStack_47 = *pRVar17;
        pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        if (pOVar9 != (Object *)0x0) {
          pIVar10 = TypeInfo__System__Int32;
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar27 = (MVEventCodes__Enum *)func_?(pOVar9);
          eventCode = *pMVar27;
          RVar15 = (RegexCharClass_SingleRange)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)RVar6,0x9a,(MethodInfo *)0x0);
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (RVar15 != (RegexCharClass_SingleRange)0x0) {
            if (*(String__Class **)RVar15 == TypeInfo__System__String) {
              unaff_EDI = RVar15;
            }
            pSVar20 = TypeInfo__System__String;
            if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
          }
          pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xbc,(MethodInfo *)0x0);
          if (pOVar9 != (Object *)0x0) {
            pIVar10 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
            if ((pOVar9->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar5 = (undefined1 *)func_?();
            RStack_63.First._0_1_ = *puVar5;
            pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
            if (pOVar9 != (Object *)0x0) {
              pIVar10 = TypeInfo__System__Int32;
              if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              pRVar17 = (RegexCharClass_SingleRange *)func_?(pOVar9);
              RStack_14 = *pRVar17;
              pOVar9 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
              if (pOVar9 != (Object *)0x0) {
                pIVar10 = (Int32__Class *)TypeInfo__System__Boolean;
                if ((pOVar9->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                puVar5 = (undefined1 *)func_?(pOVar9);
                RStack_52.First._0_1_ = *puVar5;
                unaff_ESI = (RegexCharClass_SingleRange)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)RVar6,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                }
                RVar6.First = 0;
                RVar6.Last = 0;
                if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                  if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
                    RVar6 = unaff_ESI;
                  }
                  pSVar20 = TypeInfo__System__String;
                  if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
                }
                VStack_49.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)RVar6,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar12 = (this->fields).networkGame;
                if ((pMVar12 != (MVNetworkGame *)0x0) &&
                   (pMVar42 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar12,(MethodInfo *)0x0), pMVar42 != (MVLocalPlayer *)0x0
                   )) {
                  if (eventCode == (pMVar42->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                  unaff_ESI = (RegexCharClass_SingleRange)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,eventCode,(int32_t)RStack_47,(String *)unaff_EDI,
                             (BuildTarget__Enum)RStack_63,(UserProfileData *)VStack_49.z,0,
                             (bool)RStack_52.First,(MethodInfo *)0x0);
                  if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                    *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x48) = RStack_14;
                    pMVar12 = (this->fields).networkGame;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (pMVar81 = (pMVar12->fields).playerContainer,
                       pMVar81 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar81,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
code_?:
  func_?(unaff_ESI,RStack_47);
  pDVar74 = extraout_EDX_01;
code_?:
  func_?(unaff_EDI,pDVar74);
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,eventCode);
  uStack_95 = *(undefined4 *)unaff_EDI;
  func_?(&uStack_95,&UNK_?);
code_?:
  func_?();
code_?:
  RVar15 = (RegexCharClass_SingleRange)func_?();
  pSVar20 = extraout_ECX_01;
code_?:
  uVar56 = func_?(RVar15,pSVar20);
  iVar36 = func_?(uVar56);
  puVar96 = (uint *)(iVar36 + 0x10);
  uVar97 = (uint)CARRY1(unaff_BL,(byte)iVar36);
  uVar98 = *puVar96;
  uVar99 = *puVar96;
  *puVar96 = (uint)(&UNK_? + uVar99 + uVar97);
  *(int *)(iVar36 + 0x10) =
       (int)(&UNK_? +
            (uint)(0xefaf3b3c < uVar98 || CARRY4((uint)(&UNK_? + uVar99),uVar97)) +
            *(int *)(iVar36 + 0x10));
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
      func_?();
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
  uVar11 = func_?(&stack0xffffffec);
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
  MVNetworkGame+EventHandling+DynamicEventCallbackManager::
  MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).dynamicEventCallbackManager = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
            );
  method_00 = (MethodInfo *)&(this->fields).cachedEvents;
  (this->fields).cachedEvents = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  return;
}

