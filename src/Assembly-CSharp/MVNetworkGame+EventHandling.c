
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
    func_?();
    func_?();
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
    func_?(0xec);
    func_?(0x3d64);
    func_?(0x87c4);
    func_?(0x81f0);
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?(200);
    func_?(0xb640);
    func_?(0xb604);
    func_?(0xb67c);
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?(0x34);
    func_?(0x7f84);
    func_?(0x84ac);
    func_?(0x8470);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MV__Common__QueryType);
    func_?(&TypeInfo__MV__Common__RewardReason);
    func_?(&TypeInfo__MV__Common__RewardType);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SpawnRoleChangeHandlerRemote);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(0xa4);
    func_?(0xe8a0);
    func_?(0x36e4);
    func_?(0x5a64);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_Received_join_event_for_localPla);
    func_?(&StringLiteral_Server_error__);
    func_?(&StringLiteral_Local_player_leave_event);
    func_?(&StringLiteral_Should_probably_be_behind_an_int);
    func_?(&StringLiteral_V);
    func_?(&StringLiteral_attachedObject_GroupId____vehicl);
    func_?(&StringLiteral_Profile_with_ID__0__unlocked_Ach);
    func_?(&StringLiteral_Fast_forward);
    func_?(0xc0);
    func_?(0x51a0);
    func_?(0xaec8);
    func_?(0x5924);
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  uStack_9 = 0;
  uStack_10 = 0;
  _Stack_48.dummy = (Object__Class *)0x0;
  _Var57 = (_union_86)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI.dummy != (void *)0x0)) && (unaff_EDI = unaff_EDI, pOVar11 != (Object *)0x0)) {
      _Var57 = unaff_EDI;
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
       (unaff_EDI = (_union_86)(pWVar14->fields)._.worldObjectClientManager,
       unaff_ESI = (_union_86)photonEvent, _Stack_28 = unaff_EDI, photonEvent != (EventData *)0x0))
    {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      _Var57.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x12,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        unaff_EDI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (_Var57.dummy != (Object__Class *)0x0) {
          pIVar15 = ((Il2CppClass_0 *)&(_Var57.array)->etype)->image;
          if ((*(byte *)&pIVar15[4].assembly <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (pIVar15[2].typeCount +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          unaff_ESI.dummy = (Object__Class *)0x0;
          if (bVar16) {
            unaff_ESI.typeHandle = _Var57.typeHandle;
          }
          if (unaff_ESI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
        unaff_ESI.dummy = (Object__Class *)0x0;
code_?:
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar12,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar11 != (Object *)0x0)) {
      _Var57 = unaff_EDI;
      if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar13 = (this->fields).networkGame;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar14->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar18,unaff_EDI.__klassIndex,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar13 = (this->fields).networkGame;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar14->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar18,unaff_EDI.__klassIndex,pDVar17,(MethodInfo *)0x0);
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
        bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar19 == 0) {
          pSVar20 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar20,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar20,(MethodInfo *)0x0);
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
              pSVar20 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar20 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            if ((Object__Class *)unaff_ESI.type[1].data.array != (Object__Class *)0x0) {
              (*(code *)(((Object__Class *)unaff_ESI.type[1].data.array)->_0).namespaze)();
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
      _Var57 = unaff_EDI;
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
       (pMVar21 = (pWVar14->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x2f,(MethodInfo *)0x0);
      _Var57.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x31,(MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var57.typeHandle;
      if (pMVar21 != (MVWorldInventory *)0x0) {
        _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
        if ((_Var57.dummy != (Object__Class *)0x0) &&
           (unaff_EDI.dummy = (void *)func_?(), _Stack_28.dummy = unaff_EDI.dummy,
           unaff_EDI.dummy == (Object__Class *)0x0)) goto code_?;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          p_Var60 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMVar21->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar22 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 unaff_ESI.__klassIndex,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            this_06 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_06,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
            unaff_ESI.dummy = (void *)0x0;
            if (pRVar22 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar22,this_06,(MethodInfo *)0x0);
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
       (_Var57 = (_union_86)(pWVar14->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      unaff_EDI = _Var57;
      if ((_Var57.dummy != (Object__Class *)0x0) && (pOVar11 != (Object *)0x0)) {
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar23 = (float *)func_?();
        fVar24 = *pfVar23;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          p_Var60 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (((Dictionary_2_System_Int32_System_Object_ *)_Var57.type[1].data.typeHandle !=
               (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
             (pRVar22 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                   _Var57.type[1].data.typeHandle,unaff_ESI.__klassIndex,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar22 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar22->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar22->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar22->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar22,fVar24,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (_union_86)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar26 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar12,iVar26,iVar25,(MethodInfo *)0x0);
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
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
      iVar25 = *piVar12;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x35,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?(pOVar11,TypeInfo__System__Int32);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar13,unaff_EDI.__klassIndex,iVar25,*piVar12,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
      iVar25 = *piVar12;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar27 = (FriendStatus__Enum *)func_?(pOVar11,TypeInfo__MV__Common__FriendStatus);
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar13,unaff_EDI.__klassIndex,iVar25,*pFVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
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
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
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
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
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
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
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
    unaff_ESI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar25,(MethodInfo *)0x0);
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
       unaff_EDI = (_union_86)photonEvent, photonEvent != (EventData *)0x0)) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        p_Var60 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var60->type;
        puVar28 = (undefined4 *)func_?();
        pcVar29 = (char *)*puVar28;
        p_Var60 = (_union_86 *)func_?();
        _Stack_28 = *p_Var60;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        unaff_ESI.type[2].data = _Stack_28;
        unaff_ESI.type[1].data.dummy = pcVar29;
        *(_union_86 *)&unaff_ESI.type[1].attrs = (Il2CppType *)unaff_EDI;
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar13 != (MVNetworkGame *)0x0) {
          iVar25 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar13,(MethodInfo *)0x0);
          pvVar30 = unaff_ESI.type[3].data.dummy;
          *(int *)&unaff_ESI.type[2].attrs = (int)unaff_EDI.dummy + ((int)pcVar29 - iVar25);
          if (pvVar30 == (void *)0x0) goto code_?;
          pIVar31 = unaff_ESI.type[3].data.array;
          this_07 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(this_07,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pIVar31 != (Il2CppArrayType *)0x0) {
            (*(code *)pIVar31->lobounds)();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
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
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
         unaff_EDI = (_union_86)photonEvent, pMVar32 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (_union_86)(pMVar32->fields)._._ActorNr_k__BackingField;
        puVar28 = (undefined4 *)func_?();
        if ((Object__Class *)*puVar28 == unaff_ESI.dummy) goto code_?;
        pMVar13 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = (_union_86)photonEvent,
           pWVar14 != (WorldNetwork *)0x0)) {
          _Var57 = (_union_86)(pWVar14->fields)._.worldObjectClientManager;
          _Stack_28 = _Var57;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI.dummy = (Object__Class *)0x0;
          unaff_EDI = (_union_86)photonEvent;
          if (_Var57.dummy != (Object__Class *)0x0) {
            pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar12 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar12,pDVar17,
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
    unaff_ESI = (_union_86)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar26 = *piVar12;
        pPVar33 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar33,iVar26,iVar25,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Stack_28 = *p_Var60;
      pfVar23 = (float *)func_?();
      fVar24 = *pfVar23;
      pfVar23 = (float *)func_?(pOVar11,TypeInfo__System__Single);
      VStack_8.x = *pfVar23;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = fVar24;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Stack_28 = *p_Var60;
      puVar28 = (undefined4 *)func_?();
      uVar34 = *puVar28;
      puVar28 = (undefined4 *)func_?();
      uStack_9 = *puVar28;
      pMVar13 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      uStack_10 = uVar34;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        piVar12 = (int32_t *)func_?();
        camOrigin.y = VStack_8.y;
        camOrigin.x = VStack_8.x;
        camOrigin.z = VStack_8.z;
        camDir.y = (float)uStack_10;
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
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar35 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar35,pDVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = (_union_86)photonEvent;
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
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar12 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3
                ((Type *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        pMVar36 = (MVTeam__Enum *)func_?();
        team = *pMVar36;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar13,*piVar12,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (_union_86)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar26 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar12,iVar26,iVar25,(MethodInfo *)0x0);
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
    unaff_ESI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar25,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar11 = (Object *)func_?();
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?(pOVar37,TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var60;
      pOVar37 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&_Stack_28);
      pSVar20 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar11,pOVar37,
                           (MethodInfo *)0x0);
      uVar38 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar39 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar11 = (Object *)func_?();
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pDVar39 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar39,pOVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar28 = (undefined4 *)func_?();
        pIStack_40 = (Il2CppClass *)*puVar28;
        uStack_41 = 0;
        pOVar11 = (Object *)func_?();
        TVar42 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar39,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar42.m_Index,TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var60->__klassIndex;
        pMVar13 = (this->fields).networkGame;
        unaff_EDI.dummy = (Object__Class *)0x0;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          pMVar43 = (pMVar13->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pMVar43 != (MVLocalObjectController *)0x0) {
            pbVar44 = (byte *)func_?();
            bVar45 = *pbVar44;
            piVar12 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar43,*piVar12,(int32_t)pIStack_40,_Stack_24.__klassIndex,(uint)bVar45,
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
         (pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar13,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pMVar46 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar46,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)TypeInfo__MVAvatar;
        if ((unaff_ESI.dummy == (Object__Class *)0x0) || (iVar47 = func_?(), iVar47 == 0))
        goto code_?;
        iVar47 = func_?();
        if (iVar47 != 0) {
          func_?();
          func_?();
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar11 = (Object *)func_?();
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var60 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var60->__klassIndex;
        uStack_41 = 0;
        pOVar11 = (Object *)func_?();
        TVar42 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var60 = (_union_86 *)func_?(TVar42.m_Index,TypeInfo__System__Int32);
        _Stack_34 = *p_Var60;
        pMVar13 = (this->fields).networkGame;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar13,(MethodInfo *)0x0),
           pMVar46 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar46,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          _Stack_48.dummy = (void *)func_?();
          if (_Stack_48.dummy != (Object__Class *)0x0) {
            pIStack_40 = *(Il2CppClass **)(_Stack_48.__klassIndex + 0xfc);
            uStack_48 = 3;
            pOVar11 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       unaff_EDI.typeHandle,pOVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar28 = (undefined4 *)func_?();
            pDStack_49 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar28;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar28 = (undefined4 *)func_?(pOVar11,TypeInfo__System__Int32);
            pMStack_50 = (MVWorldObject *)*puVar28;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x3a,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?(pOVar11,TypeInfo__System__Int32);
            _Stack_24 = (_union_86)p_Var60->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?();
            _Stack_28 = (_union_86)p_Var60->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            p_Var60 = (_union_86 *)func_?();
            VStack_8.z = *(float *)p_Var60;
            pMVar13 = (this->fields).networkGame;
            unaff_EDI = (_union_86)this;
            if ((pMVar13 != (MVNetworkGame *)0x0) &&
               (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar14,(int32_t)pMStack_50,0,1,(int32_t)pIStack_40,(int32_t)pDStack_49,
                         _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar13,(MethodInfo *)0x0),
                 pMVar46 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_50 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar46,(int32_t)pDStack_49,(MethodInfo *)0x0);
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
                  func_?();
                }
                if (pMStack_50 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar13 = (this->fields).networkGame;
                  if (pMVar13 != (MVNetworkGame *)0x0) {
                    pMVar43 = (pMVar13->fields)._PlayerController_k__BackingField;
                    pMStack_50 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    unaff_EDI.dummy = (Object__Class *)0x0;
                    if (pMVar43 != (MVLocalObjectController *)0x0) {
                      pbVar44 = (byte *)func_?();
                      bVar45 = *pbVar44;
                      piVar12 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar43,*piVar12,(int32_t)pDStack_49,_Stack_34.__klassIndex,
                                 (uint)bVar45,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Var57 = *p_Var60;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?();
      uVar51 = *puVar5;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar23 = (float *)func_?(pOVar11,TypeInfo__MV__Common__RewardType);
      fVar24 = *pfVar23;
      _Stack_48 = _Var57;
      _Stack_34.dummy = (void *)func_?(TypeInfo__System__Int32,&_Stack_48);
      uStack_48 = uVar51;
      pOVar11 = (Object *)func_?();
      VStack_8.z = fVar24;
      pOVar37 = (Object *)func_?();
      pSVar20 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar11,pOVar37,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar20,(MethodInfo *)0x0);
      pMVar52 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar53 = (pMVar52->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar53->vtable[0].methodPtr & 0x100) == 0) {
        pIVar53 = (Il2CppClass *)func_?();
      }
      if (pIVar53->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar53 = (pMVar52->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar53->vtable[0].methodPtr & 0x100) == 0) {
        pIVar53 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar53->static_fields;
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
      pBVar54 = (Byte__Array *)func_?();
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
         pWVar14 != (WorldNetwork *)0x0)) {
        this_01 = (pWVar14->fields)._.runtimeEventManagerNetwork;
        unaff_ESI.dummy = (void *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI.typeHandle,pBVar54,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        unaff_EDI.dummy = (Object__Class *)0x0;
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
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar13 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar13->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (this_02 = (RuntimeEventManager *)(pWVar14->fields)._.runtimeEventManagerNetwork,
       unaff_EDI = unaff_EDI, this_02 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Stack_24 = *p_Var60;
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar5 = (undefined1 *)func_?(pOVar11,TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar5;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pDStack_49 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar28 = (undefined4 *)func_?();
      pIStack_40 = (Il2CppClass *)*puVar28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar55 = (bool *)func_?();
      bVar19 = *pbVar55;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar29 = (char *)func_?();
      pMVar13 = (this->fields).networkGame;
      if (*pcVar29 == '\0') {
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pGVar56 = (pMVar13->fields).gameStatCounterManager,
           pGVar56 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar56,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                     (int32_t)pDStack_49,(int32_t)pIStack_40,bVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else if ((pMVar13 != (MVNetworkGame *)0x0) &&
              (pGVar56 = (pMVar13->fields).gameStatCounterManager,
              pGVar56 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar56,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                   (int32_t)pDStack_49,(int32_t)pIStack_40,bVar19,(MethodInfo *)0x0);
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
      pBVar54 = (Byte__Array *)func_?();
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pGVar56 = (pMVar13->fields).gameStatCounterManager, unaff_EDI = unaff_EDI,
         pGVar56 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar56,pBVar54,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar12 = (int32_t *)func_?();
      iVar25 = *piVar12;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pMVar52 = (MethodInfo *)0x0;
      pBVar54 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar54,pMVar52);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (this_03 = (pMVar13->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_03 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_03,iVar25,(MvAvatarMetaData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar12,iVar25,(MethodInfo *)0x0);
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
      pbVar55 = (bool *)func_?();
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar13 != (MVNetworkGame *)0x0) &&
         (pMVar57 = (pMVar13->fields)._GameCoinManager_k__BackingField, unaff_EDI = unaff_EDI,
         pMVar57 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar57,*pbVar55,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar11 != (Object *)0x0)) {
      _Var57 = unaff_EDI;
      if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var60 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var60->__klassIndex;
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
        _Var76.dummy = (Object__Class *)0x0;
      }
      else {
        _Var57 = (_union_86)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
        if ((*(uint8_t *)(_Var57.__klassIndex + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            ((Il2CppClass_1 *)(_Var57.__klassIndex + 100))->typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        _Var76.dummy = (Object__Class *)0x0;
        if (bVar16) {
          _Var76.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var76.dummy == (Object__Class *)0x0) goto code_?;
      }
      pMVar13 = (this->fields).networkGame;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar13,unaff_EDI.__klassIndex,
                   (Dictionary_2_System_Object_System_Object_ *)_Var76.typeHandle,(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0), _Var57.dummy == (void *)0x0))
    break;
    if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var57.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar17->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar17->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar16) {
      pDVar58 = pDVar17;
    }
    unaff_ESI = (_union_86)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
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
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var57.dummy = (void *)func_?();
    _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
    if (unaff_EDI.dummy == (Object__Class *)0x0) {
      pBVar54 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var57.typeHandle,pBVar54,(MethodInfo *)0x0);
      pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      unaff_EDI.dummy = _Var57.dummy;
      if (pOVar11 != (Object *)0x0) {
        if ((pOVar11->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          unaff_EDI = _Var57;
          goto code_?;
        }
        puVar5 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)_Var57 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar5);
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar55 = (bool *)func_?();
          pMVar13 = (this->fields).networkGame;
          if (pMVar13 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar13,(BytePacker *)_Var57.typeHandle,eventCode,*pbVar55,(MethodInfo *)0x0)
            ;
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar54 = (Byte__Array *)func_?(unaff_EDI.dummy,TypeInfo__System__Byte);
    if (pBVar54 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
          unaff_EDI = (_union_86)photonEvent, pMVar32 != (MVLocalPlayer *)0x0)) &&
         (iVar47 = (pMVar32->fields)._._ActorNr_k__BackingField, unaff_EDI = (_union_86)photonEvent,
         unaff_ESI.dummy != (Object__Class *)0x0)) {
        unaff_EDI = (_union_86)photonEvent;
        if ((Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar59 = (int *)func_?();
        if (*piVar59 == iVar47) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar13 = (this->fields).networkGame;
          unaff_ESI = (_union_86)this;
          unaff_EDI = (_union_86)photonEvent;
          if ((pMVar13 != (MVNetworkGame *)0x0) &&
             (pMVar57 = (pMVar13->fields)._GameCoinManager_k__BackingField,
             unaff_EDI = (_union_86)photonEvent, pMVar57 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar57,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar13 = (this->fields).networkGame;
            unaff_EDI = (_union_86)photonEvent;
            if (pMVar13 != (MVNetworkGame *)0x0) {
              pMVar60 = (pMVar13->fields).operationRequests;
              unaff_ESI.dummy = (Object__Class *)0x0;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar60 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
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
                unaff_EDI = (_union_86)photonEvent;
                if (unaff_ESI.dummy != (Object__Class *)0x0) {
                  (*(code *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[6].assembly)
                            (unaff_ESI.dummy,0x66);
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
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar13 != (MVNetworkGame *)0x0) {
            unaff_EDI = (_union_86)(pMVar13->fields).playerContainer;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if ((unaff_EDI.dummy != (Object__Class *)0x0) && (pOVar11 != (Object *)0x0)) {
              if ((pOVar11->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar55 = (bool *)func_?();
              bVar19 = *pbVar55;
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                if ((Il2CppClass *)
                    ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar12 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,bVar19,
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
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    unaff_EDI = _Var57;
    if ((_Var57.dummy == (void *)0x0) || (pOVar11 == (Object *)0x0)) break;
    if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar29 = (char *)func_?();
    if (unaff_ESI.dummy == (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var57.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,*pcVar29 == '\0',(MethodInfo *)0x0);
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
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    _Var76.dummy = (Object__Class *)0x0;
    if (bVar16) {
      _Var76.typeHandle = unaff_ESI.typeHandle;
    }
    if (_Var76.dummy != (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var57.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)_Var76.typeHandle,*pcVar29 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    _Var57 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var57;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0), _Var57.dummy != (void *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var57.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (((pDVar17->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar17->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      pDVar58 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar58 = pDVar17;
      }
      unaff_ESI = (_union_86)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar58 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var57.typeHandle,pDVar58,(MethodInfo *)0x0);
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
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar54 = (Byte__Array *)0x0;
code_?:
      pMVar13 = (this->fields).networkGame;
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI.typeHandle,pBVar54,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI.typeHandle,
                 (MethodInfo *)0x0);
      if (pMVar13 != (MVNetworkGame *)0x0) {
        (pMVar13->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar54 = (Byte__Array *)func_?();
    unaff_EDI.dummy = (Object__Class *)0x0;
    if (pBVar54 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI.dummy != (void *)0x0)) && (unaff_EDI = unaff_EDI, pOVar11 != (Object *)0x0)) {
      _Var57 = unaff_EDI;
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
        func_?();
        cRam_? = '\x01';
      }
      pPVar61 = (pMVar60->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pPVar61 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar61->klass->vtable).SendOperation.method)(pPVar61,0x3c);
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
    unaff_EDI.dummy = (void *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var60 = (_union_86 *)func_?();
      _Stack_48 = *p_Var60;
      pOVar11 = (Object *)func_?();
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
      pMVar62 = (pMVar13->fields).logicObjectManagerClientWrapper;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if ((pMVar62 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (_union_86)(pMVar62->fields).logicEventQueue, unaff_EDI = unaff_EDI,
         unaff_ESI.dummy != (Object__Class *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
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
                                (photonEvent,0x23,(MethodInfo *)0x0),
           unaff_EDI = (_union_86)photonEvent, pOVar11 != (Object *)0x0)) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar12 = (int32_t *)func_?();
          iVar25 = *piVar12;
          unaff_EDI = (_union_86)photonEvent;
          if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
            bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               ((Dictionary_2_System_Int32_System_Single_ *)
                                unaff_ESI.type[1].data.typeHandle,iVar25,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar19 == 0) {
              _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
              VStack_8.z = (float)func_?();
              mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
              Stack_1_System_Int32___ctor
                        ((Stack_1_System_Int32_ *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              unaff_EDI = (_union_86)photonEvent;
              if (_Stack_48.dummy == (Object__Class *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,iVar25,
                         (Object *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            unaff_EDI = (_union_86)photonEvent;
            if (((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) &&
               (this_08 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)
                                     unaff_ESI.type[1].data.typeHandle,iVar25,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), unaff_EDI = (_union_86)photonEvent,
               this_08 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_08,(Object *)photonEvent,
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
      pMVar62 = (pMVar13->fields).logicObjectManagerClientWrapper;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar62 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar62,(MethodInfo *)0x0);
        pMVar63 = (pMVar62->fields).updateEvaluatorStep;
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar63 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar12 = &(pMVar63->fields).stepTimestamp;
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
      pMVar63 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar63 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar63->fields).stepTimestamp = *piVar12;
code_?:
        iVar25 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar63->fields).lastUpdateTick = iVar25;
        (pMVar63->fields).accumulatedTime = 0;
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
      pcVar29 = *(char **)&unaff_ESI.type[1].attrs;
      while ((pcVar29 != (char *)0x0 && (*(int *)(pcVar29 + 0x2c) != 0))) {
        if (unaff_EDI.__klassIndex <= *(int *)(*(int *)(pcVar29 + 0x2c) + 0x14))
        goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                   (MethodInfo *)0x0);
        pcVar29 = *(char **)&unaff_ESI.type[1].attrs;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI.dummy = (void *)func_?();
    pMVar13 = (this->fields).networkGame;
    unaff_EDI = (_union_86)this;
    if ((pMVar13 == (MVNetworkGame *)0x0) ||
       (pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar13,(MethodInfo *)0x0),
       unaff_ESI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    photonEvent = unaff_ESI.dummy;
    if (*(char **)&unaff_ESI.type[1].attrs != (char *)0x0) {
      if (pMVar46 != (MVWorldObjectClientManager *)0x0) {
        pMVar64 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar46,unaff_ESI.type[2].data.__klassIndex,(MethodInfo *)0x0);
        pMVar13 = (this->fields).networkGame;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar13,(MethodInfo *)0x0);
          if (*(char **)&unaff_ESI.type[1].attrs < (char *)0x2) goto code_?;
          if (pMVar46 != (MVWorldObjectClientManager *)0x0) {
            iVar25._0_2_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->attrs;
            iVar25._2_1_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->type;
            iVar25._3_1_ = ((Il2CppType *)((int)unaff_ESI + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar46,iVar25,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar64 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              if (*(char **)&unaff_ESI.type[1].attrs != (char *)(pMVar64->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar47 = func_?();
              if (iVar47 != 0) {
                bVar19 = 0xee;
                _Var57.typeHandle = unaff_ESI.typeHandle;
                this_09 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_09,bVar19,(MethodInfo *)_Var57.typeHandle);
                pMVar13 = (this->fields).networkGame;
                if ((pMVar13 != (MVNetworkGame *)0x0) &&
                   (pMVar43 = (pMVar13->fields)._PlayerController_k__BackingField,
                   pMVar43 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar43,1,(MethodInfo *)0x0);
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
      _Stack_48.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar12 = (int32_t *)func_?();
        iVar25 = *piVar12;
        piVar12 = (int32_t *)func_?();
        iVar26 = *piVar12;
        puVar5 = (undefined1 *)func_?();
        uVar51 = *puVar5;
        piVar12 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar12,
                   CONCAT31((int3)((uint)puVar5 >> 8),uVar51),iVar26,iVar25,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar55 = (bool *)func_?();
      bVar19 = *pbVar55;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar19
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
      pMVar52 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar52);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = (_union_86)photonEvent;
      if (pOVar11 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar11[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar20 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar20,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar11[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar65 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)photonEvent;
        if (pGVar65 != (GoldRewardManager *)0x0) {
          pbVar55 = (bool *)func_?();
          (pGVar65->fields).isGoldRewardGame = *pbVar55;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar55 = (bool *)func_?();
          BStack_7.m_value = *pbVar55;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar20 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar20,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar66 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar20 = (String *)0x0;
      if (pSVar66 == (String *)0x0) {
code_?:
        pSVar20 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar20,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar66->klass == TypeInfo__System__String) {
        pSVar20 = pSVar66;
      }
      if (pSVar20 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?(unaff_ESI.dummy);
      _Var57 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var57;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar47 = func_?();
      pMVar52 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar20 = StringLiteral_V;
      unaff_EDI = unaff_EDI;
      if (iVar47 != 0) {
        pDVar39 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar39,(Object *)pSVar20,pMVar52);
        pbVar55 = (bool *)func_?();
        bVar19 = *pbVar55;
        pMVar13 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)pSVar20;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          piVar12 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar13,*piVar12,bVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar66 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar20 = (String *)0x0;
    if (pSVar66 == (String *)0x0) {
code_?:
      bVar19 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
      if (bVar19 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar20,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar11 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar11[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar11[1].monitor;
code_?:
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    if (pSVar66->klass == TypeInfo__System__String) {
      pSVar20 = pSVar66;
    }
    photonEvent = (EventData *)0x0;
    if (pSVar20 != (String *)0x0) goto code_?;
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
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var57.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pMVar67 = (pMVar13->fields).playerContainer, unaff_EDI = unaff_EDI,
          pMVar67 != (MVPlayerContainer *)0x0)) &&
         (pMVar32 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar67,(MethodInfo *)0x0),
         unaff_EDI = unaff_EDI, pMVar32 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar32,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        unaff_EDI = (_union_86)photonEvent;
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var57.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar13->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar12 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          if (pMVar68 != (MVPlayer *)0x0) {
            (pMVar68->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
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
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar20 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var57.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar20,(MethodInfo *)0x0);
      uVar38 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar38 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar20,(MethodInfo *)0x0);
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
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var57.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      unaff_EDI = unaff_EDI;
      if (((pOVar11 != (Object *)0x0) &&
          (pMVar13 = (this->fields).networkGame, unaff_EDI = unaff_EDI,
          pMVar13 != (MVNetworkGame *)0x0)) &&
         (pLVar69 = (pMVar13->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
         pLVar69 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar69,(Dictionary_2_System_Int32_System_Int32_ *)pOVar11[1].klass,
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
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var57.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar13 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar13 != (MVNetworkGame *)0x0) &&
          (pLVar69 = (pMVar13->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
          pOVar11 != (Object *)0x0)) &&
         (unaff_EDI = unaff_EDI, pLVar69 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar69,(int32_t)pOVar11[1].klass,(int32_t)pOVar11[1].monitor,(MethodInfo *)0x0);
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
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var57.typeHandle,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)_Var57.typeHandle,
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
        _Var57.typeHandle = unaff_ESI.typeHandle;
      }
      if (_Var57.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar20 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var57.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar20,(MethodInfo *)0x0);
      uVar38 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        pKVar70 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)_Var57.typeHandle,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar70;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var57.typeHandle = unaff_ESI.typeHandle;
      }
      if (_Var57.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
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
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
        pMVar13 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar13,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar71 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar72 = pVVar71->x;
      uVar73 = pVVar71->y;
      fVar24 = pVVar71->z;
      uStack_10 = uVar72;
      _Stack_48 = (_union_86)uVar73;
      pQVar74 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_75 = pQVar74->x;
      VStack_8.x = pQVar74->y;
      VStack_8.y = pQVar74->z;
      VStack_8.z = pQVar74->w;
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar13->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar12 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          if (pMVar68 != (MVPlayer *)0x0) {
            this_04 = (pMVar68->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (this_04 != (SpawnRolesManager *)0x0) {
              piVar12 = (int32_t *)func_?();
              position.y = (float)_Stack_48.dummy;
              position.x = (float)uStack_10;
              position.z = fVar24;
              rotation.y = VStack_8.x;
              rotation.x = fStack_75;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_04,*piVar12,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (_union_86)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar20 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar20,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar13->fields).playerContainer;
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)photonEvent;
        if ((unaff_ESI.dummy != (Object__Class *)0x0) &&
           (unaff_EDI = (_union_86)photonEvent, pOVar11 != (Object *)0x0)) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar12 = (int32_t *)func_?();
          pMVar68 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar12,(MethodInfo *)0x0)
          ;
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar68 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar68,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,spawnRolesRuntimeData
                       ,(MethodInfo *)0x0);
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
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var57.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var57.typeHandle = unaff_ESI.typeHandle;
        }
        if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
      }
      _Var57.dummy = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               (_Var57.dummy,
                                MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                               );
      pMVar46 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var57.typeHandle;
      if ((_Var57.dummy != (Object__Class *)0x0) && (pMVar46 != (MVWorldObjectClientManager *)0x0))
      {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar46,_Var57.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar13 = (this->fields).networkGame;
        if (pMVar13 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar13,_Var57.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar13 = (this->fields).networkGame;
          if (pMVar13 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar13,(int32_t)_Var57.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar11 != (Object *)0x0) {
              if ((pOVar11->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar55 = (bool *)func_?();
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                     ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar16 = false;
                }
                else {
                  bVar16 = true;
                }
                _Var76.dummy = (Object__Class *)0x0;
                if (bVar16) {
                  _Var76.typeHandle = unaff_ESI.typeHandle;
                }
                if (_Var76.dummy != (Object__Class *)0x0) {
                  if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                       ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = true;
                  }
                  _Var76.dummy = (void *)0x0;
                  if (bVar16) {
                    _Var76.typeHandle = unaff_ESI.typeHandle;
                  }
                  if (_Var76.dummy != (void *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)_Var76.typeHandle,
                               (SpawnRoleBodySwitchData *)_Var57.typeHandle,*pbVar55,
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
    unaff_ESI = (_union_86)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar11 = (Object *)func_?();
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var60 = (_union_86 *)func_?();
        _Stack_48 = (_union_86)p_Var60->__klassIndex;
        uStack_48 = 0;
        pOVar11 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar13 = (this->fields).networkGame;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar46 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar13,(MethodInfo *)0x0),
           pMVar46 != (MVWorldObjectClientManager *)0x0)) {
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar46,_Stack_48.__klassIndex,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          p_Var60 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var60->__klassIndex;
          iVar47 = func_?();
          if (iVar47 != 0) {
            pMVar52 = (MethodInfo *)0x0;
            this_10 = (MVWorldObjectSpawner *)func_?();
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_10,unaff_ESI.__klassIndex,pMVar52)
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
        (unaff_EDI = (_union_86)(pMVar13->fields).playerContainer,
        unaff_ESI = (_union_86)photonEvent, photonEvent != (EventData *)0x0)) &&
       (iVar25 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0), unaff_EDI.dummy != (Object__Class *)0x0)
       ) {
      bVar19 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar25,&pMStack_6,
                          (MethodInfo *)0x0);
      if (bVar19 == 0) {
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
      puVar76 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar76);
      if (pMStack_6 != (MVPlayer *)0x0) {
        if ((pMStack_6->fields).playerState != *puVar76) {
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
        _Var57.dummy = (Object__Class *)0x0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
              TypeInfo__System__String) {
            _Var57.typeHandle = unaff_ESI.typeHandle;
          }
          if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var57.dummy,(MethodInfo *)0x0);
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
      if (photonEvent != (EventData *)0x0) {
        this_11 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (this_11 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var57 = (_union_86)this_11->klass;
          if ((*(uint8_t *)(_Var57.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var57.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar77 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar16) {
            pDVar77 = this_11;
          }
          this_11 = pDVar77;
          unaff_EDI = _Var57;
          if (pDVar77 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        if (this_11 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var57.dummy = &UNK_?;
          this_12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_11,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_12 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar78 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_12,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI.dummy = &stack0xffffff88;
            VStack_8.y = 0.0;
            _Var76 = (_union_86)pDVar78->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI.dummy;
            do {
              bVar19 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar19 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI.typeHandle,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)_Var57.typeHandle);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var76.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var76.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var76;
                }
                photonEvent = unaff_ESI.dummy;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              if (this_11 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar42 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_11,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar42.m_Index == 0) {
                pSVar20 = (String *)0x0;
                _Var57 = (_union_86)::StringLiteral___;
              }
              else {
                _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
                pSVar20 = (String *)func_?();
                _Var57 = _Stack_48;
              }
              pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)_Var57.typeHandle,
                                   pSVar20,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar20,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar11 != (Object *)0x0)) {
        _Var57 = unaff_EDI;
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var60 = (_union_86 *)func_?();
        unaff_ESI = (_union_86)p_Var60->__klassIndex;
        pMVar13 = (this->fields).networkGame;
        unaff_EDI = (_union_86)this;
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
           pMVar32 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI.dummy == (Object__Class *)(pMVar32->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          pMVar13 = (this->fields).networkGame;
          if ((pMVar13 != (MVNetworkGame *)0x0) &&
             (pMVar67 = (pMVar13->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0)) {
            bVar19 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar67,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
            if (bVar19 == 0) {
code_?:
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar67 = (pMVar13->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar67,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar13 = (this->fields).networkGame;
              if ((pMVar13 != (MVNetworkGame *)0x0) &&
                 (pMVar67 = (pMVar13->fields).playerContainer, pMVar67 != (MVPlayerContainer *)0x0))
              {
                pIStack_40 = (Il2CppClass *)
                             MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar67,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                pDStack_49 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_49,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_8.z = (float)func_?();
                _Stack_48 = unaff_ESI;
                pOVar11 = (Object *)func_?(TypeInfo__System__Int32);
                if (pDStack_49 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_49,
                             (Object *)VStack_8.z,pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_48 = 3;
                  pOVar11 = (Object *)func_?();
                  if ((pIStack_40 != (Il2CppClass *)0x0) &&
                     (pIStack_40->klass != (Il2CppClass *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_49,pOVar11,
                               (Object *)pIStack_40->klass->namespaze,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_41 = 6;
                    VStack_8.z = (float)func_?();
                    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar13 != (MVNetworkGame *)0x0) &&
                       (this_05 = (pMVar13->fields)._Friends_k__BackingField,
                       this_05 != (FriendList *)0x0)) {
                      bStack_79 = FriendList::FriendList_IsFriend
                                            (this_05,(int32_t)pIStack_40->parent,(MethodInfo *)0x0);
                      pOVar11 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_49,
                                 (Object *)VStack_8.z,pOVar11,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_49,
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
      unaff_ESI = (_union_86)photonEvent;
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar11 != (Object *)0x0)) {
        _Var57 = unaff_EDI;
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar28 = (undefined4 *)func_?();
        pMStack_50 = (MVWorldObject *)*puVar28;
        pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = unaff_EDI;
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar59 = (int *)func_?();
          iVar47 = *piVar59;
          _Var57.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9a,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (_Var57.dummy != (Object__Class *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&(_Var57.array)->etype)->image ==
                TypeInfo__System__String) {
              unaff_EDI.typeHandle = _Var57.typeHandle;
            }
            if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
          }
          pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          if (pOVar11 != (Object *)0x0) {
            _Var57 = unaff_EDI;
            if ((pOVar11->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar5 = (undefined1 *)func_?();
            _Stack_34.__klassIndex._0_1_ = *puVar5;
            pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            if (pOVar11 != (Object *)0x0) {
              if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              p_Var60 = (_union_86 *)func_?();
              _Stack_28 = *p_Var60;
              pOVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              if (pOVar11 != (Object *)0x0) {
                if ((pOVar11->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                puVar5 = (undefined1 *)func_?();
                _Stack_48.__klassIndex._0_1_ = *puVar5;
                unaff_ESI.typeHandle =
                     (Il2CppMetadataTypeHandle)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                _Var57.dummy = (Object__Class *)0x0;
                if (unaff_ESI.dummy != (Object__Class *)0x0) {
                  if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
                      TypeInfo__System__String) {
                    _Var57.typeHandle = unaff_ESI.typeHandle;
                  }
                  if (_Var57.dummy == (Object__Class *)0x0) goto code_?;
                }
                VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)_Var57.typeHandle,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar13 = (this->fields).networkGame;
                if ((pMVar13 != (MVNetworkGame *)0x0) &&
                   (pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar13,(MethodInfo *)0x0), pMVar32 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar47 == (pMVar32->fields)._._ActorNr_k__BackingField) {
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
                            ((MVPlayer *)unaff_ESI.typeHandle,iVar47,(int32_t)pMStack_50,
                             (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                             (UserProfileData *)VStack_8.z,0,(bool)_Stack_48.__klassIndex,
                             (MethodInfo *)0x0);
                  if (unaff_ESI.dummy != (void *)0x0) {
                    unaff_ESI.type[9].data = _Stack_28;
                    pMVar13 = (this->fields).networkGame;
                    if ((pMVar13 != (MVNetworkGame *)0x0) &&
                       (pMVar67 = (pMVar13->fields).playerContainer,
                       pMVar67 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar67,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
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
  _Var57 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  unaff_EDI = _Var57;
code_?:
  func_?(unaff_EDI.dummy,_Stack_48.dummy);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?(&_Stack_54,&UNK_?);
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar80 = func_?();
  iVar81 = (int)((ulonglong)uVar80 >> 0x20);
  uVar82 = (uint)uVar80;
  bVar83 = (byte)uVar80;
  bVar45 = (byte)((ulonglong)uVar80 >> 0x28);
  cRam_? = cRam_? + bVar45 + (bVar83 < 0x53);
  bVar16 = CARRY1(*extraout_ECX,bVar45) || CARRY1(*extraout_ECX + bVar45,uVar82 < 0x3dae1053);
  bRam_? = bVar83;
  *extraout_ECX = *extraout_ECX + bVar45 + (uVar82 < 0x3dae1053);
  pbVar44 = (byte *)(uVar82 + 0x80105383);
  bVar84 = *pbVar44;
  bVar45 = *pbVar44;
  *pbVar44 = bVar45 + bVar83 + bVar16;
  puVar85 = (uint *)(unaff_EBX + 0x10);
  uVar82 = (uint)(CARRY1(bVar84,bVar83) || CARRY1(bVar45 + bVar83,bVar16));
  bVar16 = 0xffffffa1 < *puVar85 || CARRY4(*puVar85 + 0x5e,uVar82);
  *puVar85 = *puVar85 + 0x5e + uVar82;
  bVar84 = (byte)((ulonglong)uVar80 >> 8);
  bVar45 = bVar84 + bVar83;
  cVar86 = bVar45 + bVar16;
  bVar87 = (byte)extraout_ECX;
  bVar88 = (char)((uint)extraout_ECX >> 8) + cVar86 +
           (CARRY1(bVar84,bVar83) || CARRY1(bVar45,bVar16));
  pbVar89 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar88,bVar87));
  bVar16 = 9 < (bVar83 & 0xf);
  bVar45 = bVar16 | in_AF;
  uVar82 = CONCAT31((int3)((ulonglong)uVar80 >> 8),bVar83 + bVar45 * -6) & 0xffff000f;
  bVar83 = (byte)uVar82;
  bVar90 = cVar86 - bVar45;
  iVar47 = CONCAT22((short)(uVar82 >> 0x10),CONCAT11(bVar90,bVar83));
  pbVar44 = (byte *)(iVar47 + -0x5efac7d);
  bVar91 = CARRY1(*pbVar44,bVar83) || CARRY1(*pbVar44 + bVar83,bVar45);
  *pbVar44 = *pbVar44 + bVar83 + bVar45;
  pbVar92 = (byte *)(iVar47 + 1);
  pbVar44 = unaff_EBX + -0x24efacbf;
  bVar93 = CARRY1(*pbVar44,bVar87) || CARRY1(*pbVar44 + bVar87,bVar91);
  *pbVar44 = *pbVar44 + bVar87 + bVar91;
  pbVar94 = pbVar89 + 1;
  bVar95 = (byte)((uint)pbVar94 >> 8);
  bVar91 = CARRY1(*unaff_EBX,bVar95) || CARRY1(*unaff_EBX + bVar95,bVar93);
  *unaff_EBX = *unaff_EBX + bVar95 + bVar93;
  pbVar96 = (byte *)(iVar81 + 1);
  pbVar44 = unaff_EBX + 0x3b105342;
  bVar84 = (byte)((uint)pbVar96 >> 8);
  bVar45 = *pbVar44 + bVar84;
  bVar93 = CARRY1(*pbVar44,bVar84) || CARRY1(bVar45,bVar91);
  *pbVar44 = bVar45 + bVar91;
  pbVar97 = unaff_EBX + 1;
  pbVar44 = (byte *)(iVar47 + 0x15105344);
  bVar91 = CARRY1(*pbVar44,bVar95) || CARRY1(*pbVar44 + bVar95,bVar93);
  *pbVar44 = *pbVar44 + bVar95 + bVar93;
  pbVar44 = (byte *)(iVar81 + -0x7fefacbb);
  bVar84 = *pbVar44;
  bVar98 = (byte)pbVar92;
  bVar45 = *pbVar44;
  *pbVar44 = bVar45 + bVar98 + bVar91;
  puVar85 = (uint *)(unaff_EBX + 0x11);
  uVar82 = (uint)(CARRY1(bVar84,bVar98) || CARRY1(bVar45 + bVar98,bVar91));
  bVar91 = 0x2c < *puVar85 || CARRY4(*puVar85 - 0x2d,uVar82);
  *puVar85 = (*puVar85 - 0x2d) + uVar82;
  pbVar44 = (byte *)(iVar47 + 0x105384);
  bVar93 = CARRY1(*pbVar44,bVar98) || CARRY1(*pbVar44 + bVar98,bVar91);
  *pbVar44 = *pbVar44 + bVar98 + bVar91;
  puVar5 = (undefined1 *)((int)&((Il2CppType *)((int)photonEvent + 0x40))->attrs + 1);
  bVar91 = CARRY1(*puVar5,bVar95) || CARRY1(*puVar5 + bVar95,bVar93);
  *puVar5 = *puVar5 + bVar95 + bVar93;
  pbVar44 = (byte *)(iVar47 + 0x41105384);
  bVar45 = *pbVar44;
  bVar84 = *pbVar44 + bVar98;
  bVar93 = CARRY1(*pbVar44,bVar98) || CARRY1(bVar84,bVar91);
  *pbVar44 = bVar84 + bVar91;
  if (*pbVar44 != 0 && (SCARRY1(bVar45,bVar98) != SCARRY1(bVar84,bVar91)) == (char)*pbVar44 < '\0')
  {
    bVar45 = (byte)pbVar96 + (byte)pbVar94;
    bVar91 = CARRY1((byte)pbVar96,(byte)pbVar94) || CARRY1(bVar45,bVar93);
    bVar45 = bVar45 + bVar93;
    iVar81 = CONCAT31((int3)((uint)pbVar96 >> 8),bVar45);
    pOVar11 = (Object *)((int)photonEvent + 0x3a105348);
    bVar98 = (byte)((uint)pbVar92 >> 8);
    bVar84 = *(char *)&pOVar11->klass + bVar98;
    bVar93 = CARRY1(*(byte *)&pOVar11->klass,bVar98) || CARRY1(bVar84,bVar91);
    *(byte *)&pOVar11->klass = bVar84 + bVar91;
    puVar5 = (undefined1 *)(unaff_EDI.__klassIndex + -0x23efacb7);
    bVar91 = CARRY1(*puVar5,bVar95) || CARRY1(*puVar5 + bVar95,bVar93);
    *puVar5 = *puVar5 + bVar95 + bVar93;
    bVar93 = CARRY1(*pbVar89,bVar45) || CARRY1(*pbVar89 + bVar45,bVar91);
    *pbVar89 = *pbVar89 + bVar45 + bVar91;
    iVar99 = iVar81 + -1;
    pbVar44 = (byte *)(iVar81 + 0x49);
    bVar91 = CARRY1(*pbVar44,bVar88) || CARRY1(*pbVar44 + bVar88,bVar93);
    *pbVar44 = *pbVar44 + bVar88 + bVar93;
    bVar84 = (byte)((uint)pbVar97 >> 8);
    bVar45 = *pbVar89 + bVar84;
    bVar93 = CARRY1(*pbVar89,bVar84) || CARRY1(bVar45,bVar91);
    *pbVar89 = bVar45 + bVar91;
    bVar45 = (byte)iVar99 + bVar87;
    bVar91 = CARRY1((byte)iVar99,bVar87) || CARRY1(bVar45,bVar93);
    pbVar96 = (byte *)CONCAT31((int3)((uint)iVar99 >> 8),bVar45 + bVar93);
    pbVar97 = unaff_EBX + -1;
    bVar45 = *pbVar96 + (byte)pbVar97;
    bVar93 = CARRY1(*pbVar96,(byte)pbVar97) || CARRY1(bVar45,bVar91);
    *pbVar96 = bVar45 + bVar91;
    pppMVar100 = (MethodInfo ***)&unaff_EDI.type[9].attrs;
    bVar91 = CARRY1(*(byte *)pppMVar100,bVar83) || CARRY1(*(char *)pppMVar100 + bVar83,bVar93);
    *(byte *)pppMVar100 = *(char *)pppMVar100 + bVar83 + bVar93;
    pbVar44 = &stack0xffffff5c + (int)pbVar89 * 2;
    bVar98 = (byte)((uint)iVar99 >> 8);
    bVar93 = CARRY1(*pbVar44,bVar98) || CARRY1(*pbVar44 + bVar98,bVar91);
    *pbVar44 = *pbVar44 + bVar98 + bVar91;
    pbVar44 = pbVar89 + -0x31efacb4;
    bVar91 = CARRY1(*pbVar44,bVar90) || CARRY1(*pbVar44 + bVar90,bVar93);
    *pbVar44 = *pbVar44 + bVar90 + bVar93;
    bVar88 = (byte)((uint)pbVar97 >> 8);
    bVar93 = CARRY1(bVar83,bVar88) || CARRY1(bVar83 + bVar88,bVar91);
    pbVar92 = (byte *)CONCAT31((int3)((uint)iVar47 >> 8),bVar83 + bVar88 + bVar91);
    bVar91 = CARRY1(bRam_?,bVar90) || CARRY1(bRam_? + bVar90,bVar93);
    bRam_? = bRam_? + bVar90 + bVar93;
    pbVar44 = (byte *)((int)&((Il2CppType *)photonEvent)->data + (int)pbVar89 * 2 + 1);
    bVar84 = *pbVar44;
    bVar45 = *pbVar44;
    *pbVar44 = bVar45 + bVar88 + bVar91;
    bVar91 = CARRY1(in_stack_101,bVar87) ||
              CARRY1(in_stack_101 + bVar87,
                     CARRY1(bVar84,bVar88) || CARRY1(bVar45 + bVar88,bVar91));
    bVar102 = CARRY1(*pbVar92,bVar90) || CARRY1(*pbVar92 + bVar90,bVar91);
    *pbVar92 = *pbVar92 + bVar90 + bVar91;
    bVar93 = CARRY1(*pbVar89,bVar98) || CARRY1(*pbVar89 + bVar98,bVar102);
    *pbVar89 = *pbVar89 + bVar98 + bVar102;
    pbVar94 = pbVar89;
  }
  puVar103 = (ushort *)(unaff_EDI.__klassIndex + 0x28105354);
  bVar45 = (byte)pbVar96;
  bVar91 = CARRY1(*(byte *)puVar103,bVar45) || CARRY1(*(char *)puVar103 + bVar45,bVar93);
  *(byte *)puVar103 = *(char *)puVar103 + bVar45 + bVar93;
  pbVar44 = pbVar97 + 0x55;
  bVar98 = (byte)((uint)pbVar94 >> 8);
  bVar93 = CARRY1(*pbVar44,bVar98) || CARRY1(*pbVar44 + bVar98,bVar91);
  *pbVar44 = *pbVar44 + bVar98 + bVar91;
  bVar91 = CARRY1(bVar45,bVar45) || CARRY1(bVar45 * '\x02',bVar93);
  pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar96 >> 8),bVar45 * '\x02' + bVar93);
  bVar90 = (byte)((uint)pbVar96 >> 8);
  bVar93 = CARRY1(*pbVar44,bVar90) || CARRY1(*pbVar44 + bVar90,bVar91);
  *pbVar44 = *pbVar44 + bVar90 + bVar91;
  bVar45 = *pbVar97 + (byte)pbVar92;
  bVar91 = CARRY1(*pbVar97,(byte)pbVar92) || CARRY1(bVar45,bVar93);
  *pbVar97 = bVar45 + bVar93;
  ppIVar104 = (Il2CppRuntimeInterfaceOffsetPair **)(unaff_EDI.__klassIndex + 0x58);
  bVar93 = CARRY1(*(byte *)ppIVar104,bVar90) || CARRY1(*(char *)ppIVar104 + bVar90,bVar91);
  *(byte *)ppIVar104 = *(char *)ppIVar104 + bVar90 + bVar91;
  bVar87 = (byte)pbVar97;
  bVar91 = CARRY1(bVar87,bVar87) || CARRY1(bVar87 * '\x02',bVar93);
  bVar88 = bVar87 * '\x02' + bVar93;
  puVar28 = (undefined4 *)CONCAT31((int3)((uint)pbVar97 >> 8),bVar88);
  pbVar44 = pbVar94 + (int)puVar28 * 2 + 0x5a491053;
  bVar45 = *pbVar44;
  bVar83 = (byte)((uint)pbVar97 >> 8);
  bVar84 = *pbVar44;
  *pbVar44 = bVar84 + bVar83 + bVar91;
  bVar91 = CARRY1(bVar90,bVar98) ||
            CARRY1(bVar90 + bVar98,CARRY1(bVar45,bVar83) || CARRY1(bVar84 + bVar83,bVar91));
  pbVar44 = (byte *)((int)puVar28 + -0x27efaca5);
  bVar93 = CARRY1(*pbVar44,bVar88) || CARRY1(*pbVar44 + bVar88,bVar91);
  *pbVar44 = *pbVar44 + bVar88 + bVar91;
  bVar45 = bVar83 + (byte)pbVar94;
  bVar91 = CARRY1(bVar83,(byte)pbVar94) || CARRY1(bVar45,bVar93);
  pbVar94 = (byte *)CONCAT22((short)((uint)pbVar97 >> 0x10),CONCAT11(bVar45 + bVar93,bVar87));
  puVar28[-1] = puVar28;
  pbVar44 = (byte *)(puVar28 + 0x18);
  bVar93 = CARRY1(*pbVar44,bVar98) || CARRY1(*pbVar44 + bVar98,bVar91);
  *pbVar44 = *pbVar44 + bVar98 + bVar91;
  puVar28[-2] = puVar28;
  bVar84 = *pbVar94;
  bVar45 = *pbVar94;
  *pbVar94 = bVar45 + bVar88 + bVar93;
  puVar5 = (undefined1 *)puVar28[-2];
  iVar99 = puVar28[-1];
  puVar105 = (undefined1 *)*puVar28;
  pbVar94 = (byte *)puVar28[2];
  iVar81 = puVar28[3];
  piVar59 = (int *)puVar28[4];
  iVar47 = puVar28[5];
  puVar28[5] = pbVar94;
  bVar95 = (byte)((uint)pbVar94 >> 8);
  *(char *)(iVar47 + -0x59efac9f) =
       *(char *)(iVar47 + -0x59efac9f) + bVar95 +
       (CARRY1(bVar84,bVar88) || CARRY1(bVar45 + bVar88,bVar93));
  puVar103 = (ushort *)(pbVar94 + 0x10);
  sVar106 = ((ushort)iVar81 & 3) - (*puVar103 & 3);
  *puVar103 = *puVar103 + (ushort)(0 < sVar106) * sVar106;
  uVar107 = (undefined2)((uint)iVar47 >> 0x10);
  sVar106 = (ushort)(byte)iVar47 * (ushort)pbVar94[0x53];
  iVar47 = CONCAT22(uVar107,sVar106);
  bVar90 = (byte)((ushort)sVar106 >> 8);
  pbVar44 = (byte *)(iVar47 + 0x74105364);
  bVar91 = CARRY1(*pbVar44,bVar90) || CARRY1(*pbVar44 + bVar90,bVar90 != 0);
  *pbVar44 = *pbVar44 + bVar90 + (bVar90 != 0);
  *(byte **)((int)puVar28 + 0xf) = pbVar94;
  pbVar44 = (byte *)(iVar47 + 0x6105383);
  bVar83 = (byte)sVar106;
  bVar93 = CARRY1(*pbVar44,bVar83) || CARRY1(*pbVar44 + bVar83,bVar91);
  *pbVar44 = *pbVar44 + bVar83 + bVar91;
  *(byte **)((int)puVar28 + 0xb) = pbVar94;
  pbVar44 = (byte *)(iVar47 + -0x7fefac7d);
  bVar45 = *pbVar44;
  bVar84 = *pbVar44;
  *pbVar44 = bVar84 + bVar83 + bVar93;
  puVar85 = (uint *)(pbVar94 + 0x10);
  uVar108 = (uint)(CARRY1(bVar45,bVar83) || CARRY1(bVar84 + bVar83,bVar93));
  uVar82 = *puVar85;
  uVar109 = *puVar85;
  *puVar85 = (uVar109 - 0x80) + uVar108;
  puVar85 = (uint *)(pbVar94 + 0x10);
  uVar82 = (uint)(0x7f < uVar82 || CARRY4(uVar109 - 0x80,uVar108));
  bVar91 = 0x42 < *puVar85 || CARRY4(*puVar85 - 0x43,uVar82);
  *puVar85 = (*puVar85 - 0x43) + uVar82;
  *(byte **)((int)puVar28 + 7) = pbVar94;
  pbVar44 = (byte *)(iVar99 + 0x65);
  bVar93 = CARRY1(*pbVar44,bVar95) || CARRY1(*pbVar44 + bVar95,bVar91);
  *pbVar44 = *pbVar44 + bVar95 + bVar91;
  *(byte **)((int)puVar28 + 3) = pbVar94;
  pbVar44 = pbVar94 + 0x38105366;
  bVar87 = (byte)((uint)piVar59 >> 8);
  bVar91 = CARRY1(*pbVar44,bVar87) || CARRY1(*pbVar44 + bVar87,bVar93);
  *pbVar44 = *pbVar44 + bVar87 + bVar93;
  sVar106 = (short)((int)puVar28 + 3) + -4;
  iVar110 = CONCAT22((short)((uint)((int)puVar28 + 3) >> 0x10),sVar106);
  puVar28 = (undefined4 *)segment(in_SS,sVar106);
  *puVar28 = pbVar94;
  bVar88 = (byte)pbVar94;
  bVar93 = CARRY1(bVar83,bVar88) || CARRY1(bVar83 + bVar88,bVar91);
  bVar98 = bVar83 + bVar88 + bVar91;
  pbVar44 = (byte *)CONCAT31((int3)((uint)iVar47 >> 8),bVar98);
  *(short *)(iVar110 + -2) = (short)pbVar94;
  bVar84 = *pbVar44;
  bVar45 = *pbVar44;
  *pbVar44 = bVar45 + bVar95 + bVar93;
  sVar106 = (short)(iVar110 + -2) + -4;
  iVar111 = CONCAT22((short)((uint)(iVar110 + -2) >> 0x10),sVar106);
  puVar28 = (undefined4 *)segment(in_SS,sVar106);
  *puVar28 = pbVar94;
  pcVar29 = (char *)(iVar81 + 0x1e105368);
  *pcVar29 = *pcVar29 + bVar90 + (CARRY1(bVar84,bVar95) || CARRY1(bVar45 + bVar95,bVar93));
  iVar47 = *(int *)(pbVar94 + 0x10) * 0xADDR;
  *(uint *)(pbVar94 + 0x53) = *(uint *)(pbVar94 + 0x53) ^ (uint)puVar105;
  bVar45 = *pbVar94;
  *pbVar94 = *pbVar94 + bVar98;
  pbVar97 = puVar5 + 1;
  uVar51 = in((short)iVar47);
  *puVar5 = uVar51;
  *(byte **)(iVar111 + -4) = pbVar94;
  pbVar92 = (byte *)(iVar99 + -1 + (int)puVar105 * 2);
  bVar91 = CARRY1(*pbVar92,bVar90) || CARRY1(*pbVar92 + bVar90,CARRY1(bVar45,bVar98));
  *pbVar92 = *pbVar92 + bVar90 + CARRY1(bVar45,bVar98);
  *(byte **)(iVar111 + -8) = pbVar94;
  pbVar92 = (byte *)(iVar99 + 0x3810536d);
  bVar93 = CARRY1(*pbVar92,bVar98) || CARRY1(*pbVar92 + bVar98,bVar91);
  *pbVar92 = *pbVar92 + bVar98 + bVar91;
  out(*(undefined4 *)(iVar99 + -1),(short)iVar47);
  *(byte **)(iVar111 + -0xc) = pbVar94;
  bVar84 = (byte)iVar47 + bVar87;
  bVar91 = CARRY1((byte)iVar47,bVar87) || CARRY1(bVar84,bVar93);
  bVar84 = bVar84 + bVar93;
  pbVar89 = (byte *)CONCAT31((int3)((uint)iVar47 >> 8),bVar84);
  pbVar96 = (byte *)(iVar99 + 7);
  out(*(undefined4 *)(iVar99 + 3),(short)pbVar89);
  puVar5 = (undefined1 *)(iVar111 + -0x10);
  *(byte **)(iVar111 + -0x10) = pbVar94;
  pbVar92 = pbVar44 + -0x59efac90;
  bVar45 = *pbVar92;
  bVar83 = *pbVar92 + bVar95;
  bVar93 = CARRY1(*pbVar92,bVar95) || CARRY1(bVar83,bVar91);
  *pbVar92 = bVar83 + bVar91;
  if (SCARRY1(bVar45,bVar95) == SCARRY1(bVar83,bVar91)) {
    in((short)pbVar89);
    puVar5 = (undefined1 *)(iVar111 + -0x10);
    puVar112 = puRam_?;
code_?:
    puRam_? = puVar112;
    bVar45 = *pbVar97;
    bVar84 = *pbVar97 + (byte)pbVar94;
    *pbVar97 = bVar84 + bVar93;
    *(uint *)(pbVar94 + 0x10) =
         *(int *)(pbVar94 + 0x10) + -0x33333334 +
         (uint)(CARRY1(bVar45,(byte)pbVar94) || CARRY1(bVar84,bVar93));
    puVar112 = puVar5 + -4;
    *(undefined1 **)(puVar5 + -4) = puVar105;
    *(undefined4 *)(puVar5 + -8) = 0xffffffff;
    *(undefined **)(puVar5 + -0xc) = &DAT_?;
    *(undefined4 *)(puVar5 + -0x10) = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = puVar5 + -0x10;
    puVar113 = puVar5 + -0x2c;
    bVar91 = cRam_? == '\0';
code_?:
    *(byte **)(puVar113 + -4) = pbVar94;
    puVar114 = puVar113 + -8;
    *(byte **)(puVar113 + -8) = pbVar96;
    puVar105 = puVar112;
code_?:
    pbVar96 = *(byte **)(puVar105 + 0xc);
    puVar115 = puVar114 + -4;
    *(byte **)(puVar114 + -4) = pbVar97;
code_?:
    *(undefined1 **)(puVar105 + -0x10) = puVar115;
    puVar5 = puVar115;
    puVar28 = (undefined4 *)puVar115;
    if (!bVar91) goto code_?;
  }
  else {
    bVar45 = *pbVar96;
    bVar83 = *pbVar96;
    *pbVar96 = bVar83 + bVar88 + bVar93;
    if (CARRY1(bVar45,bVar88) || CARRY1(bVar83 + bVar88,bVar93)) {
      bVar45 = pbVar96[(int)piVar59 * 2];
      pbVar96[(int)piVar59 * 2] = bVar45 << 1 | 1;
      *piVar59 = *piVar59 + iVar111 + -0x10 + (uint)((bVar45 & 0x80) != 0);
      *pbVar44 = *pbVar44 + bVar98;
      pbVar44 = pbVar44 + 100;
      bVar93 = CARRY1(*pbVar44,bVar84);
      *pbVar44 = *pbVar44 + bVar84;
      puVar112 = (undefined1 *)(iVar111 + -0x10);
      goto code_?;
    }
    pbVar92 = pbVar89 + 0x59105372;
    bVar91 = CARRY1(*pbVar92,bVar95);
    *pbVar92 = *pbVar92 + bVar95;
    if (!bVar91) {
      bVar93 = CARRY1(*pbVar44,bVar98);
      *pbVar44 = *pbVar44 + bVar98;
      puVar5 = (undefined1 *)(iVar111 + -0x10);
      puVar112 = puRam_?;
      goto code_?;
    }
    bVar83 = (byte)piVar59;
    bVar45 = bVar83 + bVar90;
    bVar93 = CARRY1(bVar83,bVar90) || CARRY1(bVar45,bVar91);
    bVar87 = bVar45 + bVar91;
    puVar5 = (undefined1 *)(iVar111 + -0x10);
    puVar112 = (undefined1 *)(iVar111 + -0x10);
    if (!CARRY1(bVar83,bVar90) && !CARRY1(bVar45,bVar91)) goto code_?;
    pbVar92 = pbVar94 + 0x74;
    bVar91 = CARRY1(*pbVar92,bVar84) || CARRY1(*pbVar92 + bVar84,bVar93);
    *pbVar92 = *pbVar92 + bVar84 + bVar93;
    puVar114 = (undefined1 *)(iVar111 + -0x14);
    puVar113 = (undefined1 *)(iVar111 + -0x14);
    puVar115 = (undefined1 *)(iVar111 + -0x14);
    puVar28 = (undefined4 *)(iVar111 + -0x14);
    puVar5 = (undefined1 *)(iVar111 + -0x14);
    *(byte **)(iVar111 + -0x14) = pbVar94;
    bVar93 = CARRY1(bVar88,bVar87) || CARRY1(bVar88 + bVar87,bVar91);
    bVar45 = bVar88 + bVar87 + bVar91;
    pbVar94 = (byte *)CONCAT31((int3)((uint)pbVar94 >> 8),bVar45);
    if (bVar45 == 0) {
      pbVar94 = pbVar94 + 0x56;
      *pbVar94 = *pbVar94 + bVar84;
      bVar91 = *pbVar94 == 0;
      goto code_?;
    }
    pbVar92 = puVar105 + 0xd105375;
    bVar102 = CARRY1(*pbVar92,bVar45) || CARRY1(*pbVar92 + bVar45,bVar93);
    *pbVar92 = *pbVar92 + bVar45 + bVar93;
    bVar91 = *pbVar92 == 0;
    puVar112 = puVar105;
    if (bVar102 || bVar91) goto code_?;
    bVar91 = CARRY1(*pbVar89,bVar95) || CARRY1(*pbVar89 + bVar95,bVar102);
    *pbVar89 = *pbVar89 + bVar95 + bVar102;
    if (bVar91 || *pbVar89 == 0) {
      bVar91 = (bVar98 | 0x57) == 0;
      goto code_?;
    }
    pbVar92 = (byte *)(iVar99 + -0x70efac83);
    bVar83 = *pbVar92;
    bVar45 = *pbVar92;
    bVar88 = *pbVar92 + bVar84;
    bVar93 = CARRY1(bVar83,bVar84) || CARRY1(bVar88,bVar91);
    *pbVar92 = bVar88 + bVar91;
    if ((!CARRY1(bVar83,bVar84) && !CARRY1(bVar88,bVar91)) && *pbVar92 != 0) {
      iVar81 = CONCAT31((int3)(CONCAT22(uVar107,CONCAT11(bVar98 / 0x37,bVar98)) >> 8),bVar98 % 0x37);
      uVar116 = (ushort)iVar81;
      *(uint *)(iVar111 + -0x18) =
           (uint)(in_NT & 1) * 0x4000 |
           (uint)(SCARRY1(bVar45,bVar84) != SCARRY1(bVar88,bVar91)) * 0x800 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(uVar116 == 0) * 0x40 |
           (uint)(bVar16 | in_AF & 1) * 0x10 | (uint)((POPCOUNT(uVar116 & 0xff) & 1U) == 0) * 4 |
           (uint)bVar93 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(CONCAT31((int3)((uint)(puVar105 + (uint)bVar93 + iVar81) >> 8),
                            (byte)(puVar105 + (uint)bVar93 + iVar81) & (byte)((uint)iVar47 >> 8)) +
                  -0x6c))();
      return;
    }
    pbVar92 = pbVar44 + -0x7fefac88;
    bVar45 = *pbVar92;
    bVar84 = *pbVar92;
    *pbVar92 = bVar84 + bVar98 + bVar93;
    puVar85 = (uint *)(pbVar94 + 0x10);
    uVar82 = (uint)(CARRY1(bVar45,bVar98) || CARRY1(bVar84 + bVar98,bVar93));
    bVar16 = 0xffffffea < *puVar85 || CARRY4(*puVar85 + 0x15,uVar82);
    *puVar85 = *puVar85 + 0x15 + uVar82;
    if ((POPCOUNT(*puVar85 & 0xff) & 1U) != 0) {
      bVar91 = CARRY1(*pbVar44,bVar90) || CARRY1(*pbVar44 + bVar90,bVar16);
      *pbVar44 = *pbVar44 + bVar90 + bVar16;
      if ((POPCOUNT(*pbVar44) & 1U) != 0) {
        *(int *)(pbVar94 + 0x5c608c4) = *(int *)(pbVar94 + 0x5c608c4) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar45 = *pbVar97;
      bVar84 = *pbVar97 + bVar98;
      bVar16 = CARRY1(*pbVar97,bVar98) || CARRY1(bVar84,bVar91);
      *pbVar97 = bVar84 + bVar91;
      puVar5 = (undefined1 *)(iVar111 + -0x14);
      if ((SCARRY1(bVar45,bVar98) != SCARRY1(bVar84,bVar91)) == (char)*pbVar97 < '\0') {
        pbVar89 = pbVar89 + -0x6eefac84;
        bVar45 = *pbVar89;
        bVar84 = *pbVar89 + bVar87;
        bVar93 = CARRY1(*pbVar89,bVar87) || CARRY1(bVar84,bVar16);
        *pbVar89 = bVar84 + bVar16;
        puVar5 = (undefined1 *)(iVar111 + -0x14);
        puVar112 = puRam_?;
        if (*pbVar89 == 0 ||
            (SCARRY1(bVar45,bVar87) != SCARRY1(bVar84,bVar16)) != (char)*pbVar89 < '\0') {
          *(int *)(pbVar94 + 0x7f80087d) =
               *(int *)(pbVar94 + 0x7f80087d) + CONCAT31((int3)((uint)piVar59 >> 8),bVar87);
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  *(JoinUIUpdater__Class ***)(puVar5 + -4) = &TypeInfo__JoinUIUpdater;
  puVar117 = puVar5 + -8;
  *(undefined **)(puVar5 + -8) = &UNK_?;
  func_?();
  *(MethodInfo ***)(puVar117 + -4) =
       &
       MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
  ;
  puVar118 = puVar117 + -8;
  *(undefined **)(puVar117 + -8) = &UNK_?;
  func_?();
  puVar28 = (undefined4 *)(puVar118 + 8);
  cRam_? = '\x01';
code_?:
  iVar47 = *(int *)(puVar105 + 8);
  if (*(char *)(iVar47 + 0xc) == '\0') {
    puVar28[-1] = 0;
    puVar28[-2] = &UNK_?;
    MVar119 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)puVar28[-1]);
    puVar120 = puVar28 + 1;
    puVar121 = puVar28 + 1;
    puVar122 = puVar28 + 1;
    if (pbVar96 != (byte *)0x0) {
      if (MVar119 != MVJoinState__Enum_Playing) {
        puVar105[8] = pbVar96[8];
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          *puVar28 = TypeInfo__JoinUIUpdater;
          puVar123 = puVar28 + -1;
          puVar28[-1] = &UNK_?;
          func_?();
          puVar121 = (undefined4 *)((int)puVar123 + 4);
        }
        *(undefined4 *)((int)puVar121 + -4) = 0;
        *(undefined4 *)((int)puVar121 + -8) = *(undefined4 *)(puVar105 + 8);
        *(undefined **)((int)puVar121 + -0xc) = &UNK_?;
        JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                  (*(MVEventCodes__Enum *)((int)puVar121 + -8),*(MethodInfo **)((int)puVar121 + -4));
        puVar120 = (undefined4 *)((int)puVar121 + 8);
      }
      bVar45 = pbVar96[8];
      *(undefined4 *)((int)puVar120 + -4) = 0;
      puVar105[8] = bVar45;
      *(byte **)((int)puVar120 + -8) = pbVar96;
      *(undefined4 *)((int)puVar120 + -0xc) = *(undefined4 *)(puVar105 + 8);
      *(undefined4 *)(puVar105 + -4) = 0;
      *(int *)((int)puVar120 + -0x10) = iVar47;
      *(undefined **)((int)puVar120 + -0x14) = &UNK_?;
      MVNetworkGame_EventHandling_HandleEvent
                (*(MVNetworkGame_EventHandling **)((int)puVar120 + -0x10),
                 *(MVEventCodes__Enum *)((int)puVar120 + -0xc),*(EventData **)((int)puVar120 + -8),
                 *(MethodInfo **)((int)puVar120 + -4));
      *unaff_FS_OFFSET = *(undefined4 *)(puVar105 + -0xc);
      return;
    }
  }
  else {
    iVar47 = *(int *)(iVar47 + 0x10);
    puVar122 = puVar28;
    if (iVar47 != 0) {
      puVar28[-1] = 
      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
      ;
      puVar28[-2] = pbVar96;
      puVar28[-3] = iVar47;
      puVar28[-4] = &UNK_?;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)puVar28[-3],(Object *)puVar28[-2],
                 (MethodInfo *)puVar28[-1]);
      *unaff_FS_OFFSET = *(undefined4 *)(puVar105 + -0xc);
      return;
    }
  }
  puVar124 = (undefined1 *)((int)puVar122 + -4);
  *(undefined **)((int)puVar122 + -4) = &UNK_?;
  uVar34 = func_?();
  *(undefined4 *)(puVar105 + -0x18) = uVar34;
  *(undefined **)(puVar124 + -4) = &UNK_?;
  *(undefined1 **)(puVar124 + -8) = puVar105 + -0x18;
  *(undefined **)(puVar124 + -0xc) = &UNK_?;
  func_?();
  pcVar125 = (code *)swi(3);
  (*pcVar125)();
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

