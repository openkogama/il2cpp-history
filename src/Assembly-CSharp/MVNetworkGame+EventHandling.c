
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0))
      {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = TypeInfo__System__Int32;
        if (pIVar11 == pIVar12) {
          piVar14 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar16 != (WorldNetwork *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pWVar16->fields)._.worldObjectClientManager;
        bVar9 = 0;
        unaff_ESI = RVar6;
        RStack_17 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          RVar18 = (RegexCharClass_SingleRange)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
          bVar9 = 0;
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
          if (RVar18 == (RegexCharClass_SingleRange)0x0) {
            unaff_ESI.First = 0;
            unaff_ESI.Last = 0;
code_?:
            bVar9 = 0;
            unaff_EDI = (RegexCharClass_SingleRange)
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            if (eventCode != MVEventCodes__Enum_NoCodeSet) {
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = *(Il2CppClass **)(*(int *)eventCode + 0x20) < pIVar12;
              pOVar10 = (Object *)eventCode;
              pIVar13 = TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)eventCode + 0x20) == pIVar12) {
                piVar14 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)RStack_17,*piVar14,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          if ((*(byte *)(*(int *)RVar18 + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)RVar18 + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (bVar19) {
            unaff_ESI = RVar18;
          }
          bVar9 = 0;
          outData = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
          func_?();
          pMVar20 = extraout_EDX_00;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = TypeInfo__System__Int32;
        if (pIVar11 != pIVar12) goto code_?;
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar21;
        eventCode = (MVEventCodes__Enum)unaff_EDI;
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
        if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
          worldObjectData.First = 0;
          worldObjectData.Last = 0;
code_?:
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            pWVar16 = (pMVar15->fields).worldNetwork;
            bVar9 = 0;
            if (pWVar16 != (WorldNetwork *)0x0) {
              pMVar22 = (pWVar16->fields)._.worldObjectClientManager;
              bVar9 = 0;
              if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                          (pMVar22,(int32_t)unaff_EDI,
                           (Dictionary_2_System_Object_System_Object_ *)worldObjectData,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
          break;
        }
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
        bVar9 = 0;
        pMVar20 = (MVAvatarSpawnRoleCreator__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (worldObjectData != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
        func_?(unaff_ESI,pMVar20);
        pSVar23 = extraout_ECX_00;
        unaff_EDI = outData;
code_?:
        func_?(unaff_ESI,pSVar23);
code_?:
        func_?(unaff_EDI,RStack_24);
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = TypeInfo__System__Int32;
        if (pIVar11 != pIVar12) goto code_?;
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar21;
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
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)((int)outData + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
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
          bVar9 = 0;
          pMVar20 = (MVAvatarSpawnRoleCreator__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if (worldObjectDataToRemove == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pWVar16 = (pMVar15->fields).worldNetwork;
          bVar9 = 0;
          if (pWVar16 != (WorldNetwork *)0x0) {
            pMVar22 = (pWVar16->fields)._.worldObjectClientManager;
            bVar9 = 0;
            if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                        (pMVar22,(int32_t)unaff_EDI,
                         (Dictionary_2_System_Object_System_Object_ *)worldObjectDataToRemove,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
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
    bVar9 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar25 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      bVar26 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
               MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                         (pMVar25,eventCode,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        pSVar27 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Unknown_event__,pSVar27,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar25 = (this->fields).dynamicEventCallbackManager;
      bVar9 = 0;
      if (pMVar25 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar25,eventCode,photonEvent,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0))
      {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = TypeInfo__System__Int32;
        if (pIVar11 != pIVar12) goto code_?;
        piVar14 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        bVar9 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar29 = (MVWorldInventory *)(pOVar28->_0).namespaze;
          bVar9 = 0;
          if (pMVar29 != (MVWorldInventory *)0x0) {
            MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar29,*piVar14,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar16 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar16->fields)._.worldInventory;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        unaff_EDI = RVar6;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x31,(MethodInfo *)0x0);
          bVar9 = 0;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          RStack_24 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
          RVar6 = unaff_EDI;
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
code_?:
            unaff_EDI = RVar6;
            bVar9 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
              pSVar23 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar12) {
                piVar14 = (int32_t *)func_?(unaff_ESI);
                MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                          ((MVWorldInventory *)eventCode,*piVar14,(Byte__Array *)unaff_EDI,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          RStack_17 = (RegexCharClass_SingleRange)func_?();
          bVar9 = 0;
          RVar6 = RStack_17;
          if (RStack_17 != (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar16 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar16->fields)._.worldInventory;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        unaff_EDI = RVar6;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x22,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          bVar9 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar9 = 0, pOVar10 != (Object *)0x0))
          {
            pIVar11 = (pOVar10->klass->_0).element_class;
            pIVar12 = (TypeInfo__System__Single->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            pIVar13 = (Int32__Class *)TypeInfo__System__Single;
            if (pIVar11 != pIVar12) goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar30;
            bVar9 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
              pSVar23 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar12) {
                piVar14 = (int32_t *)func_?(unaff_ESI);
                MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                          ((MVWorldInventory *)unaff_EDI,*piVar14,(float)eventCode,(MethodInfo *)0x0
                          );
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
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
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
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar31 = (undefined4 *)func_?();
        pMStack_32 = (MVPlayer *)*puVar31;
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        RStack_24 = *pRVar21;
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        RStack_17 = *pRVar21;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        eventCode = MVEventCodes__Enum_NoCodeSet;
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1((Link *)unaff_ESI,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0xc) = RStack_17;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_24;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_32;
          pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          bVar9 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            WorldNetwork::WorldNetwork_AddLink_1
                      ((WorldNetwork *)pOVar28,(Link *)unaff_ESI,(MethodInfo *)0x0);
            this_00 = *(LogicObjectManagerClient **)((int)unaff_EDI + 0x2c);
            pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_00 != (LogicObjectManagerClient *)0x0) {
              eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                    (this_00,(Link *)unaff_ESI,(IWorldObjectManager *)pMVar33,
                                     (MethodInfo *)0x0);
              pSVar27 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&eventCode,(MethodInfo *)0x0);
              pSVar27 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_reset_count_,pSVar27,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar27,(MethodInfo *)0x0);
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar21;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&StringLiteral_reset_count_);
          cRam_? = '\x01';
        }
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        eventCode = MVEventCodes__Enum_NoCodeSet;
        bVar9 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          unaff_EDI = (RegexCharClass_SingleRange)
                      WorldNetwork::WorldNetwork_RemoveLink
                                ((WorldNetwork *)pOVar28,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
          pIVar12 = *(Il2CppClass **)((int)unaff_ESI + 0x2c);
          pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          bVar9 = 0;
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (pIVar12 != (Il2CppClass *)0x0) {
            eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                  ((LogicObjectManagerClient *)pIVar12,(Link *)unaff_EDI,
                                   (IWorldObjectManager *)pMVar33,(MethodInfo *)0x0);
            pSVar27 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar27 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_reset_count_,pSVar27,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar27,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar21;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__IEditModeUI);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar34 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        bVar9 = 0;
        if (pIVar34 != (IEditModeUI *)0x0) {
          pPVar35 = (PlayerShopInventoryRepository *)
                    func_?(4,TypeInfo__IEditModeUI,pIVar34);
          bVar9 = 0;
          if (pPVar35 != (PlayerShopInventoryRepository *)0x0) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_RemoveItemFromInventory
                      (pPVar35,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_EDI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x35,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar10,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pFVar36 = (pMVar15->fields)._Friends_k__BackingField;
        bVar9 = 0;
        if (pFVar36 != (FriendList *)0x0) {
          FriendList::FriendList_AddFriend
                    (pFVar36,(int32_t)unaff_EDI,eventCode,*piVar14,FriendStatus__Enum_Pending,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_EDI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x36,(MethodInfo *)0x0);
      pFVar37 = (FriendStatus__Enum *)func_?(pOVar10,TypeInfo__MV__Common__FriendStatus);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pFVar36 = (pMVar15->fields)._Friends_k__BackingField;
        bVar9 = 0;
        if (pFVar36 != (FriendList *)0x0) {
          FriendList::FriendList_UpdateFriend
                    (pFVar36,(int32_t)unaff_EDI,eventCode,*pFVar37,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_EDI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar10,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar15,*piVar14,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_EDI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?(pOVar10,TypeInfo__System__Int32);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar15,*piVar14,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_ESI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      RStack_17 = *pRVar21;
      unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      bVar9 = 0;
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
        pMVar33 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)eventCode;
        if (pOVar28 == (Object__Class *)0x0) break;
        pMVar33 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
      }
      bVar9 = 0;
      unaff_ESI = (RegexCharClass_SingleRange)eventCode;
      if (pMVar33 == (MVWorldObjectClientManager *)0x0) break;
      pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar33,eventCode,(MethodInfo *)0x0);
      if (pMVar38 == (MVWorldObject *)0x0) {
        str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
        pSVar27 = StringLiteral_OnTriggerBoxStayBegin_received__;
        str2 = StringLiteral__does_not_exist;
      }
      else {
        iVar39 = func_?();
        if (iVar39 != 0) {
          func_?(0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
        pSVar27 = StringLiteral_OnTriggerBoxStayBegin_received__;
        str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
      }
code_?:
      pSVar27 = mscorlib.dll::System::String::String_Concat_4(pSVar27,str1,str2,(MethodInfo *)0x0);
code_?:
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar40 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar27,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      bVar9 = 0;
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
          pMVar33 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          bVar9 = 0;
          if (pOVar28 == (Object__Class *)0x0) break;
          pMVar33 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
        }
        bVar9 = 0;
        if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,eventCode,(MethodInfo *)0x0);
          if (pMVar38 == (MVWorldObject *)0x0) {
            pSVar27 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar27 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar27,
                                 StringLiteral__does_not_exist,(MethodInfo *)0x0);
            uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
            goto joined_?;
          }
          iVar39 = func_?();
          if (iVar39 != 0) {
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
          pSVar27 = StringLiteral_OnTriggerBoxStayEnd_received__bu;
          str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Int32);
        cRam_? = '\x01';
      }
      pEVar41 = photonEvent;
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      bVar9 = 0;
      if (pOVar28 != (Object__Class *)0x0) {
        eventCode = (MVEventCodes__Enum)(pOVar28->_0).name;
        bVar9 = 0;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar41,0x14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          bVar9 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar9 = 0, pOVar10 != (Object *)0x0))
          {
            pIVar11 = (pOVar10->klass->_0).element_class;
            pIVar12 = (TypeInfo__System__Int32->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            pIVar13 = TypeInfo__System__Int32;
            if (pIVar11 != pIVar12) goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar30;
            bVar9 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
              pSVar23 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar12) {
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
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar21;
        piVar14 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        bVar9 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar29 = (MVWorldInventory *)(pOVar28->_0).namespaze;
          bVar9 = 0;
          if (pMVar29 != (MVWorldInventory *)0x0) {
            MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                      (pMVar29,*piVar14,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  (pMVar15->fields)._NetworkGameStateListener_k__BackingField;
      bVar9 = 0;
      unaff_ESI = RVar6;
      RStack_24 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        RStack_17 = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0x42,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          iVar42 = *piVar14;
          piVar14 = (int32_t *)func_?();
          iVar43 = *piVar14;
          pMVar44 = (MVGameStateType__Enum *)func_?();
          MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                    ((MVNetworkGameStateListener *)RStack_24,*pMVar44,iVar43,iVar42,0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        iVar42 = *piVar14;
        pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (iVar42,(IWorldObjectManager *)pMVar33,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar45 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)(pMVar45->fields)._._ActorNr_k__BackingField;
          pRVar21 = (RegexCharClass_SingleRange *)func_?();
          if (*pRVar21 == unaff_ESI) goto code_?;
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            pWVar16 = (pMVar15->fields).worldNetwork;
            bVar9 = 0;
            if (pWVar16 != (WorldNetwork *)0x0) {
              RVar18 = (RegexCharClass_SingleRange)(pWVar16->fields)._.worldObjectClientManager;
              RStack_17 = RVar18;
              eventCode = (MVEventCodes__Enum)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar6,0x16,(MethodInfo *)0x0);
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0x46,(MethodInfo *)0x0);
              bVar9 = 0;
              unaff_ESI.First = 0;
              unaff_ESI.Last = 0;
              if (RVar18 != (RegexCharClass_SingleRange)0x0) {
                pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                          func_?(pOVar10,
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                         );
                piVar14 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)RStack_17,*piVar14,pDVar46,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
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
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        iVar42 = *piVar14;
        piVar14 = (int32_t *)func_?();
        iVar43 = *piVar14;
        pPVar47 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)RStack_24,*pPVar47,iVar43,iVar42,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar48 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x4b,(MethodInfo *)0x0);
      pOVar49 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar49,TypeInfo__System__Single);
      RStack_24 = *pRVar21;
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar48,TypeInfo__System__Single);
      RStack_17 = *pRVar21;
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Single);
      pEVar41 = photonEvent;
      eventCode = *pMVar30;
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar41,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?();
      RStack_50 = *pRVar21;
      puVar31 = (undefined4 *)func_?();
      pIStack_51 = (Int32__Array *)*puVar31;
      puVar31 = (undefined4 *)func_?();
      pMStack_32 = (MVPlayer *)*puVar31;
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      VStack_52.x = (float)eventCode;
      VStack_52.y = (float)RStack_17;
      VStack_52.z = (float)RStack_24;
      pMStack_53 = pMStack_32;
      pIStack_54 = pIStack_51;
      RStack_55 = RStack_50;
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
        unaff_EDI = *pRVar21;
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
          pMVar33 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          bVar9 = 0;
          if (pOVar28 == (Object__Class *)0x0) break;
          pMVar33 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
        }
        bVar9 = 0;
        if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar38 != (MVWorldObject *)0x0) {
            this_01 = pMVar38[1].fields.inputLinkRefs;
            bVar9 = 0;
            if (this_01 != (List_1_MV_WorldObject_Link_ *)0x0) {
              this_07 = (MVPickupOwner *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  ((GameObject *)this_01,
                                   MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                                  );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                 ((Object_1 *)this_07,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar26 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              bVar9 = 0;
              unaff_ESI.First = 0;
              unaff_ESI.Last = 0;
              if (this_07 != (MVPickupOwner *)0x0) {
                lookOrigin.y = VStack_52.y;
                lookOrigin.x = VStack_52.x;
                lookOrigin.z = VStack_52.z;
                lookDirection.y = (float)pIStack_54;
                lookDirection.x = (float)pMStack_53;
                lookDirection.z = (float)RStack_55;
                MVPickupOwner::MVPickupOwner_SetLineOfFire
                          (this_07,lookOrigin,lookDirection,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar15,photonEvent,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar48 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x58,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar48,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar56 = (MVGameMsgType__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar56,pDVar46,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_50 = (RegexCharClass_SingleRange)
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
      pOVar10 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
      MVar57 = eventCode;
      bVar9 = 0;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar58 = (MVTeam__Enum *)func_?(pOVar10,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar58;
        piVar14 = (int32_t *)func_?(RStack_50,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar57,*piVar14,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_50 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        RStack_24 = *pRVar21;
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        RStack_17 = *pRVar21;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(MVEventCodes__Enum *)((int)unaff_ESI + 0xc) = eventCode;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_17;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 8) = RStack_24;
          pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          bVar9 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1
                      ((WorldNetwork *)pOVar28,(ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        piVar14 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        bVar9 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          WorldNetwork::WorldNetwork_RemoveObjectLink
                    ((WorldNetwork *)pOVar28,*piVar14,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
    bVar9 = 0;
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) break;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar9 = pIVar11 < pIVar12;
    pIVar13 = TypeInfo__System__Int32;
    if (pIVar11 != pIVar12) goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    unaff_ESI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    RStack_50 = (RegexCharClass_SingleRange)TypeInfo__System__Int32;
    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
      bVar9 = 0;
      if (pOVar28 != (Object__Class *)0x0) {
        pMVar22 = (MVWorldObjectClientManagerNetwork *)(pOVar28->_0).name;
        bVar9 = 0;
        if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                    (pMVar22,eventCode,worldObjectsToGroup,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    worldObjectsToGroup = (Int32__Array *)func_?(unaff_ESI,TypeInfo__System__Int32);
    bVar9 = 0;
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Int32);
        cRam_? = '\x01';
      }
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,99,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          pIVar13 = TypeInfo__System__Int32;
          if (pIVar11 != pIVar12) goto code_?;
          piVar14 = (int32_t *)func_?();
          pOVar28 = ((Object *)((int)unaff_ESI + 0x20))->klass;
          bVar9 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                      ((MVNetworkGame_GameDataQueryManager *)pOVar28,*piVar14,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
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
      this_02 = *(WinningConditionManager **)((int)unaff_ESI + 0xac);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      bVar9 = 0;
      if (this_02 != (WinningConditionManager *)0x0) {
        if ((this_02->fields)._WinningConditionFound_k__BackingField == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
code_?:
          if (((Object *)((int)unaff_ESI + 0xb8))->klass == (Object__Class *)0x0)
          goto code_?;
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb8))->klass;
          bVar9 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            uVar59._0_2_ = (pOVar28->_0).byval_arg.attrs;
            uVar59._2_1_ = (pOVar28->_0).byval_arg.type;
            uVar59._3_1_ = (pOVar28->_0).byval_arg.field_0x7;
            (*(code *)(pOVar28->_0).namespaze)((pOVar28->_0).element_class,unaff_EDI,uVar59);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
        else {
          bVar9 = 0;
          if (this_02 != (WinningConditionManager *)0x0) {
            this_08 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVWorldObject.dll::WinningConditionManager::
                      WinningConditionManager_GetForfilledWinningConditions
                                (this_02,(MethodInfo *)0x0);
            bVar9 = 0;
            if (this_08 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              if ((this_08->fields)._size == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_No_winning_condition_found_even_,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              if (1 < (this_08->fields)._size) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Only_1_winning_condition_current,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              unaff_EDI = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_08,0,
                                     MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                                    );
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar21;
        piVar14 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        bVar9 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar22 = (MVWorldObjectClientManagerNetwork *)(pOVar28->_0).name;
          bVar9 = 0;
          if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                      (pMVar22,*piVar14,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar48 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x81,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)
                func_?(pOVar48,TypeInfo__MV__Common__AchievementType);
      RStack_50 = *pRVar21;
      pOVar48 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&RStack_50);
      pSVar27 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar48,
                           (MethodInfo *)0x0);
code_?:
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar40 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar27,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar60 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar10,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar10 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar9 = 0;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (pDVar60 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar60,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar21 = (RegexCharClass_SingleRange *)
                  func_?(TVar61.m_Index,TypeInfo__System__Int32);
        RStack_24 = *pRVar21;
        auStack_62[1] = 0;
        pOVar10 = (Object *)func_?(TypeInfo__System__Byte,auStack_62 + 1);
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar60,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar21 = (RegexCharClass_SingleRange *)
                  func_?(TVar61.m_Index,TypeInfo__System__Int32);
        RStack_17 = *pRVar21;
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pMVar63 = (pMVar15->fields)._PlayerController_k__BackingField;
          RStack_50 = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (pMVar63 != (MVLocalObjectController *)0x0) {
            pbVar64 = (byte *)func_?(pOVar10,TypeInfo__System__Byte);
            bVar9 = *pbVar64;
            piVar14 = (int32_t *)func_?(RStack_50,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar63,*piVar14,(int32_t)RStack_24,(int32_t)RStack_17,(uint)bVar9,
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar14 = (int32_t *)func_?();
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar33 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar16 = (pMVar15->fields).worldNetwork;
          bVar9 = 0;
          unaff_ESI = unaff_ESI;
          if (pWVar16 == (WorldNetwork *)0x0) break;
          pMVar33 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
        }
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar33,*piVar14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__MVAvatar;
          if ((unaff_ESI == (RegexCharClass_SingleRange)0x0) ||
             (iVar39 = func_?(), iVar39 == 0)) goto code_?;
          iVar39 = func_?();
          bVar9 = 0;
          if (iVar39 != 0) {
            uVar59 = func_?(unaff_ESI,TypeInfo__MVAvatar);
            func_?(0x5a,uVar59);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(pOVar10,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar10 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar21 = (RegexCharClass_SingleRange *)
                  func_?(TVar61.m_Index,TypeInfo__System__Int32);
        RStack_50 = *pRVar21;
        auStack_62[1] = 0;
        pOVar10 = (Object *)func_?(TypeInfo__System__Byte,auStack_62 + 1);
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar21 = (RegexCharClass_SingleRange *)
                  func_?(TVar61.m_Index,TypeInfo__System__Int32);
        RStack_65 = *pRVar21;
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            bVar9 = 0;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          bVar9 = 0;
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar33,(int32_t)RStack_50,(MethodInfo *)0x0);
            RStack_55 = (RegexCharClass_SingleRange)
                        func_?(pMVar38,TypeInfo__MVWorldObjectSpawnerVehicle);
            bVar9 = 0;
            if (RStack_55 != (RegexCharClass_SingleRange)0x0) {
              RStack_24 = *(RegexCharClass_SingleRange *)((int)RStack_55 + 0xfc);
              auStack_62[0] = 3;
              pOVar10 = (Object *)func_?(TypeInfo__System__Byte,auStack_62);
              TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI,pOVar10,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar31 = (undefined4 *)func_?(TVar61.m_Index,TypeInfo__System__Int32);
              pIStack_51 = (Int32__Array *)*puVar31;
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
              puVar31 = (undefined4 *)func_?(pOVar10,TypeInfo__System__Int32);
              pMStack_32 = (MVPlayer *)*puVar31;
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
              pRVar21 = (RegexCharClass_SingleRange *)
                        func_?(pOVar10,TypeInfo__System__Int32);
              RStack_17 = *pRVar21;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x5c,(MethodInfo *)0x0);
              pRVar21 = (RegexCharClass_SingleRange *)func_?();
              RStack_50 = *pRVar21;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
              pRVar21 = (RegexCharClass_SingleRange *)func_?();
              VStack_52.z = *(float *)pRVar21;
              pMVar15 = (this->fields).networkGame;
              bVar9 = 0;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (pMVar15 != (MVNetworkGame *)0x0) {
                pWVar16 = (pMVar15->fields).worldNetwork;
                bVar9 = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pWVar16 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar16,(int32_t)pMStack_32,0,1,(int32_t)RStack_24,(int32_t)pIStack_51,
                             (int32_t)RStack_17,(int32_t)RStack_50,(MethodInfo *)0x0);
                  pMVar15 = (this->fields).networkGame;
                  bVar9 = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar15 != (MVNetworkGame *)0x0) {
                    if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
                      pMVar33 = (MVWorldObjectClientManager *)0x0;
                    }
                    else {
                      pWVar16 = (pMVar15->fields).worldNetwork;
                      bVar9 = 0;
                      unaff_EDI = (RegexCharClass_SingleRange)this;
                      if (pWVar16 == (WorldNetwork *)0x0) break;
                      pMVar33 = (MVWorldObjectClientManager *)
                                (pWVar16->fields)._.worldObjectClientManager;
                    }
                    bVar9 = 0;
                    unaff_EDI = (RegexCharClass_SingleRange)this;
                    if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
                      RStack_50 = (RegexCharClass_SingleRange)
                                  MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObject
                                            (pMVar33,(int32_t)pIStack_51,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      unaff_EDI = (RegexCharClass_SingleRange)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI = (RegexCharClass_SingleRange)
                                    func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate)
                        ;
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
                      bVar9 = 0;
                      unaff_ESI = RVar6;
                      if (RStack_50 != (RegexCharClass_SingleRange)0x0) {
                        func_?(0x2c,RStack_50,unaff_EDI);
                        pMVar15 = (this->fields).networkGame;
                        bVar9 = 0;
                        if (pMVar15 != (MVNetworkGame *)0x0) {
                          pMVar63 = (pMVar15->fields)._PlayerController_k__BackingField;
                          RStack_50 = (RegexCharClass_SingleRange)
                                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                      EventData_get_Item((EventData *)RVar6,0xfe,(MethodInfo *)0x0)
                          ;
                          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                    EventData_get_Item((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
                          bVar9 = 0;
                          unaff_EDI.First = 0;
                          unaff_EDI.Last = 0;
                          if (pMVar63 != (MVLocalObjectController *)0x0) {
                            pbVar64 = (byte *)func_?(pOVar10,TypeInfo__System__Byte);
                            bVar9 = *pbVar64;
                            piVar14 = (int32_t *)func_?(RStack_50,TypeInfo__System__Int32);
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar63,*piVar14,(int32_t)pIStack_51,(int32_t)RStack_65,
                                       (uint)bVar9,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      ((MVWorldObjectSpawner *)RStack_55,(int32_t)VStack_52.z,
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
    }
    break;
  case MVEventCodes__Enum_Reward:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      RVar18 = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar10,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x90,(MethodInfo *)0x0);
      pfVar66 = (float *)func_?(pOVar10,TypeInfo__MV__Common__RewardType);
      fVar67 = *pfVar66;
      RStack_55 = RVar18;
      RStack_65 = (RegexCharClass_SingleRange)func_?(TypeInfo__System__Int32,&RStack_55);
      auStack_62[0] = eventCode._3_1_;
      pOVar10 = (Object *)func_?();
      VStack_52.z = fVar67;
      pOVar48 = (Object *)func_?();
      pSVar27 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)RStack_65,
                           pOVar10,pOVar48,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar10,TypeInfo__System__Byte);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pWVar16 = (pMVar15->fields).worldNetwork;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (pWVar16 != (WorldNetwork *)0x0) {
          this_03 = (pWVar16->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (RegexCharClass_SingleRange)
                      func_?(TypeInfo__MV__WorldObject__BytePacker);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (this_03 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_03,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar16 != (WorldNetwork *)0x0) {
        this_04 = (RuntimeEventManager *)(pWVar16->fields)._.runtimeEventManagerNetwork;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (this_04 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_04,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      unaff_EDI = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      RStack_24 = *pRVar21;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar10,TypeInfo__System__Byte);
      RStack_17.First._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa0,(MethodInfo *)0x0);
      puVar31 = (undefined4 *)func_?();
      pIStack_51 = (Int32__Array *)*puVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa1,(MethodInfo *)0x0);
      puVar31 = (undefined4 *)func_?();
      pMStack_32 = (MVPlayer *)*puVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa3,(MethodInfo *)0x0);
      pcVar68 = (char *)func_?();
      pMVar15 = (this->fields).networkGame;
      if (*pcVar68 == '\0') {
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pGVar69 = (pMVar15->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar69 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar69,(GameStatCounterType__Enum)RStack_17,(int32_t)unaff_EDI,
                       (MVTeam__Enum)RStack_24,(int32_t)pIStack_51,(int32_t)pMStack_32,
                       (bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
      else {
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pGVar69 = (pMVar15->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar69 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar69,(GameStatCounterType__Enum)RStack_17,(MVTeam__Enum)RStack_24,
                       (int32_t)unaff_EDI,(int32_t)pIStack_51,(int32_t)pMStack_32,(bool)eventCode,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar70 = (Byte__Array *)func_?(pOVar10,TypeInfo__System__Byte);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pGVar69 = (pMVar15->fields).gameStatCounterManager;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (pGVar69 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar69,pBVar70,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10,TypeInfo__System__Int32);
      eventCode = *pMVar30;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?(TypeInfo__MV__WorldObject__BytePacker)
      ;
      pMVar71 = (MethodInfo *)0x0;
      pBVar70 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar70,pMVar71);
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        this_05 = (pMVar15->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar9 = 0;
        if (this_05 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_05,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa9,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar21 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar21;
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        bVar9 = 0;
        if (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) {
          pMVar72 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),eventCode,
                               (MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_set_Level(pMVar72,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar73 = (bool *)func_?(pOVar10,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar73);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar15->fields)._GameCoinManager_k__BackingField;
        bVar9 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar74 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar74,*pbVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,199,(MethodInfo *)0x0);
    bVar9 = 0;
    if (pOVar10 == (Object *)0x0) break;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar9 = pIVar11 < pIVar12;
    pIVar13 = TypeInfo__System__Int32;
    if (pIVar11 != pIVar12) goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,200,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
code_?:
      bVar9 = 0;
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar75 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        bVar9 = 0;
        if (pMVar75 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar75->fields)._._.invoke_impl)
                    ((pMVar75->fields)._._.method_code,eventCode,unaff_ESI,
                     (pMVar75->fields)._._.method);
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
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    unaff_ESI.First = 0;
    unaff_ESI.Last = 0;
    if (bVar19) {
      unaff_ESI = unaff_EDI;
    }
    bVar9 = 0;
    pDVar76 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
    if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (((pDVar46->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar46->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar77 = pDVar46;
    }
    bVar9 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = RVar6;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,(EventData *)RVar6,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pIStack_51 = (Int32__Array *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      pBVar70 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pIStack_51,pBVar70,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x85,(MethodInfo *)0x0);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if (pIVar11 != pIVar12) {
code_?:
          func_?(pOVar10,pIVar13);
          pOVar10 = extraout_ECX;
          pIVar13 = extraout_EDX;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?(pOVar10);
        RStack_17.First._0_1_ = *puVar5;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,100,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
          if (pIVar11 != pIVar12) goto code_?;
          puVar5 = (undefined1 *)func_?(pOVar10);
          unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
          eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
          bVar9 = 0;
          RStack_24 = unaff_EDI;
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
              bVar9 = 0;
              if (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) {
                pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),
                                     (MethodInfo *)0x0);
                bVar9 = 0;
                if (pMVar45 != (MVLocalPlayer *)0x0) {
                  unaff_ESI = (RegexCharClass_SingleRange)
                              (pMVar45->fields)._._ActorNr_k__BackingField;
                  this_09 = (DefaultBinder_BinderState *)func_?();
                  mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                            (this_09,pIStack_51,(int32_t)unaff_ESI,(bool)RStack_17.First,
                             (MethodInfo *)0x0);
                  unaff_EDI = RStack_24;
                  *(DefaultBinder_BinderState **)((int)RStack_24 + 0x10c) = this_09;
                  func_?((MonitorData *)((int)RStack_24 + 0x10c));
code_?:
                  if (eventCode._3_1_ != MVEventCodes__Enum_NoCodeSet >> 0x18)
                  goto code_?;
                  bVar9 = 0;
                  if (*(MethodInfo **)((int)unaff_EDI + 0x110) != (MethodInfo *)0x0) {
                    *(bool *)&(*(MethodInfo **)((int)unaff_EDI + 0x110))->name = 1;
                    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__StatHatWrapper);
                    }
                    StatHatWrapper::StatHatWrapper_Count
                              (StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0);
                    this_10 = (NavMesh_OnNavMeshPreUpdate *)
                              func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_10,(Object *)unaff_EDI,MethodInfo__MVNetworkGame__CreateGame__,
                               (MethodInfo *)0x0);
                    coroutine = WaitForFrames::WaitForFrames_Frames
                                          (3,(UnityAction *)this_10,(MethodInfo *)0x0);
                    Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
              }
            }
            else {
              RStack_55 = *(RegexCharClass_SingleRange *)((int)unaff_EDI + 0x10c);
              bVar9 = 0;
              if (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4) != (MVPlayerContainer *)0x0) {
                pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (*(MVPlayerContainer **)((int)unaff_EDI + 0xe4),
                                     (MethodInfo *)0x0);
                bVar9 = 0;
                if (pMVar45 != (MVLocalPlayer *)0x0) {
                  unaff_ESI = (RegexCharClass_SingleRange)
                              (pMVar45->fields)._._ActorNr_k__BackingField;
                  VStack_52.z = (float)func_?();
                  mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                            ((DefaultBinder_BinderState *)VStack_52.z,pIStack_51,(int32_t)unaff_ESI,
                             (bool)RStack_17.First,(MethodInfo *)0x0);
                  bVar9 = 0;
                  if (RStack_55 != (RegexCharClass_SingleRange)0x0) {
                    MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                              ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)RStack_55,
                               (MVNetworkGame_GameDataQueryManager_GameDataQuery *)VStack_52.z,
                               (MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    pBVar70 = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
    bVar9 = 0;
    if (pBVar70 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar45 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar45->fields)._._ActorNr_k__BackingField;
          bVar9 = 0;
          if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
          pSVar23 = (String__Class *)TypeInfo__System__Int32;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) != pIVar12) goto code_?;
          pMVar30 = (MVEventCodes__Enum *)func_?();
          if (*pMVar30 == eventCode) {
            MVGameControllerBase::MVGameControllerBase_set_JoinState
                      (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
            MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
            pMVar15 = (this->fields).networkGame;
            bVar9 = 0;
            unaff_ESI = (RegexCharClass_SingleRange)this;
            if (pMVar15 != (MVNetworkGame *)0x0) {
              pMVar74 = (pMVar15->fields)._GameCoinManager_k__BackingField;
              bVar9 = 0;
              if (pMVar74 != (MVGameCoinManager *)0x0) {
                MVGameCoinManager::MVGameCoinManager_Reset
                          (pMVar74,(this->fields).networkGame,(MethodInfo *)0x0);
                pMVar15 = (this->fields).networkGame;
                bVar9 = 0;
                if (pMVar15 != (MVNetworkGame *)0x0) {
                  pMVar78 = (pMVar15->fields).operationRequests;
                  bVar9 = 0;
                  if (pMVar78 != (MVNetworkGame_OperationRequests *)0x0) {
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_StartSessionTime(pMVar78,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
            break;
          }
code_?:
          uStack_1 = 0;
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar15 == (MVNetworkGame *)0x0) break;
          eventCode = (MVEventCodes__Enum)(pMVar15->fields).playerContainer;
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          bVar9 = 0;
          if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (bVar9 = 0, pOVar10 == (Object *)0x0))
          break;
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
          if (pIVar11 == pIVar12) {
            puVar5 = (undefined1 *)func_?(pOVar10);
            eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
            bVar9 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
              pSVar23 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar12) {
                piVar14 = (int32_t *)func_?(unaff_ESI);
                MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                          ((MVPlayerContainer *)unaff_EDI,*piVar14,(bool)eventCode,(MethodInfo *)0x0
                          );
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
code_?:
          func_?(pOVar10,pIVar13);
          outData = unaff_EDI;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,7,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar9 = 0, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
        if (pIVar11 != pIVar12) goto code_?;
        pcVar68 = (char *)func_?();
        RStack_55.First._0_1_ = *pcVar68 == '\0';
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
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          outData.First = 0;
          outData.Last = 0;
          if (bVar19) {
            outData = unaff_ESI;
          }
          bVar9 = 0;
          pMVar20 = (MVAvatarSpawnRoleCreator__Class *)
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
        bVar9 = 0;
        unaff_EDI = outData;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar39 = func_?(4,TypeInfo__IEditModeUI,eventCode);
          if (iVar39 == 0) {
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
          pIVar34 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          bVar9 = 0;
          if (pIVar34 != (IEditModeUI *)0x0) {
            pPVar35 = (PlayerShopInventoryRepository *)
                      func_?(4,TypeInfo__IEditModeUI,pIVar34);
            bVar9 = 0;
            if (pPVar35 != (PlayerShopInventoryRepository *)0x0) {
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_AddShopItems
                        (pPVar35,(Dictionary_2_System_Object_System_Object_ *)outData,
                         (bool)RStack_55.First,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (pDVar46 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (((pDVar46->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar46->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar77 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar77 = pDVar46;
        }
        bVar9 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar77 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar77,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    RVar6 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) {
      pBVar70 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar70,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      bVar9 = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(RegexCharClass_SingleRange *)(eventCode + 0x9c) = unaff_EDI;
        func_?(eventCode + 0x9c,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    pBVar70 = (Byte__Array *)func_?();
    bVar9 = 0;
    unaff_EDI.First = 0;
    unaff_EDI.Last = 0;
    if (pBVar70 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0))
      {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        pIVar13 = TypeInfo__System__Int32;
        if (pIVar11 != pIVar12) goto code_?;
        puVar31 = (undefined4 *)func_?();
        if ((Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr ==
            (Action_1_Int32_ *)0x0) goto code_?;
        pAVar79 = (Action_1_Int32_ *)
                  (((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr;
        bVar9 = 0;
        if (pAVar79 != (Action_1_Int32_ *)0x0) {
          (*(pAVar79->fields)._._.invoke_impl)
                    ((pAVar79->fields)._._.method_code,*puVar31,(pAVar79->fields)._._.method);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar78 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar78 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar78,(MethodInfo *)0x0);
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
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
      RStack_55 = *pRVar21;
      pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&RStack_55);
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar10,
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
    bVar9 = 0;
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
    bVar9 = 0;
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pMVar80 = (pMVar15->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                  (pMVar80,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      pMVar80 = (pMVar15->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar80 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar80,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)(pMVar15->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar14,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)(pMVar15->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar14,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    RVar6 = (RegexCharClass_SingleRange)func_?(pOVar10,TypeInfo__System__Int32);
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = RVar6;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (pMVar15 == (MVNetworkGame *)0x0) break;
    if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar33 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar16 = (pMVar15->fields).worldNetwork;
      bVar9 = 0;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pWVar16 == (WorldNetwork *)0x0) break;
      pMVar33 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
    }
    bVar9 = 0;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
    bVar9 = 0;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar9 = 0;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,(int32_t)((Object *)((int)RVar6 + 0x10))->klass,
                               (MethodInfo *)0x0);
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            bVar9 = 0;
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          bVar9 = *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) ==
                   (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          bVar9 = 0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar33,(int32_t)*(MonitorData **)((int)RVar6 + 0x14),
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
            bVar9 = 0;
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
              iVar39 = func_?(unaff_ESI,TypeInfo__MVAvatarLocal);
              bVar9 = 0;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (iVar39 != 0) {
                bVar26 = 9;
                this_11 = (MVAvatarLocal *)func_?(unaff_ESI,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_11,bVar26,(MethodInfo *)unaff_ESI);
                pMVar15 = (this->fields).networkGame;
                bVar9 = 0;
                unaff_ESI.First = 0;
                unaff_ESI.Last = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar15 != (MVNetworkGame *)0x0) {
                  pMVar63 = (pMVar15->fields)._PlayerController_k__BackingField;
                  bVar9 = 0;
                  unaff_ESI.First = 0;
                  unaff_ESI.Last = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar63 != (MVLocalObjectController *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Debug);
                      func_?(&StringLiteral_HandleDetachWorldObjectFromVehic);
                      cRam_? = '\x01';
                    }
                    (pMVar63->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
                    func_?(&(pMVar63->fields).attachState,0);
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
      unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
      bVar9 = 0;
      RStack_65 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        VStack_52.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        RStack_55 = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          iVar42 = *piVar14;
          piVar14 = (int32_t *)func_?();
          iVar43 = *piVar14;
          puVar5 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          piVar14 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)RStack_65,*piVar14,eventCode,iVar43,iVar42,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar10,TypeInfo__System__Boolean);
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
      pMVar71 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar71);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      pMVar71 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar10 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar27 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar27,pMVar71);
        eventCode = (MVEventCodes__Enum)pOVar10[2].monitor;
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
        pGVar81 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pGVar81 != (GoldRewardManager *)0x0) {
          pbVar73 = (bool *)func_?(pOVar10,TypeInfo__System__Boolean);
          (pGVar81->fields).isGoldRewardGame = *pbVar73;
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
          pbVar73 = (bool *)func_?(pOVar10,TypeInfo__System__Boolean);
          BStack_8.m_value = *pbVar73;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar27 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_8,(MethodInfo *)0x0);
          pSVar27 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar27,
                               (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?(pOVar10,TypeInfo__System__String);
      pSVar27 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar27,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar27,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar39 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pMVar71 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar27 = StringLiteral_V;
      bVar9 = 0;
      unaff_ESI = unaff_ESI;
      if (iVar39 != 0) {
        pDVar60 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar60,(Object *)pSVar27,pMVar71);
        puVar5 = (undefined1 *)func_?(TVar61.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar15 = (this->fields).networkGame;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        unaff_EDI = (RegexCharClass_SingleRange)pSVar27;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32);
          unaff_ESI = *pRVar21;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__SayChatBubbleVisibilityManager);
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar82 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          bVar9 = 0;
          if (pAVar82 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar82->fields)._._.invoke_impl)
                      ((pAVar82->fields)._._.method_code,unaff_ESI,eventCode,
                       (pAVar82->fields)._._.method);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?(pOVar10,TypeInfo__System__String);
      bVar26 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar27,(MethodInfo *)0x0);
      if (bVar26 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar9 = 0;
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar10 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar10[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar10[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar27,pMVar71);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pMVar83 = (pMVar15->fields).playerContainer;
        bVar9 = 0;
        if (pMVar83 != (MVPlayerContainer *)0x0) {
          pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar83,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar45 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar45,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar27,pMVar71);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar15->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        bVar9 = 0;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar14 = (int32_t *)func_?(pOVar10,TypeInfo__System__Int32);
          pMVar72 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            (pMVar72->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar72->fields).playerPlanetDataRemote,unaff_ESI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pSVar27 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar71);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar27,(MethodInfo *)0x0);
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar9 = 0;
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
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,(MethodInfo *)unaff_ESI);
      bVar9 = 0;
      if (pOVar10 != (Object *)0x0) {
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          pLVar84 = (pMVar15->fields).levelRewardsManager;
          bVar9 = 0;
          if (pLVar84 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar84,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar9 = 0;
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
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,(MethodInfo *)unaff_ESI);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pLVar84 = (pMVar15->fields).levelRewardsManager;
        bVar9 = 0;
        if ((pOVar10 != (Object *)0x0) && (bVar9 = 0, pLVar84 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar84,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar27 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar71);
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar27 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar27,pMVar71);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar71 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pKVar85 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar71);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar85;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar12;
        pSVar23 = (String__Class *)TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar12) {
          piVar14 = (int32_t *)func_?(unaff_ESI);
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar14,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar15 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar15,photonEvent,(MethodInfo *)0x0);
      pMVar15 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = RVar6;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar15,(EventData *)RVar6,(MethodInfo *)0x0);
        bVar9 = 0;
        if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
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
          bVar9 = 0;
          if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
            iVar39 = func_?(4,TypeInfo__IEditModeUI,eventCode);
            if (iVar39 == 0) {
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
            pIVar34 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
            bVar9 = 0;
            unaff_ESI = (RegexCharClass_SingleRange)this;
            if (pIVar34 != (IEditModeUI *)0x0) {
              pPVar35 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,pIVar34);
              bVar9 = 0;
              if (pPVar35 != (PlayerShopInventoryRepository *)0x0) {
                UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                PlayerShopInventoryRepository_Setup(pPVar35,(EventData *)RVar6,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pVVar86 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_52,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar87 = pVVar86->x;
      uVar88 = pVVar86->y;
      eventCode = (MVEventCodes__Enum)pVVar86->z;
      pIStack_54 = (Int32__Array *)uVar87;
      RStack_55 = (RegexCharClass_SingleRange)uVar88;
      pQVar89 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(((EventData *)RVar6)->fields).Parameters
                           ,(MethodInfo *)0x0);
      fStack_90 = pQVar89->x;
      VStack_52.x = pQVar89->y;
      VStack_52.y = pQVar89->z;
      VStack_52.z = pQVar89->w;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pMVar15->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar14 = (int32_t *)func_?();
          pMVar72 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            this_06 = (pMVar72->fields).spawnRolesManager;
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xbf,(MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_06 != (SpawnRolesManager *)0x0) {
              piVar14 = (int32_t *)func_?(pOVar10,TypeInfo__System__Int32);
              position.y = (float)RStack_55;
              position.x = (float)pIStack_54;
              position.z = (float)eventCode;
              rotation.y = VStack_52.x;
              rotation.x = fStack_90;
              rotation.z = VStack_52.y;
              rotation.w = VStack_52.z;
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
    bVar9 = 0;
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
      pSVar27 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar27,(MethodInfo *)unaff_ESI);
      RStack_55 = (RegexCharClass_SingleRange)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)RStack_55,(MethodInfo *)0x0)
      ;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        unaff_ESI = (RegexCharClass_SingleRange)(pMVar15->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (bVar9 = 0, pOVar10 != (Object *)0x0)
           ) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          pIVar13 = TypeInfo__System__Int32;
          if (pIVar11 != pIVar12) goto code_?;
          piVar14 = (int32_t *)func_?(pOVar10);
          pMVar72 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar72,(ISpawnRoleChangeHandler *)RStack_55,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar9 = 0;
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
        bVar9 = 0;
        pSVar23 = TypeInfo__System__String;
        if (value == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      outData = (RegexCharClass_SingleRange)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)value,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
      pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = outData;
      if ((outData != (RegexCharClass_SingleRange)0x0) &&
         (bVar9 = 0, pMVar33 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,(int32_t)(((Il2CppType *)((int)outData + 0x18))->data).
                                                __klassIndex,(MethodInfo *)0x0);
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar15,(int32_t)(((Il2CppType *)((int)outData + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar15,(int32_t)((MVNetworkGame__Fields *)((int)outData + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
              if (pIVar11 != pIVar12) goto code_?;
              puVar5 = (undefined1 *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*puVar5);
              bVar9 = 0;
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                     (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                RVar91.First = 0;
                RVar91.Last = 0;
                if (bVar19) {
                  RVar91 = unaff_ESI;
                }
                bVar9 = 0;
                pMVar20 = TypeInfo__MVAvatarSpawnRoleCreator;
                if (RVar91 != (RegexCharClass_SingleRange)0x0) {
                  pMVar71 = (MethodInfo *)0x0;
                  MVar57 = eventCode;
                  this_12 = (MVAvatarSpawnRoleCreator *)
                            func_?(unaff_ESI,TypeInfo__MVAvatarSpawnRoleCreator);
                  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                            (this_12,(SpawnRoleBodySwitchData *)outData,(bool)MVar57,pMVar71);
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
    bVar9 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  func_?(pOVar10,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar10 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      bVar9 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pRVar21 = (RegexCharClass_SingleRange *)
                  func_?(TVar61.m_Index,TypeInfo__System__Int32);
        RStack_55 = *pRVar21;
        auStack_62[0] = 0;
        pOVar10 = (Object *)func_?(TypeInfo__System__Byte,auStack_62);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar10
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar15 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar15 != (MVNetworkGame *)0x0) {
          if ((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar16 = (pMVar15->fields).worldNetwork;
            bVar9 = 0;
            if (pWVar16 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar16->fields)._.worldObjectClientManager;
          }
          bVar9 = 0;
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar33,(int32_t)RStack_55,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
            pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10,TypeInfo__System__Int32)
            ;
            unaff_ESI = *pRVar21;
            iVar39 = func_?(unaff_EDI,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            bVar9 = 0;
            if (iVar39 != 0) {
              pMVar71 = (MethodInfo *)0x0;
              this_13 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_13,(int32_t)unaff_ESI,pMVar71);
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
    bVar9 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar15 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)(pMVar15->fields).playerContainer;
      bVar9 = 0;
      unaff_ESI = RVar6;
      if (photonEvent != (EventData *)0x0) {
        iVar42 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          bVar26 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI,iVar42,&pMStack_7,(MethodInfo *)0x0);
          if (bVar26 == 0) {
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
          puVar92 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar92);
          bVar9 = 0;
          if (pMStack_7 != (MVPlayer *)0x0) {
            if ((pMStack_7->fields).playerState != *puVar92) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_7,eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
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
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        RVar18.First = 0;
        RVar18.Last = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
            RVar18 = unaff_ESI;
          }
          bVar9 = 0;
          pSVar23 = TypeInfo__System__String;
          if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)RVar18,(MethodInfo *)0x0);
        pMVar78 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar78 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar78,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar9 = 0;
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
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          pDVar93 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar19) {
            pDVar93 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          bVar9 = 0;
          eventCode = (MVEventCodes__Enum)pDVar93;
          if (pDVar93 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar9 = 0;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          RVar6 = (RegexCharClass_SingleRange)&UNK_?;
          this_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar9 = 0;
          if (this_14 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar94 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_14,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (RegexCharClass_SingleRange)&stack0xffffff88;
            VStack_52.y = 0.0;
            RVar18 = (RegexCharClass_SingleRange)pDVar94->_currentValue;
            uStack_1 = 3;
            VStack_52.z = (float)unaff_ESI;
            do {
              bVar26 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar26 == 0) {
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
              if (RVar18 != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)RVar18 == TypeInfo__System__String) {
                  unaff_EDI = RVar18;
                }
                bVar9 = 0;
                pSVar23 = TypeInfo__System__String;
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              bVar9 = 0;
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar61 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar61.m_Index == 0) {
                pSVar27 = (String *)0x0;
                RVar6 = (RegexCharClass_SingleRange)::StringLiteral___;
              }
              else {
                RStack_55 = (RegexCharClass_SingleRange)::StringLiteral___;
                pSVar27 = (String *)func_?();
                RVar6 = RStack_55;
              }
              pSVar27 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI,(String *)RVar6,pSVar27,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar27,(MethodInfo *)0x0);
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
          pIVar13 = TypeInfo__System__Int32;
          if (pIVar11 != pIVar12) goto code_?;
          pRVar21 = (RegexCharClass_SingleRange *)func_?();
          unaff_ESI = *pRVar21;
          pMVar15 = (this->fields).networkGame;
          bVar9 = 0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar15 != (MVNetworkGame *)0x0) {
            pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar15,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pMVar45 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI ==
                  (RegexCharClass_SingleRange)(pMVar45->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              pMVar15 = (this->fields).networkGame;
              bVar9 = 0;
              if (pMVar15 != (MVNetworkGame *)0x0) {
                pMVar83 = (pMVar15->fields).playerContainer;
                bVar9 = 0;
                if (pMVar83 != (MVPlayerContainer *)0x0) {
                  bVar26 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar83,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar26 == 0) {
code_?:
                    pMVar15 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar15 != (MVNetworkGame *)0x0) {
                      pMVar83 = (pMVar15->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar83 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar83,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = uStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar15 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar15 != (MVNetworkGame *)0x0) {
                      pMVar83 = (pMVar15->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar83 != (MVPlayerContainer *)0x0) {
                        pMStack_32 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar83,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pIStack_51 = (Int32__Array *)
                                     func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                    *)pIStack_51,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_52.z = (float)func_?(TypeInfo__System__Byte,
                                                             (byte *)((int)&eventCode + 3));
                        RStack_55 = unaff_ESI;
                        pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&RStack_55);
                        bVar9 = 0;
                        if (pIStack_51 != (Int32__Array *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pIStack_51,
                                     (Object *)VStack_52.z,pOVar10,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          auStack_62[0] = 3;
                          pOVar10 = (Object *)func_?(TypeInfo__System__Byte,auStack_62);
                          bVar9 = 0;
                          if (pMStack_32 != (MVPlayer *)0x0) {
                            pDVar95 = (Delegate__Array *)
                                      (pMStack_32->fields)._UserProfileData_k__BackingField;
                            bVar9 = 0;
                            if (pDVar95 != (Delegate__Array *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pIStack_51,
                                         pOVar10,(Object *)pDVar95->max_length,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              auStack_62[1] = 6;
                              VStack_52.z = (float)func_?(TypeInfo__System__Byte,
                                                                   auStack_62 + 1);
                              pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar9 = 0;
                              if (pMVar15 != (MVNetworkGame *)0x0) {
                                pFVar36 = (pMVar15->fields)._Friends_k__BackingField;
                                bVar9 = 0;
                                if (pFVar36 != (FriendList *)0x0) {
                                  bStack_96 = FriendList::FriendList_IsFriend
                                                        (pFVar36,(int32_t)(pMStack_32->fields).
                                                                         _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar10 = (Object *)
                                            func_?(TypeInfo__System__Boolean,&bStack_96);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pIStack_51
                                             ,(Object *)VStack_52.z,pOVar10,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pIStack_51
                                             ,(MethodInfo *)0x0);
                                  pMVar15 = (this->fields).networkGame;
                                  bVar9 = 0;
                                  if (pMVar15 != (MVNetworkGame *)0x0) {
                                    pGVar69 = (pMVar15->fields).gameStatCounterManager;
                                    bVar9 = 0;
                                    if (pGVar69 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar69,(int32_t)unaff_ESI,
                                                 (pMStack_32->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar15 = (this->fields).networkGame;
                                      bVar9 = 0;
                                      if (pMVar15 != (MVNetworkGame *)0x0) {
                                        pGVar69 = (pMVar15->fields).gameStatCounterManager;
                                        bVar9 = 0;
                                        if (pGVar69 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar69,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = RVar6;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          pIVar13 = TypeInfo__System__Int32;
          if (pIVar11 == pIVar12) {
            pRVar21 = (RegexCharClass_SingleRange *)func_?();
            RStack_50 = *pRVar21;
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              pIVar13 = TypeInfo__System__Int32;
              if (pIVar11 != pIVar12) goto code_?;
              pMVar30 = (MVEventCodes__Enum *)func_?(pOVar10);
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
                bVar9 = 0;
                pSVar23 = TypeInfo__System__String;
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0xbc,(MethodInfo *)0x0);
              bVar9 = 0;
              if (pOVar10 != (Object *)0x0) {
                pIVar11 = (pOVar10->klass->_0).element_class;
                pIVar12 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar9 = pIVar11 < pIVar12;
                pIVar13 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
                if (pIVar11 != pIVar12) goto code_?;
                puVar5 = (undefined1 *)func_?();
                RStack_65.First._0_1_ = *puVar5;
                pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar6,0x59,(MethodInfo *)0x0);
                bVar9 = 0;
                if (pOVar10 != (Object *)0x0) {
                  pIVar11 = (pOVar10->klass->_0).element_class;
                  pIVar12 = (TypeInfo__System__Int32->_0).element_class;
                  bVar9 = pIVar11 < pIVar12;
                  pIVar13 = TypeInfo__System__Int32;
                  if (pIVar11 != pIVar12) goto code_?;
                  pRVar21 = (RegexCharClass_SingleRange *)func_?(pOVar10);
                  RStack_17 = *pRVar21;
                  pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
                  bVar9 = 0;
                  if (pOVar10 != (Object *)0x0) {
                    pIVar11 = (pOVar10->klass->_0).element_class;
                    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar9 = pIVar11 < pIVar12;
                    pIVar13 = (Int32__Class *)TypeInfo__System__Boolean;
                    if (pIVar11 != pIVar12) goto code_?;
                    puVar5 = (undefined1 *)func_?(pOVar10);
                    RStack_55.First._0_1_ = *puVar5;
                    unaff_ESI = (RegexCharClass_SingleRange)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item((EventData *)RVar6,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                    }
                    RVar6.First = 0;
                    RVar6.Last = 0;
                    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                      if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
                        RVar6 = unaff_ESI;
                      }
                      bVar9 = 0;
                      pSVar23 = TypeInfo__System__String;
                      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    }
                    VStack_52.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)RVar6,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar15 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar15 != (MVNetworkGame *)0x0) {
                      pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar15,(MethodInfo *)0x0);
                      bVar9 = 0;
                      if (pMVar45 != (MVLocalPlayer *)0x0) {
                        if (eventCode == (pMVar45->fields)._._ActorNr_k__BackingField) {
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
                                  ((MVPlayer *)unaff_ESI,eventCode,(int32_t)RStack_50,
                                   (String *)unaff_EDI,(BuildTarget__Enum)RStack_65,
                                   (UserProfileData *)VStack_52.z,0,(bool)RStack_55.First,
                                   (MethodInfo *)0x0);
                        bVar9 = 0;
                        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x48) = RStack_17;
                          pMVar15 = (this->fields).networkGame;
                          bVar9 = 0;
                          if (pMVar15 != (MVNetworkGame *)0x0) {
                            pMVar83 = (pMVar15->fields).playerContainer;
                            bVar9 = 0;
                            if (pMVar83 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar83,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
  func_?(unaff_ESI,RStack_50);
  pDVar76 = extraout_EDX_01;
code_?:
  func_?(unaff_EDI,pDVar76);
code_?:
  func_?();
  RVar6 = unaff_ESI;
code_?:
  func_?(unaff_EDI,eventCode);
  uStack_97 = *(undefined4 *)unaff_EDI;
  func_?(&uStack_97,&UNK_?);
code_?:
  func_?();
code_?:
  RVar18 = (RegexCharClass_SingleRange)func_?();
  pSVar23 = extraout_ECX_01;
  unaff_ESI = RVar6;
code_?:
  uVar59 = func_?(RVar18,pSVar23);
  uVar98 = func_?(uVar59);
  uVar99 = (uint)((ulonglong)uVar98 >> 0x20);
  iVar39 = (int)uVar98;
  uVar100 = iVar39 - 1;
  bVar101 = (byte)((uint)extraout_ECX_02 >> 8);
  bVar102 = (byte)uVar100;
  bVar103 = (byte)((uint)unaff_EBX >> 8);
  if (uVar100 != 0 && 0 < iVar39) {
    bVar104 = *unaff_EBX;
    bVar105 = *unaff_EBX;
    *unaff_EBX = bVar105 + bVar102 + bVar9;
    *(byte *)(iVar39 + 0xf) =
         *(byte *)(iVar39 + 0xf) << 1 | (CARRY1(bVar104,bVar102) || CARRY1(bVar105 + bVar102,bVar9));
    puVar106 = (undefined2 *)segment(in_DS,(short)unaff_EBX + unaff_ESI.First + 0x10);
    *puVar106 = in_SS;
    pbVar64 = (byte *)(uVar99 + uVar100 + -0x73);
    bVar104 = *pbVar64;
    bVar9 = *pbVar64;
    *pbVar64 = bVar9 + bVar102 + CARRY4(uVar99,uVar100);
    uVar107 = iVar39 + 0xf;
    pbVar64 = (byte *)(uVar107 + uVar100 + -0x7194efb0 +
                      CONCAT22((short)((uint)extraout_ECX_02 >> 0x10),
                               CONCAT11(bVar101 + (char)extraout_ECX_02 +
                                        (CARRY1(bVar104,bVar102) ||
                                        CARRY1(bVar9 + bVar102,CARRY4(uVar99,uVar100))),
                                        (char)extraout_ECX_02)) * 8);
    bVar9 = *pbVar64;
    bVar101 = *pbVar64;
    *pbVar64 = bVar101 + bVar103 + CARRY4(uVar107,uVar100);
    *(MonitorData *)((int)unaff_EDI + -0x71) =
         (MonitorData)
         ((char)*(MonitorData *)((int)unaff_EDI + -0x71) + bVar102 +
         (CARRY1(bVar9,bVar103) || CARRY1(bVar101 + bVar103,CARRY4(uVar107,uVar100))));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar64 = (byte *)((int)unaff_ESI + -0x24efaf81);
  bVar104 = *pbVar64;
  bVar105 = *pbVar64 + bVar101;
  bVar19 = CARRY1(*pbVar64,bVar101) || CARRY1(bVar105,bVar9);
  *pbVar64 = bVar105 + bVar9;
  if (*pbVar64 == 0 || (SCARRY1(bVar104,bVar101) != SCARRY1(bVar105,bVar9)) != (char)*pbVar64 < '\0') {
    pbVar64 = (byte *)(iVar39 + -0x6befaf81);
    bVar9 = *pbVar64;
    bVar101 = *pbVar64;
    *pbVar64 = bVar101 + bVar103 + bVar19;
    *(int *)(iVar39 + 0xf) =
         (int)(&UNK_? +
              (uint)(CARRY1(bVar9,bVar103) || CARRY1(bVar101 + bVar103,bVar19)) +
              *(int *)(iVar39 + 0xf));
    bVar101 = *unaff_EBX;
    bVar9 = *unaff_EBX;
    *unaff_EBX = bVar9 + bVar102 + CARRY4(uVar99,uVar100);
    *(byte *)(iVar39 + 0xf) =
         *(byte *)(iVar39 + 0xf) << 1 |
         (CARRY1(bVar101,bVar102) || CARRY1(bVar9 + bVar102,CARRY4(uVar99,uVar100)));
    bVar19 = (uVar100 & 1) != 0;
    pbVar64 = (byte *)(iVar39 + 0xf);
    bVar9 = *pbVar64;
    bVar101 = *pbVar64;
    *pbVar64 = bVar101 + 0x1f + bVar19;
    puVar108 = (uint *)(iVar39 + 0xf);
    uVar109 = (uint)(0xe0 < bVar9 || CARRY1(bVar101 + 0x1f,bVar19));
    uVar107 = *puVar108;
    uVar110 = *puVar108;
    *puVar108 = (uVar110 - 0x29) + uVar109;
    puVar108 = (uint *)(iVar39 + 0xf);
    uVar109 = (uint)(0x28 < uVar107 || CARRY4(uVar110 - 0x29,uVar109));
    uVar107 = *puVar108;
    uVar110 = *puVar108;
    *puVar108 = uVar110 + 3 + uVar109;
    *(byte *)(iVar39 + 0xf) =
         *(byte *)(iVar39 + 0xf) << 1 | (0xfffffffc < uVar107 || CARRY4(uVar110 + 3,uVar109));
    *(MonitorData *)unaff_EDI = *(MonitorData *)unaff_ESI;
    pbVar64 = (byte *)((int)unaff_ESI + (uint)((uVar100 & 0x400) != 0) * -2 + -0x78f5efaf);
    bVar9 = *pbVar64;
    *pbVar64 = *pbVar64 + bVar102;
    iVar111 = CONCAT22((short)(uVar100 >> 0x10),
                      CONCAT11((char)(uVar100 >> 8) + bVar102 + CARRY1(bVar9,bVar102),bVar102));
    LOCK();
    iVar39 = *(int *)(iVar111 + 0x10);
    *(int *)(iVar111 + 0x10) = uVar99 + uVar100;
    UNLOCK();
    uVar112 = (undefined1)iVar39;
    *(undefined1 *)(iVar111 + 0x10) = uVar112;
    *(undefined1 *)(iVar111 + 0x10) = uVar112;
    *(int *)(iVar111 + 0x10) = iVar39;
    pcVar113 = (code *)swi(3);
    (*pcVar113)();
    return;
  }
  bVar101 = *unaff_EBX;
  bVar9 = *unaff_EBX;
  *unaff_EBX = bVar9 + bVar102 + bVar19;
  bVar103 = *(byte *)(iVar39 + 0xf);
  *(byte *)(iVar39 + 0xf) = bVar103 << 1 | (CARRY1(bVar101,bVar102) || CARRY1(bVar9 + bVar102,bVar19));
  bVar101 = (bVar103 & 0x80) != 0;
  pcVar113 = (code *)swi(0x8d);
  iVar39 = (*pcVar113)();
  bVar9 = *unaff_EBX;
  bVar102 = *unaff_EBX + (byte)iVar39;
  *unaff_EBX = bVar102 + bVar101;
  *(byte *)(iVar39 + 0x10) =
       *(byte *)(iVar39 + 0x10) << 1 | (CARRY1(bVar9,(byte)iVar39) || CARRY1(bVar102,bVar101));
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

