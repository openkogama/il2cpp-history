
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
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
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
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVAvatar__Class *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
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
        pMVar12 = (MVAvatar__Class *)(pWVar19->fields)._.worldObjectClientManager;
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)photonEvent;
        pMStack_20 = pMVar12;
        if (photonEvent != (EventData *)0x0) {
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)0x0);
          pMVar21 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x12,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar12 == (MVAvatar__Class *)0x0) break;
          unaff_EDI = (MVAvatar__Class *)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pMVar21 == (MVAvatar__Class *)0x0) {
            unaff_ESI = (MVAvatar__Class *)0x0;
code_?:
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)pMStack_20,*piVar17,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pMVar22 = (MVNetworkGame__Class *)(pMVar21->_0).image;
          if (((pMVar22->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar22->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          unaff_ESI = (MVAvatar__Class *)0x0;
          if (bVar23) {
            unaff_ESI = pMVar21;
          }
          bVar13 = 0;
          if (unaff_ESI != (MVAvatar__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        puVar24 = (undefined4 *)func_?();
        pMVar12 = (MVAvatar__Class *)*puVar24;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x12,(MethodInfo *)0x0);
        pDVar25 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pWVar19 = (pMVar18->fields).worldNetwork;
          bVar13 = 0;
          if (pWVar19 != (WorldNetwork *)0x0) {
            pMVar26 = (pWVar19->fields)._.worldObjectClientManager;
            bVar13 = 0;
            if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar26,(int32_t)pMVar12,pDVar25,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        bVar13 = 0;
        if (pWVar19 != (WorldNetwork *)0x0) {
          pMVar26 = (pWVar19->fields)._.worldObjectClientManager;
          bVar13 = 0;
          if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar26,(int32_t)pMVar12,pDVar25,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
    bVar13 = 0;
    if (unaff_ESI != (MVAvatar__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_07 = (HashSet_1_System_ByteEnum_ *)((Object *)((int)&unaff_ESI->_0 + 8))->monitor;
      bVar13 = 0;
      if (this_07 != (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar27 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (this_07,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar27 == 0) {
          pSVar28 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar28,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar28,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
        bVar13 = 0;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_08 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
          bVar13 = 0;
          if (this_08 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
            unaff_ESI = (MVAvatar__Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  (this_08,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
            bVar13 = 0;
            if (unaff_ESI != (MVAvatar__Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->ReceivedItemFromQuery ==
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pSVar28 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar28 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              iVar29 = (int)((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                            ReceivedItemFromQuery;
              bVar13 = 0;
              if (iVar29 != 0) {
                (**(code **)(iVar29 + 0xc))();
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
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVAvatar__Class *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
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
        pMVar30 = (pWVar19->fields)._.worldInventory;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (MVAvatar__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pMVar12 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x31,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar30 == (MVWorldInventory *)0x0) break;
          pMStack_31 = (MVAvatar__Class *)TypeInfo__System__Byte;
          unaff_EDI = pMVar12;
          if (pMVar12 == (MVAvatar__Class *)0x0) {
code_?:
            bVar13 = 0;
            pMVar12 = unaff_EDI;
            if (unaff_ESI != (MVAvatar__Class *)0x0) {
              pIVar15 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              puVar24 = (undefined4 *)func_?();
              unaff_ESI = (MVAvatar__Class *)*puVar24;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (pMVar30->fields).runtimePrototypes;
              bVar13 = 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar32 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                this_09 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (this_09,(Byte__Array *)unaff_EDI,(MethodInfo *)0x0);
                bVar13 = 0;
                unaff_ESI = (MVAvatar__Class *)0x0;
                if (pRVar32 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar32,this_09,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI = (MVAvatar__Class *)func_?();
          bVar13 = 0;
          pMStack_20 = unaff_EDI;
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
          unaff_ESI = (MVAvatar__Class *)
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
            pfVar33 = (float *)func_?();
            fVar34 = *pfVar33;
            bVar13 = 0;
            if (unaff_ESI != (MVAvatar__Class *)0x0) {
              pIVar15 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              puVar24 = (undefined4 *)func_?();
              unaff_ESI = (MVAvatar__Class *)*puVar24;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pDVar35 = (Dictionary_2_System_Int32_System_Object_ *)
                        ((Object *)((int)&unaff_EDI->_0 + 8))->klass;
              bVar13 = 0;
              if (pDVar35 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar32 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (pDVar35,(int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar13 = 0;
                if (pRVar32 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar32->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar32->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar32->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar32,fVar34,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_31 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_20 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar37 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)pMStack_31,*piVar17,iVar37,iVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar36 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar18,(int32_t)pMVar12,iVar36,*piVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar36 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar38 = (FriendStatus__Enum *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar18,(int32_t)pMVar12,iVar36,*pFVar38,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)0x0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_ESI = (MVAvatar__Class *)(pMVar18->fields)._NetworkGameStateListener_k__BackingField;
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        pMStack_20 = (MVAvatar__Class *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x41,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          puVar24 = (undefined4 *)func_?();
          pMVar12 = (MVAvatar__Class *)*puVar24;
          piVar39 = (int *)func_?();
          iVar29 = *piVar39;
          puVar24 = (undefined4 *)func_?();
          pMStack_20 = (MVAvatar__Class *)*puVar24;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          ((Object *)((int)&unaff_ESI->_0 + 0x10))->klass = (Object__Class *)pMStack_20;
          ((Object *)((int)&unaff_ESI->_0 + 8))->klass = (Object__Class *)iVar29;
          ((Object *)((int)&unaff_ESI->_0 + 8))->monitor = (MonitorData *)pMVar12;
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            iVar36 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar18,(MethodInfo *)0x0);
            iVar40 = (int)((Object *)((int)&unaff_ESI->_0 + 0x18))->klass;
            ((Object *)((int)&unaff_ESI->_0 + 0x10))->monitor =
                 (MonitorData *)((int)pMVar12 + (iVar29 - iVar36));
            if (iVar40 == 0) goto code_?;
            iVar29 = (int)((Object *)((int)&unaff_ESI->_0 + 0x18))->klass;
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
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)0x0;
            if (iVar29 != 0) {
              (**(code **)(iVar29 + 0xc))();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
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
        pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar41 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (MVAvatar__Class *)(pMVar41->fields)._._ActorNr_k__BackingField;
          puVar24 = (undefined4 *)func_?();
          if ((MVAvatar__Class *)*puVar24 == unaff_ESI) goto code_?;
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pWVar19 = (pMVar18->fields).worldNetwork;
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)photonEvent;
            if (pWVar19 != (WorldNetwork *)0x0) {
              pMVar21 = (MVAvatar__Class *)(pWVar19->fields)._.worldObjectClientManager;
              pMStack_20 = pMVar21;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar13 = 0;
              unaff_ESI = (MVAvatar__Class *)0x0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (pMVar21 != (MVAvatar__Class *)0x0) {
                pDVar25 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)pMStack_20,*piVar17,pDVar25,
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_31 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_20 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar37 = *piVar17;
        pPVar42 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_31,*pPVar42,iVar37,iVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_20 = (MVAvatar__Class *)*puVar24;
      pfVar33 = (float *)func_?();
      pIVar16 = (Il2CppClass *)*pfVar33;
      pfVar33 = (float *)func_?();
      VStack_8.x = *pfVar33;
      VStack_8.z = (float)pMStack_20;
      VStack_8.y = (float)pIVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_20 = (MVAvatar__Class *)*puVar24;
      puVar24 = (undefined4 *)func_?();
      pIVar16 = (Il2CppClass *)*puVar24;
      puVar24 = (undefined4 *)func_?();
      pIStack_9 = (Il2CppClass *)*puVar24;
      pMVar18 = (this->fields).networkGame;
      pMStack_11 = pMStack_20;
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar43 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar43,pDVar25,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      pMStack_20 = (MVAvatar__Class *)
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
      piVar17 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)0x0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar44 = (MVTeam__Enum *)func_?();
        team = *pMVar44;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar18,*piVar17,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMStack_31 = pMVar12;
    if (photonEvent != (EventData *)0x0) {
      pMStack_20 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar37 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)pMStack_31,*piVar17,iVar37,iVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar36,(MethodInfo *)0x0);
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
      pOVar14 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_20 = (MVAvatar__Class *)*puVar24;
      pOVar45 = (Object *)func_?();
      pSVar28 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar14,pOVar45,
                           (MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)0x0;
      if (pDVar47 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_48 = (MVPlayer *)*puVar24;
        uStack_49 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_31 = (MVAvatar__Class *)*puVar24;
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)0x0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar50 = (pMVar18->fields)._PlayerController_k__BackingField;
          pMStack_20 = (MVAvatar__Class *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)0x0;
          if (pMVar50 != (MVLocalObjectController *)0x0) {
            pbVar51 = (byte *)func_?();
            bVar13 = *pbVar51;
            piVar17 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar50,*piVar17,(int32_t)pMStack_48,(int32_t)pMStack_31,(uint)bVar13,
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
      puVar24 = (undefined4 *)func_?();
      unaff_ESI = (MVAvatar__Class *)*puVar24;
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (MVAvatar__Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar52,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          pMVar12 = TypeInfo__MVAvatar;
          if ((unaff_ESI == (MVAvatar__Class *)0x0) || (iVar29 = func_?(), iVar29 == 0))
          goto code_?;
          iVar29 = func_?();
          bVar13 = 0;
          if (iVar29 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_20 = (MVAvatar__Class *)*puVar24;
        uStack_49 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_53 = (MVAvatar__Class *)*puVar24;
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar52,(int32_t)pMStack_20,(MethodInfo *)0x0);
            pMStack_11 = (MVAvatar__Class *)func_?();
            bVar13 = 0;
            if (pMStack_11 != (MVAvatar__Class *)0x0) {
              pMStack_48 = (MVPlayer *)
                           (((MVNetworkGame__Class *)((int)&pMStack_11->vtable + 0x40))->_0).image;
              uStack_54 = 3;
              pOVar14 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar24 = (undefined4 *)func_?();
              pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar24;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar24 = (undefined4 *)func_?();
              pMStack_56 = (MVWorldObject *)*puVar24;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              puVar24 = (undefined4 *)func_?();
              pMStack_31 = (MVAvatar__Class *)*puVar24;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              puVar24 = (undefined4 *)func_?();
              pMStack_20 = (MVAvatar__Class *)*puVar24;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar24 = (undefined4 *)func_?();
              VStack_8.z = (float)*puVar24;
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)this;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pWVar19 = (pMVar18->fields).worldNetwork;
                bVar13 = 0;
                if (pWVar19 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar19,(int32_t)pMStack_56,0,1,(int32_t)pMStack_48,(int32_t)pDStack_55,
                             (int32_t)pMStack_31,(int32_t)pMStack_20,(MethodInfo *)0x0);
                  pMVar18 = (this->fields).networkGame;
                  bVar13 = 0;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar18,(MethodInfo *)0x0);
                    bVar13 = 0;
                    if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_56 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar52,(int32_t)pDStack_55,(MethodInfo *)0x0);
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
                      if (pMStack_56 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar18 = (this->fields).networkGame;
                        bVar13 = 0;
                        if (pMVar18 != (MVNetworkGame *)0x0) {
                          pMVar50 = (pMVar18->fields)._PlayerController_k__BackingField;
                          pMStack_56 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar13 = 0;
                          pMVar12 = (MVAvatar__Class *)0x0;
                          if (pMVar50 != (MVLocalObjectController *)0x0) {
                            pbVar51 = (byte *)func_?();
                            bVar13 = *pbVar51;
                            piVar17 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar50,*piVar17,(int32_t)pDStack_55,(int32_t)pMStack_53,
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
      puVar24 = (undefined4 *)func_?();
      pIVar57 = (Il2CppGenericClass *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar58 = (undefined1 *)func_?();
      uVar59 = *puVar58;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar33 = (float *)func_?();
      pFVar60 = (FieldInfo *)*pfVar33;
      pMStack_11 = (MVAvatar__Class *)pIVar57;
      pMStack_53 = (MVAvatar__Class *)func_?();
      uStack_54 = uVar59;
      pOVar14 = (Object *)func_?();
      VStack_8.z = (float)pFVar60;
      pOVar45 = (Object *)func_?();
      pSVar28 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)pMStack_53,
                           pOVar14,pOVar45,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar28,(MethodInfo *)0x0);
      pMVar61 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar16 = (pMVar61->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar16->vtable[0].methodPtr & 0x100) == 0) {
        pIVar16 = (Il2CppClass *)func_?();
      }
      if (pIVar16->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar16 = (pMVar61->field7_0x1c).rgctx_data[2].klass;
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
      pBVar62 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pWVar19 != (WorldNetwork *)0x0) {
          this_01 = (pWVar19->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (MVAvatar__Class *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,pBVar62,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)0x0;
          if (this_01 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_01,runtimeEvent,(MethodInfo *)0x0);
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
        this_02 = (RuntimeEventManager *)(pWVar19->fields)._.runtimeEventManagerNetwork;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (this_02 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMVar12 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_31 = (MVAvatar__Class *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar58 = (undefined1 *)func_?();
      pMStack_20 = (MVAvatar__Class *)CONCAT31(pMStack_20._1_3_,*puVar58);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_48 = (MVPlayer *)*puVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar63 = (bool *)func_?();
      bVar27 = *pbVar63;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar64 = (char *)func_?();
      pMVar18 = (this->fields).networkGame;
      if (*pcVar64 == '\0') {
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar65 = (pMVar18->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar65 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar65,(GameStatCounterType__Enum)pMStack_20,(int32_t)pMVar12,
                       (MVTeam__Enum)pMStack_31,(int32_t)pDStack_55,(int32_t)pMStack_48,bVar27,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar65 = (pMVar18->fields).gameStatCounterManager;
          bVar13 = 0;
          if (pGVar65 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar65,(GameStatCounterType__Enum)pMStack_20,(MVTeam__Enum)pMStack_31,
                       (int32_t)pMVar12,(int32_t)pDStack_55,(int32_t)pMStack_48,bVar27,
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
      pBVar62 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pGVar65 = (pMVar18->fields).gameStatCounterManager;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pGVar65 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar65,pBVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar36 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pMVar61 = (MethodInfo *)0x0;
      pBVar62 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar12,pBVar62,pMVar61);
      unaff_ESI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)pMVar12,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        this_03 = (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar13 = 0;
        if (this_03 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_03,iVar36,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar12 = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar36 = *piVar17;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)pMVar12,*piVar17,iVar36,(MethodInfo *)0x0);
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
      pbVar63 = (bool *)func_?();
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar66 = (pMVar18->fields)._GameCoinManager_k__BackingField;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar66 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar66,*pbVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
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
        if (pIVar15 != pIVar16) goto code_?;
        puVar24 = (undefined4 *)func_?();
        pMVar12 = (MVAvatar__Class *)*puVar24;
        unaff_ESI = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,200,(MethodInfo *)0x0);
        if (unaff_ESI == (MVAvatar__Class *)0x0) {
          pMVar21 = (MVAvatar__Class *)0x0;
        }
        else {
          unaff_EDI = (MVAvatar__Class *)(unaff_ESI->_0).image;
          if ((*(byte *)&((Object *)((int)&unaff_EDI->_1 + 0x54))->klass <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)&((MonitorData *)&unaff_EDI->_1)->field_0x0 +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          pMVar21 = (MVAvatar__Class *)0x0;
          if (bVar23) {
            pMVar21 = unaff_ESI;
          }
          bVar13 = 0;
          if (pMVar21 == (MVAvatar__Class *)0x0) goto code_?;
        }
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar18,(NotificationType__Enum)pMVar12,
                     (Dictionary_2_System_Object_System_Object_ *)pMVar21,(MethodInfo *)0x0);
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
    pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar13 = 0;
    if (unaff_EDI == (MVAvatar__Class *)0x0) break;
    if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar25->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar25->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar23) {
      pDVar67 = pDVar25;
    }
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
    unaff_ESI = (MVAvatar__Class *)this;
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pMVar12 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    unaff_EDI = (MVAvatar__Class *)func_?();
    pMStack_11 = (MVAvatar__Class *)TypeInfo__System__Byte;
    if (pMVar12 == (MVAvatar__Class *)0x0) {
      pBVar62 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar62,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) {
code_?:
          func_?();
          goto code_?;
        }
        puVar58 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)unaff_EDI >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar58);
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          pbVar63 = (bool *)func_?();
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar18,(BytePacker *)unaff_EDI,eventCode,*pbVar63,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar62 = (Byte__Array *)func_?();
    bVar13 = 0;
    if (pBVar62 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pMVar41 != (MVLocalPlayer *)0x0) {
          iVar29 = (pMVar41->fields)._._ActorNr_k__BackingField;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (unaff_ESI != (MVAvatar__Class *)0x0) {
            pIVar15 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
            pIVar16 = (TypeInfo__System__Int32->_0).element_class;
            bVar13 = pIVar15 < pIVar16;
            unaff_EDI = (MVAvatar__Class *)photonEvent;
            if (pIVar15 != pIVar16) goto code_?;
            piVar39 = (int *)func_?();
            if (*piVar39 == iVar29) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              unaff_ESI = (MVAvatar__Class *)this;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar66 = (pMVar18->fields)._GameCoinManager_k__BackingField;
                bVar13 = 0;
                pMVar12 = (MVAvatar__Class *)photonEvent;
                if (pMVar66 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar66,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar18 = (this->fields).networkGame;
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    pMVar68 = (pMVar18->fields).operationRequests;
                    bVar13 = 0;
                    unaff_ESI = (MVAvatar__Class *)0x0;
                    pMVar12 = (MVAvatar__Class *)photonEvent;
                    if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
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
                      unaff_ESI = (MVAvatar__Class *)(pMVar68->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar13 = 0;
                      pMVar12 = (MVAvatar__Class *)photonEvent;
                      if (unaff_ESI != (MVAvatar__Class *)0x0) {
                        (*(code *)*(Il2CppMetadataTypeHandle *)
                                   &((MVNetworkGame__Class *)(unaff_ESI->_0).image)[1]._0.byval_arg.
                                    attrs)();
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
                unaff_ESI = (MVAvatar__Class *)
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
                  pbVar63 = (bool *)func_?();
                  bVar27 = *pbVar63;
                  bVar13 = 0;
                  if (unaff_ESI != (MVAvatar__Class *)0x0) {
                    pIVar15 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    if (pIVar15 == pIVar16) {
                      piVar17 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI,*piVar17,bVar27,(MethodInfo *)0x0);
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
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if ((unaff_EDI == (MVAvatar__Class *)0x0) || (bVar13 = 0, pOVar14 == (Object *)0x0)) break;
    pIVar15 = (pOVar14->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
    bVar13 = pIVar15 < pIVar16;
    if (pIVar15 != pIVar16) goto code_?;
    pcVar64 = (char *)func_?();
    if (unaff_ESI == (MVAvatar__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 *pcVar64 == '\0',(MethodInfo *)0x0);
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
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    pMVar12 = (MVAvatar__Class *)0x0;
    if (bVar23) {
      pMVar12 = unaff_ESI;
    }
    bVar13 = 0;
    if (pMVar12 != (MVAvatar__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)pMVar12,
                 *pcVar64 == '\0',(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
      pDVar25 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar13 = 0;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        if (pDVar25 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar25->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar25->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        pDVar67 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar23) {
          pDVar67 = pDVar25;
        }
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar67 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar67,(MethodInfo *)0x0);
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
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((MVAvatar__Class *)photonEvent == (MVAvatar__Class *)0x0) {
      pBVar62 = (Byte__Array *)0x0;
code_?:
      pMVar18 = (this->fields).networkGame;
      unaff_ESI = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar62,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)pMVar12,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      bVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)pMVar12;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar62 = (Byte__Array *)func_?();
    bVar13 = 0;
    if (pBVar62 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (MVAvatar__Class *)(this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_ESI != (MVAvatar__Class *)0x0) &&
         (bVar13 = 0, pMVar12 = unaff_EDI, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar68 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)0x0;
    pMVar12 = unaff_EDI;
    if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar69 = (pMVar68->fields).peer;
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
    pMVar12 = (MVAvatar__Class *)func_?();
    bVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar24 = (undefined4 *)func_?();
      pMStack_11 = (MVAvatar__Class *)*puVar24;
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)pMVar12,pOVar14,
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
      pMVar70 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_ESI = (MVAvatar__Class *)0x0;
      pMVar12 = unaff_EDI;
      if (pMVar70 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (MVAvatar__Class *)(pMVar70->fields).logicEventQueue;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
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
              this_04 = (Dictionary_2_System_Int32_System_Single_ *)
                        ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
              iVar36 = *piVar17;
              bVar13 = 0;
              pMVar12 = (MVAvatar__Class *)photonEvent;
              if (this_04 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
                bVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   (this_04,iVar36,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar27 == 0) {
                  pMStack_11 = (MVAvatar__Class *)((Object *)((int)&unaff_ESI->_0 + 8))->klass;
                  VStack_8.z = (float)func_?();
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (pMStack_11 == (MVAvatar__Class *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,iVar36,
                             (Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pDVar35 = (Dictionary_2_System_Int32_System_Object_ *)
                          ((Object *)((int)&unaff_ESI->_0 + 8))->klass;
                bVar13 = 0;
                pMVar12 = (MVAvatar__Class *)photonEvent;
                if (pDVar35 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  this_11 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      (pDVar35,iVar36,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar13 = 0;
                  pMVar12 = (MVAvatar__Class *)photonEvent;
                  if (this_11 != (Queue_1_System_Object_ *)0x0) {
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
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)0x0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar70 = (pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      unaff_ESI = (MVAvatar__Class *)0x0;
      pMVar12 = unaff_EDI;
      if (pMVar70 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar70,(MethodInfo *)0x0);
        pMVar71 = (pMVar70->fields).updateEvaluatorStep;
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)0x0;
        pMVar12 = unaff_EDI;
        if (pMVar71 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar17 = &(pMVar71->fields).stepTimestamp;
          *piVar17 = *piVar17 + 1000;
code_?:
          iVar36 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar71->fields).lastUpdateTick = iVar36;
          (pMVar71->fields).accumulatedTime = 0;
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
      unaff_ESI = (MVAvatar__Class *)(pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar71 = (MVNetworkGame_UpdateEvaluator *)
                    ((Object *)((int)&unaff_ESI->_0 + 0x10))->monitor;
          bVar13 = 0;
          unaff_ESI = (MVAvatar__Class *)0x0;
          pMVar12 = unaff_EDI;
          if (pMVar71 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar71->fields).stepTimestamp = *piVar17;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)0x0;
    pMVar12 = unaff_EDI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_ESI = (MVAvatar__Class *)(pMVar18->fields).logicObjectManagerClientWrapper;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          puVar24 = (undefined4 *)func_?();
          pMVar12 = (MVAvatar__Class *)*puVar24;
          pEVar72 = ((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                    ReceivedAvatarBodiesFromQuery;
          while (bVar13 = 0, pEVar72 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pMVar73 = (pEVar72->fields)._._.method_info;
            bVar13 = 0;
            if (pMVar73 == (MethodInfo_1 *)0x0) break;
            if ((int)pMVar12 <= (int)pMVar73[2].klass) goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0)
            ;
            pEVar72 = ((MVNetworkGame__Fields *)((int)&unaff_ESI->_0 + 8))->
                      ReceivedAvatarBodiesFromQuery;
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
    unaff_ESI = (MVAvatar__Class *)func_?();
    pMVar18 = (this->fields).networkGame;
    bVar13 = 0;
    pMVar12 = (MVAvatar__Class *)this;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar18,(MethodInfo *)0x0);
    bVar13 = 0;
    if (unaff_ESI == (MVAvatar__Class *)0x0) break;
    bVar13 = 0;
    photonEvent = (EventData *)unaff_ESI;
    if (((Object *)((int)&unaff_ESI->_0 + 8))->monitor != (MonitorData *)0x0) {
      bVar13 = 0;
      if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
        pMVar74 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar52,(int32_t)((Object *)((int)&unaff_ESI->_0 + 0x10))->klass,
                             (MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          pMVar75 = ((Object *)((int)&unaff_ESI->_0 + 8))->monitor;
          bVar13 = pMVar75 == (MonitorData *)0x0;
          if (pMVar75 < (MonitorData *)0x2) goto code_?;
          bVar13 = 0;
          if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (MVAvatar__Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar52,(int32_t)((Object *)((int)&unaff_ESI->_0 + 0x10))->
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
            bVar13 = 0;
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
              iVar29 = func_?();
              bVar13 = 0;
              if (iVar29 != 0) {
                bVar27 = 0x9e;
                pMVar12 = unaff_ESI;
                this_12 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_12,bVar27,(MethodInfo *)pMVar12);
                pMVar18 = (this->fields).networkGame;
                bVar13 = 0;
                pMVar12 = (MVAvatar__Class *)this;
                if (pMVar18 != (MVNetworkGame *)0x0) {
                  pMVar50 = (pMVar18->fields)._PlayerController_k__BackingField;
                  bVar13 = 0;
                  if (pMVar50 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar50,1,(MethodInfo *)0x0);
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
      unaff_ESI = (MVAvatar__Class *)photonEvent;
      pMStack_53 = pMVar12;
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
          iVar36 = *piVar17;
          piVar17 = (int32_t *)func_?();
          iVar37 = *piVar17;
          puVar58 = (undefined1 *)func_?();
          uVar59 = *puVar58;
          piVar17 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)pMStack_53,*piVar17,CONCAT31((int3)((uint)puVar58 >> 8),uVar59)
                     ,iVar37,iVar36,(MethodInfo *)0x0);
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
      pbVar63 = (bool *)func_?();
      bVar27 = *pbVar63;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar27
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
      pMVar61 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar61);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar13 = 0;
      unaff_ESI = (MVAvatar__Class *)0x0;
      pMVar12 = (MVAvatar__Class *)photonEvent;
      if (pOVar14 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar14[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar28 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar28,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar14[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)0x0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if (pGVar76 != (GoldRewardManager *)0x0) {
          pbVar63 = (bool *)func_?();
          (pGVar76->fields).isGoldRewardGame = *pbVar63;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar63 = (bool *)func_?();
          BStack_7.m_value = *pbVar63;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar28 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar28,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar28,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar77 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar28 = (String *)0x0;
      if (pSVar77 == (String *)0x0) {
code_?:
        pSVar28 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar28,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar77->klass == TypeInfo__System__String) {
        pSVar28 = pSVar77;
      }
      bVar13 = 0;
      if (pSVar28 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      pMVar12 = unaff_EDI;
code_?:
      func_?();
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar29 = func_?();
      pMVar61 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar28 = StringLiteral_V;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (iVar29 != 0) {
        pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,(Object *)pSVar28,pMVar61);
        pbVar63 = (bool *)func_?();
        bVar27 = *pbVar63;
        pMVar18 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        unaff_ESI = (MVAvatar__Class *)0x0;
        pMVar12 = (MVAvatar__Class *)pSVar28;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar18,*piVar17,bVar27,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar77 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar28 = (String *)0x0;
      if (pSVar77 != (String *)0x0) {
        if (pSVar77->klass == TypeInfo__System__String) {
          pSVar28 = pSVar77;
        }
        bVar13 = 0;
        photonEvent = (EventData *)0x0;
        if (pSVar28 == (String *)0x0) goto code_?;
      }
      bVar27 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar28,(MethodInfo *)0x0);
      if (bVar27 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar28,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar13 = 0;
      unaff_ESI = (MVAvatar__Class *)0x0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar14[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar14[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      unaff_ESI = (MVAvatar__Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar12,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar78 = (pMVar18->fields).playerContainer;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar78 != (MVPlayerContainer *)0x0) {
          pMVar41 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar78,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if (pMVar41 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar41,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      unaff_ESI = (MVAvatar__Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar12,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
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
          pMVar79 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar12,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar79 != (MVPlayer *)0x0) {
            (pMVar79->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pSVar28 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar12,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar28,(MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar46 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar28,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar12,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pOVar14 != (Object *)0x0) {
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pLVar80 = (pMVar18->fields).levelRewardsManager;
          bVar13 = 0;
          pMVar12 = unaff_EDI;
          if (pLVar80 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar80,(Dictionary_2_System_Int32_System_Int32_ *)pOVar14[1].klass,
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar12,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar18 = (this->fields).networkGame;
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pLVar80 = (pMVar18->fields).levelRewardsManager;
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if ((pOVar14 != (Object *)0x0) &&
           (bVar13 = 0, pMVar12 = unaff_EDI, pLVar80 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar80,(int32_t)pOVar14[1].klass,(int32_t)pOVar14[1].monitor,(MethodInfo *)0x0
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar12,
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
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI == (MVAvatar__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pMVar12,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pMVar12 = unaff_ESI;
      }
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      pSVar28 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar12,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar28,(MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI == (MVAvatar__Class *)0x0) {
code_?:
        pKVar81 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar12,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar81;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pMVar12 = unaff_ESI;
      }
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar13 = 0;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        pIVar15 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar15 < pIVar16;
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
    unaff_ESI = (MVAvatar__Class *)this;
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
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar82 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar83 = pVVar82->x;
      uVar84 = pVVar82->y;
      fVar34 = pVVar82->z;
      pIStack_10 = (Il2CppClass *)uVar83;
      pMStack_11 = (MVAvatar__Class *)uVar84;
      pQVar85 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      p_Stack_44 = (Il2CppMetadataTypeHandle)pQVar85->x;
      VStack_8.x = pQVar85->y;
      VStack_8.y = pQVar85->z;
      VStack_8.z = pQVar85->w;
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
          pMVar79 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar12,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar79 != (MVPlayer *)0x0) {
            this_05 = (pMVar79->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar13 = 0;
            pMVar12 = (MVAvatar__Class *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar17 = (int32_t *)func_?();
              position.y = (float)pMStack_11;
              position.x = (float)pIStack_10;
              position.z = fVar34;
              rotation.y = VStack_8.x;
              rotation.x = (float)p_Stack_44;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar17,position,rotation,(MethodInfo *)0x0);
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
      unaff_ESI = (MVAvatar__Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar28 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar28,(MethodInfo *)unaff_ESI);
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
        unaff_ESI = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = (MVAvatar__Class *)photonEvent;
        if ((unaff_ESI != (MVAvatar__Class *)0x0) &&
           (bVar13 = 0, pMVar12 = (MVAvatar__Class *)photonEvent, pOVar14 != (Object *)0x0)) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar15 < pIVar16;
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if (pIVar15 != pIVar16) goto code_?;
          piVar17 = (int32_t *)func_?();
          pMVar79 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)photonEvent;
          if (pMVar79 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar79,(ISpawnRoleChangeHandler *)pMStack_11,spawnRolesRuntimeData,
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
      unaff_ESI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar12 = (MVAvatar__Class *)0x0;
      if (unaff_ESI != (MVAvatar__Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pMVar12 = unaff_ESI;
        }
        bVar13 = 0;
        if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
      }
      unaff_EDI = (MVAvatar__Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar12,
                             MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                            );
      pMVar52 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if ((unaff_EDI != (MVAvatar__Class *)0x0) &&
         (bVar13 = 0, pMVar52 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (MVAvatar__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar52,(((Il2CppType *)((int)&unaff_EDI->_0 + 0x18))->data).
                                       __klassIndex,(MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar18,(((Il2CppType *)((int)&unaff_EDI->_0 + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar18,(int32_t)((MVNetworkGame__Fields *)((int)&unaff_EDI->_0 + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
              bVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              pbVar63 = (bool *)func_?();
              bVar13 = 0;
              if (unaff_ESI != (MVAvatar__Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                pMVar12 = (MVAvatar__Class *)0x0;
                if (bVar23) {
                  pMVar12 = unaff_ESI;
                }
                bVar13 = 0;
                if (pMVar12 != (MVAvatar__Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar23 = false;
                  }
                  else {
                    bVar23 = true;
                  }
                  pMVar12 = (MVAvatar__Class *)0x0;
                  if (bVar23) {
                    pMVar12 = unaff_ESI;
                  }
                  bVar13 = 0;
                  if (pMVar12 != (MVAvatar__Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pMVar12,
                               (SpawnRoleBodySwitchData *)unaff_EDI,*pbVar63,(MethodInfo *)0x0);
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
    bVar13 = 0;
    unaff_ESI = (MVAvatar__Class *)photonEvent;
    pMVar12 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar12 = (MVAvatar__Class *)func_?();
      pOVar14 = (Object *)func_?();
      bVar13 = 0;
      if (pMVar12 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar24 = (undefined4 *)func_?();
        pMStack_11 = (MVAvatar__Class *)*puVar24;
        uStack_54 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar12,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar18 = (this->fields).networkGame;
        bVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          bVar13 = 0;
          if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
            pMVar12 = (MVAvatar__Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar52,(int32_t)pMStack_11,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar24 = (undefined4 *)func_?();
            unaff_ESI = (MVAvatar__Class *)*puVar24;
            iVar29 = func_?();
            bVar13 = 0;
            if (iVar29 != 0) {
              pMVar61 = (MethodInfo *)0x0;
              this_13 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_13,(int32_t)unaff_ESI,pMVar61);
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
      unaff_ESI = (MVAvatar__Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        iVar36 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar13 = 0;
        if (pMVar12 != (MVAvatar__Class *)0x0) {
          bVar27 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)pMVar12,iVar36,&pMStack_6,(MethodInfo *)0x0);
          if (bVar27 == 0) {
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
        unaff_ESI = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pMVar12 = (MVAvatar__Class *)0x0;
        if (unaff_ESI != (MVAvatar__Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pMVar12 = unaff_ESI;
          }
          bVar13 = 0;
          if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
        }
        unaff_ESI = (MVAvatar__Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pMVar12,(MethodInfo *)0x0);
        pMVar68 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar13 = 0;
        pMVar12 = unaff_EDI;
        if (pMVar68 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar68,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar13 = 0;
      pMVar12 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        this_14 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (MVAvatar__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          unaff_EDI = (MVAvatar__Class *)this_14->klass;
          if ((*(byte *)&((Object *)((int)&unaff_EDI->_1 + 0x54))->klass <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)&((MonitorData *)&unaff_EDI->_1)->field_0x0 +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          pDVar87 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar23) {
            pDVar87 = this_14;
          }
          bVar13 = 0;
          this_14 = pDVar87;
          pMVar12 = unaff_EDI;
          if (pDVar87 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar13 = 0;
        if (this_14 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar21 = (MVAvatar__Class *)&UNK_?;
          this_15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_14,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar13 = 0;
          if (this_15 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar88 = mscorlib.dll::System::Collections::Generic::
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
            VStack_8.y = 0.0;
            pMVar89 = (MVAvatar__Class *)pDVar88->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI;
            do {
              bVar27 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar27 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)pMVar21);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar12 = (MVAvatar__Class *)0x0;
              if (pMVar89 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar89->_0).image == TypeInfo__System__String) {
                  pMVar12 = pMVar89;
                }
                bVar13 = 0;
                photonEvent = (EventData *)unaff_ESI;
                if (pMVar12 == (MVAvatar__Class *)0x0) goto code_?;
              }
              bVar13 = 0;
              if (this_14 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar90 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_14,(Object *)pMVar12,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar90.m_Index == 0) {
                pSVar28 = (String *)0x0;
                pMVar21 = (MVAvatar__Class *)::StringLiteral___;
              }
              else {
                pMStack_11 = (MVAvatar__Class *)::StringLiteral___;
                pSVar28 = (String *)func_?();
                pMVar21 = pMStack_11;
              }
              pSVar28 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)pMVar12,(String *)pMVar21,pSVar28,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar28,(MethodInfo *)0x0);
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
          puVar24 = (undefined4 *)func_?();
          unaff_ESI = (MVAvatar__Class *)*puVar24;
          pMVar18 = (this->fields).networkGame;
          bVar13 = 0;
          pMVar12 = (MVAvatar__Class *)this;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
            bVar13 = 0;
            if (pMVar41 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI == (MVAvatar__Class *)(pMVar41->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar18 = (this->fields).networkGame;
              bVar13 = 0;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar78 = (pMVar18->fields).playerContainer;
                bVar13 = 0;
                if (pMVar78 != (MVPlayerContainer *)0x0) {
                  bVar27 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar78,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar27 == 0) {
code_?:
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar78 = (pMVar18->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar78 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar78,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar78 = (pMVar18->fields).playerContainer;
                      bVar13 = 0;
                      if (pMVar78 != (MVPlayerContainer *)0x0) {
                        pMStack_48 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar78,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_55,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_8.z = (float)func_?();
                        pMStack_11 = unaff_ESI;
                        pOVar14 = (Object *)func_?();
                        bVar13 = 0;
                        if (pDStack_55 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                     (Object *)VStack_8.z,pOVar14,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_54 = 3;
                          pOVar14 = (Object *)func_?();
                          bVar13 = 0;
                          if (pMStack_48 != (MVPlayer *)0x0) {
                            pUVar91 = (pMStack_48->fields)._UserProfileData_k__BackingField;
                            bVar13 = 0;
                            if (pUVar91 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                         pOVar14,(Object *)(pUVar91->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_49 = 6;
                              VStack_8.z = (float)func_?();
                              pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar13 = 0;
                              if (pMVar18 != (MVNetworkGame *)0x0) {
                                this_06 = (pMVar18->fields)._Friends_k__BackingField;
                                bVar13 = 0;
                                if (this_06 != (FriendList *)0x0) {
                                  bStack_92 = FriendList::FriendList_IsFriend
                                                        (this_06,(pMStack_48->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar14 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_55
                                             ,(Object *)VStack_8.z,pOVar14,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_55
                                             ,(MethodInfo *)0x0);
                                  pMVar18 = (this->fields).networkGame;
                                  bVar13 = 0;
                                  if (pMVar18 != (MVNetworkGame *)0x0) {
                                    pGVar65 = (pMVar18->fields).gameStatCounterManager;
                                    bVar13 = 0;
                                    if (pGVar65 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar65,(int32_t)unaff_ESI,
                                                 (pMStack_48->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar18 = (this->fields).networkGame;
                                      bVar13 = 0;
                                      if (pMVar18 != (MVNetworkGame *)0x0) {
                                        pGVar65 = (pMVar18->fields).gameStatCounterManager;
                                        bVar13 = 0;
                                        if (pGVar65 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar65,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (MVAvatar__Class *)photonEvent;
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
          if (pIVar15 == pIVar16) {
            puVar24 = (undefined4 *)func_?();
            pMStack_56 = (MVWorldObject *)*puVar24;
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
              iVar29 = *piVar39;
              pMVar12 = (MVAvatar__Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar12 != (MVAvatar__Class *)0x0) {
                if ((String__Class *)(pMVar12->_0).image == TypeInfo__System__String) {
                  unaff_EDI = pMVar12;
                }
                bVar13 = 0;
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
                puVar58 = (undefined1 *)func_?();
                pMStack_53 = (MVAvatar__Class *)CONCAT31(pMStack_53._1_3_,*puVar58);
                pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar13 = 0;
                if (pOVar14 != (Object *)0x0) {
                  pIVar15 = (pOVar14->klass->_0).element_class;
                  pIVar16 = (TypeInfo__System__Int32->_0).element_class;
                  bVar13 = pIVar15 < pIVar16;
                  if (pIVar15 != pIVar16) goto code_?;
                  puVar24 = (undefined4 *)func_?();
                  pMStack_20 = (MVAvatar__Class *)*puVar24;
                  pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar13 = 0;
                  if (pOVar14 != (Object *)0x0) {
                    pIVar15 = (pOVar14->klass->_0).element_class;
                    pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar13 = pIVar15 < pIVar16;
                    if (pIVar15 != pIVar16) goto code_?;
                    puVar58 = (undefined1 *)func_?();
                    pMStack_11 = (MVAvatar__Class *)CONCAT31(pMStack_11._1_3_,*puVar58);
                    unaff_ESI = (MVAvatar__Class *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pMVar21 = (MVAvatar__Class *)0x0;
                    if (unaff_ESI != (MVAvatar__Class *)0x0) {
                      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                        pMVar21 = unaff_ESI;
                      }
                      bVar13 = 0;
                      if (pMVar21 == (MVAvatar__Class *)0x0) goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pMVar21,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar18 = (this->fields).networkGame;
                    bVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar41 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar18,(MethodInfo *)0x0);
                      bVar13 = 0;
                      if (pMVar41 != (MVLocalPlayer *)0x0) {
                        if (iVar29 == (pMVar41->fields)._._ActorNr_k__BackingField) {
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
                                  ((MVPlayer *)unaff_ESI,iVar29,(int32_t)pMStack_56,
                                   (String *)unaff_EDI,(BuildTarget__Enum)pMStack_53,
                                   (UserProfileData *)VStack_8.z,0,(bool)pMStack_11,
                                   (MethodInfo *)0x0);
                        bVar13 = 0;
                        if (unaff_ESI != (MVAvatar__Class *)0x0) {
                          *(MVAvatar__Class **)((int)&unaff_ESI->_0 + 0x48) = pMStack_20;
                          pMVar18 = (this->fields).networkGame;
                          bVar13 = 0;
                          if (pMVar18 != (MVNetworkGame *)0x0) {
                            pMVar78 = (pMVar18->fields).playerContainer;
                            bVar13 = 0;
                            if (pMVar78 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar78,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  pMVar12 = unaff_EDI;
code_?:
  func_?();
  _Stack_54 = (_union_86)(pMVar12->_0).image;
  func_?(&_Stack_54,&UNK_?);
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar93 = func_?();
  pbVar94 = (byte *)uVar93;
  pbVar51 = pbVar94 + -0x1aefacad;
  bVar95 = (byte)((uint)unaff_EBX >> 8);
  bVar23 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar13);
  *pbVar51 = *pbVar51 + bVar95 + bVar13;
  bVar96 = (byte)uVar93;
  bVar13 = (byte)((ulonglong)uVar93 >> 0x20);
  bVar97 = bVar13 + bVar96;
  bVar98 = CARRY1(bVar13,bVar96) || CARRY1(bVar97,bVar23);
  bVar97 = bVar97 + bVar23;
  iVar29 = CONCAT31((int3)((ulonglong)uVar93 >> 0x28),bVar97);
  puVar58 = (undefined1 *)
            ((int)&((Object *)((int)&((MVAvatar__Class *)photonEvent)->_0 + 0x50))->monitor + 1);
  bVar99 = (byte)unaff_EBX;
  bVar23 = CARRY1(*puVar58,bVar99) || CARRY1(*puVar58 + bVar99,bVar98);
  *puVar58 = *puVar58 + bVar99 + bVar98;
  bVar100 = (byte)((ulonglong)uVar93 >> 8);
  bVar13 = (byte)extraout_CX + bVar100;
  bVar98 = CARRY1((byte)extraout_CX,bVar100) || CARRY1(bVar13,bVar23);
  bVar13 = bVar13 + bVar23;
  bVar101 = (byte)((ulonglong)uVar93 >> 0x28);
  bVar23 = CARRY1(*pbVar94,bVar101) || CARRY1(*pbVar94 + bVar101,bVar98);
  *pbVar94 = *pbVar94 + bVar101 + bVar98;
  bVar98 = CARRY1(*pbVar94,bVar101) || CARRY1(*pbVar94 + bVar101,bVar23);
  *pbVar94 = *pbVar94 + bVar101 + bVar23;
  bVar102 = *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image + bVar13;
  bVar23 = CARRY1(*(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image,bVar13) ||
           CARRY1(bVar102,bVar98);
  *(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image = bVar102 + bVar98;
  pbVar51 = (byte *)((int)&((MVAvatar__Class *)photonEvent)->_0 + iVar29 * 2 + 0x53);
  bVar102 = *pbVar51;
  bVar13 = *pbVar51;
  *pbVar51 = bVar13 + bVar101 + bVar23;
  bVar23 = CARRY1(in_stack_103,bVar97) ||
           CARRY1(in_stack_103 + bVar97,CARRY1(bVar102,bVar101) || CARRY1(bVar13 + bVar101,bVar23)
                 );
  pbVar51 = (byte *)(iVar29 + 0x3b105358);
  bVar102 = (byte)((ushort)extraout_CX >> 8);
  bVar13 = *pbVar51 + bVar102;
  bVar98 = CARRY1(*pbVar51,bVar102) || CARRY1(bVar13,bVar23);
  *pbVar51 = bVar13 + bVar23;
  pbVar51 = unaff_EBX + -0x24efaca7;
  bVar23 = CARRY1(*pbVar51,bVar99) || CARRY1(*pbVar51 + bVar99,bVar98);
  *pbVar51 = *pbVar51 + bVar99 + bVar98;
  pbVar51 = unaff_EBX + 0x5a;
  bVar98 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar23);
  *pbVar51 = *pbVar51 + bVar100 + bVar23;
  bVar23 = CARRY1(bVar99,bVar95) || CARRY1(bVar99 + bVar95,bVar98);
  uVar104 = (undefined3)((uint)unaff_EBX >> 8);
  bVar100 = bVar99 + bVar95 + bVar98;
  iVar40 = CONCAT31(uVar104,bVar100);
  pbVar51 = pbVar94 + 0x5b;
  bVar98 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar23);
  *pbVar51 = *pbVar51 + bVar100 + bVar23;
  bVar23 = CARRY1(bVar95,bVar96) || CARRY1(bVar95 + bVar96,bVar98);
  bVar13 = bVar95 + bVar96 + bVar98;
  bVar98 = CARRY1(*unaff_EBX,bVar95) || CARRY1(*unaff_EBX + bVar95,bVar23);
  *unaff_EBX = *unaff_EBX + bVar95 + bVar23;
  *(int *)(iVar40 + -4) = iVar40;
  bVar23 = CARRY1(*pbVar94,bVar95) || CARRY1(*pbVar94 + bVar95,bVar98);
  *pbVar94 = *pbVar94 + bVar95 + bVar98;
  *(int *)(iVar40 + -8) = iVar40;
  pbVar51 = (byte *)(iVar40 + 0x3010535c);
  bVar98 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar23);
  *pbVar51 = *pbVar51 + bVar96 + bVar23;
  *(int *)(iVar40 + -0xc) = iVar40;
  pbVar51 = pbVar94 + 0x1e10535c;
  bVar23 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar98);
  *pbVar51 = *pbVar51 + bVar95 + bVar98;
  *(int *)(iVar40 + -0xc) = iVar40;
  bVar98 = CARRY1(*pbVar94,bVar95) || CARRY1(*pbVar94 + bVar95,bVar23);
  *pbVar94 = *pbVar94 + bVar95 + bVar23;
  *(int *)(iVar40 + -0x10) = iVar40;
  bVar23 = CARRY1(bVar99,bVar95) || CARRY1(bVar99 + bVar95,bVar98);
  bVar97 = bVar99 + bVar95 + bVar98;
  *(int *)(iVar40 + -0x14) = iVar40;
  pbVar51 = unaff_EBX + 0x5e;
  bVar98 = CARRY1(*pbVar51,bVar95) || CARRY1(*pbVar51 + bVar95,bVar23);
  *pbVar51 = *pbVar51 + bVar95 + bVar23;
  *(int *)(iVar40 + -0x18) = iVar40;
  puVar58 = (undefined1 *)((int)&((MVAvatar__Class *)photonEvent)->static_fields + 3);
  bVar23 = CARRY1(*puVar58,bVar99) || CARRY1(*puVar58 + bVar99,bVar98);
  *puVar58 = *puVar58 + bVar99 + bVar98;
  *(int *)(iVar40 + -0x1c) = iVar40;
  bVar98 = CARRY1(bVar99,bVar13) || CARRY1(bVar99 + bVar13,bVar23);
  pcVar64 = (char *)CONCAT31(uVar104,bVar99 + bVar13 + bVar23);
  iVar29 = *(int *)(iVar40 + -0x1c);
  *(int *)(iVar40 + -0x1c) = iVar40;
  pbVar51 = (byte *)(iVar29 + 0x61);
  bVar23 = CARRY1(*pbVar51,bVar100) || CARRY1(*pbVar51 + bVar100,bVar98);
  *pbVar51 = *pbVar51 + bVar100 + bVar98;
  *(int *)(iVar40 + -0x20) = iVar40;
  pbVar51 = (byte *)(CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                              CONCAT11(bVar13,bVar99)) >> 8),bVar97) + 0x61c11053);
  bVar102 = *pbVar51;
  bVar13 = *pbVar51;
  *pbVar51 = bVar13 + bVar97 + bVar23;
  *(int *)(iVar40 + -0x24) = iVar40;
  *pcVar64 = *pcVar64 + bVar100 + (CARRY1(bVar102,bVar97) || CARRY1(bVar13 + bVar97,bVar23));
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

