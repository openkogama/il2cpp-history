
/* Void HandleActorReadyMetric() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_HandleActorReadyMetric
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJoinState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CompleteJoinTime_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SessionType_Embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SessionType_TouristEmbedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CompleteJoinTime_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SessionType_Tourist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinTime_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SessionType_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinAndInitializationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinAndInitializationTime_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinAndInitializationTime_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CompleteJoinTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JoinTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__MVJoinState;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  MStack_2 = MVGameMode__Enum_CharacterEditor|MVGameMode__Enum_Play;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar4 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  DStackX_18._dateData = 0;
  mscorlib.dll::System::DateTime::DateTime__ctor_6
            (&DStackX_18,0x7b2,1,1,0,0,0,DateTimeKind__Enum_Utc,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar5 = DStackX_18._dateData & 0x3fffffffffffffff;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar6 = (double)(longlong)((DVar4._dateData & 0x3fffffffffffffff) - uVar5) * _UNK_?;
  dVar7 = _UNK_?;
  if ((_UNK_? < dVar6) || (dVar7 = _UNK_?, dVar6 < _UNK_?)) {
    dVar6 = dVar7;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar8 = _UNK_?;
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar9 == (MVGameControllerBase *)0x0) ||
     (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
  if (0.0 < (pLVar10->fields).DOMReady) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar9 == (MVGameControllerBase *)0x0) ||
       (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
    fVar11 = (float)(dVar6 - (pLVar10->fields).DOMReady);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
              NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                        (fVar11,(String *)0x0,pNVar12,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0)
    ;
    if ((0.0 < fVar11) && (fVar11 < fVar8)) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_CompleteJoinTime,fVar11,(MethodInfo *)0x0);
      MStack_2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,fVar11,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar9 == (MVGameControllerBase *)0x0) ||
     (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
  if (0.0 < (pLVar10->fields).PluginInit) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar9 == (MVGameControllerBase *)0x0) ||
       (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
    fVar11 = (float)(dVar6 - (pLVar10->fields).PluginInit);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
              NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                        (fVar11,(String *)0x0,pNVar12,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0)
    ;
    if ((0.0 < fVar11) && (fVar11 < fVar8)) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinAndInitializationTime,fVar11,(MethodInfo *)0x0);
      MStack_2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,fVar11,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar9 == (MVGameControllerBase *)0x0) ||
     (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
  if (0.0 < (pLVar10->fields).GameStartTime) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar9 == (MVGameControllerBase *)0x0) ||
       (pLVar10 = (pMVar9->fields).loadStats, pLVar10 == (LoadStats *)0x0)) goto code_?;
    fVar11 = (float)(dVar6 - (pLVar10->fields).GameStartTime);
    if ((0.0 < fVar11) && (fVar11 < fVar8)) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1(StringLiteral_JoinTime,fVar11,(MethodInfo *)0x0);
      MStack_2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_JoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,fVar11,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar13 == (GameSessionData *)0x0) goto code_?;
  pMVar14 = (this->fields).networkGame;
  if ((pGVar13->fields).profileID < 1) {
    if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
    EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameType;
    MStack_2 = (pMVar14->fields)._GameType_k__BackingField;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_SessionType_Tourist,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar13->fields).embedded != 0) {
      pMVar14 = (this->fields).networkGame;
      if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
      EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameType;
      MStack_2 = (pMVar14->fields)._GameType_k__BackingField;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_TouristEmbedded;
      goto code_?;
    }
  }
  else {
    if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
    EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameType;
    MStack_2 = (pMVar14->fields)._GameType_k__BackingField;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_SessionType_,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar13->fields).embedded != 0) {
      pMVar14 = (this->fields).networkGame;
      if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
      EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameType;
      MStack_2 = (pMVar14->fields)._GameType_k__BackingField;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_Embedded;
code_?:
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar9 != (MVGameControllerBase *)0x0) &&
      (pMVar14 = (pMVar9->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
     (pMVar15 = (pMVar14->fields).operationRequests, pMVar15 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    uVar16 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,4,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)FUN_?(uRam_?,&stack0x00000010);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar17 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xbf,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar16 >> 8),2),method_00);
      pPVar18 = (pMVar15->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar18 != (PhotonPeer *)0x0) {
        (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                  (pPVar18,CONCAT71((int7)((ulonglong)uVar17 >> 8),0x76),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
        return;
      }
    }
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  MVar1 = eventCode & MVEventCodes__Enum_Join;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pEStackX_18 = photonEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AchievementType,
                  CONCAT71((int7)(CONCAT44(in_register_00000014,eventCode) >> 8),1));
    LOCK();
    UNLOCK();
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__BuildTarget,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Byte,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__FriendStatus,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVEventCodes,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPlayer,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MVTeam,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerGameState,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__QueryType,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RewardReason,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RewardType,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleChangeHandlerRemote,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SubscriberRewardDataManager,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript,1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                  ,1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling____c,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVEventCodes_JoinNotification,1);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__bool_photonEvent__byte_MVParame,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Received_join_event_for_localPla,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Server_error__,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Local_player_leave_event,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Should_probably_be_behind_an_int,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_V,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_attachedObject_GroupId____vehicl,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Profile_with_ID__0__unlocked_Ach,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fast_forward,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_refreshCredentials,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_change_player_game_sta,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unknown_event__,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVEventCodes_XPReceivedEvent,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Amount__0___rewardReason__1___re,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstTime_Success,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVEventCodes_ForceDetachWorldObj,1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicle____null,1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apMStack_3[0] = (MVPlayer *)0x0;
  aBStackX_10[0].m_value = 0;
  auStack_4 = (undefined1  [8])0x0;
  pMStack_5 = (MonitorData *)0x0;
  pDStack_6 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pEStack_7 = (Enum__Class *)0x0;
  fStack_8 = 0.0;
  QStack_9.x = 0.0;
  QStack_9.y = 0.0;
  QStack_9.z = 0.0;
  uStack_10 = 0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), pMVar11 != (MVNetworkGame *)0x0))
    {
      piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
      pWVar14 = (pMVar11->fields).worldNetwork;
      if (pWVar14 != (WorldNetwork *)0x0) {
        WorldNetwork::WorldNetwork_OnUnregisterWorldObject(pWVar14,*piVar13,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    pMVar15 = (MVWorldObjectClientManagerNetwork *)
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectAttributeDescription`1[System::Object]::
              UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                        ((UxmlObjectAttributeDescription_1_System_Object_ *)pWVar14,(MethodInfo *)0x0
                        );
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x12,(MethodInfo *)0x0);
    FUN_?(pMVar15);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar16,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVWorldObjectClientManagerNetwork::
    MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
              (pMVar15,*piVar13,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x12,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(pOVar12);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    pMVar15 = (MVWorldObjectClientManagerNetwork *)
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectAttributeDescription`1[System::Object]::
              UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                        ((UxmlObjectAttributeDescription_1_System_Object_ *)pWVar14,(MethodInfo *)0x0
                        );
    FUN_?(pMVar15);
    MVWorldObjectClientManagerNetwork::
    MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
              (pMVar15,iVar17,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x13,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(pOVar12);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    pMVar15 = (MVWorldObjectClientManagerNetwork *)
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectAttributeDescription`1[System::Object]::
              UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                        ((UxmlObjectAttributeDescription_1_System_Object_ *)pWVar14,(MethodInfo *)0x0
                        );
    FUN_?(pMVar15);
    MVWorldObjectClientManagerNetwork::
    MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
              (pMVar15,iVar17,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
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
    pMVar18 = (this->fields).dynamicEventCallbackManager;
    if (pMVar18 == (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    bVar20 = MVNetworkGame+EventHandling+DynamicEventCallbackManager::
             MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
                       (pMVar18,eventCode & MVEventCodes__Enum_Join,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      pMVar18 = (this->fields).dynamicEventCallbackManager;
      if (pMVar18 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
        MVNetworkGame+EventHandling+DynamicEventCallbackManager::
        MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
                  (pMVar18,eventCode & MVEventCodes__Enum_Join,photonEvent,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    auStack_21 = (undefined1  [8])TypeInfo__MV__Common__MVEventCodes;
    pMStack_22 = (MonitorData *)0xffffffffffffffff;
    uStack_23 = (char)eventCode;
    pSVar24 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_21,(MethodInfo *)0x0);
    pSVar24 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Unknown_event__,pSVar24,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    goto code_?;
  case MVEventCodes__Enum_UnregisterPrototype:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x2f,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    pMVar25 = (MVWorldInventory *)
              System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)pWVar14,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x2f,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x31,(MethodInfo *)0x0);
    FUN_?(pMVar25);
    pBVar26 = (Byte__Array *)FUN_?(pOVar16,TypeInfo__System__Byte);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
              (pMVar25,*piVar13,pBVar26,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    pMVar25 = (MVWorldInventory *)
              System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)pWVar14,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x2f,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x22,(MethodInfo *)0x0);
    FUN_?(pMVar25);
    pfVar27 = (float *)FUN_?(pOVar16,uRam_?);
    fVar28 = *pfVar27;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
              (pMVar25,*piVar13,fVar28,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_AddLink:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x39,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x38,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar29,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar30 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnAddLinkEvent(pMVar11,*piVar13,iVar30,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RemoveLink:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x28,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_FriendRequest:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x34,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x35,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar31 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnFriendRequestEvent(pMVar11,iVar17,iVar30,iVar31,(MethodInfo *)0x0)
    ;
    break;
  case MVEventCodes__Enum_FriendUpdate:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x34,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x36,(MethodInfo *)0x0);
    pFVar32 = (FriendStatus__Enum *)FUN_?(pOVar12,TypeInfo__MV__Common__FriendStatus);
    status = *pFVar32;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent(pMVar11,iVar17,iVar30,status,(MethodInfo *)0x0)
    ;
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent(pMVar11,iVar30,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent(pMVar11,iVar30,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin(pMVar11,iVar17,iVar30,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar11,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x2f,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent(pMVar11,*piVar13,iVar17,(MethodInfo *)0x0)
    ;
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    this_04 = UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::TextHandle::
              TextHandle_get_TextInfoNode((TextHandle *)pMVar11,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x41,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x43,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x42,(MethodInfo *)0x0);
    FUN_?(this_04);
    piVar13 = (int32_t *)FUN_?(pOVar29,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar30 = *piVar13;
    pMVar33 = (MVGameStateType__Enum *)FUN_?(pOVar12,uRam_?);
    MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
              ((MVNetworkGameStateListener *)this_04,*pMVar33,iVar30,iVar17,0,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pSVar34 = (ScrollRect *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0);
    FUN_?(pSVar34);
    SVar35 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
             ScrollRect_get_verticalScrollbarVisibility(pSVar34,(MethodInfo *)0x0);
    pSVar36 = (ScrollRect_ScrollbarVisibility__Enum *)FUN_?(pOVar12);
    if (*pSVar36 != SVar35) {
      pMVar11 = (this->fields).networkGame;
      FUN_?(pMVar11);
      pWVar14 = (pMVar11->fields).worldNetwork;
      FUN_?(pWVar14);
      pMVar15 = (MVWorldObjectClientManagerNetwork *)
                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                UxmlObjectAttributeDescription`1[System::Object]::
                UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                          ((UxmlObjectAttributeDescription_1_System_Object_ *)pWVar14,
                           (MethodInfo *)0x0);
      FUN_?(photonEvent);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      FUN_?(photonEvent);
      pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x46,(MethodInfo *)0x0);
      FUN_?(pMVar15);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                FUN_?(pOVar16,
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                (pMVar15,*piVar13,pDVar2,(MethodInfo *)0x0);
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x47,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar29,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar30 = *piVar13;
    pPVar37 = (PickupItemState__Enum *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
              (pMVar11,*pPVar37,iVar30,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4a,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4b,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4c,(MethodInfo *)0x0);
    pfVar27 = (float *)FUN_?(pOVar29,uRam_?);
    fVar28 = *pfVar27;
    pfVar27 = (float *)FUN_?(pOVar16,uRam_?);
    fVar38 = *pfVar27;
    pfVar27 = (float *)FUN_?(pOVar12,uRam_?);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3__ctor
              ((Vector3 *)&pEStack_7,*pfVar27,fVar38,fVar28,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4d,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4e,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x4f,(MethodInfo *)0x0);
    pfVar27 = (float *)FUN_?(pOVar29,uRam_?);
    fVar28 = *pfVar27;
    pfVar27 = (float *)FUN_?(pOVar16,uRam_?);
    fVar38 = *pfVar27;
    pfVar27 = (float *)FUN_?(pOVar12,uRam_?);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3__ctor
              ((Vector3 *)&QStack_9,*pfVar27,fVar38,fVar28,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    fVar38 = QStack_9.z;
    uVar39 = QStack_9._0_8_;
    fVar28 = fStack_8;
    pEVar40 = pEStack_7;
    FUN_?(pMVar11);
    uVar41 = QStack_9._0_8_;
    QStack_9.x = (float)uVar39;
    QStack_9.y = SUB84(uVar39,4);
    QStack_42.x = QStack_9.x;
    QStack_42.y = QStack_9.y;
    QStack_42.z = fVar38;
    auStack_21 = (undefined1  [8])pEVar40;
    pMStack_22 = (MonitorData *)CONCAT44(pMStack_22._4_4_,fVar28);
    QStack_9._0_8_ = uVar41;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
              (pMVar11,*piVar13,(Vector3 *)auStack_21,(Vector3 *)&QStack_42,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_PostGameMsgEvent:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x57,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x58,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar16,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    pMVar43 = (MVGameMsgType__Enum *)FUN_?(pOVar12,uRam_?);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar43,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    handle = TypeRef__MV__WorldObject__MVTeam;
    func_?(uRam_?);
    enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x59,(MethodInfo *)0x0);
    func_?(uRam_?);
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    pOVar16 = mscorlib.dll::System::Enum::Enum_ToObject_3(enumType,*piVar13,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pMVar44 = (MVTeam__Enum *)FUN_?(pOVar16,TypeInfo__MV__WorldObject__MVTeam);
    MVar45 = *pMVar44;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar11,*piVar13,MVar45,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x39,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x38,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar29,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar30 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
              (pMVar11,*piVar13,iVar30,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
              (pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar11,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x28,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
              (pMVar11,*piVar13,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iStack_46 = *piVar13;
    pOVar12 = (Object *)func_?(uRam_?,&iStack_46);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x81,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar16,TypeInfo__MV__Common__AchievementType);
    aiStack_47[0] = *piVar13;
    pOVar16 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,aiStack_47);
    newHighScore = (HighScoreDatas *)
                   mscorlib.dll::System::String::String_Format_1
                             (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar12,pOVar16,
                              (MethodInfo *)0x0);
    goto code_?;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    uVar39 = FUN_?(pOVar12,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    abStack_48[0] = 4;
    uVar41 = func_?(uRam_?,abStack_48);
    FUN_?(uVar39);
    uVar41 = func_?(uVar39,uVar41,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
    piVar13 = (int32_t *)FUN_?(uVar41,uRam_?);
    iVar17 = *piVar13;
    uStack_49 = 0;
    uVar41 = func_?(uRam_?,&uStack_49);
    FUN_?(uVar39);
    uVar39 = func_?(uVar39,uVar41);
    piVar13 = (int32_t *)FUN_?(uVar39);
    iVar30 = *piVar13;
    pIVar50 = (InputField *)(this->fields).networkGame;
    FUN_?(pIVar50);
    pMVar51 = (MVLocalObjectController *)
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_onSubmit
                        (pIVar50,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x8d,(MethodInfo *)0x0);
    FUN_?(pMVar51);
    pbVar52 = (byte *)FUN_?(pOVar16,uRam_?);
    bVar53 = *pbVar52;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
              (pMVar51,*piVar13,iVar17,iVar30,(uint)bVar53,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12);
    iVar17 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    if ((pMVar55 != (MVWorldObjectClient *)0x0) &&
       (lVar56 = func_?(pMVar55,TypeInfo__MVAvatar), lVar56 != 0)) {
      uVar39 = FUN_?(pMVar55,TypeInfo__MVAvatar);
      FUN_?(uVar39);
      uVar39 = FUN_?(pMVar55,TypeInfo__MVAvatar);
      func_?(0x5b,uVar39);
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    uVar39 = FUN_?(pOVar12,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    uStack_49 = 1;
    uVar41 = func_?(uRam_?,&uStack_49);
    FUN_?(uVar39);
    uVar41 = func_?(uVar39,uVar41,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
    piVar13 = (int32_t *)FUN_?(uVar41,uRam_?);
    iVar17 = *piVar13;
    abStack_48[0] = 0;
    uVar41 = func_?(uRam_?,abStack_48);
    FUN_?(uVar39);
    uVar41 = func_?(uVar39,uVar41);
    piVar13 = (int32_t *)FUN_?(uVar41);
    iStack_46 = *piVar13;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    this_05 = (PointerEventData *)FUN_?(pMVar55);
    QStack_42._0_8_ = this_05;
    FUN_?(this_05);
    originalId = UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::
                 PointerEventData_get_clickCount(this_05,(MethodInfo *)0x0);
    bStack_57 = 3;
    uVar41 = func_?(uRam_?,&bStack_57);
    FUN_?(uVar39);
    uVar39 = func_?(uVar39,uVar41);
    piVar13 = (int32_t *)FUN_?(uVar39,uRam_?);
    aiStack_47[0] = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar30 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar31 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
    puVar58 = (uint *)FUN_?(pOVar12,uRam_?);
    uStack_59 = *puVar58;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pWVar14 = (pMVar11->fields).worldNetwork;
    FUN_?(pWVar14);
    id = aiStack_47[0];
    WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
              (pWVar14,iVar17,0,1,originalId,aiStack_47[0],iVar30,iVar31,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,id,(MethodInfo *)0x0);
    func_?(TypeInfo__MVNetworkGame_EventHandling____c);
    lVar56 = func_?(TypeInfo__MVNetworkGame_EventHandling____c);
    if (*(longlong *)(lVar56 + 8) == 0) {
      func_?(TypeInfo__MVNetworkGame_EventHandling____c);
      puVar60 = (undefined8 *)func_?(TypeInfo__MVNetworkGame_EventHandling____c);
      pOVar12 = (Object *)*puVar60;
      this_06 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_06,pOVar12,
                 MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      lVar56 = func_?(TypeInfo__MVNetworkGame_EventHandling____c);
      *(UnityAction_1_System_Object_ **)(lVar56 + 8) = this_06;
      lVar56 = func_?(TypeInfo__MVNetworkGame_EventHandling____c);
      func_?(lVar56 + 8,this_06);
    }
    FUN_?(pMVar55);
    func_?(0x2d);
    pIVar50 = (InputField *)(this->fields).networkGame;
    FUN_?(pIVar50);
    pMVar51 = (MVLocalObjectController *)
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_onSubmit
                        (pIVar50,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x8d,(MethodInfo *)0x0);
    FUN_?(pMVar51);
    pbVar52 = (byte *)FUN_?(pOVar16,uRam_?);
    bVar53 = *pbVar52;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
              (pMVar51,*piVar13,aiStack_47[0],iStack_46,(uint)bVar53,(MethodInfo *)0x0);
    FUN_?(QStack_42._0_8_);
    MVWorldObjectSpawner::MVWorldObjectSpawner_Take
              ((MVWorldObjectSpawner *)QStack_42._0_8_,uStack_59,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_Reward:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x8f,(MethodInfo *)0x0);
    puVar58 = (uint *)FUN_?(pOVar12,uRam_?);
    uVar61 = *puVar58;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x91,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12,TypeInfo__MV__Common__RewardReason);
    bVar20 = *pbVar62;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x90,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,TypeInfo__MV__Common__RewardType);
    iVar17 = *piVar13;
    uStack_59 = uVar61;
    pOVar12 = (Object *)func_?(uRam_?,&uStack_59);
    bStack_57 = bVar20;
    pOVar16 = (Object *)func_?(TypeInfo__MV__Common__RewardReason,&bStack_57);
    iStack_46 = iVar17;
    pOVar29 = (Object *)func_?(TypeInfo__MV__Common__RewardType,&iStack_46);
    pSVar24 = mscorlib.dll::System::String::String_Format_2
                        (StringLiteral_Amount__0___rewardReason__1___re,pOVar12,pOVar16,pOVar29,
                         (MethodInfo *)0x0);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar24,(MethodInfo *)0x0)
    ;
    args = (Object__Array *)
           func_?(
                              System__Object__MethodInfo__System__Array__Empty<System::Object>______
                              );
    func_?(TypeInfo__BrowserComm__ToJavaScript);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar26 = (Byte__Array *)FUN_?(pOVar12);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pVVar63 = (ValueAnimation_1_StyleValues_ *)(pMVar11->fields).worldNetwork;
    FUN_?(pVVar63);
    pFVar64 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
              ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_easingCurve
                        (pVVar63,(MethodInfo *)0x0);
    pBVar65 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (pBVar65,pBVar26,(MethodInfo *)0x0);
    runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                   RuntimeEvent_Create(pBVar65,(MethodInfo *)0x0);
    FUN_?(pFVar64);
    RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
              ((RuntimeEventManagerNetwork *)pFVar64,runtimeEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pVVar63 = (ValueAnimation_1_StyleValues_ *)(pMVar11->fields).worldNetwork;
    FUN_?(pVVar63);
    pFVar64 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
              ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_easingCurve
                        (pVVar63,(MethodInfo *)0x0);
    FUN_?(pFVar64);
    RuntimeEventManager::RuntimeEventManager_ResetTerrain
              ((RuntimeEventManager *)pFVar64,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x59,(MethodInfo *)0x0);
    pMVar44 = (MVTeam__Enum *)FUN_?(pOVar12,uRam_?);
    MVar45 = *pMVar44;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x9f,(MethodInfo *)0x0);
    pbVar52 = (byte *)FUN_?(pOVar12,uRam_?);
    bVar53 = *pbVar52;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa0,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iStack_46 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa1,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    aiStack_47[0] = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa2,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12,uRam_?);
    abStack_48[0] = *pbVar62;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa3,(MethodInfo *)0x0);
    pcVar66 = (char *)FUN_?(pOVar12,uRam_?);
    pMVar11 = (this->fields).networkGame;
    if (*pcVar66 == '\0') {
      FUN_?(pMVar11);
      pGVar67 = (pMVar11->fields).gameStatCounterManager;
      FUN_?(pGVar67);
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                (pGVar67,(uint)bVar53,iVar17,MVar45,iStack_46,aiStack_47[0],abStack_48[0],
                 (MethodInfo *)0x0);
    }
    else {
      FUN_?(pMVar11);
      pGVar67 = (pMVar11->fields).gameStatCounterManager;
      FUN_?(pGVar67);
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                (pGVar67,(uint)bVar53,MVar45,iVar17,iStack_46,aiStack_47[0],abStack_48[0],
                 (MethodInfo *)0x0);
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x9e,(MethodInfo *)0x0);
    pBVar26 = (Byte__Array *)FUN_?(pOVar12,TypeInfo__System__Byte);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pGVar67 = (pMVar11->fields).gameStatCounterManager;
    FUN_?(pGVar67);
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
              (pGVar67,pBVar26,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa5,(MethodInfo *)0x0);
    pBVar65 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    pBVar26 = (Byte__Array *)FUN_?(pOVar12,TypeInfo__System__Byte);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (pBVar65,pBVar26,(MethodInfo *)0x0);
    this_07 = (MvAvatarMetaData *)func_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
              (this_07,pBVar65,(MethodInfo *)0x0);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)this_07,(MethodInfo *)0x0)
    ;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    this_08 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_itemImage
                        ((Dropdown *)pMVar11,(MethodInfo *)0x0);
    FUN_?(this_08);
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
              ((MvAvatarMetaDataWoMap *)this_08,iVar17,this_07,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa9,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar16,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnLevelChanged(pMVar11,*piVar13,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb7,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12);
    bVar20 = *pbVar62;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar68 = (MVGameCoinManager *)
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::
              Object]::MouseEventBase_1_System_Object__get_sourcePointerEvent
                        ((MouseEventBase_1_System_Object_ *)pMVar11,(MethodInfo *)0x0);
    FUN_?(pMVar68);
    MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar68,bVar20,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_NotificationEvent:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,199,(MethodInfo *)0x0);
    pNVar69 = (NotificationType__Enum *)FUN_?(pOVar12,uRam_?);
    type = *pNVar69;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,200,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnNotificationEventReceived(pMVar11,type,pDVar2,(MethodInfo *)0x0)
    ;
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0),
       pDVar70 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pMVar11 != (MVNetworkGame *)0x0)) {
      if ((pOVar12 != (Object *)0x0) &&
         (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(pOVar12,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       ),
         pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        FUN_?(pOVar12,pDVar70);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      this_00 = (pMVar11->fields)._MaterialRepository_k__BackingField;
      if (this_00 != (MVMaterialRepository *)0x0) {
        MVMaterialRepository::MVMaterialRepository_InitializeMaterials
                  (this_00,pDVar2,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       pDVar70 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pMVar11 != (MVNetworkGame *)0x0)) {
      if ((pOVar12 != (Object *)0x0) &&
         (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(pOVar12,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       ),
         pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        FUN_?(pOVar12,pDVar70);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(pMVar11,pDVar2,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar11 = (this->fields).networkGame;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       pDVar70 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pMVar11 != (MVNetworkGame *)0x0)) {
      if ((pOVar12 != (Object *)0x0) &&
         (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(pOVar12,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       ),
         pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        FUN_?(pOVar12,pDVar70);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      MVNetworkGame::MVNetworkGame_OnGetItemCategories(pMVar11,pDVar2,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_GameSnapshotData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pBVar65 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    pBVar26 = (Byte__Array *)FUN_?(pOVar12,TypeInfo__System__Byte);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (pBVar65,pBVar26,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x85,(MethodInfo *)0x0);
    pbVar52 = (byte *)FUN_?(pOVar12,TypeInfo__MV__Common__QueryType);
    bVar53 = *pbVar52;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,100,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12,uRam_?);
    bVar20 = *pbVar62;
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
              (pMVar11,pBVar65,(uint)bVar53,bVar20,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetActorReady:
    FUN_?(photonEvent);
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    FUN_?(pMVar11);
    pSVar34 = (ScrollRect *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0);
    FUN_?(pSVar34);
    SVar35 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
             ScrollRect_get_verticalScrollbarVisibility(pSVar34,(MethodInfo *)0x0);
    pSVar36 = (ScrollRect_ScrollbarVisibility__Enum *)FUN_?();
    if (*pSVar36 == SVar35) {
      MVGameControllerBase::MVGameControllerBase_set_JoinState
                (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
      MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      FUN_?(pMVar11);
      pMVar68 = (MVGameCoinManager *)
                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::
                Object]::MouseEventBase_1_System_Object__get_sourcePointerEvent
                          ((MouseEventBase_1_System_Object_ *)pMVar11,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      FUN_?(pMVar68);
      MVGameCoinManager::MVGameCoinManager_Reset(pMVar68,pMVar11,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      FUN_?(pMVar11);
      this_09 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::RuntimePanel::
                RuntimePanel_get_panelSettings((RuntimePanel *)pMVar11,(MethodInfo *)0x0);
      FUN_?(this_09);
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_StartSessionTime
                ((MVNetworkGame_OperationRequests *)this_09,(MethodInfo *)0x0);
    }
    pTVar71 = (TMP_InputField *)
              MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    pbVar62 = (bool *)FUN_?(pOVar16,uRam_?);
    bVar20 = *pbVar62;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVPlayerContainer::MVPlayerContainer_SetPlayerReady(pMVar72,*piVar13,bVar20,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_RequestFriends:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x33,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(pMVar11,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse(pMVar11,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pcVar66 = (char *)FUN_?(pOVar16,uRam_?);
    cVar73 = *pcVar66;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
              (pMVar11,pDVar2,cVar73 == '\0',(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x83,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData(pMVar11,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar12,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
              (pMVar11,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xa4,(MethodInfo *)0x0);
    pBVar26 = (Byte__Array *)FUN_?(pOVar12,TypeInfo__System__Byte);
    this_01 = (TMP_FontAsset *)(this->fields).networkGame;
    pBVar65 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (pBVar65,pBVar26,(MethodInfo *)0x0);
    value = (List_1_UnityEngine_TextCore_Glyph_ *)
            func_?(TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap);
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor_1
              ((MvAvatarMetaDataWoMap *)value,pBVar65,(MethodInfo *)0x0);
    FUN_?(this_01);
    Unity.TextMeshPro.dll::TMPro::TMP_FontAsset::TMP_FontAsset_set_glyphTable
              (this_01,value,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetActiveAvatar:
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse(pMVar11,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    FUN_?(pMVar74);
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SyncronizePing
              (pMVar74,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_JoinNotification:
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
    func_?(pDVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
    bStack_57 = 0;
    uVar39 = func_?(uRam_?,&bStack_57);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    puVar58 = (uint *)FUN_?(pOVar12,uRam_?);
    uStack_59 = *puVar58;
    uVar41 = func_?(uRam_?,&uStack_59);
    FUN_?(pDVar2);
    FUN_?(pDVar2,uVar39,uVar41,
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    MVGameControllerBase::MVGameControllerBase_PostGameMsg
              (MVGameMsgType__Enum_UserJoined,pDVar2,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
              (pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
              (pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 == (MVNetworkGame *)0x0) ||
        (pMVar75 = (pMVar11->fields).logicObjectManagerClientWrapper,
        pMVar75 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0)) ||
       (this_02 = (pMVar75->fields).logicEventQueue, this_02 == (MVNetworkGame_LogicEventQueue *)0x0
       )) goto code_?;
    MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Enqueue
              (this_02,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar75 = (pMVar11->fields).logicObjectManagerClientWrapper;
    FUN_?(pMVar75);
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_Step(pMVar75,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LogicFastForward:
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar75 = (pMVar11->fields).logicObjectManagerClientWrapper;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
    FUN_?(pMVar75);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_FastForward(pMVar75,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar75 = (pMVar11->fields).logicObjectManagerClientWrapper;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
    FUN_?(pMVar75);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_FastForwardImmediately
              (pMVar75,*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    uVar39 = FUN_?(pOVar12);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(uVar39);
    iVar17 = FUN_?(uVar39,0);
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(uVar39);
    iVar17 = FUN_?(uVar39,1);
    FUN_?(pMVar54);
    this_10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
    if (pMVar55 != (MVWorldObjectClient *)0x0) {
      func_?(TypeInfo__UnityEngine__Debug);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
      FUN_?(this_10);
      iVar17 = mscorlib.dll::System::Tuple`4[Int32,Int32,Int32,Boolean]::
               Tuple_4_Int32_Int32_Int32_Boolean__get_Item2
                         ((Tuple_4_Int32_Int32_Int32_Boolean_ *)this_10,(MethodInfo *)0x0);
      FUN_?(pMVar55);
      iVar30 = mscorlib.dll::System::Tuple`4[Int32,Int32,Int32,Boolean]::
               Tuple_4_Int32_Int32_Int32_Boolean__get_Item1
                         ((Tuple_4_Int32_Int32_Int32_Boolean_ *)pMVar55,(MethodInfo *)0x0);
      if (iVar17 == iVar30) {
        func_?(TypeInfo__UnityEngine__Debug);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0);
        uVar39 = FUN_?(this_10,TypeInfo__MVAvatarLocal);
        FUN_?(uVar39);
        this_11 = (MVAvatarLocal *)FUN_?(this_10,TypeInfo__MVAvatarLocal);
        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_11,1,(MethodInfo *)0x0);
        pIVar50 = (InputField *)(this->fields).networkGame;
        FUN_?(pIVar50);
        pMVar51 = (MVLocalObjectController *)
                  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_onSubmit
                            (pIVar50,(MethodInfo *)0x0);
        FUN_?(pMVar51);
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar51,1,(MethodInfo *)0x0);
      }
    }
    break;
  case MVEventCodes__Enum_XPReward:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar76 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xdc,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar16 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xdb,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x55,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar77 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd1,(MethodInfo *)0x0);
    FUN_?(pMVar76);
    piVar13 = (int32_t *)FUN_?(pOVar77,uRam_?);
    iVar17 = *piVar13;
    piVar13 = (int32_t *)FUN_?(pOVar29,uRam_?);
    iVar30 = *piVar13;
    pbVar52 = (byte *)FUN_?(pOVar16,uRam_?);
    bVar53 = *pbVar52;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVLocalPlayer::MVLocalPlayer_AddXp(pMVar76,*piVar13,(uint)bVar53,iVar30,iVar17,(MethodInfo *)0x0)
    ;
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    puVar78 = (undefined1 *)FUN_?(pOVar12,uRam_?);
    FUN_?(*puVar78,0);
    cVar73 = FUN_?(0);
    if (cVar73 == '\0') {
      return;
    }
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xcf,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    pMVar79 = 
    MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
    ;
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    lVar56 = func_?(uVar39,pMVar79);
    func_?(TypeInfo__StatHatWrapper);
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
    FUN_?(lVar56);
    FirstTimeEventManager::FirstTimeEventManager_Initialize
              (*(FirstTimeState **)(lVar56 + 0x18),(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__HighlightManager);
    pSVar24 = (String *)FUN_?(pOVar12);
    HighlightManager::HighlightManager_Init(pSVar24,(MethodInfo *)0x0);
    FUN_?(lVar56);
    profileSettingsState = *(ProfileSettingsState **)(lVar56 + 0x28);
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
              (profileSettingsState,(MethodInfo *)0x0);
    this_12 = (SubscribableVariable_1_System_ByteEnum_ *)
              MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xc4,(MethodInfo *)0x0);
    FUN_?(this_12);
    pbVar52 = (byte *)FUN_?(pOVar12,uRam_?);
    SubscribableVariable`1[System::ByteEnum]::SubscribableVariable_1_System_ByteEnum___ctor
              (this_12,(uint)*pbVar52,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xc4,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12);
    aBStackX_10[0].m_value = *pbVar62;
    func_?(uRam_?);
    pSVar24 = mscorlib.dll::System::Boolean::Boolean_ToString(aBStackX_10,(MethodInfo *)0x0);
    newHighScore = (HighScoreDatas *)
                   mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__bool_photonEvent__byte_MVParame,pSVar24,
                              (MethodInfo *)0x0);
    goto code_?;
  case MVEventCodes__Enum_ServerError:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar24 = (String *)FUN_?(pOVar12,pDRam0000000182dbdde0);
    pSVar24 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Server_error__,pSVar24,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_Warning,pSVar24,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    uVar39 = FUN_?(pOVar12,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    FUN_?(uVar39);
    pSVar24 = StringLiteral_V;
    uVar39 = FUN_?(pOVar12,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    uVar39 = func_?(uVar39,pSVar24);
    pbVar62 = (bool *)FUN_?(uVar39,uRam_?);
    bVar20 = *pbVar62;
    pMVar11 = (this->fields).networkGame;
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(pMVar11);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
              (pMVar11,*piVar13,bVar20,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar24 = (String *)FUN_?(pOVar12);
    bVar20 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar24,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      return;
    }
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    lVar56 = func_?(pSVar24);
    FUN_?(lVar56);
    GamePassesManager::GamePassesManager_set_PlayerPlanetData
              (*(PlayerPlanetData **)(lVar56 + 0x10),(MethodInfo *)0x0);
    FUN_?(lVar56);
    pOVar12 = *(Object **)(lVar56 + 0x18);
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    playerPlanetData = (PlayerPlanetData *)func_?(uVar39);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)playerPlanetData,(MethodInfo *)0x0);
    GamePassesManager::GamePassesManager_UpdatePlayerPlanetData(playerPlanetData,(MethodInfo *)0x0);
    pTVar71 = (TMP_InputField *)(this->fields).networkGame;
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    pMVar76 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar72,(MethodInfo *)0x0);
    FUN_?(pMVar76);
    MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData(pMVar76,playerPlanetData,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    value_00 = (List_1_System_Object_ *)func_?(uVar39);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)value_00,(MethodInfo *)0x0);
    pTVar71 = (TMP_InputField *)(this->fields).networkGame;
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    pMVar80 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar72,*piVar13,(MethodInfo *)0x0);
    FUN_?(pMVar80);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
    UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
              ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)pMVar80,value_00,
               (MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    newHighScore = (HighScoreDatas *)func_?(uVar39);
    GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
              (newHighScore,(MethodInfo *)0x0);
code_?:
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)newHighScore,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    lVar56 = func_?(uVar39);
    FUN_?(lVar56);
    levelRewards = *(Dictionary_2_System_Int32_System_Int32_ **)(lVar56 + 0x10);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    SVar81 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_to
                       ((ValueAnimation_1_StyleValues_ *)pMVar11,(MethodInfo *)0x0);
    FUN_?(SVar81.m_StyleValues);
    LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
              ((LevelRewardsManager *)SVar81.m_StyleValues,levelRewards,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    lVar56 = func_?(uVar39);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    SVar81 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_to
                       ((ValueAnimation_1_StyleValues_ *)pMVar11,(MethodInfo *)0x0);
    FUN_?(lVar56);
    iVar17 = *(int32_t *)(lVar56 + 0x10);
    FUN_?(lVar56);
    iVar30 = *(int32_t *)(lVar56 + 0x14);
    FUN_?(SVar81.m_StyleValues);
    LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
              ((LevelRewardsManager *)SVar81.m_StyleValues,iVar17,iVar30,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    pOVar12 = (Object *)func_?(uVar39);
    func_?(TypeInfo__UnityEngine__Debug);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar12,(MethodInfo *)0x0);
code_?:
    lVar56 = func_?(TypeInfo__GamePassesManager);
    *(Object **)(lVar56 + 8) = pOVar12;
    lVar56 = func_?(TypeInfo__GamePassesManager);
    func_?(lVar56 + 8,pOVar12);
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    newProjectEarningReport = (ProjectEarningsReport *)func_?(uVar39);
    GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
              (newProjectEarningReport,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    pMVar79 = 
    MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
    ;
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    uVar39 = func_?(uVar39,pMVar79);
    func_?(TypeInfo__SubscriberRewardDataManager);
    FUN_?(uVar39,0);
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__SubscriberRewardDataManager);
    piVar13 = (int32_t *)FUN_?(pOVar12);
    SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
              (*piVar13,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
      return;
    }
code_?:
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar11,photonEvent,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    FUN_?(photonEvent);
    pVVar82 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                        ((Vector3 *)auStack_21,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
    pEVar40 = *(Enum__Class **)pVVar82;
    fVar28 = pVVar82->z;
    FUN_?(photonEvent);
    pQVar83 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                        (&QStack_42,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
    uVar39._0_4_ = pQVar83->x;
    uVar39._4_4_ = pQVar83->y;
    uVar41._0_4_ = pQVar83->z;
    uVar41._4_4_ = pQVar83->w;
    pTVar71 = (TMP_InputField *)
              MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    this_13 = (StylePropertyAnimationSystem_ValuesDiscrete_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)MVPlayerContainer::MVPlayerContainer_get_Item(pMVar72,*piVar13,(MethodInfo *)0x0);
    FUN_?(this_13);
    this_14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              StylePropertyAnimationSystem+ValuesDiscrete`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              StylePropertyAnimationSystem_ValuesDiscrete_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_SameFunc
                        (this_13,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xbf,(MethodInfo *)0x0);
    FUN_?(this_14);
    pMStack_22 = (MonitorData *)CONCAT44(pMStack_22._4_4_,fVar28);
    auStack_21 = (undefined1  [8])pEVar40;
    QStack_42._0_8_ = uVar39;
    QStack_42._8_8_ = uVar41;
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
              ((SpawnRolesManager *)this_14,*piVar13,(Vector3 *)auStack_21,&QStack_42,
               (MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    FUN_?(photonEvent);
    camera = (Camera *)0x0;
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    spawnRolesRuntimeData = (SpawnRolesRuntimeData *)func_?(uVar39);
    this_15 = (RenderPipeline *)func_?(TypeInfo__SpawnRoleChangeHandlerRemote);
    UnityEngine.CoreModule.dll::UnityEngine::Rendering::RenderPipeline::
    RenderPipeline_ProcessRenderRequests_1
              (this_15,(ScriptableRenderContext)0x0,camera,(_Il2CppFullySharedGenericType *)method,
               in_stack_84);
    pTVar71 = (TMP_InputField *)
              MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    pMVar80 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                        (pMVar72,*piVar13,(MethodInfo *)0x0);
    FUN_?(pMVar80);
    MVPlayer::MVPlayer_SetupSpawnRoleManager
              (pMVar80,(ISpawnRoleChangeHandler *)this_15,spawnRolesRuntimeData,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    pMVar79 = 
    MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
    ;
    uVar39 = FUN_?(pOVar12,pDRam0000000182dbdde0);
    spawnRoleBodySwitchData = (SpawnRoleBodySwitchData *)func_?(uVar39,pMVar79);
    pMVar54 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    FUN_?(spawnRoleBodySwitchData);
    iVar17 = (spawnRoleBodySwitchData->fields).spawnRoleCreatorWoId;
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(spawnRoleBodySwitchData);
    iVar17 = (spawnRoleBodySwitchData->fields).deletedProtoBodyWoId;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent(pMVar11,iVar17,(MethodInfo *)0x0);
    pMVar11 = (this->fields).networkGame;
    FUN_?(spawnRoleBodySwitchData);
    iVar17 = (spawnRoleBodySwitchData->fields).deletedBodyWoId;
    FUN_?(pMVar11);
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent(pMVar11,iVar17,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    pbVar62 = (bool *)FUN_?(pOVar12,uRam_?);
    bVar20 = *pbVar62;
    uVar39 = FUN_?(pMVar55,TypeInfo__MVAvatarSpawnRoleCreator);
    FUN_?(uVar39);
    this_16 = (MVAvatarSpawnRoleCreator *)FUN_?(pMVar55,TypeInfo__MVAvatarSpawnRoleCreator);
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
              (this_16,spawnRoleBodySwitchData,bVar20,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    uVar39 = FUN_?(pOVar12,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    bStack_57 = 1;
    uVar41 = func_?(uRam_?,&bStack_57);
    FUN_?(uVar39);
    uVar41 = func_?(uVar39,uVar41,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
    piVar13 = (int32_t *)FUN_?(uVar41,uRam_?);
    iVar17 = *piVar13;
    uStack_49 = 0;
    func_?(uRam_?,&uStack_49);
    FUN_?(uVar39);
    func_?(uVar39);
    pMVar11 = (this->fields).networkGame;
    FUN_?(pMVar11);
    pMVar54 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar11,(MethodInfo *)0x0);
    FUN_?(pMVar54);
    pMVar55 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar54,iVar17,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
    piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
    iVar17 = *piVar13;
    uVar39 = FUN_?(pMVar55,
                           TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                          );
    FUN_?(uVar39);
    this_17 = (MVWorldObjectSpawner *)
              FUN_?(pMVar55,
                            TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                           );
    MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_17,iVar17,(MethodInfo *)0x0);
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pTVar71 = (TMP_InputField *)(this->fields).networkGame;
    FUN_?(pTVar71);
    pMVar72 = (MVPlayerContainer *)
              Unity.TextMeshPro.dll::TMPro::TMP_InputField::TMP_InputField_get_onSelect
                        (pTVar71,(MethodInfo *)0x0);
    FUN_?(photonEvent);
    iVar17 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                       (photonEvent,(MethodInfo *)0x0);
    FUN_?(pMVar72);
    bVar20 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                       (pMVar72,iVar17,apMStack_3,(MethodInfo *)0x0);
    if (bVar20 == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
    }
    else {
      FUN_?(photonEvent);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xde,(MethodInfo *)0x0);
      pbVar52 = (byte *)FUN_?(pOVar12);
      pMVar80 = apMStack_3[0];
      bVar53 = *pbVar52;
      FUN_?(apMStack_3[0]);
      bVar20 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::FocusEventBase`1[System::
               Object]::FocusEventBase_1_System_Object__get_IsFocusDelegated
                         ((FocusEventBase_1_System_Object_ *)pMVar80,(MethodInfo *)0x0);
      pMVar80 = apMStack_3[0];
      if (bVar20 != bVar53) {
        FUN_?(apMStack_3[0]);
        MVPlayer::MVPlayer_set_PlayerState(pMVar80,(uint)bVar53,(MethodInfo *)0x0);
      }
    }
    break;
  default:
    if (MVar1 == MVEventCodes__Enum_Handshake) {
      if (photonEvent != (EventData *)0x0) {
        pDVar85 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pDVar85 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          if (pDVar85->klass == pDRam0000000182dbdde0) {
            pDVar2 = pDVar85;
          }
          if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
            FUN_?(pDVar85);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        pSVar24 = MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                  SecurityHelper_Encrypt((String *)pDVar2,(MethodInfo *)0x0);
        pMVar74 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar74 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar74,pSVar24,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if (MVar1 == MVEventCodes__Enum_PropertiesChanged) {
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfb,(MethodInfo *)0x0),
         unaff_RDI = 
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
         pOVar12 != (Object *)0x0)) {
        this_18 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)func_?(pOVar12,
                                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
        if (this_18 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          this_19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::TypeConverterRegistry+ConverterKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                              (this_18,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_19 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)auStack_21,
                       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)this_19,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                      );
            auStack_4 = auStack_21;
            pMStack_5 = pMStack_22;
            pDStack_6 = (Dictionary_2_System_Object_System_Object_ *)CONCAT71(uStack_86,uStack_23);
            auStack_21 = (undefined1  [8])0x0;
            pMStack_22 = (MonitorData *)auStack_4;
            do {
              bVar20 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                   *)auStack_4,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar20 == 0) {
                FUN_?(auStack_21);
                return;
              }
              pDVar85 = pDVar2;
              if (pDStack_6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                if (pDStack_6->klass == pDRam0000000182dbdde0) {
                  pDVar85 = pDStack_6;
                }
                pOVar12 = (Object *)0x0;
                if (pDVar85 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
              }
              unaff_RDI = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)this_18,
                                     (Object *)pDVar85,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
              pSVar24 = ::StringLiteral___;
              pDVar87 = pDVar2;
              if (unaff_RDI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                FUN_?(unaff_RDI);
                pDVar87 = (Dictionary_2_System_Object_System_Object_ *)
                          func_?(3,unaff_RDI);
              }
              pSVar24 = mscorlib.dll::System::String::String_Concat_5
                                  ((String *)pDVar85,pSVar24,(String *)pDVar87,(MethodInfo *)0x0);
              func_?(TypeInfo__UnityEngine__Debug);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar24,(MethodInfo *)0x0);
            } while( true );
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (MVar1 == MVEventCodes__Enum_Leave) {
      if (photonEvent == (EventData *)0x0) goto code_?;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar58 = (uint *)FUN_?(pOVar12);
      uVar61 = *puVar58;
      pOVar12 = (Object *)(ulonglong)uVar61;
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 == (MVNetworkGame *)0x0) ||
          (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 == (MVPlayerContainer *)0x0)) ||
         (pMVar76 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar72,(MethodInfo *)0x0),
         pMVar76 == (MVLocalPlayer *)0x0)) goto code_?;
      if (uVar61 != (pMVar76->fields)._._ActorNr_k__BackingField) {
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 == (MVNetworkGame *)0x0) ||
           (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 == (MVPlayerContainer *)0x0))
        goto code_?;
        bVar20 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar72,uVar61,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          pMVar11 = (this->fields).networkGame;
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0)) {
            pMVar80 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar72,uVar61,(MethodInfo *)0x0)
            ;
            unaff_RDI = (Dictionary_2_System_Object_System_Object___Class *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object___ctor_5
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_RDI,0,
                       (IEqualityComparer_1_System_Object_ *)0x0,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       ->klass->rgctx_data->method);
            bStack_57 = 0;
            pOVar16 = (Object *)FUN_?(uRam_?,&bStack_57);
            uStack_59 = uVar61;
            pOVar29 = (Object *)FUN_?(uRam_?,&uStack_59);
            if (unaff_RDI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_RDI,pOVar16,pOVar29,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              uStack_49 = 3;
              pOVar16 = (Object *)FUN_?(uRam_?,&uStack_49);
              if ((pMVar80 != (MVPlayer *)0x0) &&
                 (pUVar88 = (pMVar80->fields)._UserProfileData_k__BackingField,
                 pUVar88 != (UserProfileData *)0x0)) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          ((Dictionary_2_System_Object_System_Object_ *)unaff_RDI,pOVar16,
                           (Object *)(pUVar88->fields).UserName,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                abStack_48[0] = 6;
                pOVar16 = (Object *)FUN_?(uRam_?,abStack_48);
                pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar11 != (MVNetworkGame *)0x0) &&
                   (this_03 = (pMVar11->fields)._Friends_k__BackingField,
                   this_03 != (FriendList *)0x0)) {
                  abStack_89[0] =
                       FriendList::FriendList_IsFriend
                                 (this_03,(pMVar80->fields)._ProfileID_k__BackingField,
                                  (MethodInfo *)0x0);
                  pOVar29 = (Object *)FUN_?(uRam_?,abStack_89);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_RDI,pOVar16,pOVar29,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                            (MVGameMsgType__Enum_UserLeft,
                             (Dictionary_2_System_Object_System_Object_ *)unaff_RDI,
                             (MethodInfo *)0x0);
                  pMVar11 = (this->fields).networkGame;
                  if ((pMVar11 != (MVNetworkGame *)0x0) &&
                     (pGVar67 = (pMVar11->fields).gameStatCounterManager,
                     pGVar67 != (GameStatCounterManager *)0x0)) {
                    MVWorldObject.dll::GameStatCounterManager::
                    GameStatCounterManager_RemoveTeamScoreOnActorLeave
                              (pGVar67,uVar61,(pMVar80->fields)._Team_k__BackingField,
                               (MethodInfo *)0x0);
                    pMVar11 = (this->fields).networkGame;
                    if ((pMVar11 != (MVNetworkGame *)0x0) &&
                       (pGVar67 = (pMVar11->fields).gameStatCounterManager,
                       pGVar67 != (GameStatCounterManager *)0x0)) {
                      MVWorldObject.dll::GameStatCounterManager::
                      GameStatCounterManager_RemoveStatsFromActor(pGVar67,uVar61,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?(pOVar12,unaff_RDI);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
code_?:
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0)) {
          MVPlayerContainer::MVPlayerContainer_Remove(pMVar72,uVar61,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar24 = StringLiteral_Local_player_leave_event;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar24 = StringLiteral_Local_player_leave_event;
      }
    }
    else {
      if (MVar1 != MVEventCodes__Enum_Join) goto code_?;
      if (photonEvent == (EventData *)0x0) goto code_?;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      puVar58 = (uint *)FUN_?(pOVar12,uRam_?);
      uStack_59 = *puVar58;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar90 = (int *)FUN_?(pOVar12,uRam_?);
      actorNumber = *piVar90;
      pDVar87 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9a,(MethodInfo *)0x0);
      pDVar85 = pDVar2;
      if (pDVar87 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (pDVar87->klass == pDRam0000000182dbdde0) {
          pDVar85 = pDVar87;
        }
        if (pDVar85 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar87);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
      }
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xbc,(MethodInfo *)0x0);
      puVar78 = (undefined1 *)FUN_?(pOVar12,TypeInfo__MV__Common__BuildTarget);
      uStack_49 = *puVar78;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x59,(MethodInfo *)0x0);
      piVar13 = (int32_t *)FUN_?(pOVar12,uRam_?);
      iStack_46 = *piVar13;
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar62 = (bool *)FUN_?(pOVar12,uRam_?);
      bStack_57 = *pbVar62;
      pDVar87 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xe0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pDVar87 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (pDVar87->klass == pDRam0000000182dbdde0) {
          pDVar2 = pDVar87;
        }
        if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar87);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
      }
      pUVar88 = (UserProfileData *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar2,
                           MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                          );
      pMVar11 = (this->fields).networkGame;
      if (((pMVar11 == (MVNetworkGame *)0x0) ||
          (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 == (MVPlayerContainer *)0x0)) ||
         (pMVar76 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar72,(MethodInfo *)0x0),
         pMVar76 == (MVLocalPlayer *)0x0)) goto code_?;
      if (actorNumber != (pMVar76->fields)._._ActorNr_k__BackingField) {
        pMVar80 = (MVPlayer *)FUN_?(TypeInfo__MVPlayer);
        MVPlayer::MVPlayer__ctor
                  (pMVar80,actorNumber,uStack_59,(String *)pDVar85,
                   (BuildTarget__Enum)
                   CONCAT71((int7)((ulonglong)in_stack_84 >> 8),uStack_49),pUVar88,0,
                   bStack_57,(MethodInfo *)0x0);
        if (pMVar80 != (MVPlayer *)0x0) {
          (pMVar80->fields)._Team_k__BackingField = iStack_46;
          pMVar11 = (this->fields).networkGame;
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar72 = (pMVar11->fields).playerContainer, pMVar72 != (MVPlayerContainer *)0x0)) {
            MVPlayerContainer::MVPlayerContainer_Add(pMVar72,pMVar80,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      pSVar24 = StringLiteral_Received_join_event_for_localPla;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar24 = StringLiteral_Received_join_event_for_localPla;
      }
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar24,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_OnEvent
               (MVNetworkGame_EventHandling *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JoinUIUpdater);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cacheEvents == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) && (photonEvent != (EventData *)0x0)) {
      if ((pMVar1->fields)._joinState != 3) {
        uVar2 = (photonEvent->fields).Code;
        if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__JoinUIUpdater);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (uVar2 != 0x49) {
          if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent != 0x3e) || (uVar2 == 0x3f))
          {
            if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
              FUN_?();
            }
            pQVar3 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
            if (pQVar3 != (Queue_1_MV_Common_MVEventCodes_ *)0x0) {
              pMVar4 = (pQVar3->fields)._array;
              if (pMVar4 != (MVEventCodes__Enum__Array *)0x0) {
                if ((pQVar3->fields)._size == (int)pMVar4->max_length) {
                  iVar5 = (int)pMVar4->max_length * 2;
                  if (iVar5 < (int)pMVar4->max_length + 4) {
                    iVar5 = (int)pMVar4->max_length + 4;
                  }
                  FUN_?(pQVar3,iVar5,
                                MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                pMVar4 = (pQVar3->fields)._array;
                uVar6 = (pQVar3->fields)._tail;
                if (pMVar4 != (MVEventCodes__Enum__Array *)0x0) {
                  if ((uint)pMVar4->max_length <= uVar6) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint8_t *)((longlong)pMVar4->vector + (longlong)(int)uVar6) = uVar2;
                  iVar5 = (pQVar3->fields)._tail + 1;
                  pMVar4 = (pQVar3->fields)._array;
                  if (pMVar4 != (MVEventCodes__Enum__Array *)0x0) {
                    iVar8 = 0;
                    if (iVar5 != (int)pMVar4->max_length) {
                      iVar8 = iVar5;
                    }
                    (pQVar3->fields)._tail = iVar8;
                    piVar9 = &(pQVar3->fields)._size;
                    *piVar9 = *piVar9 + 1;
                    piVar9 = &(pQVar3->fields)._version;
                    *piVar9 = *piVar9 + 1;
                    TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = uVar2;
                    goto code_?;
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
code_?:
      MVNetworkGame_EventHandling_HandleEvent
                (this,(uint)(photonEvent->fields).Code,photonEvent,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pQVar10 = (this->fields).cachedEvents;
    if (pQVar10 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      pEVar11 = (pQVar10->fields)._array;
      if (pEVar11 != (EventData__Array *)0x0) {
        if ((pQVar10->fields)._size == (int)pEVar11->max_length) {
          pEVar11 = (pQVar10->fields)._array;
          iVar5 = (int)pEVar11->max_length * 2;
          if (iVar5 < (int)pEVar11->max_length + 4) {
            iVar5 = (int)pEVar11->max_length + 4;
          }
          FUN_?(pQVar10,iVar5,
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        ->klass->rgctx_data[5].rgctxDataDummy);
        }
        pEVar11 = (pQVar10->fields)._array;
        if (pEVar11 != (EventData__Array *)0x0) {
          FUN_?(pEVar11,(longlong)(pQVar10->fields)._tail,photonEvent);
          pEVar11 = (pQVar10->fields)._array;
          if (pEVar11 != (EventData__Array *)0x0) {
            iVar12 = (pQVar10->fields)._tail + 1;
            iVar5 = 0;
            if (iVar12 != (int)pEVar11->max_length) {
              iVar5 = iVar12;
            }
            (pQVar10->fields)._tail = iVar5;
            piVar9 = &(pQVar10->fields)._size;
            *piVar9 = *piVar9 + 1;
            piVar9 = &(pQVar10->fields)._version;
            *piVar9 = *piVar9 + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_SubscribeToEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).dynamicEventCallbackManager;
  if (pMVar1 == (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  ,CONCAT44(in_register_00000014,eventCode),callback,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)
            (pMVar1->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,eventCode & 0xff,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar4 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Event_not_handled_by_dynamic_eve);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager__SubscribeToEvent_MV__Common__MVEventCodes__System__Action<ExitGames::Client::Photon::EventData>_
                                  );
      FUN_?(this_02,uVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)(pMVar1->fields).eventCallbacks;
    if (this_01 !=
        (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *
        )0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
               WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
               Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                         (this_01,eventCode & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        pDVar6 = (pMVar1->fields).eventCallbacks;
        pOVar7 = (Object *)
                  FUN_?(
                               TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                               );
        if (pDVar6 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto DAT_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,eventCode & 0xff,pOVar7,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar6 = (pMVar1->fields).eventCallbacks;
      if ((pDVar6 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                      *)0x0) &&
         (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                               eventCode & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                              ), pOVar7 != (Object *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar8 = pOVar7 + 1;
        a = pOVar7[1].klass;
        do {
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
          pAVar10 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          if (pDVar9 == (Delegate *)0x0) {
            pOVar11 = (Object__Class *)0x0;
          }
          else {
            pOVar11 = (Object__Class *)
                      FUN_?(pDVar9,
                                    TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
            if (pOVar11 == (Object__Class *)0x0) {
              FUN_?(pDVar9,pAVar10);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          LOCK();
          pOVar12 = pOVar8->klass;
          bVar13 = a == pOVar12;
          if (bVar13) {
            pOVar8->klass = pOVar11;
            pOVar12 = a;
          }
          UNLOCK();
          pOVar11 = a;
          if (!bVar13) {
            pOVar11 = pOVar12;
          }
          if (iRam_? != 0) {
            uVar14 = (uint)((ulonglong)pOVar8 >> 0xc);
            puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar16 = *puVar15;
              LOCK();
              uVar17 = *puVar15;
              if (uVar16 == uVar17) {
                *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar16 != uVar17);
          }
          bVar13 = pOVar11 != a;
          a = pOVar11;
        } while (bVar13);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).eventCallbacks;
    if ((pDVar2 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                    *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,eventCode & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           ), pOVar3 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      source = pOVar3[1].klass;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
        if (pDVar4 == (Delegate *)0x0) {
          pOVar6 = (Object__Class *)0x0;
        }
        else {
          pOVar6 = (Object__Class *)
                   FUN_?(pDVar4,
                                 TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          if (pOVar6 == (Object__Class *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pOVar8 = pOVar3[1].klass;
        bVar9 = source == pOVar8;
        if (bVar9) {
          pOVar3[1].klass = pOVar6;
          pOVar8 = source;
        }
        UNLOCK();
        pOVar6 = source;
        if (!bVar9) {
          pOVar6 = pOVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = pOVar6 != source;
        source = pOVar6;
      } while (bVar9);
      if (pOVar3[1].klass == (Object__Class *)0x0) {
        pDVar2 = (pMVar1->fields).eventCallbacks;
        if (pDVar2 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,eventCode & 0xff,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UncacheEventsFromJoin() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_UncacheEventsFromJoin
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                 );
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVNetworkGame+EventHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor
               (MVNetworkGame_EventHandling *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)
           FUN_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (pMVar1->fields).eventCallbacks =
       (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
        *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (HashSet_1_System_ByteEnum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_01 == (HashSet_1_System_ByteEnum_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum__AddIfNotPresent
            (this_01,(ByteEnum__Enum)
                     CONCAT71((int7)((ulonglong)
                                     MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                                     ->klass >> 8),0x6a),
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
             ->klass->rgctx_data[0x15].method);
  iVar8 = iRam_?;
  (pMVar1->fields).eventsHandledByDynamicEventCallbackManager =
       (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar1->fields).eventsHandledByDynamicEventCallbackManager >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).dynamicEventCallbackManager = pMVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_02 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                         );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_02,
             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
            );
  iVar8 = iRam_?;
  (this->fields).cachedEvents = this_02;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).cachedEvents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).networkGame = networkGame;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).networkGame >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

