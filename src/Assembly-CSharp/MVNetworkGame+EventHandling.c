
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
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff74;
  puVar7 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
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
    func_?();
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
    func_?();
    func_?();
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
    func_?();
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
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  RVar8 = (RegexCharClass_SingleRange)photonEvent;
  uVar9 = (undefined2)((uint)in_stack_10 >> 0x10);
  pMStack_11 = (MVPlayer *)0x0;
  VStack_12.x = 0.0;
  VStack_12.y = 0.0;
  VStack_12.z = 0.0;
  BStack_13.m_value = 0;
  pMVar14 = (MethodInfo *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar15 != (Object *)0x0)) {
      if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (RegexCharClass_SingleRange)(pWVar18->fields)._.worldObjectClientManager,
       unaff_ESI = RVar8, RStack_19 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      RVar20 = (RegexCharClass_SingleRange)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)RVar8,0x12,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        if (RVar20 == (RegexCharClass_SingleRange)0x0) {
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
code_?:
          unaff_EDI = (RegexCharClass_SingleRange)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          if (*(Il2CppClass **)(*(int *)eventCode + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar16 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)RStack_19,*piVar16,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
code_?:
          func_?();
          outData = unaff_EDI;
        }
        else {
          if ((*(byte *)(*(int *)RVar20 + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)RVar20 + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          unaff_ESI.First = 0;
          unaff_ESI.Last = 0;
          if (bVar21) {
            unaff_ESI = RVar20;
          }
          outData = (RegexCharClass_SingleRange)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        func_?();
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = RVar8;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar15 != (Object *)0x0)) {
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x12,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectData.First = 0;
        worldObjectData.Last = 0;
code_?:
        pMVar17 = (this->fields).networkGame;
        if (((pMVar17 != (MVNetworkGame *)0x0) &&
            (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) &&
           (pMVar23 = (pWVar18->fields)._.worldObjectClientManager,
           pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                    (pMVar23,(int32_t)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)worldObjectData,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
        break;
      }
      outData = *(RegexCharClass_SingleRange *)unaff_ESI;
      if ((*(byte *)((int)outData + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((int)((Il2CppClass_1 *)((int)outData + 100))->typeHierarchy +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4 + -4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      worldObjectData.First = 0;
      worldObjectData.Last = 0;
      if (bVar21) {
        worldObjectData = unaff_ESI;
      }
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
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = RVar8;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar15 != (Object *)0x0)) {
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      eventCode = (MVEventCodes__Enum)unaff_EDI;
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x13,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
      }
      else {
        outData = *(RegexCharClass_SingleRange *)unaff_ESI;
        if ((*(byte *)((int)outData + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             ((int)((Il2CppClass_1 *)((int)outData + 100))->typeHierarchy +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4 + -4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        worldObjectDataToRemove.First = 0;
        worldObjectDataToRemove.Last = 0;
        if (bVar21) {
          worldObjectDataToRemove = unaff_ESI;
        }
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (worldObjectDataToRemove == (RegexCharClass_SingleRange)0x0) goto code_?;
      }
      pMVar17 = (this->fields).networkGame;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) &&
         (pMVar23 = (pWVar18->fields)._.worldObjectClientManager,
         pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar23,(int32_t)unaff_EDI,
                   (Dictionary_2_System_Object_System_Object_ *)worldObjectDataToRemove,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
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
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      bVar25 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
               MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                         (pMVar24,eventCode,(MethodInfo *)0x0);
      if (bVar25 == 0) {
        pSVar26 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffa0,(MethodInfo *)0x0);
        pSVar26 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Unknown_event__,pSVar26,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar24 = (this->fields).dynamicEventCallbackManager;
      if (pMVar24 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar24,eventCode,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar15 != (Object *)0x0)) {
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar16 = (int32_t *)func_?();
      pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if ((pOVar27 != (Object__Class *)0x0) &&
         (pMVar28 = (MVWorldInventory *)(pOVar27->_0).namespaze, pMVar28 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_RemovePrototype(pMVar28,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar8, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x31,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        RStack_29 = (RegexCharClass_SingleRange)TypeInfo__System__Byte;
        RVar8 = unaff_EDI;
        if ((unaff_EDI != (RegexCharClass_SingleRange)0x0) &&
           (RStack_19 = (RegexCharClass_SingleRange)func_?(), RVar8 = RStack_19,
           RStack_19 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        unaff_EDI = RVar8;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar16 = (int32_t *)func_?();
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                      ((MVWorldInventory *)eventCode,*piVar16,(Byte__Array *)unaff_EDI,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (eventCode = (MVEventCodes__Enum)(pWVar18->fields)._.worldInventory, unaff_ESI = unaff_ESI,
       unaff_EDI = RVar8, photonEvent != (EventData *)0x0)) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,0x22,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)eventCode;
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar16 = (int32_t *)func_?();
            MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
                      ((MVWorldInventory *)unaff_EDI,*piVar16,(float)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      RStack_19 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x38,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,0x3a,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        RStack_29 = *pRVar22;
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          if (*(Il2CppClass **)(*(int *)unaff_EDI + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          pRVar22 = (RegexCharClass_SingleRange *)func_?();
          unaff_EDI = *pRVar22;
          pRVar22 = (RegexCharClass_SingleRange *)func_?();
          RStack_19 = *pRVar22;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          IStack_31.m_value = 0;
          unaff_ESI = (RegexCharClass_SingleRange)func_?();
          MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1
                    ((Link *)unaff_ESI,(MethodInfo *)0x0);
          MVar32 = eventCode;
          if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
            *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = unaff_EDI;
            *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0xc) = RStack_19;
            *(RegexCharClass_SingleRange *)((int)unaff_ESI + 8) = RStack_29;
            unaff_EDI = (RegexCharClass_SingleRange)eventCode;
            if (*(WorldNetwork **)(eventCode + 0xb0) != (WorldNetwork *)0x0) {
              WorldNetwork::WorldNetwork_AddLink_1
                        (*(WorldNetwork **)(eventCode + 0xb0),(Link *)unaff_ESI,(MethodInfo *)0x0);
              this_00 = *(LogicObjectManagerClient **)
                         (MVar32 + MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent);
              pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              unaff_EDI.First = 0;
              unaff_EDI.Last = 0;
              if (this_00 != (LogicObjectManagerClient *)0x0) {
                IStack_31.m_value =
                     LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                               (this_00,(Link *)unaff_ESI,(IWorldObjectManager *)pMVar33,
                                (MethodInfo *)0x0);
                this_08 = &IStack_31;
                goto code_?;
              }
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
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      eventCode = MVEventCodes__Enum_NoCodeSet;
      if (pOVar27 != (Object__Class *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)
                    WorldNetwork::WorldNetwork_RemoveLink
                              ((WorldNetwork *)pOVar27,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
        this_01 = *(Il2CppClass **)((int)unaff_ESI + 0x2c);
        pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (this_01 != (Il2CppClass *)0x0) {
          eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                ((LogicObjectManagerClient *)this_01,(Link *)unaff_EDI,
                                 (IWorldObjectManager *)pMVar33,(MethodInfo *)0x0);
          this_08 = (Int32 *)&eventCode;
code_?:
          pSVar26 = mscorlib.dll::System::Int32::Int32_ToString(this_08,(MethodInfo *)0x0);
          pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_reset_count_,pSVar26,(MethodInfo *)0x0);
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
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_ESI = *pRVar22;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) &&
         (pPVar35 = (PlayerShopInventoryRepository *)func_?(),
         pPVar35 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveItemFromInventory
                  (pPVar35,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x35,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pFVar36 = (pMVar17->fields)._Friends_k__BackingField, pFVar36 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar36,(int32_t)unaff_EDI,eventCode,*piVar16,FriendStatus__Enum_Pending,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x36,(MethodInfo *)0x0);
      pFVar37 = (FriendStatus__Enum *)func_?();
      pMVar17 = (this->fields).networkGame;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pFVar36 = (pMVar17->fields)._Friends_k__BackingField, pFVar36 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend
                  (pFVar36,(int32_t)unaff_EDI,eventCode,*pFVar37,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar17,*piVar16,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar17,*piVar16,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_ESI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      RStack_19 = *pRVar22;
      unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
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
      if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) == (WorldNetwork *)0x0) {
        pMVar33 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        unaff_ESI = (RegexCharClass_SingleRange)eventCode;
        if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) == (WorldNetwork *)0x0) break;
        pMVar33 = (MVWorldObjectClientManager *)
                  ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldObjectClientManager;
      }
      unaff_ESI = (RegexCharClass_SingleRange)eventCode;
      if (pMVar33 == (MVWorldObjectClientManager *)0x0) break;
      pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar33,eventCode,(MethodInfo *)0x0);
      if (pMVar38 == (MVWorldObject *)0x0) {
        pSVar26 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar26 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar26,
                             StringLiteral__does_not_exist,(MethodInfo *)0x0);
      }
      else {
        iVar39 = func_?();
        if (iVar39 != 0) {
          func_?(0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
        pSVar26 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&eventCode,(MethodInfo *)0x0)
        ;
        pSVar26 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar26,
                             StringLiteral__is_not_a_triggerbox_or_a_toggle,(MethodInfo *)0x0);
      }
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar26,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
          pMVar33 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
          if (pOVar27 == (Object__Class *)0x0) break;
          pMVar33 = (MVWorldObjectClientManager *)(pOVar27->_0).name;
        }
        if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,eventCode,(MethodInfo *)0x0);
          if (pMVar38 == (MVWorldObject *)0x0) {
            pSVar26 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar26 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar26,
                                 StringLiteral__does_not_exist,(MethodInfo *)0x0);
          }
          else {
            iVar39 = func_?();
            if (iVar39 != 0) {
              func_?();
              *unaff_FS_OFFSET = uStack_5;
              return;
            }
            pSVar26 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&eventCode,(MethodInfo *)0x0);
            pSVar26 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_OnTriggerBoxStayEnd_received__bu,pSVar26,
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
        func_?();
        cRam_? = '\x01';
      }
      pEVar40 = photonEvent;
      pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar27 != (Object__Class *)0x0) {
        eventCode = (MVEventCodes__Enum)(pOVar27->_0).name;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar40,0x14,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)eventCode;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar15 != (Object *)0x0)) {
            if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            pMVar30 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar30;
            if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
              if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar16 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                          ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar16,eventCode,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_5;
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
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar22;
        piVar16 = (int32_t *)func_?();
        if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
           (pMVar28 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldInventory,
           pMVar28 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar28,*piVar16,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    (pMVar17->fields)._NetworkGameStateListener_k__BackingField, unaff_ESI = RVar8,
       RStack_29 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      RStack_19 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x42,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar41 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar42 = *piVar16;
        pMVar43 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)RStack_29,*pMVar43,iVar42,iVar41,0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
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
      piVar16 = (int32_t *)func_?();
      iVar41 = *piVar16;
      pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                (iVar41,(IWorldObjectManager *)pMVar33,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_ESI = RVar8;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar17 = (this->fields).networkGame;
    if (((pMVar17 == (MVNetworkGame *)0x0) ||
        (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
        pMVar44 == (MVLocalPlayer *)0x0)) ||
       (eventCode = (pMVar44->fields)._._ActorNr_k__BackingField,
       unaff_EDI == (RegexCharClass_SingleRange)0x0)) break;
    if (*(Il2CppClass **)(*(int *)unaff_EDI + 0x20) == (TypeInfo__System__Int32->_0).element_class)
    {
      pMVar30 = (MVEventCodes__Enum *)func_?();
      if (*pMVar30 == eventCode) goto code_?;
      pMVar17 = (this->fields).networkGame;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pWVar18 = (pMVar17->fields).worldNetwork, pWVar18 != (WorldNetwork *)0x0)) {
        pMVar23 = (pWVar18->fields)._.worldObjectClientManager;
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar8,0x16,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar8,0x46,(MethodInfo *)0x0);
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
          pDVar45 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          piVar16 = (int32_t *)func_?();
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                    (pMVar23,*piVar16,pDVar45,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar8;
    RStack_29 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      RStack_19 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar41 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar42 = *piVar16;
        pPVar46 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)RStack_29,*pPVar46,iVar42,iVar41,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      RStack_19 = *pRVar22;
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      pfVar47 = (float *)func_?();
      pEVar40 = photonEvent;
      VStack_12.x = *pfVar47;
      VStack_12.y = (float)eventCode;
      VStack_12.z = (float)RStack_19;
      unaff_EDI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4d,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar40,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      RStack_19 = *pRVar22;
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      puVar48 = (undefined4 *)func_?();
      RVar8 = RStack_19;
      MVar32 = eventCode;
      uVar49 = *puVar48;
      unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      if (unaff_ESI == (RegexCharClass_SingleRange)0x0) break;
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (((Object *)((int)unaff_ESI + 0xb0))->klass == (Object__Class *)0x0) {
        pMVar33 = (MVWorldObjectClientManager *)0x0;
      }
      else {
        pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
        if (pOVar27 == (Object__Class *)0x0) break;
        pMVar33 = (MVWorldObjectClientManager *)(pOVar27->_0).name;
      }
      if (((pMVar33 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar33,(int32_t)unaff_EDI,(MethodInfo *)0x0),
          pMVar38 == (MVWorldObject *)0x0)) ||
         (this_02 = pMVar38[1].fields.inputLinkRefs, this_02 == (List_1_MV_WorldObject_Link_ *)0x0))
      break;
      this_09 = (MVPickupOwner *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          ((GameObject *)this_02,
                           MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)this_09,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar25 == 0) {
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (this_09 != (MVPickupOwner *)0x0) {
          lookOrigin.y = VStack_12.y;
          lookOrigin.x = VStack_12.x;
          lookOrigin.z = VStack_12.z;
          lookDirection.y = (float)MVar32;
          lookDirection.x = (float)uVar49;
          lookDirection.z = (float)RVar8;
          MVPickupOwner::MVPickupOwner_SetLineOfFire
                    (this_09,lookOrigin,lookDirection,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
        break;
      }
      pSVar26 = StringLiteral_Pickup_owner_not_found;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar26 = StringLiteral_Pickup_owner_not_found;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              StringLiteral_MVEventCodes_XPReceivedEvent;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                StringLiteral_MVEventCodes_XPReceivedEvent;
    }
    goto code_?;
  case MVEventCodes__Enum_PostGameMsgEvent:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x58,(MethodInfo *)0x0);
      pDVar45 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar50 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar50,pDVar45,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      RStack_19 = (RegexCharClass_SingleRange)
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
                ((EventData *)RVar8,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar16 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      MVar32 = eventCode;
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar51 = (MVTeam__Enum *)func_?();
        team = *pMVar51;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar32,*piVar16,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      RStack_19 = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        puVar48 = (undefined4 *)func_?();
        IStack_31.m_value = *puVar48;
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        RStack_29 = *pRVar22;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          *(MVEventCodes__Enum *)((int)unaff_ESI + 0xc) = eventCode;
          *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x10) = RStack_29;
          ((MVNetworkGame__Fields *)((int)unaff_ESI + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)IStack_31.m_value;
          if (*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1
                      (*(WorldNetwork **)((int)unaff_EDI + 0xb0),(ObjectLink *)unaff_ESI,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
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
      piVar16 = (int32_t *)func_?();
      pOVar27 = ((Object *)((int)unaff_ESI + 0xb0))->klass;
      if (pOVar27 != (Object__Class *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink
                  ((WorldNetwork *)pOVar27,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) break;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    unaff_ESI = (RegexCharClass_SingleRange)photonEvent;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pOVar15 == (Object *)0x0)) break;
    if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    RVar8 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    RStack_19 = (RegexCharClass_SingleRange)TypeInfo__System__Int32;
    if (RVar8 == (RegexCharClass_SingleRange)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      unaff_ESI = RVar8;
      if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
         (pMVar23 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.worldObjectClientManager,
         pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (pMVar23,eventCode,worldObjectsToGroup,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      break;
    }
    worldObjectsToGroup = (Int32__Array *)func_?();
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,99,(MethodInfo *)0x0), pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar16 = (int32_t *)func_?();
        pOVar27 = ((Object *)((int)unaff_ESI + 0x20))->klass;
        if (pOVar27 != (Object__Class *)0x0) {
          MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                    ((MVNetworkGame_GameDataQueryManager *)pOVar27,*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
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
      this_03 = *(WinningConditionManager **)((int)unaff_ESI + 0xac);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (this_03 != (WinningConditionManager *)0x0) {
        if ((this_03->fields)._WinningConditionFound_k__BackingField == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
        }
        else {
          if ((this_03 == (WinningConditionManager *)0x0) ||
             (this_10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        MVWorldObject.dll::WinningConditionManager::
                        WinningConditionManager_GetForfilledWinningConditions
                                  (this_03,(MethodInfo *)0x0),
             this_10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          break;
          if ((this_10->fields)._size == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar14 = (MethodInfo *)0x0;
            pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      StringLiteral_No_winning_condition_found_even_;
            goto code_?;
          }
          if (1 < (this_10->fields)._size) {
            pSVar26 = StringLiteral_Only_1_winning_condition_current;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              pSVar26 = StringLiteral_Only_1_winning_condition_current;
            }
            goto code_?;
          }
          unaff_EDI = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_10,0,
                                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                                );
        }
        if (((Object *)((int)unaff_ESI + 0xb8))->klass == (Object__Class *)0x0)
        goto code_?;
        pOVar27 = ((Object *)((int)unaff_ESI + 0xb8))->klass;
        if (pOVar27 != (Object__Class *)0x0) {
          (*(code *)(pOVar27->_0).namespaze)();
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x28,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar22;
        piVar16 = (int32_t *)func_?();
        if ((*(WorldNetwork **)((int)unaff_EDI + 0xb0) != (WorldNetwork *)0x0) &&
           (pMVar23 = ((*(WorldNetwork **)((int)unaff_EDI + 0xb0))->fields)._.
                     worldObjectClientManager, pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0))
        {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar23,*piVar16,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      pOVar15 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x81,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      RStack_19 = *pRVar22;
      pOVar52 = (Object *)func_?();
      pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar15,pOVar52,
                           (MethodInfo *)0x0);
code_?:
      uVar53 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar53 == 0) {
        func_?();
      }
      pMVar14 = (MethodInfo *)0x0;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pDVar34,pMVar14);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar15 = (Object *)func_?();
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (pDVar34 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar34,pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar48 = (undefined4 *)func_?();
        IStack_31.m_value = *puVar48;
        uStack_54 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar34,pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        RStack_29 = *pRVar22;
        pMVar17 = (this->fields).networkGame;
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar55 = (pMVar17->fields)._PlayerController_k__BackingField;
          RStack_19 = (RegexCharClass_SingleRange)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)RVar8,0x8d,(MethodInfo *)0x0);
          unaff_EDI.First = 0;
          unaff_EDI.Last = 0;
          if (pMVar55 != (MVLocalObjectController *)0x0) {
            pbVar56 = (byte *)func_?();
            bVar57 = *pbVar56;
            piVar16 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar55,*piVar16,IStack_31.m_value,(int32_t)RStack_29,(uint)bVar57,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
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
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar33 = (MVWorldObjectClientManager *)0x0;
        }
        else {
          pWVar18 = (pMVar17->fields).worldNetwork;
          unaff_ESI = unaff_ESI;
          if (pWVar18 == (WorldNetwork *)0x0) break;
          pMVar33 = (MVWorldObjectClientManager *)(pWVar18->fields)._.worldObjectClientManager;
        }
        unaff_ESI = unaff_ESI;
        if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (RegexCharClass_SingleRange)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar33,*piVar16,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)TypeInfo__MVAvatar;
          if ((unaff_ESI == (RegexCharClass_SingleRange)0x0) ||
             (iVar39 = func_?(), iVar39 == 0)) goto code_?;
          iVar39 = func_?();
          if (iVar39 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar15 = (Object *)func_?();
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        RStack_19 = *pRVar22;
        uStack_54 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        RStack_58 = *pRVar22;
        pMVar17 = (this->fields).networkGame;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar18 = (pMVar17->fields).worldNetwork;
            if (pWVar18 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar18->fields)._.worldObjectClientManager;
          }
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar33,(int32_t)RStack_19,(MethodInfo *)0x0);
            pMVar59 = (MVWorldObjectSpawner *)func_?();
            if (pMVar59 != (MVWorldObjectSpawner *)0x0) {
              IStack_31.m_value = (pMVar59->fields).spawnWorldObjectID;
              uStack_60 = 3;
              pOVar15 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,
                         pOVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar48 = (undefined4 *)func_?();
              pIStack_61 = (Int32__Array *)*puVar48;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
              puVar48 = (undefined4 *)func_?();
              pMStack_62 = (MVWorldObject *)*puVar48;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar8,0x3a,(MethodInfo *)0x0);
              pRVar22 = (RegexCharClass_SingleRange *)func_?();
              RStack_29 = *pRVar22;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar8,0x5c,(MethodInfo *)0x0);
              pRVar22 = (RegexCharClass_SingleRange *)func_?();
              RStack_19 = *pRVar22;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)RVar8,0x23,(MethodInfo *)0x0);
              pRVar22 = (RegexCharClass_SingleRange *)func_?();
              VStack_12.z = *(float *)pRVar22;
              pMVar17 = (this->fields).networkGame;
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pWVar18 = (pMVar17->fields).worldNetwork,
                 unaff_EDI = (RegexCharClass_SingleRange)this, pWVar18 != (WorldNetwork *)0x0)) {
                uVar9 = 0x1050;
                WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                          (pWVar18,(int32_t)pMStack_62,0,1,IStack_31.m_value,(int32_t)pIStack_61,
                           (int32_t)RStack_29,(int32_t)RStack_19,(MethodInfo *)0x0);
                pMVar17 = (this->fields).networkGame;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar17 != (MVNetworkGame *)0x0) {
                  if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
                    pMVar33 = (MVWorldObjectClientManager *)0x0;
                  }
                  else {
                    pWVar18 = (pMVar17->fields).worldNetwork;
                    unaff_EDI = (RegexCharClass_SingleRange)this;
                    if (pWVar18 == (WorldNetwork *)0x0) break;
                    pMVar33 = (MVWorldObjectClientManager *)
                              (pWVar18->fields)._.worldObjectClientManager;
                  }
                  unaff_EDI = (RegexCharClass_SingleRange)this;
                  if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
                    pMStack_62 = MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObject
                                           (pMVar33,(int32_t)pIStack_61,(MethodInfo *)0x0);
                    if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    unaff_EDI = (RegexCharClass_SingleRange)
                                TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0
                    ;
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
                      RVar8 = (RegexCharClass_SingleRange)photonEvent;
                    }
                    unaff_ESI = RVar8;
                    if (pMStack_62 != (MVWorldObject *)0x0) {
                      func_?();
                      pMVar17 = (this->fields).networkGame;
                      if (pMVar17 != (MVNetworkGame *)0x0) {
                        pMVar55 = (pMVar17->fields)._PlayerController_k__BackingField;
                        pMStack_62 = (MVWorldObject *)
                                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                     EventData_get_Item((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar8,0x8d,(MethodInfo *)0x0);
                        unaff_EDI.First = 0;
                        unaff_EDI.Last = 0;
                        if (pMVar55 != (MVLocalObjectController *)0x0) {
                          pbVar56 = (byte *)func_?();
                          bVar57 = *pbVar56;
                          piVar16 = (int32_t *)func_?();
                          MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                    (pMVar55,*piVar16,(int32_t)pIStack_61,(int32_t)RStack_58,
                                     (uint)bVar57,(MethodInfo *)0x0);
                          MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                    (pMVar59,(int32_t)VStack_12.z,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_5;
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
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x91,(MethodInfo *)0x0);
      puVar1 = (undefined1 *)func_?();
      eventCode = CONCAT13(*puVar1,(undefined3)eventCode);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x90,(MethodInfo *)0x0);
      pfVar47 = (float *)func_?();
      fVar63 = *pfVar47;
      RStack_58 = (RegexCharClass_SingleRange)func_?();
      uStack_60 = eventCode._3_1_;
      pOVar15 = (Object *)func_?();
      VStack_12.z = fVar63;
      pOVar52 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)RStack_58,
                           pOVar15,pOVar52,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pWVar18 = (pMVar17->fields).worldNetwork, unaff_ESI = unaff_ESI,
         pWVar18 != (WorldNetwork *)0x0)) {
        this_04 = (pWVar18->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (RegexCharClass_SingleRange)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI.First = 0;
        unaff_EDI.Last = 0;
        if (this_04 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_04,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (pWVar18 = (pMVar17->fields).worldNetwork, unaff_ESI = unaff_ESI,
        pWVar18 != (WorldNetwork *)0x0)) &&
       (this_05 = (RuntimeEventManager *)(pWVar18->fields)._.runtimeEventManagerNetwork,
       unaff_ESI = unaff_ESI, this_05 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_05,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      unaff_EDI = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x59,(MethodInfo *)0x0);
      pRVar22 = (RegexCharClass_SingleRange *)func_?();
      RStack_29 = *pRVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0x9f,(MethodInfo *)0x0);
      puVar7 = (undefined1 *)func_?();
      RStack_19.First._0_1_ = *puVar7;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa0,(MethodInfo *)0x0);
      puVar48 = (undefined4 *)func_?();
      pIStack_61 = (Int32__Array *)*puVar48;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa1,(MethodInfo *)0x0);
      puVar48 = (undefined4 *)func_?();
      IStack_31.m_value = *puVar48;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa2,(MethodInfo *)0x0);
      puVar7 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar7);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa3,(MethodInfo *)0x0);
      pcVar64 = (char *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (*pcVar64 == '\0') {
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pGVar65 = (pMVar17->fields).gameStatCounterManager,
           pGVar65 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar65,(GameStatCounterType__Enum)RStack_19,(int32_t)unaff_EDI,
                     (MVTeam__Enum)RStack_29,(int32_t)pIStack_61,IStack_31.m_value,(bool)eventCode,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
      else if ((pMVar17 != (MVNetworkGame *)0x0) &&
              (pGVar65 = (pMVar17->fields).gameStatCounterManager,
              pGVar65 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar65,(GameStatCounterType__Enum)RStack_19,(MVTeam__Enum)RStack_29,
                   (int32_t)unaff_EDI,(int32_t)pIStack_61,IStack_31.m_value,(bool)eventCode,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar66 = (Byte__Array *)func_?();
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pGVar65 = (pMVar17->fields).gameStatCounterManager, unaff_ESI = unaff_ESI,
         pGVar65 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar65,pBVar66,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa5,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      pMVar14 = (MethodInfo *)0x0;
      pBVar66 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar66,pMVar14);
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (this_06 = (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_06 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_06,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar22;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        eventCode = *pMVar30;
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
        pMVar67 = (MVPlayerContainer *)((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
        if ((pMVar67 != (MVPlayerContainer *)0x0) &&
           (pMVar68 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (pMVar67,eventCode,(MethodInfo *)0x0), pMVar68 != (MVPlayer *)0x0))
        {
          MVPlayer::MVPlayer_set_Level(pMVar68,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar69 = (bool *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*pbVar69);
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = unaff_ESI;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (pMVar70 = (pMVar17->fields)._GameCoinManager_k__BackingField, unaff_ESI = unaff_ESI,
         pMVar70 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar70,*pbVar69,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = RVar8;
    if ((photonEvent == (EventData *)0x0) ||
       (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), pOVar15 == (Object *)0x0)) break;
    if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar30 = (MVEventCodes__Enum *)func_?();
    eventCode = *pMVar30;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,200,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      RVar8.First = 0;
      RVar8.Last = 0;
code_?:
      unaff_ESI = RVar8;
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        pMVar71 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        if (pMVar71 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
          (*(pMVar71->fields)._._.invoke_impl)();
          *unaff_FS_OFFSET = uStack_5;
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
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    RVar8.First = 0;
    RVar8.Last = 0;
    if (bVar21) {
      RVar8 = unaff_EDI;
    }
    if (RVar8 != (RegexCharClass_SingleRange)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI == (RegexCharClass_SingleRange)0x0)) break;
    if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    if (((pDVar45->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar45->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar21) {
      pDVar72 = pDVar45;
    }
    RVar8 = (RegexCharClass_SingleRange)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = RVar8;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,(EventData *)RVar8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = RVar8;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pIStack_61 = (Int32__Array *)func_?();
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pIStack_61,pBVar66,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,0x85,(MethodInfo *)0x0);
      if (pOVar15 != (Object *)0x0) {
        if ((pOVar15->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          goto code_?;
        }
        puVar7 = (undefined1 *)func_?();
        RStack_19.First._0_1_ = *puVar7;
        pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,100,(MethodInfo *)0x0);
        if (pOVar15 != (Object *)0x0) {
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          puVar7 = (undefined1 *)func_?();
          unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
          eventCode = CONCAT13(*puVar7,(undefined3)eventCode);
          RStack_29 = unaff_EDI;
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
              pMVar67 = (MVPlayerContainer *)
                        ((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
              if ((pMVar67 != (MVPlayerContainer *)0x0) &&
                 (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar67,(MethodInfo *)0x0), pMVar44 != (MVLocalPlayer *)0x0))
              {
                unaff_ESI = (RegexCharClass_SingleRange)(pMVar44->fields)._._ActorNr_k__BackingField
                ;
                pMVar73 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          ((DefaultBinder_BinderState *)pMVar73,pIStack_61,(int32_t)unaff_ESI,
                           (bool)RStack_19.First,(MethodInfo *)0x0);
                unaff_EDI = RStack_29;
                ((VirtualInvokeData *)((int)RStack_29 + 0x10c))->methodPtr =
                     (Il2CppMethodPointer)pMVar73;
                func_?();
code_?:
                if (eventCode._3_1_ != MVEventCodes__Enum_NoCodeSet >> 0x18) goto code_?;
                if (*(MethodInfo **)((int)unaff_EDI + 0x110) != (MethodInfo *)0x0) {
                  *(bool *)&(*(MethodInfo **)((int)unaff_EDI + 0x110))->name = 1;
                  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  StatHatWrapper::StatHatWrapper_Count
                            (StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0);
                  this_11 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_11,(Object *)unaff_EDI,MethodInfo__MVNetworkGame__CreateGame__,
                             (MethodInfo *)0x0);
                  coroutine = WaitForFrames::WaitForFrames_Frames
                                        (3,(UnityAction *)this_11,(MethodInfo *)0x0);
                  Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_5;
                  return;
                }
              }
            }
            else {
              pMVar73 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
                        ((VirtualInvokeData *)((int)unaff_EDI + 0x10c))->methodPtr;
              pMVar67 = (MVPlayerContainer *)
                        ((VirtualInvokeData *)((int)unaff_EDI + 0xe4))->methodPtr;
              if ((pMVar67 != (MVPlayerContainer *)0x0) &&
                 (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar67,(MethodInfo *)0x0), pMVar44 != (MVLocalPlayer *)0x0))
              {
                unaff_ESI = (RegexCharClass_SingleRange)(pMVar44->fields)._._ActorNr_k__BackingField
                ;
                VStack_12.z = (float)func_?();
                mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
                          ((DefaultBinder_BinderState *)VStack_12.z,pIStack_61,(int32_t)unaff_ESI,
                           (bool)RStack_19.First,(MethodInfo *)0x0);
                if (pMVar73 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
                  MVNetworkGame+GameDataQueryManager+GameDataQuery::
                  MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                            (pMVar73,(MVNetworkGame_GameDataQueryManager_GameDataQuery *)VStack_12.z
                             ,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      break;
    }
    pBVar66 = (Byte__Array *)func_?();
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
          pMVar44 != (MVLocalPlayer *)0x0)) &&
         (eventCode = (pMVar44->fields)._._ActorNr_k__BackingField,
         unaff_ESI != (RegexCharClass_SingleRange)0x0)) {
        if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar30 = (MVEventCodes__Enum *)func_?();
        if (*pMVar30 == eventCode) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar17 = (this->fields).networkGame;
          unaff_ESI = (RegexCharClass_SingleRange)this;
          if ((pMVar17 != (MVNetworkGame *)0x0) &&
             (pMVar70 = (pMVar17->fields)._GameCoinManager_k__BackingField,
             pMVar70 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar70,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar17 = (this->fields).networkGame;
            if ((pMVar17 != (MVNetworkGame *)0x0) &&
               (pMVar74 = (pMVar17->fields).operationRequests,
               pMVar74 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_StartSessionTime
                        (pMVar74,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
code_?:
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar17 != (MVNetworkGame *)0x0) {
            eventCode = (MVEventCodes__Enum)(pMVar17->fields).playerContainer;
            unaff_ESI = (RegexCharClass_SingleRange)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar8,0xd0,(MethodInfo *)0x0);
            unaff_EDI = (RegexCharClass_SingleRange)eventCode;
            if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar15 != (Object *)0x0)) {
              if ((pOVar15->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              puVar7 = (undefined1 *)func_?();
              eventCode = CONCAT31((int3)((uint)puVar7 >> 8),*puVar7);
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if (*(Il2CppClass **)(*(int *)unaff_ESI + 0x20) ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar16 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI,*piVar16,(bool)eventCode,
                             (MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_5;
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
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (RegexCharClass_SingleRange)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,7,(MethodInfo *)0x0);
      if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pcVar64 = (char *)func_?();
        cVar75 = *pcVar64;
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
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          outData.First = 0;
          outData.Last = 0;
          if (bVar21) {
            outData = unaff_ESI;
          }
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
          if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
               (IEditModeUI *)0x0) &&
             (pPVar35 = (PlayerShopInventoryRepository *)func_?(),
             pPVar35 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_AddShopItems
                      (pPVar35,(Dictionary_2_System_Object_System_Object_ *)outData,cVar75 == '\0',
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
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
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar45 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), unaff_ESI = unaff_ESI,
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      if (pDVar45 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,(Dictionary_2_System_Object_System_Object_ *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      if (((pDVar45->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar45->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pDVar72 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar21) {
        pDVar72 = pDVar45;
      }
      RVar8 = (RegexCharClass_SingleRange)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar72 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar72,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    RVar8 = (RegexCharClass_SingleRange)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (RVar8 == (RegexCharClass_SingleRange)0x0) {
      pBVar66 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar66,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI,(BytePacker *)unaff_ESI,(MethodInfo *)0x0);
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(RegexCharClass_SingleRange *)(eventCode + 0x9c) = unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      break;
    }
    pBVar66 = (Byte__Array *)func_?();
    unaff_EDI.First = 0;
    unaff_EDI.Last = 0;
    if (pBVar66 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (RegexCharClass_SingleRange)(this->fields).networkGame;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0),
        unaff_ESI != (RegexCharClass_SingleRange)0x0)) && (pOVar15 != (Object *)0x0)) {
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?();
      if ((Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr ==
          (Action_1_Int32_ *)0x0) goto code_?;
      pAVar76 = (Action_1_Int32_ *)(((MVAvatar__VTable *)((int)unaff_ESI + 0xbc))->Equals).methodPtr
      ;
      if (pAVar76 != (Action_1_Int32_ *)0x0) {
        (*(pAVar76->fields)._._.invoke_impl)();
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = unaff_ESI;
    if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
                (pMVar74,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
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
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar15 = (Object *)func_?();
      if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)unaff_EDI,
                   pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (pMVar77 = (pMVar17->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar77 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_EnqueueLogicEvent
                (pMVar77,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (pMVar77 = (pMVar17->fields).logicObjectManagerClientWrapper, unaff_ESI = unaff_ESI,
       pMVar77 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar77,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar17->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForward
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar16,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (RegexCharClass_SingleRange)(pMVar17->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_ESI != (RegexCharClass_SingleRange)0x0
       )) {
      piVar16 = (int32_t *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,*piVar16,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_ESI = unaff_ESI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    RVar8 = (RegexCharClass_SingleRange)func_?();
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = RVar8;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
      pMVar33 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      pWVar18 = (pMVar17->fields).worldNetwork;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pWVar18 == (WorldNetwork *)0x0) break;
      pMVar33 = (MVWorldObjectClientManager *)(pWVar18->fields)._.worldObjectClientManager;
    }
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
    unaff_EDI = (RegexCharClass_SingleRange)this;
    if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar8 + 0xc) !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,(int32_t)((Object *)((int)RVar8 + 0x10))->klass,
                               (MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar18 = (pMVar17->fields).worldNetwork;
            unaff_EDI = (RegexCharClass_SingleRange)this;
            if (pWVar18 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar18->fields)._.worldObjectClientManager;
          }
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)RVar8 + 0xc) <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          unaff_EDI = (RegexCharClass_SingleRange)this;
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar33,(int32_t)*(MonitorData **)((int)RVar8 + 0x14),
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
              unaff_EDI = (RegexCharClass_SingleRange)this;
              if (iVar39 != 0) {
                bVar25 = 0x89;
                this_12 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_12,bVar25,(MethodInfo *)unaff_ESI);
                pMVar17 = (this->fields).networkGame;
                unaff_ESI.First = 0;
                unaff_ESI.Last = 0;
                unaff_EDI = (RegexCharClass_SingleRange)this;
                if (pMVar17 != (MVNetworkGame *)0x0) {
                  pMVar55 = (pMVar17->fields)._PlayerController_k__BackingField;
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
                    *unaff_FS_OFFSET = uStack_5;
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
    unaff_ESI = unaff_ESI;
    if ((pMVar17 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (RegexCharClass_SingleRange)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
       unaff_ESI = (RegexCharClass_SingleRange)photonEvent, RStack_58 = unaff_EDI,
       photonEvent != (EventData *)0x0)) {
      VStack_12.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar41 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar42 = *piVar16;
        puVar1 = (undefined1 *)func_?();
        eventCode = CONCAT31((int3)((uint)puVar1 >> 8),*puVar1);
        piVar16 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)RStack_58,*piVar16,eventCode,iVar42,iVar41,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar7 = (undefined1 *)func_?();
      eventCode = CONCAT13(*puVar7,(undefined3)eventCode);
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
                            ((EventData *)RVar8,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar14);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = (MethodInfo *)&UNK_?;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar15 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar15[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar8,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar26 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar26,pMVar14);
        eventCode = (MVEventCodes__Enum)pOVar15[2].monitor;
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
        pGVar78 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar8,0xc4,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pGVar78 != (GoldRewardManager *)0x0) {
          pbVar69 = (bool *)func_?();
          (pGVar78->fields).isGoldRewardGame = *pbVar69;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)RVar8,0xc4,(MethodInfo *)0x0);
          pbVar69 = (bool *)func_?();
          BStack_13.m_value = *pbVar69;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_13,(MethodInfo *)0x0);
          pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar26,
                               (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar26,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar39 = func_?();
      pMVar14 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar26 = StringLiteral_V;
      unaff_ESI = unaff_ESI;
      if (iVar39 != 0) {
        pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar34,(Object *)pSVar26,pMVar14);
        puVar7 = (undefined1 *)func_?();
        eventCode = CONCAT31(eventCode._1_3_,*puVar7);
        pMVar17 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        unaff_EDI = (RegexCharClass_SingleRange)pSVar26;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pRVar22 = (RegexCharClass_SingleRange *)func_?();
          unaff_ESI = *pRVar22;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
              OnSayChatIndicatorVisibilityChange == (Action_2_Int32_Boolean_ *)0x0)
          goto code_?;
          pAVar79 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (pAVar79 != (Action_2_Int32_Boolean_ *)0x0) {
            (*(pAVar79->fields)._._.invoke_impl)();
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_ESI = unaff_ESI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)func_?();
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar25 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI.First = 0;
      unaff_ESI.Last = 0;
      if (pOVar15 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar15[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar15[1].monitor;
        func_?();
        *unaff_FS_OFFSET = uStack_5;
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
      pMVar14 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar26,pMVar14);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pMVar67 = (pMVar17->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0)) &&
         (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar67,(MethodInfo *)0x0),
         pMVar44 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar44,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar14 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI = (RegexCharClass_SingleRange)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar26,pMVar14);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)eventCode;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar16 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar16,(MethodInfo *)0x0);
          if (pMVar68 != (MVPlayer *)0x0) {
            (pMVar68->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = uStack_5;
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
      pMVar14 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar14);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pDVar34,(MethodInfo *)0x0);
      uVar53 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
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
      pSVar26 = (String *)func_?();
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,(MethodInfo *)unaff_ESI);
      if (((pOVar15 != (Object *)0x0) &&
          (pMVar17 = (this->fields).networkGame, pMVar17 != (MVNetworkGame *)0x0)) &&
         (pLVar80 = (pMVar17->fields).levelRewardsManager, pLVar80 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar80,(Dictionary_2_System_Int32_System_Int32_ *)pOVar15[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
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
      pSVar26 = (String *)func_?();
      pOVar15 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,(MethodInfo *)unaff_ESI);
      pMVar17 = (this->fields).networkGame;
      if (((pMVar17 != (MVNetworkGame *)0x0) &&
          (pLVar80 = (pMVar17->fields).levelRewardsManager, pOVar15 != (Object *)0x0)) &&
         (pLVar80 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar80,(int32_t)pOVar15[1].klass,(int32_t)pOVar15[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
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
      pMVar14 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar26 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar14);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
      func_?();
      *unaff_FS_OFFSET = uStack_5;
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
      pMVar14 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar26 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,pMVar14);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
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
      pMVar14 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pKVar81 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar14);
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
      *unaff_FS_OFFSET = uStack_5;
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
      piVar16 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      unaff_EDI = RVar8;
      if ((pMVar17 != (MVNetworkGame *)0x0) &&
         (MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,(EventData *)RVar8,(MethodInfo *)0x0),
         (this->fields).networkGame != (MVNetworkGame *)0x0)) {
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
          unaff_ESI = (RegexCharClass_SingleRange)this;
          if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
               (IEditModeUI *)0x0) &&
             (pPVar35 = (PlayerShopInventoryRepository *)func_?(),
             pPVar35 != (PlayerShopInventoryRepository *)0x0)) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_Setup(pPVar35,(EventData *)RVar8,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      pVVar82 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_12,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar83 = pVVar82->x;
      uVar84 = pVVar82->y;
      position.y = (float)uVar84;
      position.x = (float)uVar83;
      eventCode = (MVEventCodes__Enum)pVVar82->z;
      pQVar85 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff80,(((EventData *)RVar8)->fields).Parameters
                           ,(MethodInfo *)0x0);
      fVar63 = pQVar85->x;
      VStack_12.x = pQVar85->y;
      VStack_12.y = pQVar85->z;
      VStack_12.z = pQVar85->w;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_EDI = (RegexCharClass_SingleRange)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar16,(MethodInfo *)0x0);
          if (pMVar68 != (MVPlayer *)0x0) {
            this_07 = (pMVar68->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)RVar8,0xbf,(MethodInfo *)0x0);
            unaff_EDI.First = 0;
            unaff_EDI.Last = 0;
            if (this_07 != (SpawnRolesManager *)0x0) {
              piVar16 = (int32_t *)func_?();
              position.z = (float)eventCode;
              rotation.y = VStack_12.x;
              rotation.x = fVar63;
              rotation.z = VStack_12.y;
              rotation.w = VStack_12.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_07,*piVar16,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_5;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_ESI = unaff_ESI;
    unaff_EDI = RVar8;
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
      pSVar26 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar26,(MethodInfo *)unaff_ESI);
      this_13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_13,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_ESI = (RegexCharClass_SingleRange)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
        if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
          if (pMVar68 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar68,(ISpawnRoleChangeHandler *)this_13,(SpawnRolesRuntimeData *)eventCode
                       ,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_5;
            return;
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
      pSVar26 = (String *)func_?();
      outData = (RegexCharClass_SingleRange)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,(MethodInfo *)unaff_ESI);
      pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = outData;
      if ((outData != (RegexCharClass_SingleRange)0x0) &&
         (pMVar33 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar33,(int32_t)(((Il2CppType *)((int)outData + 0x18))->data).
                                                __klassIndex,(MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar17,(int32_t)(((Il2CppType *)((int)outData + 0x10))->data).__klassIndex,
                     (MethodInfo *)0x0);
          pMVar17 = (this->fields).networkGame;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar17,(int32_t)((MVNetworkGame__Fields *)((int)outData + 8))->
                                        ReceivedItemFromQuery,(MethodInfo *)0x0);
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar15 != (Object *)0x0) {
              if ((pOVar15->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar69 = (bool *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*pbVar69);
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                     (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar21 = false;
                }
                else {
                  bVar21 = true;
                }
                RVar86.First = 0;
                RVar86.Last = 0;
                if (bVar21) {
                  RVar86 = unaff_ESI;
                }
                if (RVar86 != (RegexCharClass_SingleRange)0x0) {
                  if ((*(byte *)(*(int *)unaff_ESI + 0xb8) <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (*(int *)(*(int *)unaff_ESI + 100) + -4 +
                       (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar21 = false;
                  }
                  else {
                    bVar21 = true;
                  }
                  this_14.First = 0;
                  this_14.Last = 0;
                  if (bVar21) {
                    this_14 = unaff_ESI;
                  }
                  if (this_14 != (RegexCharClass_SingleRange)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)this_14,
                               (SpawnRoleBodySwitchData *)outData,*pbVar69,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_5;
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
    unaff_ESI = RVar8;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI = (RegexCharClass_SingleRange)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar15 = (Object *)func_?();
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar16 = (int32_t *)func_?();
        iVar41 = *piVar16;
        uStack_60 = 0;
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_EDI,pOVar15
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar17 = (this->fields).networkGame;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
            pMVar33 = (MVWorldObjectClientManager *)0x0;
          }
          else {
            pWVar18 = (pMVar17->fields).worldNetwork;
            if (pWVar18 == (WorldNetwork *)0x0) break;
            pMVar33 = (MVWorldObjectClientManager *)(pWVar18->fields)._.worldObjectClientManager;
          }
          if (pMVar33 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar33,iVar41,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)RVar8,0x23,(MethodInfo *)0x0);
            pRVar22 = (RegexCharClass_SingleRange *)func_?();
            unaff_ESI = *pRVar22;
            iVar39 = func_?();
            if (iVar39 != 0) {
              pMVar14 = (MethodInfo *)0x0;
              pMVar59 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar59,(int32_t)unaff_ESI,pMVar14);
              *unaff_FS_OFFSET = uStack_5;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar17 = (this->fields).networkGame;
    unaff_ESI = unaff_ESI;
    if (((pMVar17 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (RegexCharClass_SingleRange)(pMVar17->fields).playerContainer,
        unaff_ESI = RVar8, photonEvent != (EventData *)0x0)) &&
       (iVar41 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_EDI != (RegexCharClass_SingleRange)0x0)) {
      bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI,iVar41,&pMStack_11,(MethodInfo *)0x0);
      if (bVar25 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)RVar8,0xde,(MethodInfo *)0x0);
      puVar87 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar87);
      if (pMStack_11 != (MVPlayer *)0x0) {
        if ((pMStack_11->fields).playerState != *puVar87) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_11,eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
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
          if (inputText == (RegexCharClass_SingleRange)0x0) goto code_?;
        }
        unaff_ESI = (RegexCharClass_SingleRange)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)inputText,(MethodInfo *)0x0);
        pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar74,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_5;
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
        uVar9 = (undefined2)((uint)in_stack_10 >> 0x10);
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          unaff_EDI = (RegexCharClass_SingleRange)
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)eventCode)->klass;
          if ((*(byte *)((int)unaff_EDI + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               ((int)((Il2CppClass_1 *)((int)unaff_EDI + 100))->typeHierarchy +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4 + -4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pDVar88 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar21) {
            pDVar88 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          eventCode = (MVEventCodes__Enum)pDVar88;
          RVar8 = (RegexCharClass_SingleRange)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar88 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar14 = (MethodInfo *)&UNK_?;
          this_15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          uVar9 = (undefined2)((uint)in_stack_10 >> 0x10);
          if (this_15 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar89 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff80,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_15,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (RegexCharClass_SingleRange)&stack0xffffff90;
            VStack_12.y = 0.0;
            RVar8 = (RegexCharClass_SingleRange)pDVar89->_currentValue;
            uStack_3 = 1;
            VStack_12.z = (float)unaff_ESI;
            do {
              bVar25 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff90,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              uVar9 = (undefined2)((uint)in_stack_10 >> 0x10);
              if (bVar25 == 0) {
                uStack_3 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar14);
                *unaff_FS_OFFSET = uStack_5;
                return;
              }
              unaff_EDI.First = 0;
              unaff_EDI.Last = 0;
              if (RVar8 != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)RVar8 == TypeInfo__System__String) {
                  unaff_EDI = RVar8;
                }
                if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar90 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar14 = (MethodInfo *)::StringLiteral___;
              if (TVar90.m_Index == 0) {
                pSVar26 = (String *)0x0;
              }
              else {
                pSVar26 = (String *)func_?();
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
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), pOVar15 != (Object *)0x0)) {
        if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pRVar22 = (RegexCharClass_SingleRange *)func_?();
        unaff_ESI = *pRVar22;
        pMVar17 = (this->fields).networkGame;
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
           pMVar44 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI == (RegexCharClass_SingleRange)(pMVar44->fields)._._ActorNr_k__BackingField)
          {
            pSVar26 = StringLiteral_Local_player_leave_event;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              pSVar26 = StringLiteral_Local_player_leave_event;
            }
            goto code_?;
          }
          pMVar17 = (this->fields).networkGame;
          if ((pMVar17 != (MVNetworkGame *)0x0) &&
             (pMVar67 = (pMVar17->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0)) {
            bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar67,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar25 == 0) {
code_?:
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar67 = (pMVar17->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar67,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_5;
                return;
              }
            }
            else {
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar67 = (pMVar17->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0))
              {
                IStack_31.m_value =
                     (int32_t)MVPlayerContainer::MVPlayerContainer_get_Item
                                        (pMVar67,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pIStack_61 = (Int32__Array *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)pIStack_61,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                eventCode = eventCode & 0xffffff;
                VStack_12.z = (float)func_?();
                pOVar15 = (Object *)func_?();
                if (pIStack_61 != (Int32__Array *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pIStack_61,
                             (Object *)VStack_12.z,pOVar15,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_60 = 3;
                  pOVar15 = (Object *)func_?();
                  if (((MVPlayer *)IStack_31.m_value != (MVPlayer *)0x0) &&
                     (*(Delegate__Array **)(IStack_31.m_value + 0x3c) != (Delegate__Array *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pIStack_61,pOVar15,
                               (Object *)
                               (*(Delegate__Array **)(IStack_31.m_value + 0x3c))->max_length,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_54 = 6;
                    VStack_12.z = (float)func_?();
                    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar17 != (MVNetworkGame *)0x0) &&
                       (pFVar36 = (pMVar17->fields)._Friends_k__BackingField,
                       pFVar36 != (FriendList *)0x0)) {
                      bStack_91 = FriendList::FriendList_IsFriend
                                            (pFVar36,(int32_t)*(MethodInfo_1 **)
                                                              (IStack_31.m_value + 0x2c),
                                             (MethodInfo *)0x0);
                      pOVar15 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pIStack_61,
                                 (Object *)VStack_12.z,pOVar15,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      uVar9 = 0;
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pIStack_61,
                                 (MethodInfo *)0x0);
                      pMVar17 = (this->fields).networkGame;
                      if ((pMVar17 != (MVNetworkGame *)0x0) &&
                         (pGVar65 = (pMVar17->fields).gameStatCounterManager,
                         pGVar65 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar65,(int32_t)unaff_ESI,
                                   (MVTeam__Enum)
                                   (((EventHandler_1_ReceivedItemFromQueryEventArgs___Fields *)
                                    (IStack_31.m_value + 0x48))->_)._.method_ptr,(MethodInfo *)0x0);
                        pMVar17 = (this->fields).networkGame;
                        if ((pMVar17 != (MVNetworkGame *)0x0) &&
                           (pGVar65 = (pMVar17->fields).gameStatCounterManager,
                           pGVar65 != (GameStatCounterManager *)0x0)) {
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
      break;
    case MVEventCodes__Enum_Join:
      unaff_ESI = RVar8;
      if ((photonEvent == (EventData *)0x0) ||
         (pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), pOVar15 == (Object *)0x0)) break;
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar48 = (undefined4 *)func_?();
      pMStack_62 = (MVWorldObject *)*puVar48;
      pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)RVar8,0xfe,(MethodInfo *)0x0);
      if (pOVar15 == (Object *)0x0) break;
      if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pMVar30 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar30;
      RVar20 = (RegexCharClass_SingleRange)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         ((EventData *)RVar8,0x9a,(MethodInfo *)0x0);
      unaff_EDI.First = 0;
      unaff_EDI.Last = 0;
      if (RVar20 == (RegexCharClass_SingleRange)0x0) {
code_?:
        pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)RVar8,0xbc,(MethodInfo *)0x0);
        if (pOVar15 == (Object *)0x0) break;
        if ((pOVar15->klass->_0).element_class ==
            (TypeInfo__MV__Common__BuildTarget->_0).element_class) {
          puVar7 = (undefined1 *)func_?();
          RStack_58.First._0_1_ = *puVar7;
          pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)RVar8,0x59,(MethodInfo *)0x0);
          if (pOVar15 != (Object *)0x0) {
            if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            pRVar22 = (RegexCharClass_SingleRange *)func_?();
            RStack_19 = *pRVar22;
            pOVar15 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)RVar8,0xd0,(MethodInfo *)0x0);
            if (pOVar15 != (Object *)0x0) {
              if ((pOVar15->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar69 = (bool *)func_?();
              bVar25 = *pbVar69;
              unaff_ESI = (RegexCharClass_SingleRange)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)RVar8,0xe0,(MethodInfo *)0x0);
              if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              RVar20.First = 0;
              RVar20.Last = 0;
              if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                if (*(String__Class **)unaff_ESI == TypeInfo__System__String) {
                  RVar20 = unaff_ESI;
                }
                if (RVar20 == (RegexCharClass_SingleRange)0x0) goto code_?;
              }
              VStack_12.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                   JsonConvert_DeserializeObject_2
                                             ((String *)RVar20,
                                              MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                             );
              pMVar17 = (this->fields).networkGame;
              if ((pMVar17 != (MVNetworkGame *)0x0) &&
                 (pMVar44 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
                 pMVar44 != (MVLocalPlayer *)0x0)) {
                if (eventCode == (pMVar44->fields)._._ActorNr_k__BackingField) {
                  pSVar26 = StringLiteral_Received_join_event_for_localPla;
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                    pSVar26 = StringLiteral_Received_join_event_for_localPla;
                  }
                  goto code_?;
                }
                unaff_ESI = (RegexCharClass_SingleRange)func_?();
                MVPlayer::MVPlayer__ctor
                          ((MVPlayer *)unaff_ESI,eventCode,(int32_t)pMStack_62,(String *)unaff_EDI,
                           (BuildTarget__Enum)RStack_58,(UserProfileData *)VStack_12.z,0,bVar25,
                           (MethodInfo *)0x0);
                if (unaff_ESI != (RegexCharClass_SingleRange)0x0) {
                  *(RegexCharClass_SingleRange *)((int)unaff_ESI + 0x48) = RStack_19;
                  pMVar17 = (this->fields).networkGame;
                  if ((pMVar17 != (MVNetworkGame *)0x0) &&
                     (pMVar67 = (pMVar17->fields).playerContainer,
                     pMVar67 != (MVPlayerContainer *)0x0)) {
                    MVPlayerContainer::MVPlayerContainer_Add
                              (pMVar67,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_5;
                    return;
                  }
                }
              }
            }
          }
          break;
        }
        goto code_?;
      }
      if (*(String__Class **)RVar20 == TypeInfo__System__String) {
        unaff_EDI = RVar20;
      }
      if (unaff_EDI != (RegexCharClass_SingleRange)0x0) goto code_?;
      goto code_?;
    default:
      goto code_?;
    }
  }
  func_?();
  RVar8 = unaff_ESI;
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  unaff_ESI = RVar8;
code_?:
  func_?();
  uVar92 = func_?();
  pbVar93 = (byte *)((ulonglong)uVar92 >> 0x20);
  iVar39 = (int)uVar92;
  pcVar64 = (char *)(iVar39 + 0x10 + (int)pbVar93 * 2);
  bVar94 = (byte)extraout_ECX;
  *pcVar64 = *pcVar64 << (bVar94 & 0x1f);
  bVar95 = (byte)((ulonglong)uVar92 >> 0x28);
  bVar96 = (byte)((ulonglong)uVar92 >> 8);
  bVar21 = CARRY1(in_stack_97,bVar96) ||
           CARRY1(in_stack_97 + bVar96,in_stack_98 < bVar95);
  in_stack_97 = in_stack_97 + bVar96 + (in_stack_98 < bVar95);
  pbVar56 = pbVar93 + 0x76;
  bVar99 = (byte)uVar92;
  bVar100 = CARRY1(*pbVar56,bVar99) || CARRY1(*pbVar56 + bVar99,bVar21);
  *pbVar56 = *pbVar56 + bVar99 + bVar21;
  bVar57 = *(byte *)unaff_ESI;
  bVar101 = (byte)unaff_EBX;
  bVar102 = *(char *)unaff_ESI + bVar101;
  bVar21 = CARRY1(bVar102,bVar100);
  bVar103 = CARRY1(bVar57,bVar101) || bVar21;
  *(byte *)unaff_ESI = bVar102 + bVar100;
  if ((!CARRY1(bVar57,bVar101) && !bVar21) && *(char *)unaff_ESI != '\0') {
    bVar102 = *pbVar93;
    bVar57 = *pbVar93;
    *pbVar93 = bVar57 + bVar95 + bVar103;
    *(int *)(iVar39 + 0x10) =
         *(int *)(iVar39 + 0x10) + 0x6b +
         (uint)(CARRY1(bVar102,bVar95) || CARRY1(bVar57 + bVar95,bVar103));
    return;
  }
  bVar104 = (byte)((ulonglong)uVar92 >> 0x20);
  bVar102 = (byte)((uint)unaff_EBX >> 8);
  bVar57 = bVar104 + bVar102;
  bVar21 = CARRY1(bVar104,bVar102) || CARRY1(bVar57,bVar103);
  bVar105 = bVar57 + bVar103;
  iVar106 = CONCAT31((int3)((ulonglong)uVar92 >> 0x28),bVar105);
  uVar107 = (undefined3)((ulonglong)uVar92 >> 8);
  bVar108 = (byte)(extraout_ECX >> 8);
  if ((CARRY1(bVar104,bVar102) || CARRY1(bVar57,bVar103)) || bVar105 == 0) {
    pbVar56 = unaff_EBX + -0x3d;
    bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
    *pbVar56 = *pbVar56 + bVar108 + bVar21;
    pbVar56 = unaff_EBX + -0x3d;
    bVar21 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar100);
    *pbVar56 = *pbVar56 + bVar108 + bVar100;
    bVar100 = CARRY1(*(byte *)unaff_EDI,bVar96) || CARRY1(*(byte *)unaff_EDI + bVar96,bVar21);
    *(byte *)unaff_EDI = *(byte *)unaff_EDI + bVar96 + bVar21;
    if ((char)*(byte *)unaff_EDI < '\0') {
      iVar39 = CONCAT31(uVar107,bVar99 * '\x02' + bVar100);
      goto code_?;
    }
    pbVar56 = (byte *)(extraout_ECX + 0x61105078);
    bVar21 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar100);
    *pbVar56 = *pbVar56 + bVar108 + bVar100;
    if (-1 < (char)*pbVar56) goto code_?;
    pbVar56 = unaff_EBX + -0x3d;
    bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
    *pbVar56 = *pbVar56 + bVar108 + bVar21;
    bVar103 = CARRY1(*(byte *)unaff_ESI,bVar108) || CARRY1(*(char *)unaff_ESI + bVar108,bVar100);
    *(byte *)unaff_ESI = *(char *)unaff_ESI + bVar108 + bVar100;
    if ((POPCOUNT(*(undefined1 *)unaff_ESI) & 1U) == 0) {
      *unaff_EBX = *unaff_EBX + bVar94 + bVar103;
      *(byte *)(iVar39 + 0x10) = bVar105;
      *(byte *)((int)unaff_FS_OFFSET + iVar39 + 0x10) = bVar105;
      bVar21 = false;
      uVar109 = extraout_ECX ^ *(uint *)(extraout_ECX + 0x8a271050);
code_?:
      puVar7 = &stack0xffffff50;
      *(char *)(uVar109 + 0x6710508a) = *(char *)(uVar109 + 0x6710508a) + (char)uVar109 + bVar21;
      puVar110 = (uint *)(unaff_EBX + -0x73adefb0);
      *puVar110 = *puVar110 >> 0x10 | *puVar110 << 0x10;
      bVar21 = (int)*puVar110 < 0;
      goto code_?;
    }
    bVar21 = CARRY1(bVar99,bVar94) || CARRY1(bVar99 + bVar94,bVar103);
    bVar57 = bVar99 + bVar94 + bVar103;
    iVar39 = CONCAT31(uVar107,bVar57);
    uVar109 = extraout_ECX;
    iVar111 = iVar106;
    puVar1 = &stack0xfffffffc;
    if ((POPCOUNT(bVar57) & 1U) != 0) goto code_?;
    pbVar56 = unaff_EBX + 0x7c;
    bVar100 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar21);
    *pbVar56 = *pbVar56 + bVar102 + bVar21;
    bVar103 = SCARRY1(bRam_?,bVar95);
    bVar99 = bRam_? + bVar95;
    bVar21 = CARRY1(bRam_?,bVar95) || CARRY1(bVar99,bVar100);
    bRam_? = bVar99 + bVar100;
    if ((bVar103 != SCARRY1(bVar99,bVar100)) == (char)bRam_? < '\0') goto code_?;
    pbVar56 = unaff_EBX + 0x7e;
    bVar100 = CARRY1(*pbVar56,bVar96) || CARRY1(*pbVar56 + bVar96,bVar21);
    *pbVar56 = *pbVar56 + bVar96 + bVar21;
    bVar99 = bVar57 + bVar105;
    bVar21 = CARRY1(bVar57,bVar105) || CARRY1(bVar99,bVar100);
    cVar75 = bVar99 + bVar100;
    puVar7 = (undefined1 *)CONCAT31(uVar107,cVar75);
    puVar1 = &stack0xfffffffc;
    if (cVar75 != '\0' && (SCARRY1(bVar57,bVar105) != SCARRY1(bVar99,bVar100)) == cVar75 < '\0') {
      bVar100 = CARRY1(bRam_?,bVar102);
      bVar102 = bRam_? + bVar102;
      bRam_? = bVar102 + bVar21;
      puVar7[0x10] = puVar7[0x10] + 'k' + (bVar100 || CARRY1(bVar102,bVar21));
      return;
    }
  }
  else {
    pbVar56 = unaff_EBX + -0x3d;
    bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
    *pbVar56 = *pbVar56 + bVar108 + bVar21;
    ppOVar112 = &((Object *)((int)unaff_ESI + 0x50))->klass + (int)unaff_EDI;
    bVar21 = CARRY1(*(byte *)ppOVar112,bVar94) || CARRY1(*(char *)ppOVar112 + bVar94,bVar100);
    *(byte *)ppOVar112 = *(char *)ppOVar112 + bVar94 + bVar100;
    iVar39 = CONCAT31(uVar107,bVar99 + bVar105 + bVar21);
    *(int *)(iVar39 + 0x10) =
         *(int *)(iVar39 + 0x10) + -0x40 +
         (uint)(CARRY1(bVar99,bVar105) || CARRY1(bVar99 + bVar105,bVar21));
code_?:
    bVar21 = false;
    puVar1 = (undefined1 *)0xea105087;
code_?:
    puVar1[-0x15efaf79] = puVar1[-0x15efaf79] + bVar102 + bVar21;
    LOCK();
    iVar111 = *(int *)(iVar39 + 0x10);
    *(int *)(iVar39 + 0x10) = iVar106;
    UNLOCK();
    bVar21 = false;
    uVar109 = extraout_ECX | *(uint *)(iVar39 + -0x779befb0);
code_?:
    pbVar56 = (byte *)(iVar39 + 0x50 + uVar109 * 4);
    bVar99 = (byte)((uint)iVar39 >> 8);
    bVar57 = *pbVar56 + bVar99;
    bVar100 = CARRY1(*pbVar56,bVar99) || CARRY1(bVar57,bVar21);
    *pbVar56 = bVar57 + bVar21;
    bVar57 = *unaff_EBX;
    bVar94 = (byte)((uint)iVar111 >> 8);
    bVar99 = *unaff_EBX + bVar94;
    *unaff_EBX = bVar99 + bVar100;
    *(int *)(iVar39 + 0x10) = iVar111;
    bVar96 = (byte)iVar39;
    bVar21 = 0x99 < bVar96 || (CARRY1(bVar57,bVar94) || CARRY1(bVar99,bVar100));
    puVar7 = (undefined1 *)
              CONCAT31((int3)((uint)iVar39 >> 8),
                       bVar96 + (9 < (bVar96 & 0xf) | in_AF) * '\x06' + bVar21 * '`');
    iVar106 = CONCAT31((int3)((uint)iVar111 >> 8),puVar7[0x10]);
    *(uint *)(iVar106 + -0x7498efb0) = uVar109;
  }
  pbVar56 = unaff_EBX + uVar109 * 4 + -0x743eefb0;
  bVar57 = (byte)iVar106;
  bVar100 = CARRY1(*pbVar56,bVar57) || CARRY1(*pbVar56 + bVar57,bVar21);
  *pbVar56 = *pbVar56 + bVar57 + bVar21;
  pbVar56 = (byte *)(iVar106 + -0x74);
  bVar21 = CARRY1(*pbVar56,bVar57) || CARRY1(*pbVar56 + bVar57,bVar100);
  *pbVar56 = *pbVar56 + bVar57 + bVar100;
  puVar2 = puVar1;
code_?:
  *(char *)((int)unaff_ESI + -0x34efaf73) =
       *(char *)((int)unaff_ESI + -0x34efaf73) + bVar101 + bVar21;
  pbVar56 = puVar7 + 0x10;
  pOVar15 = (Object *)((int)unaff_ESI + -0x701defb0);
  bVar21 = ((uint)pOVar15->klass & 1) != 0;
  pOVar15->klass = (Object__Class *)((uint)pOVar15->klass >> 1 | (uint)bVar21 << 0x1f);
  bVar99 = (byte)puVar7 + (byte)uVar109;
  bVar100 = CARRY1((byte)puVar7,(byte)uVar109) || CARRY1(bVar99,bVar21);
  uVar107 = (undefined3)((uint)puVar7 >> 8);
  bVar99 = bVar99 + bVar21;
  bVar21 = CARRY1(bVar102,bVar102) || CARRY1(bVar102 * '\x02',bVar100);
  bVar103 = CARRY1(*pbVar56,bVar99) || CARRY1(*pbVar56 + bVar99,bVar21);
  *pbVar56 = *pbVar56 + bVar99 + bVar21;
  pbVar93 = (byte *)(CONCAT31(uVar107,bVar99) + -0x11efaf6b);
  bVar96 = (byte)(uVar109 >> 8);
  bVar21 = CARRY1(*pbVar93,bVar96) || CARRY1(*pbVar93 + bVar96,bVar103);
  *pbVar93 = *pbVar93 + bVar96 + bVar103;
  pbVar93 = puVar2 + -0x69;
  bVar94 = (byte)pbVar56;
  bVar103 = CARRY1(*pbVar93,bVar94) || CARRY1(*pbVar93 + bVar94,bVar21);
  *pbVar93 = *pbVar93 + bVar94 + bVar21;
  pbVar93 = puVar2 + -0x79efaf69;
  bVar95 = (byte)((uint)pbVar56 >> 8);
  bVar57 = *pbVar93 + bVar95;
  bVar21 = CARRY1(*pbVar93,bVar95) || CARRY1(bVar57,bVar103);
  *pbVar93 = bVar57 + bVar103;
  iVar39 = (int)CONCAT11(bVar102 * '\x02' + bVar100,bVar101);
  pbVar56 = (byte *)((int)unaff_EDI + -0x67);
  bVar57 = *pbVar56;
  bVar102 = *pbVar56;
  *pbVar56 = bVar102 + bVar96 + bVar21;
  uVar92 = func_?(CONCAT22(uVar9,in_CS),iVar39,iVar39,iVar39);
  iVar106 = (int)((ulonglong)uVar92 >> 0x20);
  bVar96 = bVar99 + bVar94 + (CARRY1(bVar57,bVar96) || CARRY1(bVar102 + bVar96,bVar21)) &
           *(byte *)((int)uVar92 + 0x509cc710 + iVar106 * 2);
  pbVar56 = (byte *)(CONCAT31(uVar107,bVar96) * 4 + -0x608aefb0);
  bVar57 = *pbVar56;
  bVar102 = (byte)extraout_ECX_00;
  *pbVar56 = *pbVar56 + bVar102;
  bVar94 = bRam_?;
  bVar105 = (byte)((ulonglong)uVar92 >> 0x28);
  bVar95 = (byte)((uint)puVar7 >> 8);
  bVar99 = bVar95 + bVar105;
  bVar21 = CARRY1(bVar95,bVar105) || CARRY1(bVar99,CARRY1(bVar57,bVar102));
  uVar9 = (undefined2)((uint)puVar7 >> 0x10);
  bVar99 = bVar99 + CARRY1(bVar57,bVar102);
  uVar107 = (undefined3)((ulonglong)uVar92 >> 8);
  pAVar113 = (Action_1_String_ *)CONCAT31(uVar107,bRam_?);
  pbVar56 = (byte *)(iVar106 + 0x50);
  bVar100 = CARRY1(*pbVar56,bRam_?) || CARRY1(*pbVar56 + bRam_?,bVar21);
  *pbVar56 = *pbVar56 + bRam_? + bVar21;
  bVar21 = CARRY1(bVar102,bVar105) || CARRY1(bVar102 + bVar105,bVar100);
  bVar95 = bVar102 + bVar105 + bVar100;
  iVar39 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),bVar95);
  pbVar56 = (byte *)(iVar39 + -0x5b);
  bVar100 = CARRY1(*pbVar56,bVar94) || CARRY1(*pbVar56 + bVar94,bVar21);
  pARama4991050 = pAVar113;
  *pbVar56 = *pbVar56 + bVar94 + bVar21;
  bVar101 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar21 = CARRY1(bVar96,bVar101) || CARRY1(bVar96 + bVar101,bVar100);
  iVar111 = CONCAT31((int3)(CONCAT22(uVar9,CONCAT11(bVar99,bVar96)) >> 8),bVar96 + bVar101 + bVar100);
  *(undefined4 *)unaff_EDI = *(undefined4 *)unaff_ESI;
  pbVar56 = (byte *)(iVar111 + -0x3c94efb0 + iVar39 * 4);
  bVar108 = (byte)((ulonglong)uVar92 >> 0x20);
  bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
  *pbVar56 = *pbVar56 + bVar108 + bVar21;
  ppMVar114 = (MonitorData **)((int)unaff_ESI + 0x54);
  bVar21 = CARRY1(*(byte *)ppMVar114,bVar105) || CARRY1(*(char *)ppMVar114 + bVar105,bVar100);
  *(byte *)ppMVar114 = *(char *)ppMVar114 + bVar105 + bVar100;
  pbVar56 = (byte *)(iVar111 + -0x3d);
  bVar100 = CARRY1(*pbVar56,bVar101) || CARRY1(*pbVar56 + bVar101,bVar21);
  *pbVar56 = *pbVar56 + bVar101 + bVar21;
  pbVar56 = (byte *)(iVar111 + -0x3d);
  bVar21 = CARRY1(*pbVar56,bVar101) || CARRY1(*pbVar56 + bVar101,bVar100);
  *pbVar56 = *pbVar56 + bVar101 + bVar100;
  pbVar56 = (byte *)(iVar111 + -0x3d);
  bVar57 = *pbVar56;
  bVar102 = *pbVar56;
  *pbVar56 = bVar102 + bVar101 + bVar21;
  *(char *)(iVar106 + 0x631050a6) =
       *(char *)(iVar106 + 0x631050a6) + (char)((ulonglong)uVar92 >> 8) +
       (CARRY1(bVar57,bVar101) || CARRY1(bVar102 + bVar101,bVar21));
  pcVar64 = (char *)((int)&pAVar113[-0x2bbebe].fields._._.interp_method + 3);
  *pcVar64 = *pcVar64 + bVar108 +
             (*(MonitorData **)((int)unaff_ESI + 4) < *(MonitorData **)((int)unaff_EDI + 4));
  puVar2[-0xaefaf59] =
       puVar2[-0xaefaf59] + bVar99 +
       (((Object *)((int)unaff_ESI + 8))->klass <
       (Object__Class *)((MVNetworkGame__Fields *)((int)unaff_EDI + 8))->ReceivedItemFromQuery);
  pOVar15 = (Object *)((int)unaff_ESI + 0x10);
  *(byte *)&pAVar113->klass =
       *(char *)&pAVar113->klass + bVar105 +
       (*(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_ESI + 0xc) <
       *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)unaff_EDI + 0xc));
  (&UNK_?)[iVar106] = (&UNK_?)[iVar106] + bVar105;
  bVar96 = bVar101 + bVar95;
  pcVar64 = (char *)CONCAT22((short)((uint)extraout_ECX_00 >> 0x10),CONCAT11(bVar96,bVar95));
  (((Il2CppType *)((int)unaff_EDI + 0x10))->data).type = (Il2CppType *)pAVar113;
  *pcVar64 = *pcVar64 + bVar94 + CARRY1(bVar101,bVar95);
  bVar21 = bVar94 < *(byte *)((int)unaff_EDI + 0x14);
  pbVar56 = (byte *)(pcVar64 + -0x52);
  bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
  *pbVar56 = *pbVar56 + bVar108 + bVar21;
  pbVar56 = (byte *)(iVar111 + -0x51);
  bVar57 = *pbVar56;
  bVar102 = *pbVar56;
  *pbVar56 = bVar102 + bVar94 + bVar100;
  bVar102 = bVar94 + bVar96 + (CARRY1(bVar57,bVar94) || CARRY1(bVar102 + bVar94,bVar100));
  uVar109 = CONCAT31(uVar107,bVar102);
  bVar21 = uVar109 < *(uint *)((int)unaff_EDI + 0x15);
  pbVar56 = (byte *)(iVar111 + -0x6defaf50);
  bVar100 = CARRY1(*pbVar56,bVar96) || CARRY1(*pbVar56 + bVar96,bVar21);
  *pbVar56 = *pbVar56 + bVar96 + bVar21;
  bVar21 = CARRY1(bVar99,bVar99) || CARRY1(bVar99 * '\x02',bVar100);
  bVar94 = bVar99 * '\x02' + bVar100;
  pbVar56 = (byte *)(uVar109 + 0x241050b2);
  bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
  *pbVar56 = *pbVar56 + bVar108 + bVar21;
  bVar21 = 0xaf < bVar102 || CARRY1(bVar102 + 0x50,bVar100);
  bVar99 = bVar102 + 0x50 + bVar100;
  pbVar56 = (byte *)(iVar106 + 0x281050b1);
  bVar100 = CARRY1(*pbVar56,bVar108) || CARRY1(*pbVar56 + bVar108,bVar21);
  *pbVar56 = *pbVar56 + bVar108 + bVar21;
  bVar57 = bVar94 + bVar96;
  bVar21 = CARRY1(bVar94,bVar96) || CARRY1(bVar57,bVar100);
  iRam_? = CONCAT22((short)((ulonglong)uVar92 >> 0x10),CONCAT11(0x50,bVar102));
  pbVar56 = (byte *)(iVar106 + -0x4b);
  bVar103 = CARRY1(*pbVar56,bVar99) || CARRY1(*pbVar56 + bVar99,bVar21);
  *pbVar56 = *pbVar56 + bVar99 + bVar21;
  pbVar56 = (byte *)((int)unaff_EDI + -0x32);
  bVar21 = CARRY1(*pbVar56,bVar105) || CARRY1(*pbVar56 + bVar105,bVar103);
  *pbVar56 = *pbVar56 + bVar105 + bVar103;
  pbVar56 = (byte *)(CONCAT22(uVar9,CONCAT11(bVar57 + bVar100,0x50)) + -0x56efaf4a);
  bVar100 = CARRY1(*pbVar56,bVar105) || CARRY1(*pbVar56 + bVar105,bVar21);
  *pbVar56 = *pbVar56 + bVar105 + bVar21;
  pbVar93 = (byte *)CONCAT22(uVar9,0x5050);
  pbVar56 = (byte *)(iRam_? + -0x3c94efb0 + (int)((int)unaff_EDI + 0x19) * 4);
  bVar21 = CARRY1(*pbVar56,bVar102) || CARRY1(*pbVar56 + bVar102,bVar100);
  *pbVar56 = *pbVar56 + bVar102 + bVar100;
  bVar57 = *(char *)&pOVar15->klass + bVar99;
  bVar100 = CARRY1(*(byte *)&pOVar15->klass,bVar99) || CARRY1(bVar57,bVar21);
  *(byte *)&pOVar15->klass = bVar57 + bVar21;
  bVar57 = *pbVar93;
  bVar102 = *pbVar93;
  *pbVar93 = bVar102 + 0x50 + bVar100;
  ppMVar114 = &((Object *)((int)unaff_ESI + -0x3ee1efa0))[0xc].monitor + (int)unaff_EDI;
  *(char *)ppMVar114 = *(char *)ppMVar114 + 'P' + (0xaf < bVar57 || CARRY1(bVar102 + 0x50,bVar100));
  pcVar115 = (code *)swi(3);
  iRam_? = iRam_?;
  (*pcVar115)();
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

