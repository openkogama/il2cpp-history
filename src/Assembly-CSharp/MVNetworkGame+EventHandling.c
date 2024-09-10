
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
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(0x4c1c);
    func_?(0x98);
    func_?(0x98);
    func_?(0x94);
    func_?(0x5998);
    func_?(0x5c);
    func_?(0xf4);
    func_?(0x7f4);
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
    func_?(0xdf24);
    func_?(0x34);
    func_?(0x74);
    func_?(0x98);
    func_?(0xcddc);
    func_?(0x8c);
    func_?(0xb0);
    func_?(0xedec);
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
    func_?(0xf0b8);
    func_?(0x30);
    func_?(0x6c);
    func_?(0x7c);
    func_?(0x4414);
    func_?(0x1c);
    func_?(0x90);
    func_?(0xf5e4);
    func_?(&TypeInfo__MV__Common__MVEventCodes);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?();
    func_?();
    func_?(0xf870);
    func_?(0x80);
    func_?(0x40);
    func_?(0x70);
    func_?(0x38f0);
    func_?(0x6c);
    func_?(0xac);
    func_?(0x7bac);
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
    func_?(0xf800);
    func_?(100);
    func_?(0xbc);
    func_?(8);
    func_?(0x1b24);
    func_?(200);
    func_?(0x70);
    func_?(0xc184);
    func_?(&StringLiteral_Profile_with_ID__0__unlocked_Ach);
    func_?(&StringLiteral_Fast_forward);
    func_?(&StringLiteral_refreshCredentials);
    func_?(&StringLiteral_Could_not_change_player_game_sta);
    func_?(&StringLiteral_Unknown_event__);
    func_?(&StringLiteral_MVEventCodes_XPReceivedEvent);
    func_?();
    func_?();
    func_?(0x351c);
    func_?(0xa0);
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pWVar17 = (pMVar16->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar17 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar17->fields)._.worldObjectClientManager;
        bVar11 = 0;
        unaff_ESI = _Var56;
        _Stack_28 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          _Var49.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var56.dummy,0x12,(MethodInfo *)0x0);
          bVar11 = 0;
          if (unaff_EDI.dummy == (Object__Class *)0x0) break;
          unaff_EDI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (_Var49.dummy == (Object__Class *)0x0) {
            unaff_ESI.dummy = (Object__Class *)0x0;
code_?:
            bVar11 = 0;
            if (eventCode != MVEventCodes__Enum_NoCodeSet) {
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = *(Il2CppClass **)(*(int *)eventCode + 0x20) < pIVar14;
              if (*(Il2CppClass **)(*(int *)eventCode + 0x20) == pIVar14) {
                piVar15 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar15,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pIVar18 = ((Il2CppClass_0 *)&(_Var49.array)->etype)->image;
          if ((*(byte *)&pIVar18[4].assembly <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (pIVar18[2].typeCount +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          unaff_ESI.dummy = (Object__Class *)0x0;
          if (bVar19) {
            unaff_ESI.typeHandle = _Var49.typeHandle;
          }
          bVar11 = 0;
          if (unaff_ESI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->__klassIndex;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0x12,(MethodInfo *)0x0);
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pWVar17 = (pMVar16->fields).worldNetwork;
          bVar11 = 0;
          if (pWVar17 != (WorldNetwork *)0x0) {
            pMVar21 = (pWVar17->fields)._.worldObjectClientManager;
            bVar11 = 0;
            if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar21,unaff_EDI.__klassIndex,pDVar20,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x13,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                func_?((char)pOVar12,
                                (short)
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pWVar17 = (pMVar16->fields).worldNetwork;
        bVar11 = 0;
        if (pWVar17 != (WorldNetwork *)0x0) {
          pMVar21 = (pWVar17->fields)._.worldObjectClientManager;
          bVar11 = 0;
          if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar21,unaff_EDI.__klassIndex,pDVar20,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar16,photonEvent,(MethodInfo *)0x0);
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
    bVar11 = 0;
    unaff_EDI = (_union_86)this;
    if (unaff_ESI.dummy != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      bVar11 = 0;
      if (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs !=
          (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar22 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar22 == 0) {
          pSVar23 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar23,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
        bVar11 = 0;
        if (unaff_ESI.dummy != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          bVar11 = 0;
          if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)
                            unaff_ESI.type[1].data.typeHandle,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
            bVar11 = 0;
            if (unaff_ESI.dummy != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (unaff_ESI.type[1].data.dummy == (Object__Class *)0x0) {
                pSVar23 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar23 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pOVar24 = (Object__Class *)unaff_ESI.type[1].data.array;
              bVar11 = 0;
              if (pOVar24 != (Object__Class *)0x0) {
                (*(code *)(pOVar24->_0).namespaze)((short)(pOVar24->_0).element_class);
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pWVar17 = (pMVar16->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar17 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar17->fields)._.worldInventory;
        bVar11 = 0;
        unaff_EDI = _Var56;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var56.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var56.dummy,0x31,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.typeHandle = _Var56.typeHandle;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var56.dummy == (Object__Class *)0x0) {
code_?:
            bVar11 = 0;
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar13 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pSVar25 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar13 != pIVar14) goto code_?;
              p_Var59 = (_union_86 *)func_?();
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              bVar11 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar26 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      (eventCode + MVEventCodes__Enum_RegisterPrototype),
                                     unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                eventCode = func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          ((BytePacker *)eventCode,(Byte__Array *)unaff_EDI.typeHandle,
                           (MethodInfo *)0x0);
                bVar11 = 0;
                unaff_ESI.dummy = (void *)0x0;
                if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar26,(BytePacker *)eventCode,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          bVar11 = 0;
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pWVar17 = (pMVar16->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar17 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar17->fields)._.worldInventory;
        bVar11 = 0;
        unaff_EDI = _Var56;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0x22,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)eventCode;
          bVar11 = 0;
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) && (bVar11 = 0, pOVar12 != (Object *)0x0)
             ) {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__System__Single->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar27 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar27;
            bVar11 = 0;
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar13 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              pSVar25 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar13 != pIVar14) goto code_?;
              p_Var59 = (_union_86 *)func_?();
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              bVar11 = 0;
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   ((int)unaff_EDI.generic_class + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar26 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      ((int)unaff_EDI.generic_class +
                                      MVEventCodes__Enum_RegisterPrototype),unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar11 = 0;
                if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar26->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar26->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar26->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar26,(float)eventCode,(MethodInfo *)0x0);
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
    bVar11 = 0;
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
      bVar11 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar15,iVar29,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      eventCode = *pMVar27;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x35,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?((char)pOVar12,(char)TypeInfo__System__Int32);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar16,unaff_EDI.__klassIndex,eventCode,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      eventCode = *pMVar27;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x36,(MethodInfo *)0x0);
      pFVar30 = (FriendStatus__Enum *)
                func_?((char)pOVar12,(char)TypeInfo__MV__Common__FriendStatus);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar16,unaff_EDI.__klassIndex,eventCode,*pFVar30,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar16,*piVar15,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar16,*piVar15,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar16,unaff_EDI.__klassIndex,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar16,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar16->fields)._NetworkGameStateListener_k__BackingField;
      bVar11 = 0;
      unaff_EDI = _Var56;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0x42,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->__klassIndex;
          pMVar27 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar27;
          p_Var59 = (_union_86 *)func_?();
          _Stack_28 = *p_Var59;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          unaff_ESI.type[2].data = _Stack_28;
          unaff_ESI.type[1].data.__klassIndex = eventCode;
          *(_union_86 *)&unaff_ESI.type[1].attrs = (TypeDefinitionIndex)unaff_EDI;
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            iVar28 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar16,(MethodInfo *)0x0);
            pvVar31 = unaff_ESI.type[3].data.dummy;
            *(MVEventCodes__Enum *)&unaff_ESI.type[2].attrs =
                 (int)unaff_EDI.dummy + (eventCode - iVar28);
            if (pvVar31 == (void *)0x0) goto code_?;
            pIVar32 = unaff_ESI.type[3].data.array;
            eventCode = func_?();
            if (cRam_? == '\0') {
              func_?(0xf4e8);
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?((short)TypeInfo__System__EventArgs);
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)eventCode,
                       (MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (pIVar32 != (Il2CppArrayType *)0x0) {
              (*(code *)pIVar32->lobounds)((char)pIVar32[2].etype,(short)unaff_ESI.__klassIndex);
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar33 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (_union_86)(pMVar33->fields)._._ActorNr_k__BackingField;
          puVar34 = (undefined4 *)func_?();
          if ((Object__Class *)*puVar34 == unaff_ESI.dummy) goto code_?;
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            pWVar17 = (pMVar16->fields).worldNetwork;
            bVar11 = 0;
            if (pWVar17 != (WorldNetwork *)0x0) {
              _Var49 = (_union_86)(pWVar17->fields)._.worldObjectClientManager;
              _Stack_28 = _Var49;
              eventCode = (MVEventCodes__Enum)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var56.typeHandle,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var56.typeHandle,0x46,(MethodInfo *)0x0);
              bVar11 = 0;
              unaff_ESI.dummy = (Object__Class *)0x0;
              if (_Var49.dummy != (Object__Class *)0x0) {
                pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar15 = (int32_t *)func_?((char)eventCode,(short)TypeInfo__System__Int32)
                ;
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar15,
                           pDVar20,(MethodInfo *)0x0);
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
    bVar11 = 0;
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
      bVar11 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        pPVar35 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar35,iVar29,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar36 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Stack_28 = *p_Var59;
      pMVar27 = (MVEventCodes__Enum *)func_?((char)pOVar36,(short)TypeInfo__System__Single)
      ;
      eventCode = *pMVar27;
      pfVar37 = (float *)func_?((char)pOVar12,(char)TypeInfo__System__Single);
      this_06 = photonEvent;
      VStack_8.x = *pfVar37;
      VStack_8.y = (float)eventCode;
      VStack_8.z = (float)_Stack_28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (this_06,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Stack_28 = *p_Var59;
      pMVar27 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar27;
      puVar34 = (undefined4 *)func_?();
      uStack_9 = *puVar34;
      MStack_10 = eventCode;
      pMVar16 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        piVar15 = (int32_t *)func_?();
        camOrigin.y._0_1_ = SUB41(VStack_8.y,0);
        camOrigin.x = VStack_8.x;
        camOrigin.y._1_1_ = (char)((uint)VStack_8.y >> 8);
        camOrigin.y._2_2_ = (short)((uint)VStack_8.y >> 0x10);
        camOrigin.z._0_1_ = SUB41(VStack_8.z,0);
        camOrigin.z._1_1_ = (char)((uint)VStack_8.z >> 8);
        camOrigin.z._2_2_ = (short)((uint)VStack_8.z >> 0x10);
        camDir.y._0_2_ = (short)MStack_10;
        camDir.x = (float)uStack_9;
        camDir.y._2_2_ = (short)(MStack_10 >> 0x10);
        camDir.z = (float)_Stack_48.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar16,*piVar15,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar16,photonEvent,(MethodInfo *)0x0);
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
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x58,(MethodInfo *)0x0);
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar38 = (MVGameMsgType__Enum *)func_?((char)pOVar12,(short)TypeInfo__System__Int32)
      ;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar38,pDVar20,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
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
      piVar15 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3
                ((Type *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
      this_05 = eventCode;
      bVar11 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar39 = (MVTeam__Enum *)func_?();
        team = *pMVar39;
        piVar15 = (int32_t *)
                  func_?((char)_Stack_28.__klassIndex,(short)TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)this_05,*piVar15,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
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
      bVar11 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar15,iVar29,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar16,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar27;
      pOVar12 = (Object *)func_?((char)TypeInfo__System__Int32,(short)&eventCode);
      pOVar36 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x81,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)
                func_?((char)pOVar36,(char)TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var59;
      pOVar36 = (Object *)
                func_?((char)TypeInfo__MV__Common__AchievementType,(short)&_Stack_28);
      pSVar23 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar12,pOVar36,
                           (MethodInfo *)0x0);
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar41 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar12 = (Object *)
                func_?((char)TypeInfo__System__Byte,(short)(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pDVar41 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar41,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar34 = (undefined4 *)func_?();
        pIStack_42 = (Il2CppClass *)*puVar34;
        uStack_43 = 0;
        pOVar12 = (Object *)func_?((char)TypeInfo__System__Byte,(short)&uStack_43);
        TVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar41,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?((char)TVar44.m_Index,(char)TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var59->__klassIndex;
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI.dummy = (Object__Class *)0x0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar45 = (pMVar16->fields)._PlayerController_k__BackingField;
          _Stack_28.dummy =
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (_Var56.dummy,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)_Var56.typeHandle,0x8d,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pMVar45 != (MVLocalObjectController *)0x0) {
            pbVar46 = (byte *)func_?();
            bVar11 = *pbVar46;
            piVar15 = (int32_t *)
                      func_?((char)_Stack_28.__klassIndex,(short)TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar45,*piVar15,(int32_t)pIStack_42,_Stack_24.__klassIndex,(uint)bVar11,
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_ESI = (_union_86)p_Var59->__klassIndex;
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar47,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI.dummy == (Object__Class *)0x0) || (iVar48 = func_?(), iVar48 == 0)
             ) goto code_?;
          iVar48 = func_?();
          bVar11 = 0;
          if (iVar48 != 0) {
            uVar49 = func_?();
            func_?(0x5a,uVar49);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)
                func_?((char)TypeInfo__System__Byte,(short)(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var59 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var59->__klassIndex;
        uStack_43 = 0;
        pOVar12 = (Object *)func_?((char)TypeInfo__System__Byte,(short)&uStack_43);
        TVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?((char)TVar44.m_Index,(char)TypeInfo__System__Int32);
        _Stack_34 = *p_Var59;
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar47,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            _Stack_48.dummy = (void *)func_?();
            bVar11 = 0;
            if (_Stack_48.dummy != (Object__Class *)0x0) {
              pIStack_42 = *(Il2CppClass **)(_Stack_48.__klassIndex + 0xfc);
              uStack_50 = 3;
              pOVar12 = (Object *)func_?();
              TVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI.typeHandle,pOVar12,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar34 = (undefined4 *)
                         func_?((char)TVar44.m_Index,(short)TypeInfo__System__Int32);
              pDStack_51 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar34;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
              puVar34 = (undefined4 *)func_?((char)pOVar12,(char)TypeInfo__System__Int32);
              pMStack_52 = (MVWorldObject *)*puVar34;
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var56.typeHandle,0x3a,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
              _Stack_24 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var56.typeHandle,0x5c,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var56.typeHandle,0x23,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              VStack_8.z = *(float *)p_Var59;
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_EDI = (_union_86)this;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pWVar17 = (pMVar16->fields).worldNetwork;
                bVar11 = 0;
                if (pWVar17 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar17,(int32_t)pMStack_52,0,1,(int32_t)pIStack_42,(int32_t)pDStack_51
                             ,_Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar16 = (this->fields).networkGame;
                  bVar11 = 0;
                  if (pMVar16 != (MVNetworkGame *)0x0) {
                    pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar16,(MethodInfo *)0x0);
                    bVar11 = 0;
                    if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_52 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar47,(int32_t)pDStack_51,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      unaff_EDI = (_union_86)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI.dummy == (Object__Class *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI.dummy = (void *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)unaff_EDI.typeHandle,
                                   (Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                        func_?((short)&TypeInfo__MVNetworkGame_EventHandling____c->
                                                static_fields->__9__10_0);
                        _Var56 = (_union_86)photonEvent;
                      }
                      bVar11 = 0;
                      unaff_ESI = _Var56;
                      if (pMStack_52 != (MVWorldObject *)0x0) {
                        func_?(0x2c);
                        pMVar16 = (this->fields).networkGame;
                        bVar11 = 0;
                        if (pMVar16 != (MVNetworkGame *)0x0) {
                          pMVar45 = (pMVar16->fields)._PlayerController_k__BackingField;
                          pMStack_52 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item((EventData *)_Var56.typeHandle,0xfe,
                                                          (MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var56.typeHandle,0x8d,(MethodInfo *)0x0);
                          bVar11 = 0;
                          unaff_EDI.dummy = (Object__Class *)0x0;
                          if (pMVar45 != (MVLocalObjectController *)0x0) {
                            pbVar46 = (byte *)func_?();
                            bVar11 = *pbVar46;
                            piVar15 = (int32_t *)
                                      func_?((char)pMStack_52,
                                                      (short)TypeInfo__System__Int32);
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar45,*piVar15,(int32_t)pDStack_51,_Stack_34.__klassIndex,
                                       (uint)bVar11,(MethodInfo *)0x0);
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
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Var49 = *p_Var59;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)
                func_?((char)pOVar12,(short)TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar5,(undefined3)eventCode);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x90,(MethodInfo *)0x0);
      pfVar37 = (float *)func_?((char)pOVar12,(char)TypeInfo__MV__Common__RewardType);
      fVar53 = *pfVar37;
      _Stack_48 = _Var49;
      _Stack_34.dummy = (void *)func_?((char)TypeInfo__System__Int32,(short)&_Stack_48);
      uStack_50 = eventCode._3_1_;
      pOVar12 = (Object *)func_?();
      VStack_8.z = fVar53;
      pOVar36 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar12,pOVar36,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      pMVar54 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar14 = (pMVar54->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar14->vtable[0].methodPtr & 0x100) == 0) {
        pIVar14 = (Il2CppClass *)func_?();
      }
      if (pIVar14->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar14 = (pMVar54->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar14->vtable[0].methodPtr & 0x100) == 0) {
        pIVar14 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar14->static_fields;
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pWVar17 = (pMVar16->fields).worldNetwork;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar17 != (WorldNetwork *)0x0) {
          this_00 = (pWVar17->fields)._.runtimeEventManagerNetwork;
          unaff_ESI.dummy = (void *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI.typeHandle,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          bVar11 = 0;
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pWVar17 = (pMVar16->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar17 != (WorldNetwork *)0x0) {
        this_01 = (RuntimeEventManager *)(pWVar17->fields)._.runtimeEventManagerNetwork;
        bVar11 = 0;
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
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x59,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?((char)pOVar12,(short)TypeInfo__System__Int32);
      _Stack_24 = *p_Var59;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?((char)pOVar12,(char)TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa0,(MethodInfo *)0x0);
      puVar34 = (undefined4 *)func_?();
      pDStack_51 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar34;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa1,(MethodInfo *)0x0);
      puVar34 = (undefined4 *)func_?();
      pIStack_42 = (Il2CppClass *)*puVar34;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa2,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar5);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa3,(MethodInfo *)0x0);
      pcVar55 = (char *)func_?();
      pMVar16 = (this->fields).networkGame;
      if (*pcVar55 == '\0') {
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pGVar56 = (pMVar16->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar56 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar56,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_51,(int32_t)pIStack_42,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pGVar56 = (pMVar16->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar56 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar56,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_51,(int32_t)pIStack_42,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar57 = (Byte__Array *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pGVar56 = (pMVar16->fields).gameStatCounterManager;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar56 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar56,pBVar57,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar27 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar27;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?((short)TypeInfo__MV__WorldObject__BytePacker);
      pMVar54 = (MethodInfo *)0x0;
      pBVar57 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar57,pMVar54);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        this_02 = (pMVar16->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar11 = 0;
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
    bVar11 = 0;
    unaff_ESI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var56.typeHandle,0xa9,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar28 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar28,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar58 = (bool *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*pbVar58);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar59 = (pMVar16->fields)._GameCoinManager_k__BackingField;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar59 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar59,*pbVar58,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        _Var49 = (_union_86)p_Var59->__klassIndex;
        eventCode = (MVEventCodes__Enum)_Var49;
        unaff_ESI.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (_Var56.dummy,200,(MethodInfo *)0x0);
        if (unaff_ESI.dummy == (Object__Class *)0x0) {
          _Var56.dummy = (Object__Class *)0x0;
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
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          _Var56.dummy = (Object__Class *)0x0;
          if (bVar19) {
            _Var56.typeHandle = unaff_ESI.typeHandle;
          }
          bVar11 = 0;
          _Var49 = (_union_86)eventCode;
          if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
        }
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = _Var49;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar16,_Var49.__klassIndex,
                     (Dictionary_2_System_Object_System_Object_ *)_Var56.typeHandle,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent == (EventData *)0x0) break;
    pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar11 = 0;
    if (unaff_EDI.dummy == (void *)0x0) break;
    if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar20->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar20->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar19) {
      pDVar60 = pDVar20;
    }
    bVar11 = 0;
    unaff_ESI = (_union_86)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var56;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar16,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar11 = 0;
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
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var56.typeHandle,0x85,(MethodInfo *)0x0);
      bVar11 = 0;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 != pIVar14) {
code_?:
          func_?();
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?();
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,100,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 != pIVar14) goto code_?;
          pbVar58 = (bool *)func_?();
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar16,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar58,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar57 = (Byte__Array *)
               func_?((char)unaff_EDI.__klassIndex,(short)TypeInfo__System__Byte);
    bVar11 = 0;
    if (pBVar57 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar33 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar33->fields)._._ActorNr_k__BackingField;
          bVar11 = 0;
          if (unaff_ESI.dummy != (Object__Class *)0x0) {
            pIVar13 = (Il2CppClass *)
                      ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            pSVar25 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar27 = (MVEventCodes__Enum *)func_?();
            if (*pMVar27 == eventCode) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_ESI = (_union_86)this;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pMVar59 = (pMVar16->fields)._GameCoinManager_k__BackingField;
                bVar11 = 0;
                unaff_ESI = (_union_86)this;
                if (pMVar59 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar59,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar16 = (this->fields).networkGame;
                  bVar11 = 0;
                  unaff_ESI = (_union_86)this;
                  if (pMVar16 != (MVNetworkGame *)0x0) {
                    pMVar61 = (pMVar16->fields).operationRequests;
                    bVar11 = 0;
                    unaff_ESI.dummy = (Object__Class *)0x0;
                    if (pMVar61 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?(0x5e6c);
                        cRam_? = '\x01';
                      }
                      _Stack_48.dummy = (void *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                ((Dictionary_2_System_Byte_System_Object_ *)_Stack_48.typeHandle,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (_union_86)(pMVar61->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pSVar62 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      eventCode._0_1_ = (pSVar62->SendReliable).Encrypt;
                      eventCode._1_1_ = (pSVar62->SendReliable).Channel;
                      eventCode._2_2_ = *(undefined2 *)&(pSVar62->SendReliable).field_0x6;
                      bVar11 = 0;
                      if (unaff_ESI.dummy != (Object__Class *)0x0) {
                        (*(code *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[6].assembly)
                                  ((char)unaff_ESI.__klassIndex,0x66,(char)_Stack_48.__klassIndex,
                                   (short)(pSVar62->SendReliable).DeliveryMode);
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
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar11 = 0;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                eventCode = (MVEventCodes__Enum)(pMVar16->fields).playerContainer;
                unaff_ESI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var56.dummy,0xfe,(MethodInfo *)0x0);
                pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var56.typeHandle,0xd0,(MethodInfo *)0x0);
                unaff_EDI = (_union_86)eventCode;
                bVar11 = 0;
                if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
                   (bVar11 = 0, pOVar12 != (Object *)0x0)) {
                  pIVar13 = (pOVar12->klass->_0).element_class;
                  pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  if (pIVar13 != pIVar14) goto code_?;
                  puVar5 = (undefined1 *)func_?();
                  eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
                  bVar11 = 0;
                  if (unaff_ESI.dummy != (Object__Class *)0x0) {
                    pIVar13 = (Il2CppClass *)
                              ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
                    pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    pSVar25 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar13 == pIVar14) {
                      piVar15 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,(bool)eventCode,
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
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var56.typeHandle,7,(MethodInfo *)0x0);
    unaff_EDI = (_union_86)eventCode;
    bVar11 = 0;
    if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (bVar11 = 0, pOVar12 == (Object *)0x0))
    break;
    pIVar13 = (pOVar12->klass->_0).element_class;
    pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
    bVar11 = pIVar13 < pIVar14;
    if (pIVar13 != pIVar14) goto code_?;
    pcVar55 = (char *)func_?();
    bVar19 = *pcVar55 == '\0';
    eventCode = CONCAT31(eventCode._1_3_,bVar19);
    if (unaff_ESI.dummy == (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,bVar19,(MethodInfo *)0x0);
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
      bVar63 = false;
    }
    else {
      bVar63 = true;
    }
    _Var56.dummy = (Object__Class *)0x0;
    if (bVar63) {
      _Var56.typeHandle = unaff_ESI.typeHandle;
    }
    bVar11 = 0;
    if (_Var56.dummy != (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)_Var56.typeHandle,bVar19,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar20->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar20->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        pDVar60 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar19) {
          pDVar60 = pDVar20;
        }
        bVar11 = 0;
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar60 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var56.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (_Var56.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
      bVar11 = 0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        ((_union_86 *)(eventCode + 0x9c))->type = (Il2CppType *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar57 = (Byte__Array *)func_?();
    bVar11 = 0;
    unaff_EDI.dummy = (Object__Class *)0x0;
    if (pBVar57 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar61 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar11 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar61 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar64 = (pMVar61->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pPVar64 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar64->klass->vtable).SendOperation.method)
                  ((char)pPVar64,0x3c,(char)unaff_EDI.__klassIndex,
                   (short)(TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                          SendReliable).DeliveryMode);
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
    unaff_EDI.dummy = (void *)func_?((short)TypeInfo__System__Byte);
    bVar11 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Stack_48 = *p_Var59;
      pOVar12 = (Object *)func_?((char)TypeInfo__System__Int32,(short)&_Stack_48);
      bVar11 = 0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (Object *)unaff_EDI.typeHandle,pOVar12,
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pMVar65 = (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar65 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (_union_86)(pMVar65->fields).logicEventQueue;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?(0x7a20);
            func_?(0x8c);
            func_?(0xf0);
            func_?(0x78);
            func_?(0x2f4);
            cRam_? = '\x01';
          }
          unaff_EDI = (_union_86)photonEvent;
          bVar11 = 0;
          if (photonEvent != (EventData *)0x0) {
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pMVar27 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar27;
              bVar11 = 0;
              if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)
                                    unaff_ESI.type[1].data.typeHandle,eventCode,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar22 == 0) {
                  _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
                  VStack_8.z = (float)func_?();
                  System.Core.dll::System::Runtime::CompilerServices::
                  ReadOnlyCollectionBuilder`1[System::Object]::
                  ReadOnlyCollectionBuilder_1_System_Object___ctor
                            ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar11 = 0;
                  if (_Stack_48.dummy == (Object__Class *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,
                             eventCode,(Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                bVar11 = 0;
                if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                  this_07 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)
                                       unaff_ESI.type[1].data.typeHandle,eventCode,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar11 = 0;
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pMVar65 = (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar65 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar65,(MethodInfo *)0x0);
        pMVar66 = (pMVar65->fields).updateEvaluatorStep;
        bVar11 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar66 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar15 = &(pMVar66->fields).stepTimestamp;
          *piVar15 = *piVar15 + 1000;
code_?:
          iVar28 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar66->fields).lastUpdateTick = iVar28;
          (pMVar66->fields).accumulatedTime = 0;
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          pMVar66 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
          bVar11 = 0;
          unaff_ESI.dummy = (Object__Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar66 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar66->fields).stepTimestamp = *piVar15;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->__klassIndex;
          pcVar55 = *(char **)&unaff_ESI.type[1].attrs;
          while (bVar11 = 0, pcVar55 != (char *)0x0) {
            bVar11 = 0;
            if (*(int *)(pcVar55 + 0x2c) == 0) break;
            if (unaff_EDI.__klassIndex <= *(int *)(*(int *)(pcVar55 + 0x2c) + 0x10))
            goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                       (MethodInfo *)0x0);
            pcVar55 = *(char **)&unaff_ESI.type[1].attrs;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    _Var56.dummy = (void *)func_?();
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI.dummy = _Var56.dummy;
    unaff_EDI = (_union_86)this;
    if (pMVar16 == (MVNetworkGame *)0x0) break;
    pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar16,(MethodInfo *)0x0);
    bVar11 = 0;
    if (_Var56.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar11 = 0;
    if (*(char **)&_Var56.type[1].attrs != (char *)0x0) {
      bVar11 = 0;
      if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar47,_Var56.type[2].data.__klassIndex,(MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          bVar11 = *(char **)&_Var56.type[1].attrs == (char *)0x0;
          if (*(char **)&_Var56.type[1].attrs < (char *)0x2) goto code_?;
          bVar11 = 0;
          if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
            iVar28._0_2_ = ((Il2CppType *)((int)_Var56 + 0x10))->attrs;
            iVar28._2_1_ = ((Il2CppType *)((int)_Var56 + 0x10))->type;
            iVar28._3_1_ = ((Il2CppType *)((int)_Var56 + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar47,iVar28,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?((char)TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?((short)TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar11 = 0;
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
              iVar48 = func_?();
              bVar11 = 0;
              if (iVar48 != 0) {
                uVar67 = (undefined1)unaff_ESI.__klassIndex;
                uVar68 = (undefined1)((uint)unaff_ESI >> 8);
                uVar49 = (undefined2)((uint)unaff_ESI >> 0x10);
                bVar22 = 0xfe;
                this_08 = (MVAvatarLocal *)func_?(uVar67,(short)TypeInfo__MVAvatarLocal);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_08,bVar22,(MethodInfo *)CONCAT22(uVar49,CONCAT11(uVar68,uVar67)));
                pMVar16 = (this->fields).networkGame;
                bVar11 = 0;
                if (pMVar16 != (MVNetworkGame *)0x0) {
                  pMVar45 = (pMVar16->fields)._PlayerController_k__BackingField;
                  bVar11 = 0;
                  if (pMVar45 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar45,1,(MethodInfo *)0x0);
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
      unaff_ESI = (_union_86)photonEvent;
      bVar11 = 0;
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
        bVar11 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          iVar28 = *piVar15;
          piVar15 = (int32_t *)func_?();
          iVar29 = *piVar15;
          puVar5 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar5 >> 8),*puVar5);
          piVar15 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar15,eventCode,iVar29,iVar28,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar11 = 0;
    unaff_EDI = _Var56;
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
                            ((EventData *)_Var56.typeHandle,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar54 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      uVar67 = SUB41(pSVar23,0);
      uVar68 = (undefined1)((uint)pSVar23 >> 8);
      uVar49 = (undefined2)((uint)pSVar23 >> 0x10);
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar54);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?((char)TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pOVar12 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar12[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar23 = (String *)func_?();
        HighlightManager::HighlightManager_Init
                  (pSVar23,(MethodInfo *)CONCAT22(uVar49,CONCAT11(uVar68,uVar67)));
        profileSettingsState = (ProfileSettingsState *)pOVar12[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?((short)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager)
          ;
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar69 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0xc4,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        if (pGVar69 != (GoldRewardManager *)0x0) {
          pbVar58 = (bool *)func_?();
          (pGVar69->fields).isGoldRewardGame = *pbVar58;
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var56.typeHandle,0xc4,(MethodInfo *)0x0);
          pbVar58 = (bool *)func_?((char)pOVar12,(short)TypeInfo__System__Boolean);
          BStack_7.m_value = *pbVar58;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar23 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar23,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar23,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar70 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)0x0;
      if (pSVar70 == (String *)0x0) {
code_?:
        pSVar23 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar23,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar70->klass == TypeInfo__System__String) {
        pSVar23 = pSVar70;
      }
      bVar11 = 0;
      if (pSVar23 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
      pSVar25 = extraout_ECX;
code_?:
      func_?((char)unaff_ESI.__klassIndex,(char)pSVar25);
      _Var56 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var56;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar48 = func_?();
      pMVar54 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar23 = StringLiteral_V;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar48 != 0) {
        pDVar41 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        TVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar41,(Object *)pSVar23,pMVar54);
        puVar5 = (undefined1 *)
                  func_?((char)TVar44.m_Index,(short)TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pMVar16 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)pSVar23;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar16,*piVar15,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar70 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar23 = (String *)0x0;
    if (pSVar70 == (String *)0x0) {
code_?:
      bVar22 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if (bVar22 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar11 = 0;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar12[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar12[1].monitor;
code_?:
        func_?((short)&TypeInfo__GamePassesManager->static_fields->
                                playerTierStateCalculator);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if (pSVar70->klass == TypeInfo__System__String) {
      pSVar23 = pSVar70;
    }
    bVar11 = 0;
    unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pSVar23 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var56.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar71 = (pMVar16->fields).playerContainer;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar71 != (MVPlayerContainer *)0x0) {
          pMVar33 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar71,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pMVar33 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar33,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var49.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var49.typeHandle = unaff_ESI.typeHandle;
        }
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var49.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var49.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar16->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)eventCode;
        bVar11 = 0;
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar15 = (int32_t *)func_?();
          pMVar72 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            (pMVar72->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar40 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pLVar73 = (pMVar16->fields).levelRewardsManager;
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar73 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar73,(Dictionary_2_System_Int32_System_Int32_ *)pOVar12[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pLVar73 = (pMVar16->fields).levelRewardsManager;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if ((pOVar12 != (Object *)0x0) &&
           (bVar11 = 0, unaff_EDI = unaff_EDI, pLVar73 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar73,(int32_t)pOVar12[1].klass,(int32_t)pOVar12[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    bVar11 = 0;
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
      bVar11 = 0;
      pSVar25 = TypeInfo__System__String;
      if (_Var56.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var56.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar40 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar11 = 0;
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
        pKVar74 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)_Var56.typeHandle,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar74;
        func_?((short)&TypeInfo__SubscriberRewardDataManager->static_fields->
                                _VatValues_k__BackingField);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var56.typeHandle = unaff_ESI.typeHandle;
      }
      bVar11 = 0;
      pSVar25 = TypeInfo__System__String;
      if (_Var56.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        pIVar13 = (Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        pSVar25 = (String__Class *)TypeInfo__System__Int32;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar15,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var56;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar16,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_ESI = (_union_86)this;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup
                    (pMVar16,(EventData *)_Var56.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar75 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar76 = pVVar75->x;
      uVar77 = pVVar75->y;
      eventCode = (MVEventCodes__Enum)pVVar75->z;
      MStack_10 = uVar76;
      _Stack_48 = (_union_86)uVar77;
      pQVar78 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,
                           (((EventData *)_Var56.generic_class)->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_79 = pQVar78->x;
      VStack_8.x = pQVar78->y;
      VStack_8.y = pQVar78->z;
      VStack_8.z = pQVar78->w;
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar16->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          pMVar72 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            this_03 = (pMVar72->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)_Var56.typeHandle,0xbf,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (this_03 != (SpawnRolesManager *)0x0) {
              piVar15 = (int32_t *)func_?();
              position.y._0_2_ = (short)_Stack_48.__klassIndex;
              position.x = (float)MStack_10;
              position.y._2_2_ = (short)((uint)_Stack_48 >> 0x10);
              position.z._0_1_ = (char)eventCode;
              position.z._1_1_ = (char)(eventCode >> 8);
              position.z._2_2_ = (short)(eventCode >> 0x10);
              rotation.y._0_1_ = SUB41(VStack_8.x,0);
              rotation.x = fStack_79;
              rotation.y._1_1_ = (char)((uint)VStack_8.x >> 8);
              rotation.y._2_2_ = (short)((uint)VStack_8.x >> 0x10);
              rotation.z._0_2_ = SUB42(VStack_8.y,0);
              rotation.z._2_2_ = (short)((uint)VStack_8.y >> 0x10);
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_03,*piVar15,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar11 = 0;
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
      pSVar23 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar23,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar16->fields).playerContainer;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        if ((unaff_ESI.dummy != (Object__Class *)0x0) && (bVar11 = 0, pOVar12 != (Object *)0x0)) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 != pIVar14) goto code_?;
          piVar15 = (int32_t *)func_?();
          pMVar72 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar15,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar72 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar72,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar11 = 0;
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
        bVar11 = 0;
        pSVar25 = TypeInfo__System__String;
        if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_EDI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var56.dummy,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar47 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar11 = 0;
      if ((unaff_EDI.dummy != (Object__Class *)0x0) &&
         (bVar11 = 0, pMVar47 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar47,unaff_EDI.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar16,unaff_EDI.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar16,(int32_t)unaff_EDI.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pbVar58 = (bool *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*pbVar58);
              bVar11 = 0;
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                     ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                _Var56.dummy = (Object__Class *)0x0;
                if (bVar19) {
                  _Var56.typeHandle = unaff_ESI.typeHandle;
                }
                bVar11 = 0;
                if (_Var56.dummy != (Object__Class *)0x0) {
                  if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                       ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar19 = false;
                  }
                  else {
                    bVar19 = true;
                  }
                  _Var56.dummy = (void *)0x0;
                  if (bVar19) {
                    _Var56.typeHandle = unaff_ESI.typeHandle;
                  }
                  bVar11 = 0;
                  if (_Var56.dummy != (void *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)_Var56.typeHandle,
                               (SpawnRoleBodySwitchData *)unaff_EDI.typeHandle,*pbVar58,
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
    bVar11 = 0;
    unaff_ESI = _Var56;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar12 = (Object *)
                func_?((char)TypeInfo__System__Byte,(short)(byte *)((int)&eventCode + 3));
      bVar11 = 0;
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var59 = (_union_86 *)func_?();
        _Stack_48 = (_union_86)p_Var59->__klassIndex;
        uStack_50 = 0;
        pOVar12 = (Object *)func_?((char)TypeInfo__System__Byte,(short)&uStack_50);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar47 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar47 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar47,_Stack_48.__klassIndex,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      ((EventData *)_Var56.typeHandle,0x23,(MethodInfo *)0x0);
            p_Var59 = (_union_86 *)func_?();
            unaff_ESI = (_union_86)p_Var59->__klassIndex;
            iVar48 = func_?((char)unaff_EDI.__klassIndex,
                                     (short)
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            bVar11 = 0;
            if (iVar48 != 0) {
              pMVar54 = (MethodInfo *)0x0;
              this_09 = (MVWorldObjectSpawner *)
                        func_?((char)unaff_EDI.__klassIndex,
                                        (short)
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                        (this_09,unaff_ESI.__klassIndex,pMVar54);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_EDI = (_union_86)(pMVar16->fields).playerContainer;
      bVar11 = 0;
      unaff_ESI = _Var56;
      if (photonEvent != (EventData *)0x0) {
        iVar28 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          bVar22 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar28,&pMStack_6,
                              (MethodInfo *)0x0);
          if (bVar22 == 0) {
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
          puVar80 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar80);
          bVar11 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar80) {
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
      bVar11 = 0;
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
          bVar11 = 0;
          pSVar25 = TypeInfo__System__String;
          if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var56.dummy,(MethodInfo *)0x0);
        pMVar61 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar61 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar61,(String *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar11 = 0;
      if (photonEvent != (EventData *)0x0) {
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
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          pDVar81 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar19) {
            pDVar81 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          bVar11 = 0;
          eventCode = (MVEventCodes__Enum)pDVar81;
          if (pDVar81 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar11 = 0;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var56.dummy = &UNK_?;
          this_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar11 = 0;
          if (this_10 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar82 = mscorlib.dll::System::Collections::Generic::
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
            _Var49 = (_union_86)pDVar82->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI.dummy;
            do {
              bVar22 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar22 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)unaff_ESI.typeHandle,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)_Var56.typeHandle);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var49.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var49.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var49;
                }
                bVar11 = 0;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              bVar11 = 0;
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar44.m_Index == 0) {
                pSVar23 = (String *)0x0;
                _Var56 = (_union_86)::StringLiteral___;
              }
              else {
                _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
                pSVar23 = (String *)func_?();
                _Var56 = _Stack_48;
              }
              pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)_Var56.typeHandle,
                                   pSVar23,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar23,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 != pIVar14) goto code_?;
          p_Var59 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var59->__klassIndex;
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          unaff_EDI = (_union_86)this;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pMVar33 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI.dummy == (Object__Class *)(pMVar33->fields)._._ActorNr_k__BackingField)
              {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?((char)TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pMVar71 = (pMVar16->fields).playerContainer;
                bVar11 = 0;
                if (pMVar71 != (MVPlayerContainer *)0x0) {
                  bVar22 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar71,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                  if (bVar22 == 0) {
code_?:
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar71 = (pMVar16->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar71 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar71,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar71 = (pMVar16->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar71 != (MVPlayerContainer *)0x0) {
                        pIStack_42 = (Il2CppClass *)
                                     MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar71,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        pDStack_51 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_51,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_8.z = (float)func_?((short)TypeInfo__System__Byte);
                        _Stack_48 = unaff_ESI;
                        pOVar12 = (Object *)
                                  func_?((char)TypeInfo__System__Int32,(char)&_Stack_48);
                        bVar11 = 0;
                        if (pDStack_51 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_51,
                                     (Object *)VStack_8.z,pOVar12,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_50 = 3;
                          pOVar12 = (Object *)func_?();
                          bVar11 = 0;
                          if (pIStack_42 != (Il2CppClass *)0x0) {
                            bVar11 = 0;
                            if (pIStack_42->klass != (Il2CppClass *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_51,
                                         pOVar12,(Object *)pIStack_42->klass->namespaze,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_43 = 6;
                              VStack_8.z = (float)func_?();
                              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar11 = 0;
                              if (pMVar16 != (MVNetworkGame *)0x0) {
                                this_04 = (pMVar16->fields)._Friends_k__BackingField;
                                bVar11 = 0;
                                if (this_04 != (FriendList *)0x0) {
                                  bStack_83 = FriendList::FriendList_IsFriend
                                                        (this_04,(int32_t)pIStack_42->parent,
                                                         (MethodInfo *)0x0);
                                  pOVar12 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_51
                                             ,(Object *)VStack_8.z,pOVar12,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_51
                                             ,(MethodInfo *)0x0);
                                  pMVar16 = (this->fields).networkGame;
                                  bVar11 = 0;
                                  if (pMVar16 != (MVNetworkGame *)0x0) {
                                    pGVar56 = (pMVar16->fields).gameStatCounterManager;
                                    bVar11 = 0;
                                    if (pGVar56 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar56,unaff_ESI.__klassIndex,
                                                 (MVTeam__Enum)pIStack_42->properties,
                                                 (MethodInfo *)0x0);
                                      pMVar16 = (this->fields).networkGame;
                                      bVar11 = 0;
                                      if (pMVar16 != (MVNetworkGame *)0x0) {
                                        pGVar56 = (pMVar16->fields).gameStatCounterManager;
                                        bVar11 = 0;
                                        if (pGVar56 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar56,unaff_ESI.__klassIndex,
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
      bVar11 = 0;
      unaff_ESI = _Var56;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 == pIVar14) {
            puVar34 = (undefined4 *)func_?();
            pMStack_52 = (MVWorldObject *)*puVar34;
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var56.typeHandle,0xfe,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI = unaff_EDI;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pMVar27 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar27;
              _Var49.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(_Var56.dummy,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var49.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var49.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var49.typeHandle;
                }
                bVar11 = 0;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var56.typeHandle,0xbc,(MethodInfo *)0x0);
              bVar11 = 0;
              if (pOVar12 != (Object *)0x0) {
                pIVar13 = (pOVar12->klass->_0).element_class;
                pIVar14 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar11 = pIVar13 < pIVar14;
                if (pIVar13 != pIVar14) goto code_?;
                puVar5 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar5;
                pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var56.typeHandle,0x59,(MethodInfo *)0x0);
                bVar11 = 0;
                if (pOVar12 != (Object *)0x0) {
                  pIVar13 = (pOVar12->klass->_0).element_class;
                  pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  if (pIVar13 != pIVar14) goto code_?;
                  p_Var59 = (_union_86 *)func_?();
                  _Stack_28 = *p_Var59;
                  pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)_Var56.typeHandle,0xd0,(MethodInfo *)0x0
                                              );
                  bVar11 = 0;
                  if (pOVar12 != (Object *)0x0) {
                    pIVar13 = (pOVar12->klass->_0).element_class;
                    pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    if (pIVar13 != pIVar14) goto code_?;
                    puVar5 = (undefined1 *)func_?();
                    _Stack_48.__klassIndex._0_1_ = *puVar5;
                    unaff_ESI.dummy =
                         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var56.dummy,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
                    }
                    _Var56.dummy = (Object__Class *)0x0;
                    if (unaff_ESI.dummy != (Object__Class *)0x0) {
                      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
                          TypeInfo__System__String) {
                        _Var56.typeHandle = unaff_ESI.typeHandle;
                      }
                      bVar11 = 0;
                      pSVar25 = TypeInfo__System__String;
                      if (_Var56.dummy == (Object__Class *)0x0) goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)_Var56.typeHandle,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar16,(MethodInfo *)0x0);
                      bVar11 = 0;
                      if (pMVar33 != (MVLocalPlayer *)0x0) {
                        if (eventCode == (pMVar33->fields)._._ActorNr_k__BackingField) {
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
                                  ((MVPlayer *)unaff_ESI.typeHandle,eventCode,(int32_t)pMStack_52,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_8.z,0,(bool)_Stack_48.__klassIndex,
                                   (MethodInfo *)0x0);
                        bVar11 = 0;
                        if (unaff_ESI.dummy != (void *)0x0) {
                          unaff_ESI.type[9].data = _Stack_28;
                          pMVar16 = (this->fields).networkGame;
                          bVar11 = 0;
                          if (pMVar16 != (MVNetworkGame *)0x0) {
                            pMVar71 = (pMVar16->fields).playerContainer;
                            bVar11 = 0;
                            if (pMVar71 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar71,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0)
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
code_?:
  func_?();
code_?:
  func_?();
  _Var56 = unaff_ESI;
code_?:
  func_?((char)unaff_EDI.__klassIndex,(short)_Stack_48.__klassIndex);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?((short)&_Stack_54,0xd8);
code_?:
  func_?();
code_?:
  func_?();
  unaff_ESI = _Var56;
code_?:
  uVar49 = func_?();
  uVar84 = func_?(uVar49);
  iVar48 = (int)uVar84;
  iVar85 = CONCAT31((int3)((ulonglong)uVar84 >> 0x28),0x41);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48);
  bVar86 = *pbVar46 + (byte)unaff_EBX;
  bVar19 = CARRY1(*pbVar46,(byte)unaff_EBX) || CARRY1(bVar86,bVar11);
  *pbVar46 = bVar86 + bVar11;
  iVar87 = iVar85 + 1;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x0000003e);
  bVar86 = (byte)uVar84;
  bVar63 = CARRY1(*pbVar46,bVar86) || CARRY1(*pbVar46 + bVar86,bVar19);
  *pbVar46 = *pbVar46 + bVar86 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar87);
  bVar11 = (byte)((ulonglong)uVar84 >> 8);
  bVar19 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar63);
  *pbVar46 = *pbVar46 + bVar11 + bVar63;
  iVar88 = unaff_EBX + 1;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_ESI.__klassIndex + 0x41106443));
  bVar89 = (byte)((uint)iVar88 >> 8);
  bVar63 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar19);
  *pbVar46 = *pbVar46 + bVar89 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48 + -0x6fef9b77);
  bVar90 = (byte)iVar87;
  bVar19 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar63);
  *pbVar46 = *pbVar46 + bVar90 + bVar63;
  *(undefined1 **)(iVar48 + 0x6e + iVar87) = &stack0xffffff61;
  bVar63 = CARRY1(bVar11,bVar90) || CARRY1(bVar11 + bVar90,bVar19);
  iVar48 = CONCAT22((short)((ulonglong)uVar84 >> 0x10),CONCAT11(bVar11 + bVar90 + bVar19,bVar86))
  ;
  bVar11 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar91 = (byte)((uint)iVar87 >> 8);
  bVar92 = bVar11 + bVar91;
  bVar19 = CARRY1(bVar11,bVar91) || CARRY1(bVar92,bVar63);
  bVar91 = (byte)extraout_ECX_00;
  bVar92 = bVar92 + bVar63;
  iVar93 = CONCAT22((short)((uint)extraout_ECX_00 >> 0x10),CONCAT11(bVar92,bVar91));
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48 + 0xa106489);
  bVar63 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar19);
  *pbVar46 = *pbVar46 + bVar90 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + -0x14ef9bb8);
  bVar90 = (byte)iVar88;
  bVar19 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar63);
  *pbVar46 = *pbVar46 + bVar90 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar88);
  bVar63 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar19);
  *pbVar46 = *pbVar46 + bVar89 + bVar19;
  bVar11 = bVar90 + (bVar86 - 1);
  bVar19 = CARRY1(bVar90,bVar86 - 1) || CARRY1(bVar11,bVar63);
  iVar94 = CONCAT31((int3)((uint)iVar88 >> 8),bVar11 + bVar63);
  iVar87 = iVar48 + -2;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar94 + 0x49);
  bVar63 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar19);
  *pbVar46 = *pbVar46 + bVar91 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48 + 0x25106447);
  bVar19 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar63);
  *pbVar46 = *pbVar46 + bVar89 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar85 + -0x6fef9bb6);
  bVar63 = 0xbe < *pbVar46 || CARRY1(*pbVar46 + 0x41,bVar19);
  *pbVar46 = *pbVar46 + 0x41 + bVar19;
  *(undefined1 **)(iVar48 + -0x1f + iVar85) = &stack0xffffff63;
  iVar88 = iVar85 + -1;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(&UNK_? + iVar48));
  bVar90 = (byte)iVar88;
  bVar19 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar63);
  *pbVar46 = *pbVar46 + bVar90 + bVar63;
  piVar95 = (int *)(iVar94 + -1);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&unaff_ESI.type[9].data + 3));
  bVar86 = *pbVar46;
  bVar96 = (byte)((uint)piVar95 >> 8);
  bVar11 = *pbVar46;
  *pbVar46 = bVar11 + bVar96 + bVar19;
  pcVar55 = (char *)((int)unaff_FS_OFFSET + iVar48 + 0x51106487);
  *pcVar55 = *pcVar55 + bVar90 + (CARRY1(bVar86,bVar96) || CARRY1(bVar11 + bVar96,bVar19));
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_ESI.__klassIndex + 0x4a10644d));
  bVar11 = *pbVar46;
  bVar89 = (byte)((uint)iVar88 >> 8);
  *pbVar46 = *pbVar46 + bVar89;
  puVar5 = (undefined1 *)(unaff_ESI.__klassIndex + -1);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EDI.__klassIndex + -0x13ef9baf));
  bVar19 = CARRY1(*pbVar46,bVar96) || CARRY1(*pbVar46 + bVar96,CARRY1(bVar11,bVar89));
  *pbVar46 = *pbVar46 + bVar96 + CARRY1(bVar11,bVar89);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar93);
  bVar86 = (byte)((uint)iVar87 >> 8);
  bVar63 = CARRY1(*pbVar46,bVar86) || CARRY1(*pbVar46 + bVar86,bVar19);
  *pbVar46 = *pbVar46 + bVar86 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar85 + 0x4f);
  bVar19 = CARRY1(*pbVar46,bVar96) || CARRY1(*pbVar46 + bVar96,bVar63);
  *pbVar46 = *pbVar46 + bVar96 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar93 + 0x51);
  bVar63 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar19);
  *pbVar46 = *pbVar46 + bVar91 + bVar19;
  bVar96 = (byte)piVar95;
  bVar19 = CARRY1(bVar90,bVar96) || CARRY1(bVar90 + bVar96,bVar63);
  bVar90 = bVar90 + bVar96 + bVar63;
  iVar48 = CONCAT31((int3)((uint)iVar88 >> 8),bVar90);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48);
  bVar63 = CARRY1(*pbVar46,bVar92) || CARRY1(*pbVar46 + bVar92,bVar19);
  *pbVar46 = *pbVar46 + bVar92 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&unaff_EDI.type[10].data + 3));
  bVar19 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar63);
  *pbVar46 = *pbVar46 + bVar90 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48 * 3 + 0x52b11064);
  bVar11 = (byte)iVar87;
  bVar63 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar19);
  *pbVar46 = *pbVar46 + bVar11 + bVar19;
  bVar19 = CARRY1(bVar89,bVar96) || CARRY1(bVar89 + bVar96,bVar63);
  uVar49 = (undefined2)((uint)iVar88 >> 0x10);
  bVar89 = bVar89 + bVar96 + bVar63;
  iVar48 = CONCAT22(uVar49,CONCAT11(bVar89,bVar90));
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar87);
  bVar63 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar19);
  *pbVar46 = *pbVar46 + bVar91 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + -0x5cef9bad);
  bVar19 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar63);
  *pbVar46 = *pbVar46 + bVar89 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)&_Stack_54 + iVar48 * 2 + 2);
  bVar63 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar19);
  *pbVar46 = *pbVar46 + bVar91 + bVar19;
  bVar19 = CARRY1(in_stack_97,bVar96) || CARRY1(in_stack_97 + bVar96,bVar63);
  in_stack_97 = in_stack_97 + bVar96 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar87);
  bVar63 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar19);
  *pbVar46 = *pbVar46 + bVar89 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar93 + 0x59);
  bVar19 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar63);
  *pbVar46 = *pbVar46 + bVar11 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EDI.__klassIndex + 0x3810645b));
  bVar63 = CARRY1(*pbVar46,bVar86) || CARRY1(*pbVar46 + bVar86,bVar19);
  *pbVar46 = *pbVar46 + bVar86 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_ESI.__klassIndex + 0x5a));
  bVar91 = (byte)((uint)puVar5 >> 8);
  bVar19 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar63);
  *pbVar46 = *pbVar46 + bVar91 + bVar63;
  bVar63 = CARRY1(bVar90,bVar86) || CARRY1(bVar90 + bVar86,bVar19);
  bVar92 = bVar90 + bVar86 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + CONCAT31((int3)((uint)iVar48 >> 8),bVar92) + 0x5d);
  bVar19 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar63);
  *pbVar46 = *pbVar46 + bVar11 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)puVar5);
  bVar63 = CARRY1(*pbVar46,bVar92) || CARRY1(*pbVar46 + bVar92,bVar19);
  *pbVar46 = *pbVar46 + bVar92 + bVar19;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EDI.__klassIndex + -0x14ef9ba1));
  bVar19 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar63);
  *pbVar46 = *pbVar46 + bVar11 + bVar63;
  uVar98 = *(undefined4 *)(iVar94 + 3);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((undefined1 *)(unaff_EDI.__klassIndex + 0x60591693) +
                         (int)(unaff_ESI.__klassIndex + -0x318) * 2));
  bVar63 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar19);
  *pbVar46 = *pbVar46 + bVar89 + bVar19;
  bVar19 = CARRY1(bVar89,bVar91) || CARRY1(bVar89 + bVar91,bVar63);
  *(int *)(iVar94 + 3) = iVar87;
  *piVar95 = iVar93;
  *(uint *)(iVar94 + -5) = CONCAT22(uVar49,CONCAT11(bVar89 + bVar91 + bVar63,bVar92));
  *(undefined1 **)(iVar94 + -9) = puVar5;
  *(int *)(iVar94 + -0xd) = iVar94 + 7;
  *(undefined1 **)(iVar94 + -0x11) = &stack0xfffffffd;
  *(undefined4 *)(iVar94 + -0x15) = uVar98;
  *(undefined1 **)(iVar94 + -0x19) = (undefined1 *)((int)&(unaff_EDI.type)->data + 1);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_ESI.__klassIndex + -0x17ef9ba0));
  bVar63 = CARRY1(*pbVar46,bVar86) || CARRY1(*pbVar46 + bVar86,bVar19);
  *pbVar46 = *pbVar46 + bVar86 + bVar19;
  puVar34 = *(undefined4 **)(iVar94 + -0x19);
  puVar99 = *(undefined4 **)(iVar94 + -0x15);
  uVar100 = *(uint *)(iVar94 + -0x11);
  pbVar101 = *(byte **)(iVar94 + -9);
  iVar93 = *(int *)(iVar94 + -5);
  iVar87 = *piVar95;
  uVar98 = *(undefined4 *)(iVar94 + 3);
  bVar11 = (byte)((uint)uVar98 >> 8);
  bVar102 = (byte)pbVar101;
  bVar92 = bVar11 + bVar102;
  bVar19 = CARRY1(bVar11,bVar102) || CARRY1(bVar92,bVar63);
  uVar49 = (undefined2)((uint)uVar98 >> 0x10);
  bVar11 = (byte)uVar98;
  bVar92 = bVar92 + bVar63;
  iVar48 = CONCAT22(uVar49,CONCAT11(bVar92,bVar11));
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar48);
  bVar63 = CARRY1(*pbVar46,bVar92) || CARRY1(*pbVar46 + bVar92,bVar19);
  *pbVar46 = *pbVar46 + bVar92 + bVar19;
  bVar90 = (byte)iVar87;
  bVar19 = CARRY1(bVar11,bVar90) || CARRY1(bVar11 + bVar90,bVar63);
  uVar103 = (undefined3)((uint)iVar48 >> 8);
  bVar91 = bVar11 + bVar90 + bVar63;
  iVar48 = CONCAT31(uVar103,bVar91);
  pbVar46 = (byte *)segment(in_FS,(short)uVar100 + 0x6468);
  bVar104 = (byte)((uint)iVar93 >> 8);
  bVar63 = CARRY1(*pbVar46,bVar104) || CARRY1(*pbVar46 + bVar104,bVar19);
  *pbVar46 = *pbVar46 + bVar104 + bVar19;
  pbVar46 = (byte *)((int)puVar99 + 0x69);
  bVar19 = CARRY1(*pbVar46,bVar102) || CARRY1(*pbVar46 + bVar102,bVar63);
  *pbVar46 = *pbVar46 + bVar102 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)puVar99);
  bVar63 = CARRY1(*pbVar46,bVar91) || CARRY1(*pbVar46 + bVar91,bVar19);
  *pbVar46 = *pbVar46 + bVar91 + bVar19;
  *(undefined4 *)(iVar94 + 3) = 100;
  pbVar46 = (byte *)(iVar48 + -0x7bef9b96);
  bVar11 = *pbVar46;
  bVar86 = *pbVar46;
  *pbVar46 = bVar86 + bVar104 + bVar63;
  *piVar95 = iVar93;
  pcVar55 = (char *)((int)unaff_FS_OFFSET + iVar48 + 0x16106489);
  bVar96 = (byte)iVar93;
  *pcVar55 = *pcVar55 + bVar96 + (CARRY1(bVar11,bVar104) || CARRY1(bVar86 + bVar104,bVar63));
  lVar105 = (longlong)*(int *)(iVar48 + -0x70 + iVar93) * -0x77;
  iVar106 = (int)lVar105;
  pcVar55 = (char *)((int)unaff_FS_OFFSET + iVar48 + -0x6fef9b77);
  *pcVar55 = *pcVar55 + bVar96 + (iVar106 != lVar105);
  *(int *)(iVar48 + -0x33 + iVar93) = iVar106;
  lVar105 = (longlong)*(int *)(iVar48 + -0x72 + iVar93) * 0x6c;
  piVar107 = (int *)lVar105;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar101 + 0x4810646c));
  bVar108 = (byte)((uint)pbVar101 >> 8);
  bVar19 = CARRY1(*pbVar46,bVar108) || CARRY1(*pbVar46 + bVar108,(int)piVar107 != lVar105);
  *pbVar46 = *pbVar46 + bVar108 + ((int)piVar107 != lVar105);
  uVar109 = (undefined2)iVar93;
  uVar98 = in(uVar109);
  *puVar34 = uVar98;
  bVar89 = (byte)((uint)iVar87 >> 8);
  bVar63 = CARRY1(bVar91,bVar89) || CARRY1(bVar91 + bVar89,bVar19);
  bVar91 = bVar91 + bVar89 + bVar19;
  pcVar55 = (char *)CONCAT31(uVar103,bVar91);
  pbVar110 = (byte *)((int)puVar34 + 5);
  uVar67 = in(uVar109);
  *(undefined1 *)(puVar34 + 1) = uVar67;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(pcVar55 + 0x6d));
  bVar19 = CARRY1(*pbVar46,bVar90) || CARRY1(*pbVar46 + bVar90,bVar63);
  *pbVar46 = *pbVar46 + bVar90 + bVar63;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + iVar93 + 0x2e10646e);
  bVar63 = CARRY1(*pbVar46,bVar104) || CARRY1(*pbVar46 + bVar104,bVar19);
  *pbVar46 = *pbVar46 + bVar104 + bVar19;
  puVar34 = puVar99 + 1;
  out(*puVar99,uVar109);
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar101 + 0x4110646f));
  bVar11 = *pbVar46;
  bVar86 = *pbVar46 + bVar89;
  bVar19 = CARRY1(*pbVar46,bVar89) || CARRY1(bVar86,bVar63);
  *pbVar46 = bVar86 + bVar63;
  if (SCARRY1(bVar11,bVar89) == SCARRY1(bVar86,bVar63)) {
    bVar63 = CARRY1(*pbVar110,bVar89) || CARRY1(*pbVar110 + bVar89,bVar19);
    *pbVar110 = *pbVar110 + bVar89 + bVar19;
code_?:
    pcVar55[-0x6fef9b82] = pcVar55[-0x6fef9b82] + (char)iVar93 + bVar63;
    *(int **)(pcVar55 + iVar93 + 0x25) = piVar107;
    pcVar55[iVar93 + 0x30] = pcVar55[iVar93 + 0x30] & 0x81;
    *(byte *)((int)unaff_FS_OFFSET + (int)pbVar110) =
         *(byte *)((int)unaff_FS_OFFSET + (int)pbVar110) + (char)iVar93;
    pcVar55[iVar93 + -0x66] = pcVar55[iVar93 + -0x66] & 0x82;
    pcVar111 = (char *)((int)unaff_FS_OFFSET + iVar87 + 0x2f106484);
    *pcVar111 = *pcVar111 + (char)((uint)pcVar55 >> 8);
    LOCK();
    *(int **)(pcVar55 + iVar93 + -0x34) = piVar107;
    UNLOCK();
    pcVar112 = (code *)swi(3);
    (*pcVar112)();
    return;
  }
  bVar11 = *pbVar101;
  bVar86 = *pbVar101;
  *pbVar101 = bVar86 + bVar96 + bVar19;
  if (CARRY1(bVar11,bVar96) || CARRY1(bVar86 + bVar96,bVar19)) {
    bVar63 = CARRY1(bVar92,bVar90) || 0xfe < (byte)(bVar92 + bVar90);
    pcVar55 = (char *)CONCAT22(uVar49,CONCAT11(bVar92 + bVar90 + 1,bVar91));
    goto code_?;
  }
  pbVar46 = (byte *)((int)piVar107 + (int)puVar34 * 2);
  bVar11 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar104;
  pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar99 + 0x1204191e));
  bVar19 = CARRY1(*pbVar46,bVar96) || CARRY1(*pbVar46 + bVar96,CARRY1(bVar11,bVar104));
  *pbVar46 = *pbVar46 + bVar96 + CARRY1(bVar11,bVar104);
  if (*pbVar46 == 0) {
    bVar63 = CARRY1(bVar96,bVar108) || CARRY1(bVar96 + bVar108,bVar19);
    if ((byte)(bVar96 + bVar108 + bVar19) != '\0') {
      piVar95 = piVar107 + -1;
      piVar107[-1] = (int)puRam_?;
      *unaff_FS_OFFSET = piVar107 + -1;
      goto code_?;
    }
    bVar19 = CARRY1(bVar91,bVar90) || CARRY1(bVar91 + bVar90,bVar63);
    cVar113 = bVar91 + bVar90 + bVar63;
    pcVar55 = (char *)CONCAT31(uVar103,cVar113);
    cVar114 = '\0';
    piVar95 = piVar107;
    if (bVar19 || cVar113 == '\0') goto code_?;
    pbVar46 = (byte *)((int)puVar99 + 0x2e10647b);
    bVar63 = CARRY1(*pbVar46,bVar104) || CARRY1(*pbVar46 + bVar104,bVar19);
    *pbVar46 = *pbVar46 + bVar104 + bVar19;
    if ((char)*pbVar46 < '\0') {
      pbVar101[0x3d801cec] = pbVar101[0x3d801cec] + cVar113;
      bVar19 = pcVar55 == *(char **)pcVar55;
      goto code_?;
    }
    bVar19 = CARRY1(bVar90,bVar63);
    cVar114 = bVar90 + bVar63;
    iVar93 = CONCAT31((int3)((uint)iVar93 >> 8),cVar114);
    if (cVar114 < '\0') goto code_?;
    pbVar46 = (byte *)(iVar87 + 0x79);
    bVar63 = CARRY1(*pbVar46,bVar89) || CARRY1(*pbVar46 + bVar89,bVar19);
    *pbVar46 = *pbVar46 + bVar89 + bVar19;
    bVar19 = CARRY1(bVar90,bVar104) || CARRY1(bVar90 + bVar104,bVar63);
    bVar11 = bVar90 + bVar104 + bVar63;
    iVar87 = CONCAT31((int3)((uint)iVar87 >> 8),bVar11);
    if (-1 < (char)bVar11) goto code_?;
    pbVar101 = pbVar101 + 0x7a;
    bVar63 = CARRY1(*pbVar101,bVar92) || CARRY1(*pbVar101 + bVar92,bVar19);
    *pbVar101 = *pbVar101 + bVar92 + bVar19;
    bVar115 = CARRY1(bVar102,bVar102) || CARRY1(bVar102 * '\x02',bVar63);
    cVar114 = bVar102 * '\x02' + bVar63;
    bVar19 = cVar114 == '\0';
    if ((POPCOUNT(cVar114) & 1U) == 0) goto code_?;
    pbVar46 = (byte *)(uVar100 + 0x1d10647b);
    bVar86 = *pbVar46;
    bVar91 = *pbVar46 + bVar89;
    bVar19 = CARRY1(*pbVar46,bVar89) || CARRY1(bVar91,bVar115);
    *pbVar46 = bVar91 + bVar115;
    if ((SCARRY1(bVar86,bVar89) != SCARRY1(bVar91,bVar115)) != (char)*pbVar46 < '\0') {
      puVar116 = (uint *)(uVar100 + 0x95f068ff + (int)puVar34 * 4);
      *puVar116 = *puVar116 | uVar100;
      goto code_?;
    }
    pbVar46 = (byte *)(iVar93 + 0x7c);
    bVar115 = CARRY1(*pbVar46,bVar11) || CARRY1(*pbVar46 + bVar11,bVar19);
    *pbVar46 = *pbVar46 + bVar11 + bVar19;
    pbVar46 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar99 + -0x183be6e0));
    bVar11 = *pbVar46;
    bVar86 = *pbVar46 + bVar92;
    bVar63 = CARRY1(*pbVar46,bVar92) || CARRY1(bVar86,bVar115);
    *pbVar46 = bVar86 + bVar115;
    if ((SCARRY1(bVar11,bVar92) != SCARRY1(bVar86,bVar115)) != (char)*pbVar46 < '\0')
    goto code_?;
  }
  else {
    piVar107[-1] = (int)pbVar101;
    pbVar110 = (byte *)piVar107[-1];
    puVar34 = (undefined4 *)*piVar107;
    uVar100 = piVar107[1];
    pbVar101 = (byte *)piVar107[3];
    cVar114 = (char)piVar107[4];
    pcVar55 = (char *)piVar107[6];
    piVar95 = piVar107 + 7;
    *(int *)piVar107[5] = (int)piVar107 + (uint)bVar19 + *(int *)piVar107[5] + 0x1c;
    *pcVar55 = *pcVar55 + (char)pcVar55;
code_?:
    pcVar55[100] = pcVar55[100] + cVar114;
    puRam_? = (undefined1 *)piVar95;
code_?:
    piVar107 = (int *)((int)piVar95 + -0x1c);
code_?:
    bVar11 = bRam_?;
    puVar117 = (undefined4 *)((int)piVar107 + -4);
    piVar107 = (int *)((int)piVar107 + -4);
    *puVar117 = pbVar101;
code_?:
    bVar19 = bVar11 == 0;
    *(undefined4 **)((int)piVar107 + -4) = puVar34;
    piVar95 = (int *)((int)piVar107 + -4);
code_?:
    puVar34 = *(undefined4 **)(uVar100 + 0xc);
    piVar107 = (int *)((int)piVar95 + -4);
    *(byte **)((int)piVar95 + -4) = pbVar110;
    *(undefined1 **)(uVar100 - 0x10) = (undefined1 *)((int)piVar95 + -4);
code_?:
    if (!bVar19) goto code_?;
    *(JoinUIUpdater__Class ***)((int)piVar107 + -4) = &TypeInfo__JoinUIUpdater;
    puVar118 = (undefined1 *)((int)piVar107 + -8);
    *(undefined **)((int)piVar107 + -8) = &UNK_?;
    func_?();
    piVar107 = (int *)(puVar118 + -4);
    *(MethodInfo ***)(puVar118 + -4) =
         &
         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
    ;
code_?:
    puVar119 = (undefined4 *)((int)piVar107 + -4);
    piVar107 = (int *)((int)piVar107 + -4);
    *puVar119 = &UNK_?;
    func_?();
  }
  piVar107 = (int *)((int)piVar107 + 8);
  bRam_? = 1;
code_?:
  iVar48 = *(int *)(uVar100 + 8);
  if (*(char *)(iVar48 + 0xc) == '\0') {
    piVar107[-1] = 0;
    piVar107[-2] = (int)&UNK_?;
    MVar120 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)piVar107[-1]);
    puVar121 = piVar107 + 1;
    puVar122 = piVar107 + 1;
    puVar99 = piVar107 + 1;
    if (puVar34 != (undefined4 *)0x0) {
      if (MVar120 != MVJoinState__Enum_Playing) {
        *(undefined1 *)(uVar100 + 8) = *(undefined1 *)(puVar34 + 2);
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          *piVar107 = (int)TypeInfo__JoinUIUpdater;
          puVar123 = piVar107 + -1;
          piVar107[-1] = (int)&UNK_?;
          func_?();
          puVar122 = (undefined4 *)((int)puVar123 + 4);
        }
        *(undefined4 *)((int)puVar122 + -4) = 0;
        *(undefined4 *)((int)puVar122 + -8) = *(undefined4 *)(uVar100 + 8);
        *(undefined **)((int)puVar122 + -0xc) = &UNK_?;
        JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                  (*(MVEventCodes__Enum *)((int)puVar122 + -8),*(MethodInfo **)((int)puVar122 + -4));
        puVar121 = (undefined4 *)((int)puVar122 + 8);
      }
      uVar67 = *(undefined1 *)(puVar34 + 2);
      *(undefined4 *)((int)puVar121 + -4) = 0;
      *(undefined1 *)(uVar100 + 8) = uVar67;
      *(undefined4 **)((int)puVar121 + -8) = puVar34;
      *(undefined4 *)((int)puVar121 + -0xc) = *(undefined4 *)(uVar100 + 8);
      *(undefined4 *)(uVar100 - 4) = 0;
      *(int *)((int)puVar121 + -0x10) = iVar48;
      *(undefined **)((int)puVar121 + -0x14) = &UNK_?;
      MVNetworkGame_EventHandling_HandleEvent
                (*(MVNetworkGame_EventHandling **)((int)puVar121 + -0x10),
                 *(MVEventCodes__Enum *)((int)puVar121 + -0xc),*(EventData **)((int)puVar121 + -8),
                 *(MethodInfo **)((int)puVar121 + -4));
      *unaff_FS_OFFSET = *(undefined4 *)(uVar100 - 0xc);
      return;
    }
  }
  else {
    iVar48 = *(int *)(iVar48 + 0x10);
    puVar99 = piVar107;
    if (iVar48 != 0) {
      piVar107[-1] = (int)
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
      ;
      piVar107[-2] = (int)puVar34;
      piVar107[-3] = iVar48;
      piVar107[-4] = (int)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)piVar107[-3],(Object *)piVar107[-2],
                 (MethodInfo *)piVar107[-1]);
      *unaff_FS_OFFSET = *(undefined4 *)(uVar100 - 0xc);
      return;
    }
  }
  puVar124 = (undefined1 *)((int)puVar99 + -4);
  *(undefined **)((int)puVar99 + -4) = &UNK_?;
  uVar98 = func_?();
  *(undefined4 *)(uVar100 - 0x18) = uVar98;
  *(undefined **)(puVar124 + -4) = &UNK_?;
  *(uint *)(puVar124 + -8) = uVar100 - 0x18;
  *(undefined **)(puVar124 + -0xc) = &UNK_?;
  func_?();
  pcVar112 = (code *)swi(3);
  (*pcVar112)();
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

