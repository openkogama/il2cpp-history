
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
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  RVar6 = (RegexCharClass_SingleRange)photonEvent;
  pMStack_7 = (MVPlayer *)0x0;
  BStack_8.m_value = 0;
  VStack_9.x = 0.0;
  VStack_9.y = 0.0;
  VStack_9.z = 0.0;
  uStack_10 = 0;
  MStack_11 = MVEventCodes__Enum_NoCodeSet;
  RStack_12.First = 0;
  RStack_12.Last = 0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (uVar13 = 0, pOVar14 != (Object *)0x0))
      {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pWVar19->fields)._.worldObjectClientManager;
        uVar13 = 0;
        unaff_ESI = RVar6;
        RStack_20 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          RVar21 = (RegexCharClass_SingleRange)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
          uVar13 = 0;
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
          if (RVar21 == (RegexCharClass_SingleRange)0x0) {
            unaff_ESI.First = 0;
            unaff_ESI.Last = 0;
code_?:
            uVar13 = 0;
            unaff_EDI = (RegexCharClass_SingleRange)
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            if (eventCode != MVEventCodes__Enum_NoCodeSet) {
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              uVar13 = *(Il2CppClass **)(*(int *)eventCode + 0x20) < pIVar16;
              if (*(Il2CppClass **)(*(int *)eventCode + 0x20) == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)RStack_20,*piVar17,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          if ((*(byte *)(*(int *)RVar21 + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)RVar21 + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (bVar22) {
            unaff_ESI = RVar21;
          }
          uVar13 = 0;
          outData = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
          func_?();
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar23;
        eventCode = (MVEventCodes__Enum)unaff_EDI;
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x12,(MethodInfo *)0x0);
        if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
          worldObjectData.First = 0;
          worldObjectData.Last = 0;
code_?:
          pMVar18 = (this->fields).networkGame;
          uVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pWVar19 = (pMVar18->fields).worldNetwork;
            uVar13 = 0;
            if (pWVar19 != (WorldNetwork *)0x0) {
              pMVar24 = (pWVar19->fields)._.worldObjectClientManager;
              uVar13 = 0;
              if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                          (pMVar24,(int32_t)unaff_EDI,
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
             ((int)((Il2CppClass_1 *)((int)outData + 100))->typeHierarchy +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4 + -4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        worldObjectData.First = 0;
        worldObjectData.Last = 0;
        if (bVar22) {
          worldObjectData = unaff_ESI;
        }
        uVar13 = 0;
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (worldObjectData != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
        func_?();
        unaff_EDI = outData;
code_?:
        func_?();
code_?:
        func_?();
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar23;
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
               ((int)((Il2CppClass_1 *)((int)outData + 100))->typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          worldObjectDataToRemove.First = 0;
          worldObjectDataToRemove.Last = 0;
          if (bVar22) {
            worldObjectDataToRemove = unaff_ESI;
          }
          uVar13 = 0;
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if (worldObjectDataToRemove == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pWVar19 = (pMVar18->fields).worldNetwork;
          uVar13 = 0;
          if (pWVar19 != (WorldNetwork *)0x0) {
            pMVar24 = (pWVar19->fields)._.worldObjectClientManager;
            uVar13 = 0;
            if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                        (pMVar24,(int32_t)unaff_EDI,
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
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
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
    uVar13 = 0;
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
      uVar13 = 0;
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
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      uVar13 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (uVar13 = 0, pOVar14 != (Object *)0x0))
      {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        piVar17 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        uVar13 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar29 = (MVWorldInventory *)(pOVar28->_0).namespaze;
          uVar13 = 0;
          if (pMVar29 != (MVWorldInventory *)0x0) {
            MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar29,*piVar17,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar19->fields)._.worldInventory;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        unaff_EDI = RVar6;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0x31,(MethodInfo *)0x0);
          uVar13 = 0;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          RStack_30 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
          RVar6 = unaff_EDI;
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
code_?:
            unaff_EDI = RVar6;
            uVar13 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                          ((MVWorldInventory *)eventCode,*piVar17,(Byte__Array *)unaff_EDI,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          RStack_20 = (RegexCharClass_SingleRange)func_?();
          uVar13 = 0;
          RVar6 = RStack_20;
          if (RStack_20 != (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar19->fields)._.worldInventory;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        unaff_EDI = RVar6;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x22,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          uVar13 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (uVar13 = 0, pOVar14 != (Object *)0x0))
          {
            pIVar15 = (pOVar14->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Single->_0).element_class;
            uVar13 = pIVar15 < pIVar16;
            if (pIVar15 != pIVar16) goto code_?;
            pMVar31 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar31;
            uVar13 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                          ((MVWorldInventory *)unaff_EDI,*piVar17,(float)eventCode,(MethodInfo *)0x0
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_20 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar32 = (undefined4 *)func_?();
        pMStack_33 = (MVPlayer *)*puVar32;
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_30 = *pRVar23;
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_20 = *pRVar23;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        eventCode = MVEventCodes__Enum_NoCodeSet;
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1((Link *)unaff_ESI,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0xc) = RStack_20;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_30;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_33;
          pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          uVar13 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            WorldNetwork::WorldNetwork_AddLink_1
                      ((WorldNetwork *)pOVar28,(Link *)unaff_ESI,(MethodInfo *)0x0);
            pIVar16 = *(Il2CppClass **)((int)unaff_EDI + 0x2c);
            pMVar34 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            uVar13 = 0;
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (pIVar16 != (Il2CppClass *)0x0) {
              eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                    ((LogicObjectManagerClient *)pIVar16,(Link *)unaff_ESI,
                                     (IWorldObjectManager *)pMVar34,(MethodInfo *)0x0);
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
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar23;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        eventCode = MVEventCodes__Enum_NoCodeSet;
        uVar13 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          unaff_EDI = (RegexCharClass_SingleRange)
                      WorldNetwork::WorldNetwork_RemoveLink
                                ((WorldNetwork *)pOVar28,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
          pIVar16 = *(Il2CppClass **)((int)unaff_ESI + 0x2c);
          pMVar34 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          uVar13 = 0;
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (pIVar16 != (Il2CppClass *)0x0) {
            eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                  ((LogicObjectManagerClient *)pIVar16,(Link *)unaff_EDI,
                                   (IWorldObjectManager *)pMVar34,(MethodInfo *)0x0);
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
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar23;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        uVar13 = 0;
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
            (IEditModeUI *)0x0) {
          pPVar35 = (PlayerShopInventoryRepository *)func_?();
          uVar13 = 0;
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x35,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pFVar36 = (pMVar18->fields)._Friends_k__BackingField;
        uVar13 = 0;
        if (pFVar36 != (FriendList *)0x0) {
          FriendList::FriendList_AddFriend
                    (pFVar36,(int32_t)unaff_EDI,eventCode,*piVar17,FriendStatus__Enum_Pending,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xb,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x36,(MethodInfo *)0x0);
      pFVar37 = (FriendStatus__Enum *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pFVar36 = (pMVar18->fields)._Friends_k__BackingField;
        uVar13 = 0;
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar18,*piVar17,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar18,*piVar17,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_ESI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_20 = *pRVar23;
      unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      uVar13 = 0;
      if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
      eventCode = (MVEventCodes__Enum)unaff_ESI;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (((Object *)((int)unaff_EDI + 0xb0))->klass == (Object__Class *)0x0) {
        pMVar34 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)eventCode;
        if (pOVar28 == (Object__Class *)0x0) break;
        pMVar34 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
      }
      uVar13 = 0;
      unaff_ESI = (RegexCharClass_SingleRange)eventCode;
      if (pMVar34 == (MVWorldObjectClientManager *)0x0) break;
      pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar34,eventCode,(MethodInfo *)0x0);
      if (pMVar38 == (MVWorldObject *)0x0) {
        str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0);
        pSVar27 = StringLiteral_OnTriggerBoxStayBegin_received__;
        str2 = StringLiteral__does_not_exist;
      }
      else {
        iVar39 = func_?();
        if (iVar39 != 0) {
          func_?();
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        eventCode = *pMVar31;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
          pMVar34 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          uVar13 = 0;
          if (pOVar28 == (Object__Class *)0x0) break;
          pMVar34 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
        }
        uVar13 = 0;
        if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar34,eventCode,(MethodInfo *)0x0);
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
    uVar13 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar41 = photonEvent;
      pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      uVar13 = 0;
      if (pOVar28 != (Object__Class *)0x0) {
        eventCode = (MVEventCodes__Enum)(pOVar28->_0).name;
        uVar13 = 0;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar41,0x14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          uVar13 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (uVar13 = 0, pOVar14 != (Object *)0x0))
          {
            pIVar15 = (pOVar14->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Int32->_0).element_class;
            uVar13 = pIVar15 < pIVar16;
            if (pIVar15 != pIVar16) goto code_?;
            pMVar31 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar31;
            uVar13 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                          ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar17,eventCode,
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x2f,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar23;
        piVar17 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        uVar13 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar29 = (MVWorldInventory *)(pOVar28->_0).namespaze;
          uVar13 = 0;
          if (pMVar29 != (MVWorldInventory *)0x0) {
            MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                      (pMVar29,*piVar17,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  (pMVar18->fields)._NetworkGameStateListener_k__BackingField;
      uVar13 = 0;
      unaff_ESI = RVar6;
      RStack_30 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        RStack_20 = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0x42,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar17 = (int32_t *)func_?();
          iVar42 = *piVar17;
          piVar17 = (int32_t *)func_?();
          iVar43 = *piVar17;
          pMVar44 = (MVGameStateType__Enum *)func_?();
          MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                    ((MVNetworkGameStateListener *)RStack_30,*pMVar44,iVar43,iVar42,0,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar42 = *piVar17;
        pMVar34 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (iVar42,(IWorldObjectManager *)pMVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar45 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)(pMVar45->fields)._._ActorNr_k__BackingField;
          pRVar23 = (RegexCharClass_SingleRange *)func_?();
          if (*pRVar23 == unaff_ESI) goto code_?;
          pMVar18 = (this->fields).networkGame;
          uVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pWVar19 = (pMVar18->fields).worldNetwork;
            uVar13 = 0;
            if (pWVar19 != (WorldNetwork *)0x0) {
              RVar21 = (RegexCharClass_SingleRange)(pWVar19->fields)._.worldObjectClientManager;
              RStack_20 = RVar21;
              eventCode = (MVEventCodes__Enum)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar6,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x46,(MethodInfo *)0x0);
              uVar13 = 0;
              unaff_ESI.First = 0;
              unaff_ESI.Last = 0;
              if (RVar21 != (RegexCharClass_SingleRange)0x0) {
                pDVar46 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar17 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)RStack_20,*piVar17,pDVar46,
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    RStack_30 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      RStack_20 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar42 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar43 = *piVar17;
        pPVar47 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)RStack_30,*pPVar47,iVar43,iVar42,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_20 = *pRVar23;
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      pfVar48 = (float *)func_?();
      pEVar41 = photonEvent;
      VStack_9.x = *pfVar48;
      VStack_9.y = (float)eventCode;
      VStack_9.z = (float)RStack_20;
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar41,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_20 = *pRVar23;
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      puVar32 = (undefined4 *)func_?();
      uStack_10 = *puVar32;
      MStack_11 = eventCode;
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      RStack_12 = RStack_20;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_EDI = *pRVar23;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
          pMVar34 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          uVar13 = 0;
          if (pOVar28 == (Object__Class *)0x0) break;
          pMVar34 = (MVWorldObjectClientManager *)(pOVar28->_0).name;
        }
        uVar13 = 0;
        if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar34,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar38 != (MVWorldObject *)0x0) {
            this_00 = pMVar38[1].fields.inputLinkRefs;
            uVar13 = 0;
            if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
              this_06 = (MVPickupOwner *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  ((GameObject *)this_00,
                                   MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                                  );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                 ((Object_1 *)this_06,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar26 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              uVar13 = 0;
              unaff_ESI.First = 0;
              unaff_ESI.Last = 0;
              if (this_06 != (MVPickupOwner *)0x0) {
                lookOrigin.y = VStack_9.y;
                lookOrigin.x = VStack_9.x;
                lookOrigin.z = VStack_9.z;
                lookDirection.y = (float)MStack_11;
                lookDirection.x = (float)uStack_10;
                lookDirection.z = (float)RStack_12;
                MVPickupOwner::MVPickupOwner_SetLineOfFire
                          (this_06,lookOrigin,lookDirection,(MethodInfo *)0x0);
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
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x58,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar49 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar49,pDVar46,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_20 = (RegexCharClass_SingleRange)
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
      piVar17 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
      MVar50 = eventCode;
      uVar13 = 0;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar51 = (MVTeam__Enum *)func_?();
        team = *pMVar51;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar50,*piVar17,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      RStack_20 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar32 = (undefined4 *)func_?();
        pMStack_33 = (MVPlayer *)*puVar32;
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_30 = *pRVar23;
        pMVar31 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar31;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(MVEventCodes__Enum *)((int)unaff_ESI + 0xc) = eventCode;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_30;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_33;
          pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
          uVar13 = 0;
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
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        piVar17 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        uVar13 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          WorldNetwork::WorldNetwork_RemoveObjectLink
                    ((WorldNetwork *)pOVar28,*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
    uVar13 = 0;
    if (photonEvent == (EventData *)0x0) break;
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    uVar13 = 0;
    if (pOVar14 == (Object *)0x0) break;
    pIVar15 = (pOVar14->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
    uVar13 = pIVar15 < pIVar16;
    if (pIVar15 != pIVar16) goto code_?;
    pMVar31 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar31;
    unaff_ESI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    RStack_20 = (RegexCharClass_SingleRange)TypeInfo__System__Int32;
    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
      uVar13 = 0;
      if (pOVar28 != (Object__Class *)0x0) {
        pMVar24 = (MVWorldObjectClientManagerNetwork *)(pOVar28->_0).name;
        uVar13 = 0;
        if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                    (pMVar24,eventCode,worldObjectsToGroup,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    }
    worldObjectsToGroup = (Int32__Array *)func_?();
    uVar13 = 0;
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,99,(MethodInfo *)0x0);
        uVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          uVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          piVar17 = (int32_t *)func_?();
          pOVar28 = ((Object *)((int)unaff_ESI + 0x20))->klass;
          uVar13 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                      ((MVNetworkGame_GameDataQueryManager *)pOVar28,*piVar17,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = *(WinningConditionManager **)((int)unaff_ESI + 0xac);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      uVar13 = 0;
      if (this_01 != (WinningConditionManager *)0x0) {
        if ((this_01->fields)._WinningConditionFound_k__BackingField == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
code_?:
          if (((Object *)((int)unaff_ESI + 0xb8))->klass == (Object__Class *)0x0)
          goto code_?;
          pOVar28 = ((Object *)((int)unaff_ESI + 0xb8))->klass;
          uVar13 = 0;
          if (pOVar28 != (Object__Class *)0x0) {
            (*(code *)(pOVar28->_0).namespaze)();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
        else {
          uVar13 = 0;
          if (this_01 != (WinningConditionManager *)0x0) {
            this_07 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVWorldObject.dll::WinningConditionManager::
                      WinningConditionManager_GetForfilledWinningConditions
                                (this_01,(MethodInfo *)0x0);
            uVar13 = 0;
            if (this_07 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              if ((this_07->fields)._size == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_No_winning_condition_found_even_,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              if (1 < (this_07->fields)._size) {
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
                                    (this_07,0,
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
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x28,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar23;
        piVar17 = (int32_t *)func_?();
        pOVar28 = ((Object *)((int)unaff_EDI + 0xb0))->klass;
        uVar13 = 0;
        if (pOVar28 != (Object__Class *)0x0) {
          pMVar24 = (MVWorldObjectClientManagerNetwork *)(pOVar28->_0).name;
          uVar13 = 0;
          if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                      (pMVar24,*piVar17,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      pOVar14 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x81,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_20 = *pRVar23;
      pOVar52 = (Object *)func_?(TypeInfo__MV__Common__AchievementType);
      pSVar27 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar14,pOVar52,
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar53 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar14 = (Object *)func_?();
      uVar13 = 0;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (pDVar53 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar53,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar32 = (undefined4 *)func_?();
        pMStack_33 = (MVPlayer *)*puVar32;
        uStack_54 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar53,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_30 = *pRVar23;
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar55 = (pMVar18->fields)._PlayerController_k__BackingField;
          RStack_20 = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
          uVar13 = 0;
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (pMVar55 != (MVLocalObjectController *)0x0) {
            pbVar56 = (byte *)func_?();
            bVar57 = *pbVar56;
            piVar17 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar55,*piVar17,(int32_t)pMStack_33,(int32_t)RStack_30,(uint)bVar57,
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
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar34 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar19 = (pMVar18->fields).worldNetwork;
          uVar13 = 0;
          unaff_ESI = unaff_ESI;
          if (pWVar19 == (WorldNetwork *)0x0) break;
          pMVar34 = (MVWorldObjectClientManager *)(pWVar19->fields)._.worldObjectClientManager;
        }
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar34,*piVar17,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__MVAvatar;
          if ((unaff_ESI == (RegexCharClass_SingleRange)0x0) ||
             (iVar39 = func_?(), iVar39 == 0)) goto code_?;
          iVar39 = func_?();
          uVar13 = 0;
          if (iVar39 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar14 = (Object *)func_?();
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_20 = *pRVar23;
        uStack_54 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_58 = *pRVar23;
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar34 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar19 = (pMVar18->fields).worldNetwork;
            uVar13 = 0;
            if (pWVar19 == (WorldNetwork *)0x0) break;
            pMVar34 = (MVWorldObjectClientManager *)(pWVar19->fields)._.worldObjectClientManager;
          }
          uVar13 = 0;
          if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar34,(int32_t)RStack_20,(MethodInfo *)0x0);
            RStack_12 = (RegexCharClass_SingleRange)func_?();
            uVar13 = 0;
            if (RStack_12 != (RegexCharClass_SingleRange)0x0) {
              pMStack_33 = (MVPlayer *)((VirtualInvokeData *)((int)RStack_12 + 0xfc))->methodPtr;
              uStack_59 = 3;
              pOVar14 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar32 = (undefined4 *)func_?();
              pIStack_60 = (Int32__Array *)*puVar32;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
              puVar32 = (undefined4 *)func_?();
              pMStack_61 = (MVWorldObject *)*puVar32;
              pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar6,0x3a,(MethodInfo *)0x0);
              pRVar23 = (RegexCharClass_SingleRange *)func_?(pOVar14);
              RStack_30 = *pRVar23;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x5c,(MethodInfo *)0x0);
              pRVar23 = (RegexCharClass_SingleRange *)func_?();
              RStack_20 = *pRVar23;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
              pRVar23 = (RegexCharClass_SingleRange *)func_?();
              VStack_9.z = *(float *)pRVar23;
              pMVar18 = (this->fields).networkGame;
              uVar13 = 0;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pWVar19 = (pMVar18->fields).worldNetwork;
                uVar13 = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pWVar19 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar19,(int32_t)pMStack_61,0,1,(int32_t)pMStack_33,(int32_t)pIStack_60
                             ,(int32_t)RStack_30,(int32_t)RStack_20,(MethodInfo *)0x0);
                  pMVar18 = (this->fields).networkGame;
                  uVar13 = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
                      pMVar34 = (MVWorldObjectClientManager *)0x0;
                    }
                    else {
                      pWVar19 = (pMVar18->fields).worldNetwork;
                      uVar13 = 0;
                      unaff_EDI = (RegexCharClass_SingleRange)this;
                      if (pWVar19 == (WorldNetwork *)0x0) break;
                      pMVar34 = (MVWorldObjectClientManager *)
                                (pWVar19->fields)._.worldObjectClientManager;
                    }
                    uVar13 = 0;
                    unaff_EDI = (RegexCharClass_SingleRange)this;
                    if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_61 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar34,(int32_t)pIStack_60,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      unaff_EDI = (RegexCharClass_SingleRange)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI = (RegexCharClass_SingleRange)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                        VideoCapture+OnVideoCaptureResourceCreatedCallback::
                        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)unaff_EDI,
                                   (Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                        func_?();
                        RVar6 = (RegexCharClass_SingleRange)photonEvent;
                      }
                      uVar13 = 0;
                      unaff_ESI = RVar6;
                      if (pMStack_61 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar18 = (this->fields).networkGame;
                        uVar13 = 0;
                        if (pMVar18 != (MVNetworkGame *)0x0) {
                          pMVar55 = (pMVar18->fields)._PlayerController_k__BackingField;
                          pMStack_61 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item((EventData *)RVar6,0xfe,(MethodInfo *)0x0
                                                         );
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar6,0x8d,(MethodInfo *)0x0);
                          uVar13 = 0;
                          unaff_EDI.First = 0;
                          unaff_EDI.Last = 0;
                          if (pMVar55 != (MVLocalObjectController *)0x0) {
                            pbVar56 = (byte *)func_?();
                            bVar57 = *pbVar56;
                            piVar17 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar55,*piVar17,(int32_t)pIStack_60,(int32_t)RStack_58,
                                       (uint)bVar57,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      ((MVWorldObjectSpawner *)RStack_12,(int32_t)VStack_9.z,
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      puVar32 = (undefined4 *)func_?();
      uVar62 = *puVar32;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x90,(MethodInfo *)0x0);
      pfVar48 = (float *)func_?();
      fVar63 = *pfVar48;
      RStack_12 = (RegexCharClass_SingleRange)uVar62;
      RStack_58 = (RegexCharClass_SingleRange)func_?(TypeInfo__System__Int32);
      uStack_59 = eventCode._3_1_;
      pOVar14 = (Object *)func_?();
      VStack_9.z = fVar63;
      pOVar52 = (Object *)func_?();
      pSVar27 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)RStack_58,
                           pOVar14,pOVar52,(MethodInfo *)0x0);
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pWVar19 = (pMVar18->fields).worldNetwork;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (pWVar19 != (WorldNetwork *)0x0) {
          this_02 = (pWVar19->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (RegexCharClass_SingleRange)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          uVar13 = 0;
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (this_02 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_02,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pWVar19 = (pMVar18->fields).worldNetwork;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pWVar19 != (WorldNetwork *)0x0) {
        this_03 = (RuntimeEventManager *)(pWVar19->fields)._.runtimeEventManagerNetwork;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (this_03 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_03,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_30 = *pRVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      RStack_20.First._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa0,(MethodInfo *)0x0);
      puVar32 = (undefined4 *)func_?();
      pIStack_60 = (Int32__Array *)*puVar32;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa1,(MethodInfo *)0x0);
      puVar32 = (undefined4 *)func_?();
      pMStack_33 = (MVPlayer *)*puVar32;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa3,(MethodInfo *)0x0);
      pcVar64 = (char *)func_?();
      pMVar18 = (this->fields).networkGame;
      if (*pcVar64 == '\0') {
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar65 = (pMVar18->fields).gameStatCounterManager;
          uVar13 = 0;
          if (pGVar65 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar65,(GameStatCounterType__Enum)RStack_20,(int32_t)unaff_EDI,
                       (MVTeam__Enum)RStack_30,(int32_t)pIStack_60,(int32_t)pMStack_33,
                       (bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
      else {
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pGVar65 = (pMVar18->fields).gameStatCounterManager;
          uVar13 = 0;
          if (pGVar65 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar65,(GameStatCounterType__Enum)RStack_20,(MVTeam__Enum)RStack_30,
                       (int32_t)unaff_EDI,(int32_t)pIStack_60,(int32_t)pMStack_33,(bool)eventCode,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar66 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pGVar65 = (pMVar18->fields).gameStatCounterManager;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (pGVar65 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar65,pBVar66,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      pMVar67 = (MethodInfo *)0x0;
      pBVar66 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar66,pMVar67);
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        this_04 = (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField;
        uVar13 = 0;
        if (this_04 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_04,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar6,0xa9,(MethodInfo *)0x0);
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar23;
        pMVar31 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar31;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        pMVar68 = (MVPlayerContainer *)((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
        uVar13 = 0;
        if (pMVar68 != (MVPlayerContainer *)0x0) {
          pMVar69 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (pMVar68,eventCode,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar69 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_set_Level(pMVar69,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar70 = (bool *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*pbVar70);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar71 = (pMVar18->fields)._GameCoinManager_k__BackingField;
        uVar13 = 0;
        unaff_ESI = unaff_ESI;
        if (pMVar71 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar71,*pbVar70,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,199,(MethodInfo *)0x0);
    uVar13 = 0;
    if (pOVar14 == (Object *)0x0) break;
    pIVar15 = (pOVar14->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
    uVar13 = pIVar15 < pIVar16;
    if (pIVar15 != pIVar16) goto code_?;
    pMVar31 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar31;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,200,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
code_?:
      uVar13 = 0;
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar72 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        uVar13 = 0;
        if (pMVar72 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar72->fields)._._.invoke_impl)();
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
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    unaff_ESI.First = 0;
    unaff_ESI.Last = 0;
    if (bVar22) {
      unaff_ESI = unaff_EDI;
    }
    uVar13 = 0;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    uVar13 = 0;
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
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar22) {
      pDVar73 = pDVar46;
    }
    uVar13 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_EDI = RVar6;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,(EventData *)RVar6,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pIStack_60 = (Int32__Array *)func_?();
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pIStack_60,pBVar66,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0x85,(MethodInfo *)0x0);
      uVar13 = 0;
      if (pOVar14 != (Object *)0x0) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) {
code_?:
          func_?();
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?();
        RStack_20.First._0_1_ = *puVar5;
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,100,(MethodInfo *)0x0);
        uVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
          uVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          puVar5 = (undefined1 *)func_?();
          unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
          eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
          uVar13 = 0;
          RStack_30 = unaff_EDI;
          if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)
                ((VirtualInvokeData *)((int)unaff_EDI + 0x10c))->methodPtr ==
                (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
              pMVar68 = (MVPlayerContainer *)
                        ((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
              uVar13 = 0;
              if (pMVar68 != (MVPlayerContainer *)0x0) {
                pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar68,(MethodInfo *)0x0);
                uVar13 = 0;
                if (pMVar45 != (MVLocalPlayer *)0x0) {
                  unaff_ESI = (RegexCharClass_SingleRange)
                              (pMVar45->fields)._._ActorNr_k__BackingField;
                  this_08 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)func_?();
                  mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                            ((DefaultBinder_BinderState *)this_08,pIStack_60,(int32_t)unaff_ESI,
                             (bool)RStack_20.First,(MethodInfo *)0x0);
                  unaff_EDI = RStack_30;
                  ((VirtualInvokeData *)((int)RStack_30 + 0x10c))->methodPtr =
                       (Il2CppMethodPointer)this_08;
                  func_?();
code_?:
                  if (eventCode._3_1_ != MVEventCodes__Enum_NoCodeSet >> 0x18)
                  goto code_?;
                  uVar13 = 0;
                  if (*(MethodInfo **)((int)unaff_EDI + 0x110) != (MethodInfo *)0x0) {
                    *(bool *)&(*(MethodInfo **)((int)unaff_EDI + 0x110))->name = 1;
                    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    StatHatWrapper::StatHatWrapper_Count
                              (StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0);
                    this_09 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_09,(Object *)unaff_EDI,MethodInfo__MVNetworkGame__CreateGame__,
                               (MethodInfo *)0x0);
                    coroutine = WaitForFrames::WaitForFrames_Frames
                                          (3,(UnityAction *)this_09,(MethodInfo *)0x0);
                    Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
              }
            }
            else {
              RStack_12 = *(RegexCharClass_SingleRange *)((int)unaff_EDI + 0x10c);
              pMVar68 = (MVPlayerContainer *)
                        ((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
              uVar13 = 0;
              if (pMVar68 != (MVPlayerContainer *)0x0) {
                pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar68,(MethodInfo *)0x0);
                uVar13 = 0;
                if (pMVar45 != (MVLocalPlayer *)0x0) {
                  unaff_ESI = (RegexCharClass_SingleRange)
                              (pMVar45->fields)._._ActorNr_k__BackingField;
                  VStack_9.z = (float)func_?();
                  mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                            ((DefaultBinder_BinderState *)VStack_9.z,pIStack_60,(int32_t)unaff_ESI,
                             (bool)RStack_20.First,(MethodInfo *)0x0);
                  uVar13 = 0;
                  if (RStack_12 != (RegexCharClass_SingleRange)0x0) {
                    MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                              ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)RStack_12,
                               (MVNetworkGame_GameDataQueryManager_GameDataQuery *)VStack_9.z,
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
    pBVar66 = (Byte__Array *)func_?(unaff_EDI);
    uVar13 = 0;
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
        uVar13 = 0;
        if (pMVar45 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar45->fields)._._ActorNr_k__BackingField;
          uVar13 = 0;
          if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) != pIVar16) goto code_?;
          pMVar31 = (MVEventCodes__Enum *)func_?();
          if (*pMVar31 == eventCode) {
            MVGameControllerBase::MVGameControllerBase_set_JoinState
                      (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
            MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
            pMVar18 = (this->fields).networkGame;
            uVar13 = 0;
            unaff_ESI = (RegexCharClass_SingleRange)this;
            if (pMVar18 != (MVNetworkGame *)0x0) {
              pMVar71 = (pMVar18->fields)._GameCoinManager_k__BackingField;
              uVar13 = 0;
              if (pMVar71 != (MVGameCoinManager *)0x0) {
                MVGameCoinManager::MVGameCoinManager_Reset
                          (pMVar71,(this->fields).networkGame,(MethodInfo *)0x0);
                pMVar18 = (this->fields).networkGame;
                uVar13 = 0;
                if (pMVar18 != (MVNetworkGame *)0x0) {
                  pMVar74 = (pMVar18->fields).operationRequests;
                  uVar13 = 0;
                  if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_StartSessionTime(pMVar74,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
            break;
          }
code_?:
          uStack_1 = 0;
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar18 == (MVNetworkGame *)0x0) break;
          eventCode = (MVEventCodes__Enum)(pMVar18->fields).playerContainer;
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          uVar13 = 0;
          if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (uVar13 = 0, pOVar14 == (Object *)0x0))
          break;
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
          uVar13 = pIVar15 < pIVar16;
          if (pIVar15 == pIVar16) {
            puVar5 = (undefined1 *)func_?();
            eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
            uVar13 = 0;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              pIVar16 = (TypeInfo__System__Int32->_0).element_class;
              uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar16) {
                piVar17 = (int32_t *)func_?();
                MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                          ((MVPlayerContainer *)unaff_EDI,*piVar17,(bool)eventCode,(MethodInfo *)0x0
                          );
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
code_?:
          func_?();
          outData = unaff_EDI;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,7,(MethodInfo *)0x0);
      uVar13 = 0;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (uVar13 = 0, pOVar14 != (Object *)0x0)) {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        pcVar64 = (char *)func_?();
        RStack_12.First._0_1_ = *pcVar64 == '\0';
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
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          outData.First = 0;
          outData.Last = 0;
          if (bVar22) {
            outData = unaff_ESI;
          }
          uVar13 = 0;
          if (outData == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        eventCode = (MVEventCodes__Enum)
                    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        uVar13 = 0;
        unaff_EDI = outData;
        if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
          iVar39 = func_?();
          if (iVar39 == 0) {
            unaff_ESI = (RegexCharClass_SingleRange)func_?();
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository__ctor
                      ((PlayerShopInventoryRepository *)unaff_ESI,(MethodInfo *)0x0);
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar13 = 0;
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
              (IEditModeUI *)0x0) {
            pPVar35 = (PlayerShopInventoryRepository *)func_?();
            uVar13 = 0;
            if (pPVar35 != (PlayerShopInventoryRepository *)0x0) {
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_AddShopItems
                        (pPVar35,(Dictionary_2_System_Object_System_Object_ *)outData,
                         (bool)RStack_12.First,(MethodInfo *)0x0);
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      pDVar46 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      uVar13 = 0;
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
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pDVar73 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar22) {
          pDVar73 = pDVar46;
        }
        uVar13 = 0;
        unaff_ESI = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar73 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI,pDVar73,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    RVar6 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar66,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      uVar13 = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(RegexCharClass_SingleRange *)(eventCode + 0x9c) = unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      break;
    }
    pBVar66 = (Byte__Array *)func_?();
    uVar13 = 0;
    unaff_EDI.First = 0;
    unaff_EDI.Last = 0;
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      uVar13 = 0;
      if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (uVar13 = 0, pOVar14 != (Object *)0x0))
      {
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 != pIVar16) goto code_?;
        func_?();
        if ((Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr ==
            (Action_1_Int32_ *)0x0) goto code_?;
        pAVar75 = (Action_1_Int32_ *)
                  (((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr;
        uVar13 = 0;
        if (pAVar75 != (Action_1_Int32_ *)0x0) {
          (*(pAVar75->fields)._._.invoke_impl)();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar74,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI = (RegexCharClass_SingleRange)func_?();
    uVar13 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar23 = (RegexCharClass_SingleRange *)func_?();
      RStack_12 = *pRVar23;
      pOVar14 = (Object *)func_?();
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar14,
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
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar18->fields).logicObjectManagerClientWrapper;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                  (pMVar76,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar76 = (pMVar18->fields).logicObjectManagerClientWrapper;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (pMVar76 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar76,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)(pMVar18->fields).logicObjectManagerClientWrapper;
      uVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar17,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)(pMVar18->fields).logicObjectManagerClientWrapper;
      uVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          piVar17 = (int32_t *)func_?();
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar17,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    RVar6 = (RegexCharClass_SingleRange)func_?();
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = RVar6;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar34 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar19 = (pMVar18->fields).worldNetwork;
      uVar13 = 0;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pWVar19 == (WorldNetwork *)0x0) break;
      pMVar34 = (MVWorldObjectClientManager *)(pWVar19->fields)._.worldObjectClientManager;
    }
    uVar13 = 0;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
    uVar13 = 0;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      uVar13 = 0;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar34,(int32_t)((Object *)((int)RVar6 + 0x10))->klass,
                               (MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar34 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar19 = (pMVar18->fields).worldNetwork;
            uVar13 = 0;
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (pWVar19 == (WorldNetwork *)0x0) break;
            pMVar34 = (MVWorldObjectClientManager *)(pWVar19->fields)._.worldObjectClientManager;
          }
          uVar13 = *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) ==
                   (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar6 + 0xc) <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          uVar13 = 0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar34,(int32_t)*(MonitorData **)((int)RVar6 + 0x14),
                                   (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            uVar13 = 0;
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) !=
                  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype)) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar39 = func_?();
              uVar13 = 0;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (iVar39 != 0) {
                bVar26 = 0x1f;
                this_10 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_10,bVar26,(MethodInfo *)unaff_ESI);
                pMVar18 = (this->fields).networkGame;
                uVar13 = 0;
                unaff_ESI.First = 0;
                unaff_ESI.Last = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar18 != (MVNetworkGame *)0x0) {
                  pMVar55 = (pMVar18->fields)._PlayerController_k__BackingField;
                  uVar13 = 0;
                  unaff_ESI.First = 0;
                  unaff_ESI.Last = 0;
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar55 != (MVLocalObjectController *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    (pMVar55->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
                    func_?();
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
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
      unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
      uVar13 = 0;
      RStack_58 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        VStack_9.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        RStack_12 = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar17 = (int32_t *)func_?();
          iVar42 = *piVar17;
          piVar17 = (int32_t *)func_?();
          iVar43 = *piVar17;
          puVar5 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          piVar17 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)RStack_58,*piVar17,eventCode,iVar43,iVar42,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
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
      pMVar67 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar67);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      uVar13 = 0;
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar14 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar14[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar27 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar27,pMVar67);
        eventCode = (MVEventCodes__Enum)pOVar14[2].monitor;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = (float)eventCode;
        pGVar77 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
        uVar13 = 0;
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pGVar77 != (GoldRewardManager *)0x0) {
          pbVar70 = (bool *)func_?();
          (pGVar77->fields).isGoldRewardGame = *pbVar70;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)RVar6,0xc4,(MethodInfo *)0x0);
          pbVar70 = (bool *)func_?();
          BStack_8.m_value = *pbVar70;
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?();
      pSVar27 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar27,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar27,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar39 = func_?();
      pMVar67 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar27 = StringLiteral_V;
      uVar13 = 0;
      unaff_ESI = unaff_ESI;
      if (iVar39 != 0) {
        pDVar53 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar53,(Object *)pSVar27,pMVar67);
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar18 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        uVar13 = 0;
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        unaff_EDI = (RegexCharClass_SingleRange)pSVar27;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pRVar23 = (RegexCharClass_SingleRange *)func_?();
          unaff_ESI = *pRVar23;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar78 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          uVar13 = 0;
          if (pAVar78 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar78->fields)._._.invoke_impl)();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar27 = (String *)func_?();
      bVar26 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar27,(MethodInfo *)0x0);
      if (bVar26 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      uVar13 = 0;
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar27,pMVar67);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar68 = (pMVar18->fields).playerContainer;
        uVar13 = 0;
        if (pMVar68 != (MVPlayerContainer *)0x0) {
          pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar68,(MethodInfo *)0x0);
          uVar13 = 0;
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar27 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar27,pMVar67);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        uVar13 = 0;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar17 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar17,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar69 != (MVPlayer *)0x0) {
            (pMVar69->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pSVar27 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar67);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar27,(MethodInfo *)0x0);
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    uVar13 = 0;
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
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,(MethodInfo *)unaff_ESI);
      uVar13 = 0;
      if (pOVar14 != (Object *)0x0) {
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pLVar79 = (pMVar18->fields).levelRewardsManager;
          uVar13 = 0;
          if (pLVar79 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar79,(Dictionary_2_System_Int32_System_Int32_ *)pOVar14[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    uVar13 = 0;
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
      pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,(MethodInfo *)unaff_ESI);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pLVar79 = (pMVar18->fields).levelRewardsManager;
        uVar13 = 0;
        if ((pOVar14 != (Object *)0x0) && (uVar13 = 0, pLVar79 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar79,(int32_t)pOVar14[1].klass,(int32_t)pOVar14[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar27 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar67);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar27 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar27,pMVar67);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar67 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar27 = (String *)func_?();
      pKVar80 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar27,pMVar67);
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
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar13 = 0;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        uVar13 = *(Il2CppClass **)(*(int *)unaff_ESI + 0x20) < pIVar16;
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) == pIVar16) {
          piVar17 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar17,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar13 = 0;
      unaff_EDI = RVar6;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,(EventData *)RVar6,(MethodInfo *)0x0);
        uVar13 = 0;
        if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          eventCode = (MVEventCodes__Enum)
                      TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          uVar13 = 0;
          if ((IEditModeUI *)eventCode != (IEditModeUI *)0x0) {
            iVar39 = func_?();
            if (iVar39 == 0) {
              this = (MVNetworkGame_EventHandling *)func_?();
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository__ctor
                        ((PlayerShopInventoryRepository *)this,(MethodInfo *)0x0);
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar13 = 0;
            unaff_ESI = (RegexCharClass_SingleRange)this;
            if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                (IEditModeUI *)0x0) {
              pPVar35 = (PlayerShopInventoryRepository *)func_?();
              uVar13 = 0;
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      pVVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_9,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar82 = pVVar81->x;
      uVar83 = pVVar81->y;
      eventCode = (MVEventCodes__Enum)pVVar81->z;
      MStack_11 = uVar82;
      RStack_12 = (RegexCharClass_SingleRange)uVar83;
      pQVar84 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(((EventData *)RVar6)->fields).Parameters
                           ,(MethodInfo *)0x0);
      fStack_85 = pQVar84->x;
      VStack_9.x = pQVar84->y;
      VStack_9.y = pQVar84->z;
      VStack_9.z = pQVar84->w;
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        uVar13 = 0;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar17 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar17,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar69 != (MVPlayer *)0x0) {
            this_05 = (pMVar69->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)RVar6,0xbf,(MethodInfo *)0x0);
            uVar13 = 0;
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar17 = (int32_t *)func_?();
              position.y = (float)RStack_12;
              position.x = (float)MStack_11;
              position.z = (float)eventCode;
              rotation.y = VStack_9.x;
              rotation.x = fStack_85;
              rotation.z = VStack_9.y;
              rotation.w = VStack_9.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar17,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    uVar13 = 0;
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
      RStack_12 = (RegexCharClass_SingleRange)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)RStack_12,(MethodInfo *)0x0)
      ;
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar13 = 0;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        unaff_ESI = (RegexCharClass_SingleRange)(pMVar18->fields).playerContainer;
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
        uVar13 = 0;
        if ((unaff_ESI != (RegexCharClass_SingleRange)0x0) && (uVar13 = 0, pOVar14 != (Object *)0x0)
           ) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          uVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          piVar17 = (int32_t *)func_?();
          pMVar69 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar17,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pMVar69 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar69,(ISpawnRoleChangeHandler *)RStack_12,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    uVar13 = 0;
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
        uVar13 = 0;
        if (value == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      outData = (RegexCharClass_SingleRange)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)value,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
      pMVar34 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar13 = 0;
      unaff_EDI = outData;
      if ((outData != (RegexCharClass_SingleRange)0x0) &&
         (uVar13 = 0, pMVar34 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar34,(int32_t)(((Il2CppType *)((int)outData + 0x18))->data).
                                                __klassIndex,(MethodInfo *)0x0);
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar18,(int32_t)(((Il2CppType *)((int)outData + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar18 = (this->fields).networkGame;
          uVar13 = 0;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar18,(int32_t)((MVNetworkGame__Fields *)((int)outData + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            uVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
              uVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              puVar5 = (undefined1 *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*puVar5);
              uVar13 = 0;
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                     (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar22 = false;
                }
                else {
                  bVar22 = true;
                }
                RVar86.First = 0;
                RVar86.Last = 0;
                if (bVar22) {
                  RVar86 = unaff_ESI;
                }
                uVar13 = 0;
                if (RVar86 != (RegexCharClass_SingleRange)0x0) {
                  pMVar67 = (MethodInfo *)0x0;
                  MVar50 = eventCode;
                  this_11 = (MVAvatarSpawnRoleCreator *)func_?();
                  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                            (this_11,(SpawnRoleBodySwitchData *)outData,(bool)MVar50,pMVar67);
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
    uVar13 = 0;
    unaff_ESI = RVar6;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar14 = (Object *)func_?();
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar23 = (RegexCharClass_SingleRange *)func_?();
        RStack_12 = *pRVar23;
        uStack_59 = 0;
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar14
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar18 = (this->fields).networkGame;
        uVar13 = 0;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          if ((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar34 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar19 = (pMVar18->fields).worldNetwork;
            uVar13 = 0;
            if (pWVar19 == (WorldNetwork *)0x0) break;
            pMVar34 = (MVWorldObjectClientManager *)(pWVar19->fields)._.worldObjectClientManager;
          }
          uVar13 = 0;
          if (pMVar34 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar34,(int32_t)RStack_12,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)RVar6,0x23,(MethodInfo *)0x0);
            pRVar23 = (RegexCharClass_SingleRange *)func_?();
            unaff_ESI = *pRVar23;
            iVar39 = func_?();
            uVar13 = 0;
            if (iVar39 != 0) {
              pMVar67 = (MethodInfo *)0x0;
              this_12 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_12,(int32_t)unaff_ESI,pMVar67);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar18 = (this->fields).networkGame;
    uVar13 = 0;
    unaff_ESI = unaff_ESI;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)(pMVar18->fields).playerContainer;
      uVar13 = 0;
      unaff_ESI = RVar6;
      if (photonEvent != (EventData *)0x0) {
        iVar42 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        uVar13 = 0;
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
          puVar87 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar87);
          uVar13 = 0;
          if (pMStack_7 != (MVPlayer *)0x0) {
            if ((pMStack_7->fields).playerState != *puVar87) {
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
      uVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        RVar21.First = 0;
        RVar21.Last = 0;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
            RVar21 = unaff_ESI;
          }
          uVar13 = 0;
          if (RVar21 == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)RVar21,(MethodInfo *)0x0);
        pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        uVar13 = 0;
        if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar74,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      uVar13 = 0;
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
               ((int)((Il2CppClass_1 *)((int)unaff_EDI + 100))->typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pDVar88 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar22) {
            pDVar88 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          uVar13 = 0;
          eventCode = (MVEventCodes__Enum)pDVar88;
          if (pDVar88 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        uVar13 = 0;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          RVar6 = (RegexCharClass_SingleRange)&UNK_?;
          this_13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          uVar13 = 0;
          if (this_13 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar89 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_13,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (RegexCharClass_SingleRange)&stack0xffffff88;
            VStack_9.y = 0.0;
            RVar21 = (RegexCharClass_SingleRange)pDVar89->_currentValue;
            uStack_1 = 3;
            VStack_9.z = (float)unaff_ESI;
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
              if (RVar21 != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)RVar21 == TypeInfo__System__String) {
                  unaff_EDI = RVar21;
                }
                uVar13 = 0;
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              uVar13 = 0;
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar90 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar90.m_Index == 0) {
                pSVar27 = (String *)0x0;
                RVar6 = (RegexCharClass_SingleRange)::StringLiteral___;
              }
              else {
                RStack_12 = (RegexCharClass_SingleRange)::StringLiteral___;
                pSVar27 = (String *)func_?();
                RVar6 = RStack_12;
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
      uVar13 = 0;
      if (photonEvent != (EventData *)0x0) {
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        uVar13 = 0;
        if (pOVar14 != (Object *)0x0) {
          pIVar15 = (pOVar14->klass->_0).element_class;
          pIVar16 = (TypeInfo__System__Int32->_0).element_class;
          uVar13 = pIVar15 < pIVar16;
          if (pIVar15 != pIVar16) goto code_?;
          pRVar23 = (RegexCharClass_SingleRange *)func_?();
          unaff_ESI = *pRVar23;
          pMVar18 = (this->fields).networkGame;
          uVar13 = 0;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
            uVar13 = 0;
            if (pMVar45 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI ==
                  (RegexCharClass_SingleRange)(pMVar45->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              pMVar18 = (this->fields).networkGame;
              uVar13 = 0;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar68 = (pMVar18->fields).playerContainer;
                uVar13 = 0;
                if (pMVar68 != (MVPlayerContainer *)0x0) {
                  bVar26 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar68,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar26 == 0) {
code_?:
                    pMVar18 = (this->fields).networkGame;
                    uVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar68 = (pMVar18->fields).playerContainer;
                      uVar13 = 0;
                      if (pMVar68 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar68,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = uStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar18 = (this->fields).networkGame;
                    uVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar68 = (pMVar18->fields).playerContainer;
                      uVar13 = 0;
                      if (pMVar68 != (MVPlayerContainer *)0x0) {
                        pMStack_33 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar68,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pIStack_60 = (Int32__Array *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                    *)pIStack_60,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_9.z = (float)func_?();
                        RStack_12 = unaff_ESI;
                        pOVar14 = (Object *)func_?();
                        uVar13 = 0;
                        if (pIStack_60 != (Int32__Array *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pIStack_60,
                                     (Object *)VStack_9.z,pOVar14,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_59 = 3;
                          pOVar14 = (Object *)func_?();
                          uVar13 = 0;
                          if (pMStack_33 != (MVPlayer *)0x0) {
                            pDVar91 = (Delegate__Array *)
                                      (pMStack_33->fields)._UserProfileData_k__BackingField;
                            uVar13 = 0;
                            if (pDVar91 != (Delegate__Array *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pIStack_60,
                                         pOVar14,(Object *)pDVar91->max_length,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_54 = 6;
                              VStack_9.z = (float)func_?();
                              pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              uVar13 = 0;
                              if (pMVar18 != (MVNetworkGame *)0x0) {
                                pFVar36 = (pMVar18->fields)._Friends_k__BackingField;
                                uVar13 = 0;
                                if (pFVar36 != (FriendList *)0x0) {
                                  bStack_92 = FriendList::FriendList_IsFriend
                                                        (pFVar36,(int32_t)(pMStack_33->fields).
                                                                         _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar14 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pIStack_60
                                             ,(Object *)VStack_9.z,pOVar14,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pIStack_60
                                             ,(MethodInfo *)0x0);
                                  pMVar18 = (this->fields).networkGame;
                                  uVar13 = 0;
                                  if (pMVar18 != (MVNetworkGame *)0x0) {
                                    pGVar65 = (pMVar18->fields).gameStatCounterManager;
                                    uVar13 = 0;
                                    if (pGVar65 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar65,(int32_t)unaff_ESI,
                                                 (pMStack_33->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar18 = (this->fields).networkGame;
                                      uVar13 = 0;
                                      if (pMVar18 != (MVNetworkGame *)0x0) {
                                        pGVar65 = (pMVar18->fields).gameStatCounterManager;
                                        uVar13 = 0;
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
      uVar13 = 0;
      unaff_ESI = RVar6;
      if (photonEvent == (EventData *)0x0) break;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      uVar13 = 0;
      if (pOVar14 == (Object *)0x0) break;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      uVar13 = pIVar15 < pIVar16;
      if (pIVar15 != pIVar16) goto code_?;
      puVar32 = (undefined4 *)func_?();
      pMStack_61 = (MVWorldObject *)*puVar32;
      pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar6,0xfe,(MethodInfo *)0x0);
      uVar13 = 0;
      if (pOVar14 == (Object *)0x0) break;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      uVar13 = pIVar15 < pIVar16;
      if (pIVar15 != pIVar16) goto code_?;
      pMVar31 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar31;
      RVar21 = (RegexCharClass_SingleRange)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)RVar6,0x9a,(MethodInfo *)0x0);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (RVar21 == (RegexCharClass_SingleRange)0x0) {
code_?:
        pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar6,0xbc,(MethodInfo *)0x0);
        uVar13 = 0;
        if (pOVar14 == (Object *)0x0) break;
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
        uVar13 = pIVar15 < pIVar16;
        if (pIVar15 == pIVar16) {
          puVar5 = (undefined1 *)func_?();
          RStack_58.First._0_1_ = *puVar5;
          pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar6,0x59,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pOVar14 != (Object *)0x0) {
            pIVar15 = (pOVar14->klass->_0).element_class;
            pIVar16 = (TypeInfo__System__Int32->_0).element_class;
            uVar13 = pIVar15 < pIVar16;
            if (pIVar15 != pIVar16) goto code_?;
            pRVar23 = (RegexCharClass_SingleRange *)func_?();
            RStack_20 = *pRVar23;
            pOVar14 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar6,0xd0,(MethodInfo *)0x0);
            uVar13 = 0;
            if (pOVar14 != (Object *)0x0) {
              pIVar15 = (pOVar14->klass->_0).element_class;
              pIVar16 = (TypeInfo__System__Boolean->_0).element_class;
              uVar13 = pIVar15 < pIVar16;
              if (pIVar15 != pIVar16) goto code_?;
              puVar5 = (undefined1 *)func_?();
              RStack_12.First._0_1_ = *puVar5;
              unaff_ESI = (RegexCharClass_SingleRange)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar6,0xe0,(MethodInfo *)0x0);
              if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              RVar6.First = 0;
              RVar6.Last = 0;
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
                  RVar6 = unaff_ESI;
                }
                uVar13 = 0;
                if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              VStack_9.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                   JsonConvert_DeserializeObject_2
                                             ((String *)RVar6,
                                              MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                             );
              pMVar18 = (this->fields).networkGame;
              uVar13 = 0;
              if (pMVar18 != (MVNetworkGame *)0x0) {
                pMVar45 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
                uVar13 = 0;
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
                            ((MVPlayer *)unaff_ESI,eventCode,(int32_t)pMStack_61,(String *)unaff_EDI
                             ,(BuildTarget__Enum)RStack_58,(UserProfileData *)VStack_9.z,0,
                             (bool)RStack_12.First,(MethodInfo *)0x0);
                  uVar13 = 0;
                  if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                    *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x48) = RStack_20;
                    pMVar18 = (this->fields).networkGame;
                    uVar13 = 0;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      pMVar68 = (pMVar18->fields).playerContainer;
                      uVar13 = 0;
                      if (pMVar68 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Add
                                  (pMVar68,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
      }
      if (*(String__Class **)RVar21 == TypeInfo__System__String) {
        unaff_EDI = RVar21;
      }
      uVar13 = 0;
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) goto code_?;
      goto code_?;
    default:
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  RVar6 = unaff_ESI;
code_?:
  func_?(unaff_EDI);
  uStack_93 = *(undefined4 *)unaff_EDI;
  func_?(&uStack_93,&UNK_?);
code_?:
  func_?();
code_?:
  func_?();
  unaff_ESI = RVar6;
code_?:
  func_?();
  uVar94 = func_?();
  iVar39 = (int)((ulonglong)uVar94 >> 0x20);
  bVar22 = true;
  if ((bool)uVar13) {
code_?:
    bVar95 = (byte)uVar94;
    cRam_? = cRam_? + bVar95 + bVar22;
    LOCK();
    puVar32 = (undefined4 *)((int)uVar94 + 0x10);
    uVar62 = *puVar32;
    *puVar32 = (int)((ulonglong)uVar94 >> 0x20);
    UNLOCK();
    LOCK();
    puVar32 = (undefined4 *)((int)uVar94 + 0x10);
    uVar96 = *puVar32;
    *puVar32 = uVar62;
    UNLOCK();
    pOVar14 = (Object *)((int)unaff_EDI + -0x77d6efb0);
    bVar22 = *(char *)&pOVar14->klass < '\0';
    *(char *)&pOVar14->klass = *(char *)&pOVar14->klass << 1 | bVar22;
    bVar97 = (byte)((uint)unaff_EBX >> 8);
    bVar57 = bVar95 + bVar97;
    bVar98 = CARRY1(bVar95,bVar97) || CARRY1(bVar57,bVar22);
    uVar94 = CONCAT44(uVar96,CONCAT31((int3)((ulonglong)uVar94 >> 8),bVar57 + bVar22));
    pbVar56 = extraout_ECX;
code_?:
    uVar62 = (undefined4)((ulonglong)uVar94 >> 0x20);
    *(char *)((int)uVar94 + 0x10) = (char)((ulonglong)uVar94 >> 0x20);
    uVar13 = in((short)((ulonglong)uVar94 >> 0x20));
    pbVar99 = (byte *)CONCAT31((int3)((ulonglong)uVar94 >> 8),uVar13);
code_?:
    bVar57 = (byte)pbVar99;
    iVar39 = CONCAT22((short)((uint)pbVar99 >> 0x10),
                      CONCAT11((char)((uint)pbVar99 >> 8) + (char)((uint)pbVar56 >> 8) + bVar98,
                               bVar57));
    *(undefined4 *)(iVar39 + 0x10) = uVar62;
    unaff_ESI = (RegexCharClass_SingleRange)((int)unaff_ESI + -1);
    bVar22 = bVar57 < 0x8b;
    pbVar99 = (byte *)CONCAT31((int3)((uint)iVar39 >> 8),bVar57 + 0x75);
  }
  else {
    bVar97 = (byte)unaff_EBX;
    bVar22 = CARRY1((byte)uVar94,bVar97);
    bVar57 = (byte)uVar94 + bVar97;
    pbVar56 = (byte *)CONCAT31((int3)((ulonglong)uVar94 >> 8),bVar57);
    bVar95 = (byte)((ulonglong)uVar94 >> 0x20);
    if (bVar57 == 0) {
      pbVar99 = extraout_ECX + 0x13105081;
      bVar98 = CARRY1(*pbVar99,bVar95) || CARRY1(*pbVar99 + bVar95,bVar22);
      *pbVar99 = *pbVar99 + bVar95 + bVar22;
      iVar39 = (int)*(undefined6 *)(pbVar56 + 0x10);
code_?:
      uVar13 = in((short)iVar39);
      *(undefined1 *)unaff_EDI = uVar13;
      pbVar99 = pbVar56 + 0x10;
      bVar95 = *pbVar99;
      bVar57 = *pbVar99;
      *pbVar99 = (bVar57 - 9) + bVar98;
      pbVar56[0x10] = pbVar56[0x10] + 0x13 + (8 < bVar95 || CARRY1(bVar57 - 9,bVar98));
      pcVar100 = (code *)swi(3);
      (*pcVar100)();
      return;
    }
    bVar98 = CARRY1(bRam_?,bVar57) || CARRY1(bRam_? + bVar57,bVar22);
    bRam_? = bRam_? + bVar57 + bVar22;
    bVar101 = (byte)((uint)unaff_EBX >> 8);
    bVar57 = (byte)((uint)extraout_ECX >> 8);
    if (bRam_? != 0) {
      pbVar99 = (byte *)(iVar39 + (int)pbVar56 * 4 + 0x50);
      bVar95 = *pbVar99;
      bVar97 = *pbVar99;
      *pbVar99 = bVar97 + bVar57 + bVar98;
      bVar102 = (byte)((ulonglong)uVar94 >> 0x28);
      bVar98 = CARRY1(bVar101,bVar102) ||
               CARRY1(bVar101 + bVar102,CARRY1(bVar95,bVar57) || CARRY1(bVar97 + bVar57,bVar98));
      goto code_?;
    }
    pbVar99 = (byte *)((int)unaff_ESI + -0x65efaf8a);
    bVar102 = *pbVar99;
    bVar103 = *pbVar99 + bVar101;
    bVar22 = CARRY1(bVar102,bVar101) || CARRY1(bVar103,bVar98);
    *pbVar99 = bVar103 + bVar98;
    if ((!CARRY1(bVar102,bVar101) && !CARRY1(bVar103,bVar98)) && *pbVar99 != 0) {
      bVar98 = CARRY1(*unaff_EBX,bVar95) || CARRY1(*unaff_EBX + bVar95,bVar22);
      *unaff_EBX = *unaff_EBX + bVar95 + bVar22;
      goto code_?;
    }
    bVar102 = *unaff_EBX;
    bVar103 = *unaff_EBX;
    *unaff_EBX = bVar103 + bVar95 + bVar22;
    uVar104 = *(undefined6 *)(pbVar56 + 0x10);
    pbVar105 = (byte *)uVar104;
    uVar106 = (uint)(CARRY1(bVar102,bVar95) || CARRY1(bVar103 + bVar95,bVar22));
    bVar98 = CARRY4((uint)pbVar56,(uint)&stack0xfffffffc) ||
             CARRY4((uint)(pbVar56 + (int)&stack0xfffffffc),uVar106);
    pbVar99 = pbVar56 + (int)&stack0xfffffffc + uVar106;
    uVar94 = CONCAT44(pbVar105,pbVar99);
    bVar102 = (byte)pbVar99;
    bVar95 = bVar101 + bVar102;
    bVar22 = CARRY1(bVar95,bVar98);
    bVar107 = CARRY1(bVar101,bVar102) || bVar22;
    bVar95 = bVar95 + bVar98;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar95,bVar97));
    if ((!CARRY1(bVar101,bVar102) && !bVar22) && bVar95 != 0) {
      pbVar56 = extraout_ECX + -0x7c;
      bVar95 = (byte)((uint6)uVar104 >> 8);
      bVar57 = *pbVar56 + bVar95;
      bVar22 = CARRY1(*pbVar56,bVar95) || CARRY1(bVar57,bVar107);
      *pbVar56 = bVar57 + bVar107;
      goto code_?;
    }
    pbVar56 = extraout_ECX + 0x78;
    bVar101 = *pbVar56 + (byte)extraout_ECX;
    bVar22 = CARRY1(*pbVar56,(byte)extraout_ECX) || CARRY1(bVar101,bVar107);
    *pbVar56 = bVar101 + bVar107;
    bVar98 = CARRY1(*extraout_ECX,bVar102) || CARRY1(*extraout_ECX + bVar102,bVar22);
    *extraout_ECX = *extraout_ECX + bVar102 + bVar22;
    if (-1 < (char)*extraout_ECX) {
      pbVar56 = (byte *)((int)unaff_ESI + -0x79);
      bVar101 = *pbVar56;
      bVar95 = *pbVar56;
      *pbVar56 = bVar95 + bVar57 + bVar98;
      unaff_EBX[-0x2fefaf79] =
           unaff_EBX[-0x2fefaf79] + bVar97 +
           (CARRY1(bVar101,bVar57) || CARRY1(bVar95 + bVar57,bVar98));
      pbVar56 = extraout_ECX;
code_?:
      LOCK();
      uVar62 = *(undefined4 *)(pbVar99 + 0x10);
      *(byte **)(pbVar99 + 0x10) = pbVar105;
      UNLOCK();
      pbVar105 = pbVar99 + -0x7707efb0;
      bVar98 = *(byte **)pbVar105 < pbVar56;
      *(int *)pbVar105 = *(int *)pbVar105 - (int)pbVar56;
      goto code_?;
    }
    bVar101 = (byte)uVar104;
    bVar57 = *unaff_EBX;
    bVar97 = *unaff_EBX + bVar101;
    bVar102 = CARRY1(*unaff_EBX,bVar101) || CARRY1(bVar97,bVar98);
    *unaff_EBX = bVar97 + bVar98;
    uVar13 = (char)*unaff_EBX < '\0';
    uVar94 = CONCAT44((int)*(undefined6 *)(pbVar99 + 0x10),pbVar99);
    pcVar100 = (code *)swi(4);
    pbVar56 = extraout_ECX;
    if (SCARRY1(bVar57,bVar101) != SCARRY1(bVar97,bVar98)) {
      uVar94 = (*pcVar100)();
      pbVar56 = extraout_ECX_00;
    }
    pbVar105 = (byte *)((ulonglong)uVar94 >> 0x20);
    pbVar99 = (byte *)uVar94;
    bVar97 = (byte)((ulonglong)uVar94 >> 0x20);
    bVar57 = (byte)uVar94;
    if (!(bool)uVar13) {
      pbVar99 = (byte *)CONCAT31((int3)((ulonglong)uVar94 >> 8),bVar57 + bVar97 + bVar102);
      goto code_?;
    }
    bVar22 = CARRY1(*pbVar105,bVar95) || CARRY1(*pbVar105 + bVar95,bVar102);
    *pbVar105 = *pbVar105 + bVar95 + bVar102;
    bVar95 = (byte)((uint)pbVar56 >> 8);
    if ((POPCOUNT(*pbVar105) & 1U) != 0) {
      *pbVar56 = *pbVar56 + bVar95 + bVar22;
      pbVar99[0x10] = bVar97;
      bVar98 = false;
      goto code_?;
    }
    pbVar105 = &stack0xffffff50 + (int)unaff_EDI * 2;
    bVar102 = (byte)((ulonglong)uVar94 >> 0x28);
    bVar107 = CARRY1(*pbVar105,bVar102) || CARRY1(*pbVar105 + bVar102,bVar22);
    *pbVar105 = *pbVar105 + bVar102 + bVar22;
    bVar101 = bVar102 + bVar95;
    bVar98 = CARRY1(bVar102,bVar95) || CARRY1(bVar101,bVar107);
    uVar62 = CONCAT22((short)((ulonglong)uVar94 >> 0x30),CONCAT11(bVar101 + bVar107,bVar97));
    if ((SCARRY1(bVar102,bVar95) != SCARRY1(bVar101,bVar107)) != (char)(bVar101 + bVar107) < '\0')
    goto code_?;
    pbVar105 = (byte *)((int)unaff_ESI + 0x1c10507d);
    bVar95 = *pbVar105;
    bVar101 = *pbVar105 + bVar57;
    bVar22 = CARRY1(*pbVar105,bVar57) || CARRY1(bVar101,bVar98);
    *pbVar105 = bVar101 + bVar98;
    if (*pbVar105 != 0 && (SCARRY1(bVar95,bVar57) != SCARRY1(bVar101,bVar98)) == (char)*pbVar105 < '\0'
       ) {
      pbVar105 = pbVar56 + -0x9efaf82;
      bVar101 = (byte)pbVar56;
      bVar57 = *pbVar105;
      bVar95 = *pbVar105 + bVar101;
      bVar98 = CARRY1(*pbVar105,bVar101) || CARRY1(bVar95,bVar22);
      *pbVar105 = bVar95 + bVar22;
      if (*pbVar105 != 0 &&
          (SCARRY1(bVar57,bVar101) != SCARRY1(bVar95,bVar22)) == (char)*pbVar105 < '\0') {
        pOVar14 = (Object *)((int)unaff_EDI + -0x80);
        bVar57 = *(char *)&pOVar14->klass + bVar101;
        bVar22 = CARRY1(*(byte *)&pOVar14->klass,bVar101) || CARRY1(bVar57,bVar98);
        *(byte *)&pOVar14->klass = bVar57 + bVar98;
        bVar95 = *unaff_EBX;
        bVar57 = *unaff_EBX;
        *unaff_EBX = bVar57 + bVar97 + bVar22;
        iVar39 = (int)*(undefined6 *)(pbVar99 + 0x10);
        puVar108 = (uint *)(pbVar56 + 0x10);
        uVar106 = (uint)(CARRY1(bVar95,bVar97) || CARRY1(bVar57 + bVar97,bVar22));
        bVar98 = 0xefaf3aec < *puVar108 || CARRY4((uint)(&UNK_? + *puVar108),uVar106);
        *puVar108 = (uint)(&UNK_? + *puVar108 + uVar106);
        goto code_?;
      }
      goto code_?;
    }
  }
  pbVar105 = unaff_EBX + (int)pbVar56 * 4;
  bVar95 = (byte)((uint)pbVar56 >> 8);
  bVar57 = *pbVar105 + bVar95;
  bVar107 = CARRY1(*pbVar105,bVar95) || CARRY1(bVar57,bVar22);
  *pbVar105 = bVar57 + bVar22;
  pbVar56 = pbVar56 + -0x75;
  bVar57 = *pbVar56 + (byte)unaff_EBX;
  bVar98 = CARRY1(*pbVar56,(byte)unaff_EBX) || CARRY1(bVar57,bVar107);
  *pbVar56 = bVar57 + bVar107;
code_?:
  *(char *)((int)unaff_ESI + 0x1710508b) =
       *(char *)((int)unaff_ESI + 0x1710508b) + (char)pbVar99 + bVar98;
  *(undefined2 *)(pbVar99 + 0x10) = in_SS;
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

