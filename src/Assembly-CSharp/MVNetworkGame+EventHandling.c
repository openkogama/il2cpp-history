
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    cRam_? = '\x01';
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
  bVar6 = SUB41(in_stack_7,3);
  pMStack_8 = (MVPlayer *)0x0;
  BStack_9.m_value = 0;
  VStack_10.x = 0.0;
  VStack_10.y = 0.0;
  VStack_10.z = 0.0;
  pIStack_11 = (Il2CppClass *)0x0;
  pIStack_12 = (Il2CppClass *)0x0;
  pMStack_13 = (MVAvatar__Class *)0x0;
  pMVar14 = (MVAvatar__Class *)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (MVAvatar__Class *)0x0)) && (unaff_EDI = unaff_EDI, pOVar15 != (Object *)0x0))
    {
      pMVar14 = unaff_EDI;
      if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (MVAvatar__Class *)(pWVar18->fields)._.worldObjectClientManager,
       unaff_ESI = (MVAvatar__Class *)photonEvent, pMStack_19 = unaff_EDI,
       photonEvent != (EventData *)0x0)) {
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar14 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        unaff_EDI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pMVar14 != (MVAvatar__Class *)0x0) {
          pMVar20 = (MVNetworkGame__Class *)(pMVar14->_0).image;
          if (((pMVar20->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar20->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          unaff_ESI = (MVAvatar__Class *)0x0;
          if (bVar21) {
            unaff_ESI = pMVar14;
          }
          if (unaff_ESI != (MVAvatar__Class *)0x0) goto code_?;
          goto code_?;
        }
        unaff_ESI = (MVAvatar__Class *)0x0;
code_?:
        if (pOVar15 != (Object *)0x0) {
          if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar16 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)pMStack_19,*piVar16,
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar15 != (Object *)0x0)) {
      pMVar14 = unaff_EDI;
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar23 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) &&
         (pMVar24 = (pWVar18->fields)._.worldObjectClientManager,
         pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar24,(int32_t)unaff_EDI,pDVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar23 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) &&
         (pMVar24 = (pWVar18->fields)._.worldObjectClientManager,
         pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar24,(int32_t)unaff_EDI,pDVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar17 = (this->fields).networkGame;
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
    unaff_ESI = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
    unaff_EDI = (MVAvatar__Class *)this;
    if (unaff_ESI != (MVAvatar__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_07 = (HashSet_1_System_ByteEnum_ *)((Object *)((int)&unaff_ESI->_0 + 8))->monitor;
      if (this_07 != (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (this_07,eventCode,
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
        unaff_ESI = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_08 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
          if ((this_08 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) &&
             (unaff_ESI = (MVAvatar__Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    (this_08,eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                    ), unaff_ESI != (MVAvatar__Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->ReceivedItemFromQuery ==
                (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              pSVar26 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar26 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            iVar27 = (int)((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                          ReceivedItemFromQuery;
            if (iVar27 != 0) {
              (**(code **)(iVar27 + 0xc))();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (MVAvatar__Class *)0x0)) && (unaff_EDI = unaff_EDI, pOVar15 != (Object *)0x0))
    {
      pMVar14 = unaff_EDI;
      if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (pMVar28 = (pWVar18->fields)._.worldInventory, unaff_EDI = (MVAvatar__Class *)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pMVar14 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x31,(MethodInfo *)0x0);
      unaff_EDI = pMVar14;
      if (pMVar28 != (MVWorldInventory *)0x0) {
        pMStack_29 = (MVAvatar__Class *)TypeInfo__System__Byte;
        if ((pMVar14 != (MVAvatar__Class *)0x0) &&
           (unaff_EDI = (MVAvatar__Class *)func_?(), pMStack_19 = unaff_EDI,
           unaff_EDI == (MVAvatar__Class *)0x0)) goto code_?;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar22 = (undefined4 *)func_?();
          unaff_ESI = (MVAvatar__Class *)*puVar22;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMVar28->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar30 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 (int32_t)unaff_ESI,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            this_09 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_09,(Byte__Array *)unaff_EDI,(MethodInfo *)0x0);
            unaff_ESI = (MVAvatar__Class *)0x0;
            if (pRVar30 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar30,this_09,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (pMVar14 = (MVAvatar__Class *)(pWVar18->fields)._.worldInventory,
       unaff_EDI = (MVAvatar__Class *)photonEvent, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      unaff_EDI = pMVar14;
      if ((pMVar14 != (MVAvatar__Class *)0x0) && (pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar31 = (float *)func_?();
        fVar32 = *pfVar31;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar22 = (undefined4 *)func_?();
          unaff_ESI = (MVAvatar__Class *)*puVar22;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pDVar33 = (Dictionary_2_System_Int32_System_Object_ *)
                    ((Object *)((int)&pMVar14->_0 + 8))->klass;
          if ((pDVar33 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
             (pRVar30 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  (pDVar33,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar30 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar30->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar30->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar30->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar30,fVar32,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_29 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)pMStack_29,*piVar16,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (MVAvatar__Class *)0x0)) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (MVAvatar__Class *)0x0)) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar17,(int32_t)unaff_EDI,iVar34,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar36 = (FriendStatus__Enum *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar17,(int32_t)unaff_EDI,iVar34,*pFVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar17,*piVar16,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar17,*piVar16,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar17,(int32_t)unaff_EDI,*piVar16,(MethodInfo *)0x0);
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
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
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
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI,*piVar16,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (MVAvatar__Class *)(pMVar17->fields)._NetworkGameStateListener_k__BackingField,
       unaff_EDI = (MVAvatar__Class *)photonEvent, photonEvent != (EventData *)0x0)) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        unaff_EDI = (MVAvatar__Class *)*puVar22;
        piVar37 = (int *)func_?();
        iVar27 = *piVar37;
        puVar22 = (undefined4 *)func_?();
        pMStack_19 = (MVAvatar__Class *)*puVar22;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        ((Object *)((int)&unaff_ESI->_0 + 0x10))->klass = (Object__Class *)pMStack_19;
        ((Object *)((int)&unaff_ESI->_0 + 8))->klass = (Object__Class *)iVar27;
        ((Object *)((int)&unaff_ESI->_0 + 8))->monitor = (MonitorData *)unaff_EDI;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar17 != (MVNetworkGame *)0x0) {
          iVar34 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar17,(MethodInfo *)0x0);
          iVar38 = (int)((Object *)((int)&unaff_ESI->_0 + 0x18))->klass;
          ((Object *)((int)&unaff_ESI->_0 + 0x10))->monitor =
               (MonitorData *)((int)unaff_EDI + (iVar27 - iVar34));
          if (iVar38 == 0) goto code_?;
          iVar27 = (int)((Object *)((int)&unaff_ESI->_0 + 0x18))->klass;
          this_10 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(this_10,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (iVar27 != 0) {
            (**(code **)(iVar27 + 0xc))();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (MVAvatar__Class *)0x0)) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
         unaff_EDI = (MVAvatar__Class *)photonEvent, pMVar39 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (MVAvatar__Class *)(pMVar39->fields)._._ActorNr_k__BackingField;
        puVar22 = (undefined4 *)func_?();
        if ((MVAvatar__Class *)*puVar22 == unaff_ESI) goto code_?;
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = (MVAvatar__Class *)photonEvent,
           pWVar18 != (WorldNetwork *)0x0)) {
          pMVar14 = (MVAvatar__Class *)(pWVar18->fields)._.worldObjectClientManager;
          pMStack_19 = pMVar14;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI = (MVAvatar__Class *)0x0;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pMVar14 != (MVAvatar__Class *)0x0) {
            pDVar23 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar16 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)pMStack_19,*piVar16,pDVar23,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_29 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        pPVar40 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_29,*pPVar40,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_19 = (MVAvatar__Class *)*puVar22;
      pfVar31 = (float *)func_?();
      pIVar41 = (Il2CppClass *)*pfVar31;
      pfVar31 = (float *)func_?();
      VStack_10.x = *pfVar31;
      VStack_10.z = (float)pMStack_19;
      VStack_10.y = (float)pIVar41;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_19 = (MVAvatar__Class *)*puVar22;
      puVar22 = (undefined4 *)func_?();
      pIVar41 = (Il2CppClass *)*puVar22;
      puVar22 = (undefined4 *)func_?();
      pIStack_11 = (Il2CppClass *)*puVar22;
      pMVar17 = (this->fields).networkGame;
      pMStack_13 = pMStack_19;
      pIStack_12 = pIVar41;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        camOrigin.y = VStack_10.y;
        camOrigin.x = VStack_10.x;
        camOrigin.z = VStack_10.z;
        camDir.y = (float)pIStack_12;
        camDir.x = (float)pIStack_11;
        camDir.z = (float)pMStack_13;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar17,*piVar16,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar23 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar42 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar42,pDVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (MVAvatar__Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar16 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar43 = (MVTeam__Enum *)func_?();
        team = *pMVar43;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar17,*piVar16,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_29 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pMStack_19 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)pMStack_29,*piVar16,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (MVAvatar__Class *)0x0)) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar17 = (this->fields).networkGame;
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
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI,*piVar16,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar15 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_19 = (MVAvatar__Class *)*puVar22;
      pOVar44 = (Object *)func_?(TypeInfo__MV__Common__AchievementType);
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar15,pOVar44,
                           (MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar15 = (Object *)func_?();
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (pDVar46 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_47 = (MVPlayer *)*puVar22;
        uStack_48 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_29 = (MVAvatar__Class *)*puVar22;
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (MVAvatar__Class *)0x0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar49 = (pMVar17->fields)._PlayerController_k__BackingField;
          pMStack_19 = (MVAvatar__Class *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (pMVar49 != (MVLocalObjectController *)0x0) {
            pbVar50 = (byte *)func_?();
            bVar6 = *pbVar50;
            piVar16 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar49,*piVar16,(int32_t)pMStack_47,(int32_t)pMStack_29,(uint)bVar6,
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
      puVar22 = (undefined4 *)func_?();
      unaff_ESI = (MVAvatar__Class *)*puVar22;
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pMVar51 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (MVAvatar__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar51,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__MVAvatar;
        if ((unaff_ESI == (MVAvatar__Class *)0x0) || (iVar27 = func_?(), iVar27 == 0))
        goto code_?;
        iVar27 = func_?();
        if (iVar27 != 0) {
          func_?();
          func_?();
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pOVar15 = (Object *)func_?();
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_19 = (MVAvatar__Class *)*puVar22;
        uStack_48 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_52 = (MVAvatar__Class *)*puVar22;
        pMVar17 = (this->fields).networkGame;
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar17,(MethodInfo *)0x0),
           pMVar51 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar51,(int32_t)pMStack_19,(MethodInfo *)0x0);
          pMStack_13 = (MVAvatar__Class *)func_?();
          if (pMStack_13 != (MVAvatar__Class *)0x0) {
            pMStack_47 = (MVPlayer *)
                         (((MVNetworkGame__Class *)((int)&pMStack_13->vtable + 0x40))->_0).image;
            uStack_53 = 3;
            pOVar15 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,
                       pOVar15,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar22 = (undefined4 *)func_?();
            pDStack_54 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar22;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?();
            pMStack_55 = (MVWorldObject *)*puVar22;
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x3a,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?(pOVar15);
            pMStack_29 = (MVAvatar__Class *)*puVar22;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?();
            pMStack_19 = (MVAvatar__Class *)*puVar22;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?();
            VStack_10.z = (float)*puVar22;
            pMVar17 = (this->fields).networkGame;
            unaff_EDI = (MVAvatar__Class *)this;
            if ((pMVar17 != (MVNetworkGame *)0x0) &&
               (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar18,(int32_t)pMStack_55,0,1,(int32_t)pMStack_47,(int32_t)pDStack_54,
                         (int32_t)pMStack_29,(int32_t)pMStack_19,(MethodInfo *)0x0);
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar17,(MethodInfo *)0x0),
                 pMVar51 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar51,(int32_t)pDStack_54,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                unaff_EDI = (MVAvatar__Class *)
                            TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                if (unaff_EDI == (MVAvatar__Class *)0x0) {
                  if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                  unaff_EDI = (MVAvatar__Class *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            ((UnityAction_1_System_Object_ *)unaff_EDI,(Object *)object,
                             MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                       (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                  func_?();
                }
                if (pMStack_55 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar17 = (this->fields).networkGame;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar49 = (pMVar17->fields)._PlayerController_k__BackingField;
                    pMStack_55 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    unaff_EDI = (MVAvatar__Class *)0x0;
                    if (pMVar49 != (MVLocalObjectController *)0x0) {
                      pbVar50 = (byte *)func_?();
                      bVar6 = *pbVar50;
                      piVar16 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar49,*piVar16,(int32_t)pDStack_54,(int32_t)pMStack_52,
                                 (uint)bVar6,(MethodInfo *)0x0);
                      MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                ((MVWorldObjectSpawner *)pMStack_13,(int32_t)VStack_10.z,
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
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pIVar56 = (Il2CppGenericClass *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar57 = (undefined1 *)func_?();
      uVar58 = *puVar57;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar31 = (float *)func_?();
      pFVar59 = (FieldInfo *)*pfVar31;
      pMStack_13 = (MVAvatar__Class *)pIVar56;
      pMStack_52 = (MVAvatar__Class *)func_?(TypeInfo__System__Int32);
      uStack_53 = uVar58;
      pOVar15 = (Object *)func_?();
      VStack_10.z = (float)pFVar59;
      pOVar44 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_52,
                           pOVar15,pOVar44,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      pMVar60 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar41 = (pMVar60->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar41->vtable[0].methodPtr & 0x100) == 0) {
        pIVar41 = (Il2CppClass *)func_?();
      }
      if (pIVar41->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar41 = (pMVar60->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar41->vtable[0].methodPtr & 0x100) == 0) {
        pIVar41 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar41->static_fields;
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
      pBVar61 = (Byte__Array *)func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = unaff_EDI,
         pWVar18 != (WorldNetwork *)0x0)) {
        this_01 = (pWVar18->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (MVAvatar__Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,pBVar61,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)0x0;
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
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (this_02 = (RuntimeEventManager *)(pWVar18->fields)._.runtimeEventManagerNetwork,
       unaff_EDI = unaff_EDI, this_02 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_29 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar57 = (undefined1 *)func_?();
      pMStack_19 = (MVAvatar__Class *)CONCAT31(pMStack_19._1_3_,*puVar57);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pDStack_54 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_47 = (MVPlayer *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?();
      bVar25 = *pbVar62;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar63 = (char *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (*pcVar63 == '\0') {
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pGVar64 = (pMVar17->fields).gameStatCounterManager,
           pGVar64 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar64,(GameStatCounterType__Enum)pMStack_19,(int32_t)unaff_EDI,
                     (MVTeam__Enum)pMStack_29,(int32_t)pDStack_54,(int32_t)pMStack_47,bVar25,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else if ((pMVar17 != (MVNetworkGame *)0x0) &&
              (pGVar64 = (pMVar17->fields).gameStatCounterManager,
              pGVar64 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar64,(GameStatCounterType__Enum)pMStack_19,(MVTeam__Enum)pMStack_29,
                   (int32_t)unaff_EDI,(int32_t)pDStack_54,(int32_t)pMStack_47,bVar25,
                   (MethodInfo *)0x0);
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
      pBVar61 = (Byte__Array *)func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pGVar64 = (pMVar17->fields).gameStatCounterManager, unaff_EDI = unaff_EDI,
         pGVar64 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar64,pBVar61,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pMVar60 = (MethodInfo *)0x0;
      pBVar61 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar61,pMVar60);
      unaff_ESI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (this_03 = (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_03 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_03,iVar34,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI,*piVar16,iVar34,(MethodInfo *)0x0);
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
      pbVar62 = (bool *)func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pMVar65 = (pMVar17->fields)._GameCoinManager_k__BackingField, unaff_EDI = unaff_EDI,
         pMVar65 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar65,*pbVar62,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar15 != (Object *)0x0)) {
      pMVar14 = unaff_EDI;
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar22 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar22;
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI == (MVAvatar__Class *)0x0) {
        pMVar66 = (MVAvatar__Class *)0x0;
      }
      else {
        pMVar14 = (MVAvatar__Class *)(unaff_ESI->_0).image;
        if ((*(byte *)&((Object *)((int)&pMVar14->_1 + 0x54))->klass <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)&((MonitorData *)&pMVar14->_1)->field_0x0 +
             ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment - 1) * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        pMVar66 = (MVAvatar__Class *)0x0;
        if (bVar21) {
          pMVar66 = unaff_ESI;
        }
        if (pMVar66 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar17,(NotificationType__Enum)unaff_EDI,
                   (Dictionary_2_System_Object_System_Object_ *)pMVar66,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), pMVar14 == (MVAvatar__Class *)0x0)
       ) break;
    if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar23->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar23->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar21) {
      pDVar67 = pDVar23;
    }
    unaff_ESI = (MVAvatar__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pMVar14 = (MVAvatar__Class *)func_?();
    pMStack_13 = (MVAvatar__Class *)TypeInfo__System__Byte;
    if (unaff_EDI == (MVAvatar__Class *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar14,pBVar61,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      unaff_EDI = pMVar14;
      if (pOVar15 != (Object *)0x0) {
        if ((pOVar15->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          unaff_EDI = pMVar14;
          goto code_?;
        }
        puVar57 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)pMVar14 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar57);
        pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        if (pOVar15 != (Object *)0x0) {
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar62 = (bool *)func_?();
          pMVar17 = (this->fields).networkGame;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar17,(BytePacker *)pMVar14,eventCode,*pbVar62,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?(unaff_EDI);
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
          unaff_EDI = (MVAvatar__Class *)photonEvent, pMVar39 != (MVLocalPlayer *)0x0)) &&
         (iVar27 = (pMVar39->fields)._._ActorNr_k__BackingField,
         unaff_EDI = (MVAvatar__Class *)photonEvent, unaff_ESI != (MVAvatar__Class *)0x0)) {
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar37 = (int *)func_?();
        if (*piVar37 == iVar27) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar17 = (this->fields).networkGame;
          unaff_ESI = (MVAvatar__Class *)this;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if ((pMVar17 != (MVNetworkGame *)0x0) &&
             (pMVar65 = (pMVar17->fields)._GameCoinManager_k__BackingField,
             unaff_EDI = (MVAvatar__Class *)photonEvent, pMVar65 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar65,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar17 = (this->fields).networkGame;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              pMVar68 = (pMVar17->fields).operationRequests;
              unaff_ESI = (MVAvatar__Class *)0x0;
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                pMStack_13 = (MVAvatar__Class *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          ((Dictionary_2_System_Byte_System_Object_ *)pMStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                unaff_ESI = (MVAvatar__Class *)(pMVar68->fields).peer;
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_EDI = (MVAvatar__Class *)photonEvent;
                if (unaff_ESI != (MVAvatar__Class *)0x0) {
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
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            unaff_EDI = (MVAvatar__Class *)(pMVar17->fields).playerContainer;
            unaff_ESI = (MVAvatar__Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if ((unaff_EDI != (MVAvatar__Class *)0x0) && (pOVar15 != (Object *)0x0)) {
              if ((pOVar15->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar62 = (bool *)func_?();
              bVar25 = *pbVar62;
              if (unaff_ESI != (MVAvatar__Class *)0x0) {
                if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar16 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI,*piVar16,bVar25,(MethodInfo *)0x0);
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
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)
       ) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)
       ) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    unaff_EDI = pMVar14;
    if ((pMVar14 == (MVAvatar__Class *)0x0) || (pOVar15 == (Object *)0x0)) break;
    if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar63 = (char *)func_?();
    if (unaff_ESI == (MVAvatar__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 *pcVar63 == '\0',(MethodInfo *)0x0);
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
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    pMVar66 = (MVAvatar__Class *)0x0;
    if (bVar21) {
      pMVar66 = unaff_ESI;
    }
    if (pMVar66 != (MVAvatar__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)pMVar66,
                 *pcVar63 == '\0',(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)
       ) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = pMVar14;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar23 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), pMVar14 != (MVAvatar__Class *)0x0)
       ) {
      if (pDVar23 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar14,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar23->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar23->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar67 = pDVar23;
      }
      unaff_ESI = (MVAvatar__Class *)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar14,pDVar67,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((MVAvatar__Class *)photonEvent == (MVAvatar__Class *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar61,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      if (pMVar17 != (MVNetworkGame *)0x0) {
        (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?();
    unaff_EDI = (MVAvatar__Class *)0x0;
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (MVAvatar__Class *)0x0)) && (unaff_EDI = unaff_EDI, pOVar15 != (Object *)0x0))
    {
      pMVar14 = unaff_EDI;
      if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar68 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = (MVAvatar__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar69 = (pMVar68->fields).peer;
      unaff_EDI = (MVAvatar__Class *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (MVAvatar__Class *)0x0;
      if (pPVar69 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar69->klass->vtable).SendOperation.method)();
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
    unaff_ESI = (MVAvatar__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    unaff_EDI = (MVAvatar__Class *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_13 = (MVAvatar__Class *)*puVar22;
      pOVar15 = (Object *)func_?();
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar15,
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
    pMVar17 = (this->fields).networkGame;
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
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar70 = (pMVar17->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (MVAvatar__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if ((pMVar70 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (MVAvatar__Class *)(pMVar70->fields).logicEventQueue, unaff_EDI = unaff_EDI,
         unaff_ESI != (MVAvatar__Class *)0x0)) {
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
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0),
           unaff_EDI = (MVAvatar__Class *)photonEvent, pOVar15 != (Object *)0x0)) {
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar16 = (int32_t *)func_?();
          this_04 = (Dictionary_2_System_Int32_System_Single_ *)
                    ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
          iVar34 = *piVar16;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (this_04 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
            bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               (this_04,iVar34,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar25 == 0) {
              pMStack_13 = (MVAvatar__Class *)((Object *)((int)&unaff_ESI->_0 + 8))->klass;
              VStack_10.z = (float)func_?();
              mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
              Stack_1_System_Int32___ctor
                        ((Stack_1_System_Int32_ *)VStack_10.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              unaff_EDI = (MVAvatar__Class *)photonEvent;
              if (pMStack_13 == (MVAvatar__Class *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pMStack_13,iVar34,
                         (Object *)VStack_10.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            pDVar33 = (Dictionary_2_System_Int32_System_Object_ *)
                      ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if ((pDVar33 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
               (this_11 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (pDVar33,iVar34,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), unaff_EDI = (MVAvatar__Class *)photonEvent,
               this_11 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_11,(Object *)photonEvent,
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
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar70 = (pMVar17->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (MVAvatar__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar70 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar70,(MethodInfo *)0x0);
        pMVar71 = (pMVar70->fields).updateEvaluatorStep;
        unaff_ESI = (MVAvatar__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar71 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar16 = &(pMVar71->fields).stepTimestamp;
          *piVar16 = *piVar16 + 1000;
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
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (MVAvatar__Class *)(pMVar17->fields).logicObjectManagerClientWrapper,
        unaff_EDI = unaff_EDI, photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (MVAvatar__Class *)0x0)) {
      piVar16 = (int32_t *)func_?();
      pMVar71 = (MVNetworkGame_UpdateEvaluator *)((Object *)((int)&unaff_ESI->_0 + 0x10))->monitor;
      unaff_ESI = (MVAvatar__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar71 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar71->fields).stepTimestamp = *piVar16;
code_?:
        iVar34 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar71->fields).lastUpdateTick = iVar34;
        (pMVar71->fields).accumulatedTime = 0;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (MVAvatar__Class *)(pMVar17->fields).logicObjectManagerClientWrapper,
       unaff_EDI = unaff_EDI, photonEvent != (EventData *)0x0)) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x23,(MethodInfo *)0x0);
      bVar6 = SUB41(in_stack_7,3);
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        bVar6 = SUB41(in_stack_7,3);
        unaff_EDI = (MVAvatar__Class *)*puVar22;
        pEVar72 = ((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                  ReceivedAvatarBodiesFromQuery;
        while (pEVar72 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
          bVar6 = SUB41(in_stack_7,3);
          pMVar73 = (pEVar72->fields)._._.method_info;
          if (pMVar73 == (MethodInfo_1 *)0x0) break;
          if ((int)unaff_EDI <= (int)pMVar73[2].monitor) goto code_?;
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
          bVar6 = SUB41(in_stack_7,3);
          pEVar72 = ((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                    ReceivedAvatarBodiesFromQuery;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (MVAvatar__Class *)func_?();
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = (MVAvatar__Class *)this;
    if ((pMVar17 == (MVNetworkGame *)0x0) ||
       (pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar17,(MethodInfo *)0x0), unaff_ESI == (MVAvatar__Class *)0x0))
    break;
    photonEvent = (EventData *)unaff_ESI;
    if (((Object *)((int)&unaff_ESI->_0 + 8))->monitor != (MonitorData *)0x0) {
      if (pMVar51 != (MVWorldObjectClientManager *)0x0) {
        pMVar74 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar51,(int32_t)((Object *)((int)&unaff_ESI->_0 + 0x10))->klass,
                             (MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          if (((Object *)((int)&unaff_ESI->_0 + 8))->monitor < (MonitorData *)0x2)
          goto code_?;
          if (pMVar51 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (MVAvatar__Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar51,(int32_t)((Object *)((int)&unaff_ESI->_0 + 0x10))->
                                                    monitor,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar74 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (unaff_ESI != (MVAvatar__Class *)0x0) {
              if (((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                  ReceivedAvatarBodiesFromQuery !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar74->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar27 = func_?();
              if (iVar27 != 0) {
                bVar25 = 0x6e;
                pMVar14 = unaff_ESI;
                this_12 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_12,bVar25,(MethodInfo *)pMVar14);
                pMVar17 = (this->fields).networkGame;
                if ((pMVar17 != (MVNetworkGame *)0x0) &&
                   (pMVar49 = (pMVar17->fields)._PlayerController_k__BackingField,
                   pMVar49 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar49,1,(MethodInfo *)0x0);
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
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (MVAvatar__Class *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
       unaff_ESI = (MVAvatar__Class *)photonEvent, pMStack_52 = unaff_EDI,
       photonEvent != (EventData *)0x0)) {
      VStack_10.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      pMStack_13 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        puVar57 = (undefined1 *)func_?();
        uVar58 = *puVar57;
        piVar16 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)pMStack_52,*piVar16,CONCAT31((int3)((uint)puVar57 >> 8),uVar58),
                   iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?();
      bVar25 = *pbVar62;
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
      pMVar60 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar60);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI = (MVAvatar__Class *)0x0;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pOVar15 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar15[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar26 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar26,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar15[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar75 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        unaff_ESI = (MVAvatar__Class *)0x0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pGVar75 != (GoldRewardManager *)0x0) {
          pbVar62 = (bool *)func_?();
          (pGVar75->fields).isGoldRewardGame = *pbVar62;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar62 = (bool *)func_?();
          BStack_9.m_value = *pbVar62;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_9,(MethodInfo *)0x0);
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
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
      if (pSVar26 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      pMVar14 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = pMVar14;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar27 = func_?();
      pMVar60 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar26 = StringLiteral_V;
      unaff_EDI = unaff_EDI;
      if (iVar27 != 0) {
        pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar46,(Object *)pSVar26,pMVar60);
        pbVar62 = (bool *)func_?();
        bVar25 = *pbVar62;
        pMVar17 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (MVAvatar__Class *)0x0;
        unaff_EDI = (MVAvatar__Class *)pSVar26;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar17,*piVar16,bVar25,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar76 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)0x0;
      if (pSVar76 != (String *)0x0) {
        if (pSVar76->klass == TypeInfo__System__String) {
          pSVar26 = pSVar76;
        }
        photonEvent = (EventData *)0x0;
        if (pSVar26 == (String *)0x0) goto code_?;
      }
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar25 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (MVAvatar__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar15 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar15[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar15[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      unaff_ESI = (MVAvatar__Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar14,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pMVar77 = (pMVar17->fields).playerContainer, unaff_EDI = unaff_EDI,
          pMVar77 != (MVPlayerContainer *)0x0)) &&
         (pMVar39 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar77,(MethodInfo *)0x0),
         unaff_EDI = unaff_EDI, pMVar39 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar39,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      unaff_ESI = (MVAvatar__Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar14,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar16,(MethodInfo *)0x0);
          if (pMVar78 != (MVPlayer *)0x0) {
            (pMVar78->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar45 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      unaff_EDI = unaff_EDI;
      if (((pOVar15 != (Object *)0x0) &&
          (pMVar17 = (this->fields).networkGame, unaff_EDI = unaff_EDI,
          pMVar17 != (MVNetworkGame *)0x0)) &&
         (pLVar79 = (pMVar17->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
         pLVar79 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar79,(Dictionary_2_System_Int32_System_Int32_ *)pOVar15[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pLVar79 = (pMVar17->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
          pOVar15 != (Object *)0x0)) &&
         (unaff_EDI = unaff_EDI, pLVar79 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar79,(int32_t)pOVar15[1].klass,(int32_t)pOVar15[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI == (MVAvatar__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pMVar14,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pMVar14 = unaff_ESI;
      }
      if (pMVar14 != (MVAvatar__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      uVar45 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI == (MVAvatar__Class *)0x0) {
code_?:
        pKVar80 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar14,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar80;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pMVar14 = unaff_ESI;
      }
      if (pMVar14 != (MVAvatar__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar16 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (MVAvatar__Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_10,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar82 = pVVar81->x;
      uVar83 = pVVar81->y;
      fVar32 = pVVar81->z;
      pIStack_12 = (Il2CppClass *)uVar82;
      pMStack_13 = (MVAvatar__Class *)uVar83;
      pQVar84 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      p_Stack_44 = (Il2CppMetadataTypeHandle)pQVar84->x;
      VStack_10.x = pQVar84->y;
      VStack_10.y = pQVar84->z;
      VStack_10.z = pQVar84->w;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar16,(MethodInfo *)0x0);
          if (pMVar78 != (MVPlayer *)0x0) {
            this_05 = (pMVar78->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            unaff_EDI = (MVAvatar__Class *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar16 = (int32_t *)func_?();
              position.y = (float)pMStack_13;
              position.x = (float)pIStack_12;
              position.z = fVar32;
              rotation.y = VStack_10.x;
              rotation.x = (float)p_Stack_44;
              rotation.z = VStack_10.y;
              rotation.w = VStack_10.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar16,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_EDI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (MVAvatar__Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,(MethodInfo *)unaff_ESI);
      pMStack_13 = (MVAvatar__Class *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)pMStack_13,(MethodInfo *)0x0
                );
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_ESI = (MVAvatar__Class *)(pMVar17->fields).playerContainer;
        pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if ((unaff_ESI != (MVAvatar__Class *)0x0) &&
           (unaff_EDI = (MVAvatar__Class *)photonEvent, pOVar15 != (Object *)0x0)) {
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar16 = (int32_t *)func_?();
          pMVar78 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pMVar78 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar78,(ISpawnRoleChangeHandler *)pMStack_13,spawnRolesRuntimeData,
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar14 = unaff_ESI;
        }
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pMVar14 = (MVAvatar__Class *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar14,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
      pMVar51 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = pMVar14;
      if ((pMVar14 != (MVAvatar__Class *)0x0) && (pMVar51 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (MVAvatar__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar51,(((Il2CppType *)((int)&pMVar14->_0 + 0x18))->data).
                                       __klassIndex,(MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar17,(((Il2CppType *)((int)&pMVar14->_0 + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar17 = (this->fields).networkGame;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar17,(int32_t)((MVNetworkGame__Fields *)((int)&pMVar14->_0 + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar15 != (Object *)0x0) {
              if ((pOVar15->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar62 = (bool *)func_?();
              if (unaff_ESI != (MVAvatar__Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar21 = false;
                }
                else {
                  bVar21 = true;
                }
                pMVar66 = (MVAvatar__Class *)0x0;
                if (bVar21) {
                  pMVar66 = unaff_ESI;
                }
                if (pMVar66 != (MVAvatar__Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar21 = false;
                  }
                  else {
                    bVar21 = true;
                  }
                  pMVar66 = (MVAvatar__Class *)0x0;
                  if (bVar21) {
                    pMVar66 = unaff_ESI;
                  }
                  if (pMVar66 != (MVAvatar__Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pMVar66,
                               (SpawnRoleBodySwitchData *)pMVar14,*pbVar62,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (MVAvatar__Class *)func_?();
      pOVar15 = (Object *)func_?();
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_13 = (MVAvatar__Class *)*puVar22;
        uStack_53 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar17 = (this->fields).networkGame;
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pMVar51 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar17,(MethodInfo *)0x0),
           pMVar51 != (MVWorldObjectClientManager *)0x0)) {
          unaff_EDI = (MVAvatar__Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar51,(int32_t)pMStack_13,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          puVar22 = (undefined4 *)func_?();
          unaff_ESI = (MVAvatar__Class *)*puVar22;
          iVar27 = func_?();
          if (iVar27 != 0) {
            pMVar60 = (MethodInfo *)0x0;
            this_13 = (MVWorldObjectSpawner *)func_?();
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_13,(int32_t)unaff_ESI,pMVar60);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar17 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (MVAvatar__Class *)(pMVar17->fields).playerContainer,
        unaff_ESI = (MVAvatar__Class *)photonEvent, photonEvent != (EventData *)0x0)) &&
       (iVar34 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0), unaff_EDI != (MVAvatar__Class *)0x0)) {
      bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI,iVar34,&pMStack_8,(MethodInfo *)0x0);
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
      puVar85 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar85);
      if (pMStack_8 != (MVPlayer *)0x0) {
        if ((pMStack_8->fields).playerState != *puVar85) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_8,eventCode,(MethodInfo *)0x0);
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
        unaff_ESI = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pMVar14 = (MVAvatar__Class *)0x0;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pMVar14 = unaff_ESI;
          }
          if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
        }
        unaff_ESI = (MVAvatar__Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pMVar14,(MethodInfo *)0x0);
        pMVar68 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar68,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if (photonEvent != (EventData *)0x0) {
        this_14 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        bVar6 = SUB41(in_stack_7,3);
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar14 = (MVAvatar__Class *)this_14->klass;
          if ((*(byte *)&((Object *)((int)&pMVar14->_1 + 0x54))->klass <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)&((MonitorData *)&pMVar14->_1)->field_0x0 +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pDVar86 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar21) {
            pDVar86 = this_14;
          }
          this_14 = pDVar86;
          unaff_EDI = pMVar14;
          if (pDVar86 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar14 = (MVAvatar__Class *)&UNK_?;
          this_15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_14,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar6 = SUB41(in_stack_7,3);
          if (this_15 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar87 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_15,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (MVAvatar__Class *)&stack0xffffff88;
            VStack_10.y = 0.0;
            pMVar66 = (MVAvatar__Class *)pDVar87->_currentValue;
            uStack_1 = 3;
            VStack_10.z = (float)unaff_ESI;
            do {
              bVar25 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              bVar6 = SUB41(in_stack_7,3);
              if (bVar25 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)pMVar14);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar66 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar66->_0).image == TypeInfo__System__String) {
                  unaff_EDI = pMVar66;
                }
                photonEvent = (EventData *)unaff_ESI;
                if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
              }
              if (this_14 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar88 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_14,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar88.m_Index == 0) {
                pSVar26 = (String *)0x0;
                pMVar14 = (MVAvatar__Class *)::StringLiteral___;
              }
              else {
                pMStack_13 = (MVAvatar__Class *)::StringLiteral___;
                pSVar26 = (String *)func_?();
                pMVar14 = pMStack_13;
              }
              pSVar26 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI,(String *)pMVar14,pSVar26,(MethodInfo *)0x0);
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
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar15 != (Object *)0x0)) {
        pMVar14 = unaff_EDI;
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar22 = (undefined4 *)func_?();
        unaff_ESI = (MVAvatar__Class *)*puVar22;
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (MVAvatar__Class *)this;
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
           pMVar39 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI == (MVAvatar__Class *)(pMVar39->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          pMVar17 = (this->fields).networkGame;
          if ((pMVar17 != (MVNetworkGame *)0x0) &&
             (pMVar77 = (pMVar17->fields).playerContainer, pMVar77 != (MVPlayerContainer *)0x0)) {
            bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar25 == 0) {
code_?:
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar77 = (pMVar17->fields).playerContainer, pMVar77 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar77 = (pMVar17->fields).playerContainer, pMVar77 != (MVPlayerContainer *)0x0))
              {
                pMStack_47 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar77,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pDStack_54 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_54,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_10.z = (float)func_?();
                pMStack_13 = unaff_ESI;
                pOVar15 = (Object *)func_?();
                if (pDStack_54 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_54,
                             (Object *)VStack_10.z,pOVar15,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_53 = 3;
                  pOVar15 = (Object *)func_?();
                  if ((pMStack_47 != (MVPlayer *)0x0) &&
                     (pUVar89 = (pMStack_47->fields)._UserProfileData_k__BackingField,
                     pUVar89 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_54,pOVar15,
                               (Object *)(pUVar89->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_48 = 6;
                    VStack_10.z = (float)func_?();
                    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar17 != (MVNetworkGame *)0x0) &&
                       (this_06 = (pMVar17->fields)._Friends_k__BackingField,
                       this_06 != (FriendList *)0x0)) {
                      bStack_90 = FriendList::FriendList_IsFriend
                                            (this_06,(pMStack_47->fields)._ProfileID_k__BackingField
                                             ,(MethodInfo *)0x0);
                      pOVar15 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_54,
                                 (Object *)VStack_10.z,pOVar15,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_54,
                                 (MethodInfo *)0x0);
                      pMVar17 = (this->fields).networkGame;
                      if ((pMVar17 != (MVNetworkGame *)0x0) &&
                         (pGVar64 = (pMVar17->fields).gameStatCounterManager,
                         pGVar64 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar64,(int32_t)unaff_ESI,
                                   (pMStack_47->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar17 = (this->fields).networkGame;
                        if ((pMVar17 != (MVNetworkGame *)0x0) &&
                           (pGVar64 = (pMVar17->fields).gameStatCounterManager,
                           pGVar64 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar64,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (MVAvatar__Class *)photonEvent;
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar15 != (Object *)0x0)) {
        pMVar14 = unaff_EDI;
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar22 = (undefined4 *)func_?();
        pMStack_55 = (MVWorldObject *)*puVar22;
        pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = unaff_EDI;
        if (pOVar15 != (Object *)0x0) {
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar37 = (int *)func_?();
          iVar27 = *piVar37;
          pMVar14 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x9a,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (pMVar14 != (MVAvatar__Class *)0x0) {
            if ((String__Class *)(pMVar14->_0).image == TypeInfo__System__String) {
              unaff_EDI = pMVar14;
            }
            if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
          }
          pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          if (pOVar15 != (Object *)0x0) {
            pMVar14 = unaff_EDI;
            if ((pOVar15->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar57 = (undefined1 *)func_?();
            pMStack_52 = (MVAvatar__Class *)CONCAT31(pMStack_52._1_3_,*puVar57);
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            if (pOVar15 != (Object *)0x0) {
              if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              puVar22 = (undefined4 *)func_?();
              pMStack_19 = (MVAvatar__Class *)*puVar22;
              pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              if (pOVar15 != (Object *)0x0) {
                if ((pOVar15->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                puVar57 = (undefined1 *)func_?();
                pMStack_13 = (MVAvatar__Class *)CONCAT31(pMStack_13._1_3_,*puVar57);
                unaff_ESI = (MVAvatar__Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pMVar14 = (MVAvatar__Class *)0x0;
                if (unaff_ESI != (MVAvatar__Class *)0x0) {
                  if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                    pMVar14 = unaff_ESI;
                  }
                  if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
                }
                VStack_10.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)pMVar14,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar17 = (this->fields).networkGame;
                if ((pMVar17 != (MVNetworkGame *)0x0) &&
                   (pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar17,(MethodInfo *)0x0), pMVar39 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar27 == (pMVar39->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_3;
                    return;
                  }
                  unaff_ESI = (MVAvatar__Class *)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,iVar27,(int32_t)pMStack_55,(String *)unaff_EDI,
                             (BuildTarget__Enum)pMStack_52,(UserProfileData *)VStack_10.z,0,
                             (bool)pMStack_13,(MethodInfo *)0x0);
                  if (unaff_ESI != (MVAvatar__Class *)0x0) {
                    *(MVAvatar__Class **)((int)&unaff_ESI->_0 + 0x48) = pMStack_19;
                    pMVar17 = (this->fields).networkGame;
                    if ((pMVar17 != (MVNetworkGame *)0x0) &&
                       (pMVar77 = (pMVar17->fields).playerContainer,
                       pMVar77 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar77,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
  pMVar14 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  unaff_EDI = pMVar14;
code_?:
  func_?(unaff_EDI);
  _Stack_54 = (_union_86)(unaff_EDI->_0).image;
  func_?(&_Stack_54,&UNK_?);
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar91 = func_?();
  pcVar92 = (char *)((ulonglong)uVar91 >> 0x20);
  pcVar63 = (char *)(CONCAT22((short)((ulonglong)uVar91 >> 0x10),
                              CONCAT11((byte)((ulonglong)uVar91 >> 8) & *extraout_ECX,(char)uVar91))
                    + -0x4aefacdf);
  *pcVar63 = *pcVar63 + (char)extraout_ECX;
  *(uint *)(unaff_EBX + 0x10) = *(uint *)(unaff_EBX + 0x10) & (uint)pcVar92;
  bVar93 = (byte)((ulonglong)uVar91 >> 0x20);
  *pcVar92 = *pcVar92 + bVar93;
  lVar94 = (longlong)*(int *)(unaff_EBX + 0x10) * 0xADDR;
  bVar95 = (byte)((ulonglong)uVar91 >> 0x28);
  *pcVar92 = *pcVar92 + bVar93 +
             (CARRY1(in_stack_96,bVar95) ||
             CARRY1(in_stack_96 + bVar95,
                    CARRY1(bVar6,bVar93) || CARRY1(bVar6 + bVar93,(int)lVar94 != lVar94)));
  iVar27 = *(int *)(unaff_EBX + 0x10);
  pcVar63 = (char *)(iVar27 * 0xADDR);
  uVar97 = (uint)&stack0xffffff50 | (uint)(unaff_EDI->_0).image;
  *(int *)(uVar97 - 4) = unaff_EBX;
  pbVar50 = (byte *)(unaff_EBX + 0x27);
  bVar6 = *pbVar50;
  *pbVar50 = *pbVar50 + (byte)unaff_EBX;
  *(int *)(uVar97 - 8) = unaff_EBX;
  cVar98 = (char)((uint)extraout_ECX >> 8);
  *(char *)(unaff_EBX + 0x33105327) =
       *(char *)(unaff_EBX + 0x33105327) + cVar98 + CARRY1(bVar6,(byte)unaff_EBX);
  *(char *)(unaff_EBX + 0x10) = *(char *)(unaff_EBX + 0x10) - (char)pcVar63;
  uRam_? = uRam_? + iVar27 * -0x20a64cf4;
  bVar99 = cVar98 + *pcVar63;
  iVar27 = CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar99,0x23));
  *(undefined4 *)(uVar97 - 0xc) = 0x28105328;
  bVar95 = (byte)&stack0xfffffffc;
  iVar38 = uRam_? * 0xADDR;
  *(char *)(iVar27 + 0x53) = *(char *)(iVar27 + 0x53) + bVar99;
  iVar38 = CONCAT31((int3)((uint)iVar38 >> 8),(char)iVar38 - (char)uRam_?);
  pbVar50 = (byte *)(iVar27 + 0x53);
  bVar6 = *pbVar50;
  *pbVar50 = *pbVar50 + bVar99;
  iVar27 = CONCAT31((int3)((uint)iVar27 >> 8),bVar95 + 0x23 + CARRY1(bVar6,bVar99));
  sVar100 = ((ushort)iVar38 & 3) - ((ushort)uRam_? & 3);
  uRam_? = CONCAT22(uRam_?._2_2_,(ushort)uRam_? + (ushort)(0 < sVar100) * sVar100);
  uVar101 = iVar38 - 1;
  *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image =
       *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image + (char)((uint)&stack0xfffffffc >> 8)
       + (bVar95 < 0x53);
  bVar21 = CONCAT31((int3)((uint)&stack0xfffffffc >> 8),bVar95 + 0xad) < 0x2dba1053;
  bVar95 = bVar95 + 0x5a;
  *(undefined4 *)(uVar97 - 0x10) = 0x28105328;
  bVar6 = *(byte *)&(unaff_EDI->_0).image;
  bVar93 = *(char *)&(unaff_EDI->_0).image + bVar99;
  *(byte *)&(unaff_EDI->_0).image = bVar93 + bVar21;
  in_AF = 9 < (bVar95 & 0xf) | in_AF;
  bVar21 = 0x99 < bVar95 || (CARRY1(bVar6,bVar99) || CARRY1(bVar93,bVar21));
  bVar95 = bVar95 + in_AF * -6 + bVar21 * -0x60;
  *(undefined4 *)(uVar97 - 0x14) = 0x28105328;
  pbVar50 = (undefined1 *)((int)&((Object *)((int)&unaff_EDI->_0 + 0x50))->klass + 3) + (int)pcVar92
  ;
  bVar102 = 0xd7 < *pbVar50 || CARRY1(*pbVar50 + 0x28,bVar21);
  *pbVar50 = *pbVar50 + 0x28 + bVar21;
  pbVar50 = (byte *)(iVar27 + -0x15efacd1);
  bVar6 = *pbVar50;
  bVar99 = (byte)uVar101;
  bVar93 = *pbVar50 + bVar99;
  *pbVar50 = bVar93 + bVar102;
  in_AF = 9 < (bVar95 & 0xf) | in_AF;
  *(undefined4 *)(uVar97 - 0x18) = 0x28105328;
  pcVar63 = (char *)(iVar27 + 0x4a105330);
  *pcVar63 = *pcVar63 + 'S' + (0x99 < bVar95 || (CARRY1(bVar6,bVar99) || CARRY1(bVar93,bVar102)));
  cVar98 = '\0';
  uRam_? = uRam_? ^ uVar101;
  *(undefined2 *)(uVar97 - 0x1c) = in_CS;
  puVar103 = (undefined1 *)(uVar97 - 0x20);
  *(undefined **)(uVar97 - 0x20) = &UNK_?;
  uVar91 = func_?();
  puVar104 = (uint *)((ulonglong)uVar91 >> 0x20);
  bVar105 = (char)((ulonglong)uVar91 >> 8) + (char)((ulonglong)uVar91 >> 0x28) + cVar98;
  iVar27 = CONCAT22((short)((ulonglong)uVar91 >> 0x10),CONCAT11(bVar105,(char)uVar91));
  uRam_? = uRam_? ^ (uint)puVar104;
  *puVar104 = *puVar104 & (uint)photonEvent;
  *(undefined4 *)(puVar103 + -4) = 0x28105328;
  puVar57 = (undefined1 *)
            ((int)&((Object *)((int)&((MVAvatar__Class *)photonEvent)->_0 + 0x30))->klass + 2);
  bVar6 = *puVar57;
  bVar106 = (byte)extraout_ECX_00;
  *puVar57 = *puVar57 + bVar106;
  *(undefined4 *)(puVar103 + -8) = 0x28105328;
  pbVar50 = (byte *)(iVar27 + 0x32);
  bVar93 = *pbVar50;
  bVar95 = *pbVar50;
  *pbVar50 = bVar95 + 0x53 + CARRY1(bVar6,bVar106);
  *(undefined4 *)(puVar103 + -0xc) = 0x28105328;
  pcVar92[0x13105332] =
       pcVar92[0x13105332] + bVar105 + (0xac < bVar93 || CARRY1(bVar95 + 0x53,CARRY1(bVar6,bVar106)))
  ;
  uVar107 = (uint)puVar104 ^ uRam_?;
  uVar108 = (undefined3)((uint)iVar27 >> 8);
  uVar101 = CONCAT31(uVar108,(char)uVar91) ^ 0x53;
  *(char *)(uVar101 + 0xb1105335) = *(char *)(uVar101 + 0xb1105335) + bVar105;
  uRam_? = 0x28105328;
  bVar109 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar95 = bVar109 + 0x28;
  pbRamcd105313 = (byte *)CONCAT31(0x281053,bVar95);
  bVar99 = (byte)uVar101;
  bVar110 = (byte)(uVar107 >> 8);
  uRam_? = uVar107;
  *(char *)(uVar107 + 0x8310533c) = *(char *)(uVar107 + 0x8310533c) + bVar110 + (bVar99 < 0x53);
  pbVar50 = pbRamcd105313 + 0x3e;
  bVar21 = CARRY1(*pbVar50,bVar95) || CARRY1(*pbVar50 + bVar95,uVar101 < 0x3df71053);
  pbRamcd10532b = pbRamcd105313;
  *pbVar50 = *pbVar50 + bVar95 + (uVar101 < 0x3df71053);
  pbVar50 = (byte *)((int)unaff_EDI * 2);
  bVar6 = *pbVar50;
  bVar93 = *pbVar50;
  pbRamcd105327 = pbRamcd105313;
  *pbVar50 = bVar93 + bVar105 + bVar21;
  iVar38 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                    bVar106 * '\x02' + (CARRY1(bVar6,bVar105) || CARRY1(bVar93 + bVar105,bVar21)));
  in_AF = 9 < (bVar99 & 0xf) | in_AF;
  uVar101 = CONCAT31(uVar108,bVar99 + in_AF * -6) & 0xffffff0f;
  bVar105 = bVar105 - in_AF;
  iVar27 = CONCAT22((short)(uVar101 >> 0x10),CONCAT11(bVar105,(char)uVar101));
  pOVar15 = (Object *)((int)&((MVAvatar__Class *)photonEvent)->_0 + 0x40);
  bVar6 = *(char *)&pOVar15->klass + bVar109;
  bVar21 = CARRY1(*(byte *)&pOVar15->klass,bVar109) || CARRY1(bVar6,in_AF);
  *(byte *)&pOVar15->klass = bVar6 + in_AF;
  bVar109 = (byte)uVar107;
  bVar102 = CARRY1(*pbRamcd105313,bVar109) || CARRY1(*pbRamcd105313 + bVar109,bVar21);
  pbRamcd10531b = pbRamcd105313;
  pbRamcd10531f = pbRamcd105313;
  pbRamcd105323 = pbRamcd105313;
  *pbRamcd105313 = *pbRamcd105313 + bVar109 + bVar21;
  iVar111 = iVar38 + 1;
  pbVar50 = (byte *)(iVar27 + 0x41);
  bVar21 = CARRY1(*pbVar50,bVar95) || CARRY1(*pbVar50 + bVar95,bVar102);
  pbRamcd105317 = pbRamcd105313;
  *pbVar50 = *pbVar50 + bVar95 + bVar102;
  pbVar50 = (byte *)(uVar107 + 0x53 + iVar27 * 2);
  bVar99 = (byte)iVar111;
  bVar102 = CARRY1(*pbVar50,bVar99) || CARRY1(*pbVar50 + bVar99,bVar21);
  *pbVar50 = *pbVar50 + bVar99 + bVar21;
  bVar106 = (byte)((uint)iVar111 >> 8);
  bVar21 = CARRY1(bVar95,bVar106) || CARRY1(bVar95 + bVar106,bVar102);
  iVar112 = CONCAT31(0x281053,bVar95 + bVar106 + bVar102);
  pcRam_? = pcVar92 + 1;
  pbVar50 = (byte *)(iVar27 + 0x38105346);
  bVar102 = CARRY1(*pbVar50,bVar109) || CARRY1(*pbVar50 + bVar109,bVar21);
  iRam_? = iVar112;
  *pbVar50 = *pbVar50 + bVar109 + bVar21;
  bVar6 = *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image + bVar105;
  bVar21 = CARRY1(*(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image,bVar105) ||
           CARRY1(bVar6,bVar102);
  *(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image = bVar6 + bVar102;
  bVar102 = CARRY1(bVar110,bVar99) || CARRY1(bVar110 + bVar99,bVar21);
  bVar105 = bVar110 + bVar99 + bVar21;
  pbVar113 = (byte *)(iVar27 + -2);
  puVar57 = (undefined1 *)
            ((int)&((Object *)((int)&((MVAvatar__Class *)photonEvent)->_0 + 0x48))->klass + 1);
  bVar21 = CARRY1(*puVar57,bVar105) || CARRY1(*puVar57 + bVar105,bVar102);
  *puVar57 = *puVar57 + bVar105 + bVar102;
  bVar93 = *pbVar113;
  bVar95 = (byte)((uint)pbVar113 >> 8);
  bVar6 = *pbVar113;
  iRam_? = iVar112;
  iRam_? = iVar112;
  iRam_? = iVar112;
  iRam_? = iVar112;
  *pbVar113 = bVar6 + bVar95 + bVar21;
  uVar101 = CONCAT22((short)(uVar107 >> 0x10),CONCAT11(bVar105,bVar109)) - 1;
  bVar93 = bVar95 + (char)(uVar101 >> 8) + (CARRY1(bVar93,bVar95) || CARRY1(bVar6 + bVar95,bVar21));
  pbVar114 = (byte *)CONCAT22((short)((uint)pbVar113 >> 0x10),CONCAT11(bVar93,(char)pbVar113));
  iRam_? = iVar112;
  *(uint *)(iVar112 + 0x10) = *(uint *)(iVar112 + 0x10) ^ uVar101;
  pbVar50 = (byte *)(iVar38 + 0x54);
  bVar6 = *pbVar50;
  *pbVar50 = *pbVar50 + bVar106;
  *(char *)((int)photonEvent + 0x10507cU + 0x2ceU) =
       *(char *)((int)photonEvent + 0x10507cU + 0x2ceU) + (char)pbVar113 + CARRY1(bVar6,bVar106);
  iVar27 = *(int *)(iVar112 + 0x10);
  iVar115 = iVar27 * 0xADDR;
  pbVar50 = (byte *)(iVar38 + 0x54);
  bVar6 = *pbVar50;
  *pbVar50 = *pbVar50 + bVar106;
  bVar21 = 0xac < bRam_? || CARRY1(bRam_? + 0x53,CARRY1(bVar6,bVar106));
  bRam_? = bRam_? + 0x53 + CARRY1(bVar6,bVar106);
  pbVar113 = (byte *)(iVar112 + -1);
  bVar102 = CARRY1(*pbVar113,bVar106) || CARRY1(*pbVar113 + bVar106,bVar21);
  pbRamcd1052f7 = pbVar113;
  *pbVar113 = *pbVar113 + bVar106 + bVar21;
  pbVar50 = pbVar114 + 0x5810534c;
  bVar106 = (byte)((uint)pbVar113 >> 8);
  bVar21 = CARRY1(*pbVar50,bVar106) || CARRY1(*pbVar50 + bVar106,bVar102);
  pbRamcd1052f2 = pbVar113;
  *pbVar50 = *pbVar50 + bVar106 + bVar102;
  pbVar50 = pbVar114 + 0x2210534c;
  bVar102 = CARRY1(*pbVar50,bVar106) || CARRY1(*pbVar50 + bVar106,bVar21);
  pbRamcd1052ed = pbVar113;
  *pbVar50 = *pbVar50 + bVar106 + bVar21;
  puRam_? = (undefined1 *)((int)photonEvent + 0xfffffc2cU + 0x3d3);
  uVar116 = (int)photonEvent + 0x1b1052b4U + 0x99;
  bVar105 = (byte)pbVar113;
  bVar21 = CARRY1(*(byte *)uVar116,bVar105) || CARRY1(*(char *)uVar116 + bVar105,bVar102);
  *(byte *)uVar116 = *(char *)uVar116 + bVar105 + bVar102;
  pbVar50 = (byte *)(iVar38 + -0x7cefacaf);
  bVar95 = (byte)((uint)iVar115 >> 8);
  bVar6 = *pbVar50 + bVar95;
  bVar102 = CARRY1(*pbVar50,bVar95) || CARRY1(bVar6,bVar21);
  pbRamcd1052e5 = pbVar113;
  pbRamcd1052e9 = pbVar113;
  *pbVar50 = bVar6 + bVar21;
  pbVar50 = (byte *)(iVar112 + 0x54061052 + iVar27 * 0x20a6d200);
  bVar21 = CARRY1(*pbVar50,bVar93) || CARRY1(*pbVar50 + bVar93,bVar102);
  pbRamcd1052dd = pbVar113;
  iRam_? = iVar111;
  *pbVar50 = *pbVar50 + bVar93 + bVar102;
  pbVar50 = pbVar114 + 0x6a105354;
  bVar102 = CARRY1(*pbVar50,bVar106) || CARRY1(*pbVar50 + bVar106,bVar21);
  pbRamcd1052d9 = pbVar113;
  *pbVar50 = *pbVar50 + bVar106 + bVar21;
  bVar21 = CARRY1(*pbVar114,bVar106) || CARRY1(*pbVar114 + bVar106,bVar102);
  pbRamcd1052d1 = pbVar113;
  *pbVar114 = *pbVar114 + bVar106 + bVar102;
  bVar102 = CARRY1(*puRam_?,bVar93) || CARRY1(*puRam_? + bVar93,bVar21);
  *puRam_? = *puRam_? + bVar93 + bVar21;
  uVar116 = (int)photonEvent + 0x3a105344U + 0x12;
  bVar21 = CARRY1(*(byte *)uVar116,bVar105) || CARRY1(*(bool *)uVar116 + bVar105,bVar102);
  *(bool *)uVar116 = *(bool *)uVar116 + bVar105 + bVar102;
  bVar102 = CARRY1(bVar99,bVar105) || CARRY1(bVar99 + bVar105,bVar21);
  pbVar50 = (byte *)(CONCAT31((int3)((uint)iVar111 >> 8),bVar99 + bVar105 + bVar21) + 0x59);
  bVar117 = CARRY1(*pbVar50,bVar106) || CARRY1(*pbVar50 + bVar106,bVar102);
  pbRamcd1052c1 = pbVar113;
  pMRamcd1052c5 = unaff_EDI;
  pbRamcd1052c9 = pbVar113;
  *pbVar50 = *pbVar50 + bVar106 + bVar102;
  bVar21 = CARRY1(bVar105,bVar117);
  bVar6 = bVar105 + bVar117;
  iVar38 = CONCAT31((int3)((uint)pbVar113 >> 8),bVar6);
  pbVar50 = (byte *)(iVar38 + 0x5a);
  bVar102 = CARRY1(*pbVar50,bVar105) || CARRY1(*pbVar50 + bVar105,bVar21);
  iRam_? = iVar38;
  *pbVar50 = *pbVar50 + bVar105 + bVar21;
  bVar21 = CARRY1(bRam_?,bVar6) || CARRY1(bRam_? + bVar6,bVar102);
  bRam_? = bRam_? + bVar6 + bVar102;
  pbVar50 = (byte *)(iVar115 + 0x1610535b);
  bVar102 = CARRY1(*pbVar50,bVar106) || CARRY1(*pbVar50 + bVar106,bVar21);
  iRam_? = iVar38;
  *pbVar50 = *pbVar50 + bVar106 + bVar21;
  iVar27 = iRam_?;
  *(int *)(iRam_? + -4) = iVar38;
  bVar6 = *(char *)&(unaff_EDI->_0).image + bVar105;
  bVar21 = CARRY1(*(byte *)&(unaff_EDI->_0).image,bVar105) || CARRY1(bVar6,bVar102);
  *(byte *)&(unaff_EDI->_0).image = bVar6 + bVar102;
  *(int *)(iVar27 + -4) = iVar38;
  bVar6 = *pbVar113;
  bVar93 = *pbVar113;
  *pbVar113 = bVar93 + bVar105 + bVar21;
  *(int *)(iVar27 + -4) = iVar38;
  *pbVar113 = *pbVar113 + bVar105 + (CARRY1(bVar6,bVar105) || CARRY1(bVar93 + bVar105,bVar21));
  lVar94 = (longlong)*(int *)(iVar38 + 0x10) * 0xADDR;
  bVar21 = (int)lVar94 != lVar94;
  iVar38 = *(int *)(iVar27 + 0xc);
  pbVar50 = *(byte **)(iVar27 + 0x10);
  *(int *)(iVar27 + 0x18) = iVar38;
  bVar6 = *pbVar50;
  bVar95 = (byte)*(undefined4 *)(iVar27 + 0x14);
  bVar93 = *pbVar50 + bVar95;
  *pbVar50 = bVar93 + bVar21;
  piVar37 = (int *)(iVar38 + 0x10 + (int)pbVar50 * 2);
  *piVar37 = *piVar37 + iVar27 + 0x18 + (uint)(CARRY1(bVar6,bVar95) || CARRY1(bVar93,bVar21));
  *(short *)(iVar27 + 0x16) = (short)iVar38;
  pcVar118 = (code *)swi(3);
  (*pcVar118)();
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
    (this->fields).cachedEvents = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

