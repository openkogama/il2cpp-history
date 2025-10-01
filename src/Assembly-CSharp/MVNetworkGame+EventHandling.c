
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


/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  pvStack_4 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_4;
  ppIStack_5 = (Il2CppClass **)&stack0xffffff6c;
  ppIVar6 = (Il2CppClass **)&stack0xffffff6c;
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    ppIVar6 = ppIStack_5;
  }
  ppIStack_5 = ppIVar6;
  pMStack_7 = (MVPlayer *)0x0;
  BStack_8.m_value = 0;
  VStack_9.x = 0.0;
  VStack_9.y = 0.0;
  VStack_9.z = 0.0;
  _Var61 = (_union_86)this;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Int32->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 == pIVar15) {
            piVar16 = (int32_t *)func_?();
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pWVar18 < 0;
      _Var61 = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar18->fields)._.worldObjectClientManager;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)photonEvent < 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Var61 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x12,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = unaff_EDI.__klassIndex < 0;
          if (unaff_EDI.dummy == (MVAvatar__Class *)0x0) break;
          if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
            piVar16 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)unaff_EDI.typeHandle,*piVar16,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          bVar19 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment;
          bVar20 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          bVar10 = bVar19 < bVar20;
          cVar11 = SBORROW1(bVar19,bVar20);
          cVar12 = (char)(bVar19 - bVar20) < '\0';
          if (!(bool)bVar10) {
            pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1];
            bVar10 = pDVar21 < 
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            cVar11 = SBORROW4((int)pDVar21,
                              (int)
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
            cVar12 = (int)pDVar21 -
                     (int)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     < 0;
            if (pDVar21 ==
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
            goto code_?;
          }
code_?:
          func_?();
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar17->fields).worldNetwork;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pWVar18 < 0;
        if (pWVar18 != (WorldNetwork *)0x0) {
          pMVar23 = (pWVar18->fields)._.worldObjectClientManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar23 < 0;
          if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                      (pMVar23,_Var61.__klassIndex,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar17->fields).worldNetwork;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pWVar18 < 0;
        if (pWVar18 != (WorldNetwork *)0x0) {
          pMVar23 = (pWVar18->fields)._.worldObjectClientManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar23 < 0;
          if (pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar23,_Var61.__klassIndex,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (this->fields).dynamicEventCallbackManager;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)unaff_ESI < 0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar24 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pEVar24 < 0;
      if (pEVar24 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar24,eventCode,
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
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_07 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)this_07 < 0;
          if (this_07 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  (this_07,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)unaff_ESI < 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager ==
                  (GameEventManager *)0x0) {
                pSVar26 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar26 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pGVar27 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pGVar27 < 0;
              if (pGVar27 != (GameEventManager *)0x0) {
                (*(code *)(pGVar27->fields).AvatarCommandsPlayMode)();
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Int32->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 == pIVar15) {
            piVar16 = (int32_t *)func_?();
            MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                      ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pWVar18 < 0;
      _Var61 = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        pMVar28 = (pWVar18->fields)._.worldInventory;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)photonEvent < 0;
        _Var61 = (_union_86)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var61.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x31,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar28 < 0;
          if (pMVar28 == (MVWorldInventory *)0x0) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          unaff_EDI.typeHandle = _Var61.typeHandle;
          if (_Var61.dummy == (MVAvatar__Class *)0x0) {
code_?:
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)unaff_ESI < 0;
            _Var61 = unaff_EDI;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar14 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar15 = (TypeInfo__System__Int32->_0).element_class;
              bVar10 = pIVar14 < pIVar15;
              cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
              cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
              if (pIVar14 != pIVar15) goto code_?;
              puVar29 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar29;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (pMVar28->fields).runtimePrototypes;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)this_00 < 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar30 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                this_08 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (this_08,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pRVar30 < 0;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (pRVar30 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar30,this_08,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_4;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = unaff_EDI.__klassIndex < 0;
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pWVar18 < 0;
      _Var61 = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar18->fields)._.worldInventory;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)photonEvent < 0;
        _Var61 = (_union_86)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = unaff_EDI.__klassIndex < 0;
          _Var61 = unaff_EDI;
          if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pOVar13 < 0;
            if (pOVar13 != (Object *)0x0) {
              pIVar14 = (pOVar13->klass->_0).element_class;
              pIVar15 = (TypeInfo__System__Single->_0).element_class;
              bVar10 = pIVar14 < pIVar15;
              cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
              cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
              if (pIVar14 != pIVar15) goto code_?;
              pfVar31 = (float *)func_?();
              fVar32 = *pfVar31;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)unaff_ESI < 0;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                pIVar14 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                pIVar15 = (TypeInfo__System__Int32->_0).element_class;
                bVar10 = pIVar14 < pIVar15;
                cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                if (pIVar14 != pIVar15) goto code_?;
                puVar29 = (undefined4 *)func_?();
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar29;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pDVar33 = (Dictionary_2_System_Int32_System_Object_ *)
                          unaff_EDI.type[1].data.typeHandle;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pDVar33 < 0;
                if (pDVar33 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  pRVar30 = (RuntimePrototypeCubeModel *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      (pDVar33,(int32_t)unaff_ESI,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                      );
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pRVar30 < 0;
                  if (pRVar30 != (RuntimePrototypeCubeModel *)0x0) {
                    (pRVar30->fields).PendingScaleUpdate.hasValue = 0;
                    *(undefined3 *)&(pRVar30->fields).PendingScaleUpdate.field_0x1 = 0;
                    (pRVar30->fields).PendingScaleUpdate.value = 0.0;
                    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                              (pRVar30,fVar32,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_4;
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
  case MVEventCodes__Enum_AddLink:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = _Var61;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar16,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar17,_Var61.__klassIndex,iVar34,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar36 = (FriendStatus__Enum *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar17,_Var61.__klassIndex,iVar34,*pFVar36,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar17,*piVar16,_Var61.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar17,*piVar16,_Var61.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar17,_Var61.__klassIndex,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar17,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)_Var61.typeHandle,*piVar16,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar17->fields)._NetworkGameStateListener_k__BackingField;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = (_union_86)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        _Var61 = (_union_86)photonEvent;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var46 = (_union_86 *)func_?();
          _Var61 = (_union_86)p_Var46->dummy;
          puVar29 = (undefined4 *)func_?();
          pGVar27 = (GameEventManager *)*puVar29;
          p_Var46 = (_union_86 *)func_?();
          _Stack_28 = *p_Var46;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (unaff_ESI->_0).byval_arg.data = _Stack_28;
          ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager = pGVar27;
          (unaff_ESI->_0).namespaze = (char *)_Var61;
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar17 < 0;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            iVar34 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar17,(MethodInfo *)0x0);
            *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs =
                 (Action_1_String_ *)((int)_Var61.dummy + ((int)pGVar27 - iVar34));
            pAVar37 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
                     (unaff_ESI->_0).this_arg.data.array;
            if (pAVar37 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
              pUVar38 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar38,(MethodInfo *)0x0);
              (*(pAVar37->fields)._._.invoke_impl)();
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar39 < 0;
        _Var61 = (_union_86)photonEvent;
        if (pMVar39 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar39->fields)._._ActorNr_k__BackingField;
          puVar29 = (undefined4 *)func_?();
          if ((Dictionary_2_System_Object_System_Object___Class *)*puVar29 == unaff_ESI)
          goto code_?;
          pMVar17 = (this->fields).networkGame;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar17 < 0;
          _Var61 = (_union_86)photonEvent;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            pWVar18 = (pMVar17->fields).worldNetwork;
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pWVar18 < 0;
            _Var61 = (_union_86)photonEvent;
            if (pWVar18 != (WorldNetwork *)0x0) {
              _Var8 = (_union_86)(pWVar18->fields)._.worldObjectClientManager;
              _Stack_28 = _Var8;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = _Var8.__klassIndex < 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              _Var61 = (_union_86)photonEvent;
              if (_Var8.dummy != (MVAvatar__Class *)0x0) {
                pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar16 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar16,
                           pDVar22,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = _Var61;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        pPVar40 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar40,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar29 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar29;
      pfVar31 = (float *)func_?();
      pIVar15 = (Il2CppClass *)*pfVar31;
      pfVar31 = (float *)func_?();
      VStack_9.x = *pfVar31;
      VStack_9.z = (float)_Stack_28;
      VStack_9.y = (float)pIVar15;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var46->dummy;
      puVar29 = (undefined4 *)func_?();
      uVar41 = *puVar29;
      puVar29 = (undefined4 *)func_?();
      _Var8 = _Stack_28;
      uVar42 = *puVar29;
      pMVar17 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61.dummy = (MVAvatar__Class *)0x0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        piVar16 = (int32_t *)func_?();
        VVar43.y = VStack_9.y;
        VVar43.x = VStack_9.x;
        VVar43.z = VStack_9.z;
        camDir.y = (float)uVar41;
        camDir.x = (float)uVar42;
        camDir.z = (float)_Var8.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar17,*piVar16,VVar43,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_4;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar44 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar44,pDVar22,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar16 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61.dummy = (MVAvatar__Class *)0x0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar45 = (MVTeam__Enum *)func_?();
        team = *pMVar45;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar17,*piVar16,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = _Var61;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        iVar35 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar16,iVar35,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)_Var61.typeHandle,*piVar16,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar13 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_28 = *p_Var46;
      pOVar46 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar13,pOVar46,
                           (MethodInfo *)0x0);
      uVar47 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar48 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar13 = (Object *)func_?();
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pDVar48 < 0;
      _Var61.dummy = (MVAvatar__Class *)0x0;
      if (pDVar48 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar48,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar29 = (undefined4 *)func_?();
        pMStack_49 = (MVPlayer *)*puVar29;
        uStack_50 = 0;
        pOVar13 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar48,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var46->__klassIndex;
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        _Var61.dummy = (MVAvatar__Class *)0x0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar51 = (pMVar17->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar51 < 0;
          _Var61.dummy = (MVAvatar__Class *)0x0;
          if (pMVar51 != (MVLocalObjectController *)0x0) {
            pbVar52 = (byte *)func_?();
            bVar10 = *pbVar52;
            piVar16 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar51,*piVar16,(int32_t)pMStack_49,_Stack_24.__klassIndex,(uint)bVar10,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
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
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar29 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar29;
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar17,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar53 < 0;
        _Var61 = unaff_EDI;
        if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar53,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          _Var61 = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
             (iVar54 = func_?(), iVar54 == 0)) goto code_?;
          iVar54 = func_?();
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = iVar54 < 0;
          if (iVar54 != 0) {
            func_?();
            func_?();
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      _Var61.dummy = (void *)func_?();
      pOVar13 = (Object *)func_?();
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var61.typeHandle
                   ,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var46->__klassIndex;
        uStack_50 = 0;
        pOVar13 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var61.typeHandle
                   ,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var46 = (_union_86 *)func_?();
        _Stack_34 = *p_Var46;
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar53 < 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar53,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            pMVar55 = (MVWorldObjectSpawner *)func_?();
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pMVar55 < 0;
            if (pMVar55 != (MVWorldObjectSpawner *)0x0) {
              pMStack_49 = (MVPlayer *)(pMVar55->fields).spawnWorldObjectID;
              uStack_56 = 3;
              pOVar13 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         _Var61.typeHandle,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar29 = (undefined4 *)func_?();
              pDStack_57 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar29;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar29 = (undefined4 *)func_?();
              pMStack_58 = (MVWorldObject *)*puVar29;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              p_Var46 = (_union_86 *)func_?();
              _Stack_24 = (_union_86)p_Var46->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              p_Var46 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var46->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar29 = (undefined4 *)func_?();
              VStack_9.z = (float)*puVar29;
              pMVar17 = (this->fields).networkGame;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pMVar17 < 0;
              _Var61 = (_union_86)this;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pWVar18 = (pMVar17->fields).worldNetwork;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pWVar18 < 0;
                if (pWVar18 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar18,(int32_t)pMStack_58,0,1,(int32_t)pMStack_49,(int32_t)pDStack_57
                             ,_Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar17 = (this->fields).networkGame;
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pMVar17 < 0;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar17,(MethodInfo *)0x0);
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)pMVar53 < 0;
                    if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_58 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar53,(int32_t)pDStack_57,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      _Var61 = (_union_86)
                               TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                      if (_Var61.dummy == (MVAvatar__Class *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        _Var61.dummy = (void *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)_Var61.typeHandle,
                                   (Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)_Var61;
                        func_?();
                      }
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)pMStack_58 < 0;
                      if (pMStack_58 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar17 = (this->fields).networkGame;
                        bVar10 = 0;
                        cVar11 = '\0';
                        cVar12 = (int)pMVar17 < 0;
                        if (pMVar17 != (MVNetworkGame *)0x0) {
                          pMVar51 = (pMVar17->fields)._PlayerController_k__BackingField;
                          pMStack_58 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar10 = 0;
                          cVar11 = '\0';
                          cVar12 = (int)pMVar51 < 0;
                          _Var61.dummy = (MVAvatar__Class *)0x0;
                          if (pMVar51 != (MVLocalObjectController *)0x0) {
                            pbVar52 = (byte *)func_?();
                            bVar10 = *pbVar52;
                            piVar16 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar51,*piVar16,(int32_t)pDStack_57,_Stack_34.__klassIndex,
                                       (uint)bVar10,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      (pMVar55,(int32_t)VStack_9.z,(MethodInfo *)0x0);
                            *unaff_FS_OFFSET = pvStack_4;
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
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar1 = (undefined1 *)func_?();
      uVar59 = *puVar1;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar31 = (float *)func_?();
      pFVar60 = (FieldInfo *)*pfVar31;
      _Stack_34.dummy = (void *)func_?();
      uStack_56 = uVar59;
      pOVar13 = (Object *)func_?();
      VStack_9.z = (float)pFVar60;
      pOVar46 = (Object *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar13,pOVar46,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      pMVar61 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar15 = (pMVar61->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar15->vtable[0].methodPtr & 0x100) == 0) {
        pIVar15 = (Il2CppClass *)func_?();
      }
      if (pIVar15->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar15 = (pMVar61->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar15->vtable[0].methodPtr & 0x100) == 0) {
        pIVar15 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar15->static_fields;
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar62 = (Byte__Array *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pWVar18 = (pMVar17->fields).worldNetwork;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pWVar18 < 0;
        _Var61 = unaff_EDI;
        if (pWVar18 != (WorldNetwork *)0x0) {
          this_01 = (pWVar18->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,pBVar62,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)this_01 < 0;
          _Var61.dummy = (MVAvatar__Class *)0x0;
          if (this_01 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_01,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pWVar18 = (pMVar17->fields).worldNetwork;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pWVar18 < 0;
      _Var61 = unaff_EDI;
      if (pWVar18 != (WorldNetwork *)0x0) {
        this_02 = (RuntimeEventManager *)(pWVar18->fields)._.runtimeEventManagerNetwork;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)this_02 < 0;
        _Var61 = unaff_EDI;
        if (this_02 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Var61 = (_union_86)p_Var46->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var46 = (_union_86 *)func_?();
      _Stack_24 = *p_Var46;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar63 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar63;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar29 = (undefined4 *)func_?();
      pDStack_57 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar29;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar29 = (undefined4 *)func_?();
      pMStack_49 = (MVPlayer *)*puVar29;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar64 = (bool *)func_?();
      bVar25 = *pbVar64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar65 = (char *)func_?();
      pMVar17 = (this->fields).networkGame;
      if (*pcVar65 == '\0') {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pGVar66 = (pMVar17->fields).gameStatCounterManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pGVar66 < 0;
          if (pGVar66 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar66,_Stack_28.__klassIndex,_Var61.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_57,(int32_t)pMStack_49,bVar25,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
      else {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pGVar66 = (pMVar17->fields).gameStatCounterManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pGVar66 < 0;
          if (pGVar66 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar66,_Stack_28.__klassIndex,_Stack_24.__klassIndex,_Var61.__klassIndex,
                       (int32_t)pDStack_57,(int32_t)pMStack_49,bVar25,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar62 = (Byte__Array *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pGVar66 = (pMVar17->fields).gameStatCounterManager;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pGVar66 < 0;
        _Var61 = unaff_EDI;
        if (pGVar66 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar66,pBVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar16 = (int32_t *)func_?();
      iVar34 = *piVar16;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      _Var61.dummy = (void *)func_?();
      pMVar61 = (MethodInfo *)0x0;
      pBVar62 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var61.typeHandle,pBVar62,pMVar61);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)_Var61.typeHandle,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        this_03 = (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)this_03 < 0;
        if (this_03 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_03,iVar34,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    _Var61 = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        piVar16 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)_Var61.typeHandle,*piVar16,iVar34,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar64 = (bool *)func_?();
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar67 = (pMVar17->fields)._GameCoinManager_k__BackingField;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar67 < 0;
        _Var61 = unaff_EDI;
        if (pMVar67 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar67,*pbVar64,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pOVar13 < 0;
      _Var61 = unaff_EDI;
      if (pOVar13 != (Object *)0x0) {
        pIVar14 = (pOVar13->klass->_0).element_class;
        pIVar15 = (TypeInfo__System__Int32->_0).element_class;
        bVar10 = pIVar14 < pIVar15;
        cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
        cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
        if (pIVar14 != pIVar15) goto code_?;
        p_Var46 = (_union_86 *)func_?();
        _Var61 = (_union_86)p_Var46->__klassIndex;
        pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar22 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          unaff_EDI = (_union_86)pDVar22->klass;
          bVar19 = *(byte *)(unaff_EDI.__klassIndex + 0xb8);
          bVar20 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          bVar10 = bVar19 < bVar20;
          cVar11 = SBORROW1(bVar19,bVar20);
          cVar12 = (char)(bVar19 - bVar20) < '\0';
          if (!(bool)bVar10) {
            pDVar21 = *(Dictionary_2_System_Object_System_Object___Class **)
                       ((int)((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy +
                       (uint)(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             ->_1).naturalAligment * 4 + -4);
            bVar10 = pDVar21 < 
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            cVar11 = SBORROW4((int)pDVar21,
                              (int)
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
            cVar12 = (int)pDVar21 -
                     (int)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     < 0;
            if (pDVar21 ==
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
            goto code_?;
          }
          goto code_?;
        }
code_?:
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar17,_Var61.__klassIndex,pDVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x5d,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnGetItemCategories
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var61.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    unaff_EDI.dummy = (void *)func_?();
    if (_Var61.dummy == (MVAvatar__Class *)0x0) {
      pBVar62 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar62,(MethodInfo *)0x0);
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pOVar13 < 0;
      _Var61.dummy = unaff_EDI.dummy;
      if (pOVar13 != (Object *)0x0) {
        pIVar14 = (pOVar13->klass->_0).element_class;
        pIVar15 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar10 = pIVar14 < pIVar15;
        cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
        cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
        if (pIVar14 != pIVar15) {
code_?:
          func_?();
          goto code_?;
        }
        puVar63 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)unaff_EDI >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar63);
        pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Boolean->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 != pIVar15) goto code_?;
          pbVar64 = (bool *)func_?();
          pMVar17 = (this->fields).networkGame;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar17 < 0;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar17,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar64,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
      break;
    }
    pBVar62 = (Byte__Array *)func_?();
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pBVar62 < 0;
    if (pBVar62 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar39 < 0;
        _Var61 = (_union_86)photonEvent;
        if (pMVar39 != (MVLocalPlayer *)0x0) {
          iVar54 = (pMVar39->fields)._._ActorNr_k__BackingField;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)unaff_ESI < 0;
          _Var61 = (_union_86)photonEvent;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pIVar14 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
            pIVar15 = (TypeInfo__System__Int32->_0).element_class;
            bVar10 = pIVar14 < pIVar15;
            cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
            cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pIVar14 != pIVar15) goto code_?;
            piVar68 = (int *)func_?();
            if (*piVar68 == iVar54) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar17 = (this->fields).networkGame;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pMVar17 < 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
              _Var61 = (_union_86)photonEvent;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pMVar67 = (pMVar17->fields)._GameCoinManager_k__BackingField;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pMVar67 < 0;
                _Var61 = (_union_86)photonEvent;
                if (pMVar67 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar67,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar17 = (this->fields).networkGame;
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pMVar17 < 0;
                  _Var61 = (_union_86)photonEvent;
                  if (pMVar17 != (MVNetworkGame *)0x0) {
                    pMVar69 = (pMVar17->fields).operationRequests;
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)pMVar69 < 0;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    _Var61 = (_union_86)photonEvent;
                    if (pMVar69 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_09 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (this_09,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                  (pMVar69->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)unaff_ESI < 0;
                      _Var61 = (_union_86)photonEvent;
                      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
              uStack_2 = 0;
              pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pMVar17 < 0;
              _Var61 = (_union_86)photonEvent;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                unaff_EDI = (_union_86)(pMVar17->fields).playerContainer;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = unaff_EDI.__klassIndex < 0;
                _Var61 = unaff_EDI;
                if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pOVar13 < 0;
                  if (pOVar13 != (Object *)0x0) {
                    pIVar14 = (pOVar13->klass->_0).element_class;
                    pIVar15 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar10 = pIVar14 < pIVar15;
                    cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                    cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                    if (pIVar14 != pIVar15) goto code_?;
                    pbVar64 = (bool *)func_?();
                    bVar25 = *pbVar64;
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)unaff_ESI < 0;
                    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                      pIVar14 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                      pIVar15 = (TypeInfo__System__Int32->_0).element_class;
                      bVar10 = pIVar14 < pIVar15;
                      cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                      cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                      if (pIVar14 == pIVar15) {
                        piVar16 = (int32_t *)func_?();
                        MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                  ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar16,bVar25,
                                   (MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_4;
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
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,7,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      _Var61 = unaff_EDI;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Boolean->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 == pIVar15) {
            pcVar65 = (char *)func_?();
            if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                        ((MVNetworkGame *)unaff_EDI.typeHandle,
                         (Dictionary_2_System_Object_System_Object_ *)0x0,*pcVar65 == '\0',
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
            bVar19 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment;
            bVar20 = (
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment;
            bVar10 = bVar19 < bVar20;
            cVar11 = SBORROW1(bVar19,bVar20);
            cVar12 = (char)(bVar19 - bVar20) < '\0';
            if (!(bool)bVar10) {
              pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                        (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment - 1];
              bVar10 = pDVar21 < 
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
              ;
              cVar11 = SBORROW4((int)pDVar21,
                                (int)
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
              cVar12 = (int)pDVar21 -
                       (int)
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       < 0;
              if (pDVar21 ==
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ) {
                MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                          ((MVNetworkGame *)unaff_EDI.typeHandle,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,*pcVar65 == '\0',
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
            }
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pDVar22 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = unaff_EDI.__klassIndex < 0;
      if (unaff_EDI.dummy != (MVAvatar__Class *)0x0) {
        if (pDVar22 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        bVar19 = (pDVar22->klass->_1).naturalAligment;
        bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        bVar10 = bVar19 < bVar20;
        cVar11 = SBORROW1(bVar19,bVar20);
        cVar12 = (char)(bVar19 - bVar20) < '\0';
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (!(bool)bVar10) {
          pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar22->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1];
          bVar10 = pDVar21 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          cVar11 = SBORROW4((int)pDVar21,
                            (int)
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
          cVar12 = (int)pDVar21 -
                   (int)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   < 0;
          if (pDVar21 ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
            MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                      ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar62 = (Byte__Array *)0x0;
code_?:
      pMVar17 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar62,(MethodInfo *)0x0);
      _Var61.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)_Var61.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        (pMVar17->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)_Var61;
        func_?();
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      break;
    }
    pBVar62 = (Byte__Array *)func_?();
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pBVar62 < 0;
    unaff_EDI.dummy = (MVAvatar__Class *)0x0;
    if (pBVar62 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Int32->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 == pIVar15) {
            piVar16 = (int32_t *)func_?();
            MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                      ((MVNetworkGame *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar69 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar69 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var61 = unaff_EDI;
    if (pMVar69 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar70 = (pMVar69->fields).peer;
      _Var61.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)_Var61.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pPVar70 < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar70 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar70->klass->vtable).SendOperation.method)();
        *unaff_FS_OFFSET = pvStack_4;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    _Var61.dummy = (void *)func_?();
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar13 = (Object *)func_?();
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (Object *)_Var61.typeHandle,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar71 = (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar71 < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var61 = unaff_EDI;
      if (pMVar71 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar71->fields).logicEventQueue;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        _Var61 = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)photonEvent < 0;
          _Var61 = (_union_86)photonEvent;
          if (photonEvent != (EventData *)0x0) {
            pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pOVar13 < 0;
            _Var61 = (_union_86)photonEvent;
            if (pOVar13 != (Object *)0x0) {
              pIVar14 = (pOVar13->klass->_0).element_class;
              pIVar15 = (TypeInfo__System__Int32->_0).element_class;
              bVar10 = pIVar14 < pIVar15;
              cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
              cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
              unaff_EDI = (_union_86)photonEvent;
              if (pIVar14 != pIVar15) goto code_?;
              piVar16 = (int32_t *)func_?();
              this_04 = (Dictionary_2_System_Int32_System_Single_ *)
                        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
              iVar34 = *piVar16;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)this_04 < 0;
              _Var61 = (_union_86)photonEvent;
              if (this_04 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
                bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   (this_04,iVar34,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar25 == 0) {
                  pDVar33 = (Dictionary_2_System_Int32_System_Object_ *)
                            ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
                  VStack_9.z = (float)func_?();
                  System.Core.dll::System::Runtime::CompilerServices::
                  ReadOnlyCollectionBuilder`1[System::Object]::
                  ReadOnlyCollectionBuilder_1_System_Object___ctor
                            ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_9.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pDVar33 < 0;
                  _Var61 = (_union_86)photonEvent;
                  if (pDVar33 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            (pDVar33,iVar34,(Object *)VStack_9.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pDVar33 = (Dictionary_2_System_Int32_System_Object_ *)
                          ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pDVar33 < 0;
                _Var61 = (_union_86)photonEvent;
                if (pDVar33 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  this_10 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      (pDVar33,iVar34,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)this_10 < 0;
                  _Var61 = (_union_86)photonEvent;
                  if (this_10 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_10,(Object *)photonEvent,
                               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                              );
                    *unaff_FS_OFFSET = pvStack_4;
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
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      pMVar71 = (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar71 < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var61 = unaff_EDI;
      if (pMVar71 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar71,(MethodInfo *)0x0);
        pAVar72 = (Action_1_String_ *)(pMVar71->fields).updateEvaluatorStep;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pAVar72 < 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        _Var61 = unaff_EDI;
        if (pAVar72 != (Action_1_String_ *)0x0) {
          ppOVar73 = &(pAVar72->fields)._._.m_target;
          *ppOVar73 = *ppOVar73 + 0x7d;
code_?:
          pvVar74 = (void *)WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick
                                      (0,(MethodInfo *)0x0);
          (pAVar72->fields)._._.method_ptr = pvVar74;
          (pAVar72->fields)._._.invoke_impl = (void *)0x0;
          *unaff_FS_OFFSET = pvStack_4;
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
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        _Var61 = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          puVar29 = (undefined4 *)func_?();
          pAVar72 = *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pAVar72 < 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          _Var61 = unaff_EDI;
          if (pAVar72 != (Action_1_String_ *)0x0) {
            (pAVar72->fields)._._.m_target = (Object *)*puVar29;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar17->fields).logicObjectManagerClientWrapper;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        _Var61 = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var46 = (_union_86 *)func_?();
          _Var61 = (_union_86)p_Var46->__klassIndex;
          pEVar24 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pEVar24 < 0;
          if (pEVar24 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            do {
              pMVar75 = pEVar24[1].monitor;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pMVar75 < 0;
              if (pMVar75 == (MonitorData *)0x0) goto code_?;
              if (_Var61.__klassIndex <= *(int *)(pMVar75 + 0x10)) goto code_?;
              MVNetworkGame+LogicObjectManagerClientWrapper::
              MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                        ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,
                         (MethodInfo *)0x0);
              pEVar24 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
              bVar10 = 0;
              cVar11 = '\0';
            } while (pEVar24 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0);
            cVar12 = '\0';
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = (_union_86)this;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar17,(MethodInfo *)0x0);
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)unaff_ESI < 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    pEVar24 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pEVar24 < 0;
    photonEvent = (EventData *)unaff_ESI;
    unaff_EDI = (_union_86)this;
    if (pEVar24 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar53 < 0;
      if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
        pMVar76 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar53,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          pEVar24 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          bVar10 = pEVar24 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          cVar11 = SBORROW4((int)pEVar24,1);
          cVar12 = (int)((int)&pEVar24[-1].fields._.delegates + 3) < 0;
          if (pEVar24 < (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2)
          goto code_?;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar53 < 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar53,(int32_t)*(Action_1_String_ **)
                                                     &(unaff_ESI->_0).byval_arg.attrs,
                                   (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar76 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)unaff_ESI < 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar76->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar54 = func_?();
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = iVar54 < 0;
              if (iVar54 != 0) {
                uVar59 = SUB41(unaff_ESI,0);
                uVar77 = (undefined1)((uint)unaff_ESI >> 8);
                uVar78 = (undefined2)((uint)unaff_ESI >> 0x10);
                bVar25 = 0x2e;
                this_11 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_11,bVar25,(MethodInfo *)CONCAT22(uVar78,CONCAT11(uVar77,uVar59)));
                pMVar17 = (this->fields).networkGame;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pMVar17 < 0;
                if (pMVar17 != (MVNetworkGame *)0x0) {
                  pMVar51 = (pMVar17->fields)._PlayerController_k__BackingField;
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pMVar51 < 0;
                  if (pMVar51 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar51,1,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_4;
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
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      _Var61.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Stack_34.typeHandle = _Var61.typeHandle;
      if (photonEvent != (EventData *)0x0) {
        VStack_9.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xdb,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = _Var61.__klassIndex < 0;
        if (_Var61.dummy != (MVAvatar__Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          iVar34 = *piVar16;
          piVar16 = (int32_t *)func_?();
          iVar35 = *piVar16;
          puVar1 = (undefined1 *)func_?();
          uVar59 = *puVar1;
          piVar16 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar16,
                     CONCAT31((int3)((uint)puVar1 >> 8),uVar59),iVar35,iVar34,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar64 = (bool *)func_?();
      bVar25 = *pbVar64;
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
      pMVar61 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar13 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar61);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pOVar13 < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var61 = (_union_86)photonEvent;
      if (pOVar13 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar13[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar26 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar26,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar13[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar79 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pGVar79 < 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        _Var61 = (_union_86)photonEvent;
        if (pGVar79 != (GoldRewardManager *)0x0) {
          pbVar64 = (bool *)func_?();
          (pGVar79->fields).isGoldRewardGame = *pbVar64;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar64 = (bool *)func_?();
          BStack_8.m_value = *pbVar64;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_8,(MethodInfo *)0x0);
          pSVar26 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar26,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar80 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar26 = (String *)0x0;
    if (pSVar80 == (String *)0x0) {
code_?:
      pSVar26 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Server_error__,pSVar26,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    if (pSVar80->klass == TypeInfo__System__String) {
      pSVar26 = pSVar80;
    }
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pSVar26 < 0;
    if (pSVar26 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar54 = func_?();
      pMVar61 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar26 = StringLiteral_V;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = iVar54 < 0;
      _Var61 = unaff_EDI;
      if (iVar54 != 0) {
        pDVar48 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar48,(Object *)pSVar26,pMVar61);
        pbVar64 = (bool *)func_?();
        bVar25 = *pbVar64;
        pMVar17 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        _Var61 = (_union_86)pSVar26;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          piVar16 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar17,*piVar16,bVar25,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar80 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar26 = (String *)0x0;
    if (pSVar80 == (String *)0x0) {
code_?:
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar25 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar13 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pOVar13 < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var61 = unaff_EDI;
      if (pOVar13 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar13[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar13[1].monitor;
code_?:
        func_?();
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      break;
    }
    if (pSVar80->klass == TypeInfo__System__String) {
      pSVar26 = pSVar80;
    }
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pSVar26 < 0;
    photonEvent = (EventData *)0x0;
    if (pSVar26 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar21,
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
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pMVar81 = (pMVar17->fields).playerContainer;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar81 < 0;
        _Var61 = unaff_EDI;
        if (pMVar81 != (MVPlayerContainer *)0x0) {
          pMVar39 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar81,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar39 < 0;
          _Var61 = unaff_EDI;
          if (pMVar39 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar39,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar21,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        _Var61 = (_union_86)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = _Var61.__klassIndex < 0;
        if (_Var61.dummy != (MVAvatar__Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)_Var61.typeHandle,*piVar16,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar82 < 0;
          if (pMVar82 != (MVPlayer *)0x0) {
            (pMVar82->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar21,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
code_?:
      uVar47 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar47 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar13 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar21,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pOVar13 < 0;
      _Var61 = unaff_EDI;
      if (pOVar13 != (Object *)0x0) {
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        _Var61 = unaff_EDI;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pLVar83 = (pMVar17->fields).levelRewardsManager;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pLVar83 < 0;
          _Var61 = unaff_EDI;
          if (pLVar83 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar83,(Dictionary_2_System_Int32_System_Int32_ *)pOVar13[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar13 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar21,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        pLVar83 = (pMVar17->fields).levelRewardsManager;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pLVar83 < 0;
          _Var61 = unaff_EDI;
          if (pLVar83 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                      (pLVar83,(int32_t)pOVar13[1].klass,(int32_t)pOVar13[1].monitor,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar21 = unaff_ESI;
        }
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pDVar21 < 0;
        if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar21,
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
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar21,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar21 = unaff_ESI;
      }
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pDVar21 < 0;
      if (pDVar21 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
code_?:
      func_?();
      _Var61 = unaff_EDI;
code_?:
      func_?();
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar61 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pSVar26 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar61);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar26,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar61 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pKVar84 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar26,pMVar61);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar84;
      func_?();
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)unaff_ESI < 0;
      _Var61 = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pIVar14 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
        pIVar15 = (TypeInfo__System__Int32->_0).element_class;
        bVar10 = pIVar14 < pIVar15;
        cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
        cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
        if (pIVar14 == pIVar15) {
          piVar16 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
      pMVar17 = (this->fields).networkGame;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        _Var61 = (_union_86)photonEvent;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar17,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar85 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_9,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar43 = *pVVar85;
      pQVar86 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar32 = pQVar86->x;
      VStack_9.x = pQVar86->y;
      VStack_9.y = pQVar86->z;
      VStack_9.z = pQVar86->w;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = unaff_EDI;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        _Var61 = (_union_86)(pMVar17->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = _Var61.__klassIndex < 0;
        if (_Var61.dummy != (MVAvatar__Class *)0x0) {
          piVar16 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)_Var61.typeHandle,*piVar16,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar82 < 0;
          if (pMVar82 != (MVPlayer *)0x0) {
            this_05 = (pMVar82->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)this_05 < 0;
            _Var61.dummy = (MVAvatar__Class *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar16 = (int32_t *)func_?();
              rotation.y._0_1_ = SUB41(VStack_9.x,0);
              rotation.x = fVar32;
              rotation.y._1_1_ = (char)((uint)VStack_9.x >> 8);
              rotation.y._2_2_ = (short)((uint)VStack_9.x >> 0x10);
              rotation.z = VStack_9.y;
              rotation.w = VStack_9.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar16,VVar43,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar26,(MethodInfo *)unaff_ESI);
      pUVar38 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar38,(MethodInfo *)0x0);
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pMVar17 < 0;
      _Var61 = (_union_86)photonEvent;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar17->fields).playerContainer;
        pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)unaff_ESI < 0;
        _Var61 = (_union_86)photonEvent;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pOVar13 < 0;
          _Var61 = (_union_86)photonEvent;
          if (pOVar13 != (Object *)0x0) {
            pIVar14 = (pOVar13->klass->_0).element_class;
            pIVar15 = (TypeInfo__System__Int32->_0).element_class;
            bVar10 = pIVar14 < pIVar15;
            cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
            cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pIVar14 != pIVar15) goto code_?;
            piVar16 = (int32_t *)func_?();
            pMVar82 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                ((MVPlayerContainer *)unaff_ESI,*piVar16,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pMVar82 < 0;
            _Var61 = (_union_86)photonEvent;
            if (pMVar82 != (MVPlayer *)0x0) {
              MVPlayer::MVPlayer_SetupSpawnRoleManager
                        (pMVar82,(ISpawnRoleChangeHandler *)pUVar38,spawnRolesRuntimeData,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    _Var61 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar21 = unaff_ESI;
      }
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)pDVar21 < 0;
      if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar21,
                           MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                          );
    pMVar53 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)unaff_ESI < 0;
    _Var61 = unaff_EDI;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar53 < 0;
    _Var61 = unaff_EDI;
    if (pMVar53 == (MVWorldObjectClientManager *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                   (pMVar53,(int32_t)(unaff_ESI->_0).this_arg.data.__klassIndex,(MethodInfo *)0x0);
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61.typeHandle = unaff_EDI.typeHandle;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              (pMVar17,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,(MethodInfo *)0x0);
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
              (pMVar17,(int32_t)((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager,
               (MethodInfo *)0x0);
    pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd0,(MethodInfo *)0x0);
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pOVar13 < 0;
    if (pOVar13 == (Object *)0x0) break;
    pIVar14 = (pOVar13->klass->_0).element_class;
    pIVar15 = (TypeInfo__System__Boolean->_0).element_class;
    bVar10 = pIVar14 < pIVar15;
    cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
    cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
    if (pIVar14 != pIVar15) goto code_?;
    pbVar64 = (bool *)func_?();
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = unaff_EDI.__klassIndex < 0;
    if (unaff_EDI.dummy == (MVAvatar__Class *)0x0) break;
    bVar19 = (((MVNetworkGame__Class *)((Il2CppClass_0 *)&(unaff_EDI.array)->etype)->image)->_1).
             naturalAligment;
    bVar20 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    bVar10 = bVar19 < bVar20;
    cVar11 = SBORROW1(bVar19,bVar20);
    cVar12 = (char)(bVar19 - bVar20) < '\0';
    photonEvent = (EventData *)unaff_ESI;
    if (!(bool)bVar10) {
      pMVar87 = (MVAvatarSpawnRoleCreator__Class *)
                (((MVNetworkGame__Class *)((Il2CppClass_0 *)&(unaff_EDI.array)->etype)->image)->_1).
                typeHierarchy[(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1];
      bVar10 = pMVar87 < TypeInfo__MVAvatarSpawnRoleCreator;
      cVar11 = SBORROW4((int)pMVar87,(int)TypeInfo__MVAvatarSpawnRoleCreator);
      cVar12 = (int)pMVar87 - (int)TypeInfo__MVAvatarSpawnRoleCreator < 0;
      if (pMVar87 == TypeInfo__MVAvatarSpawnRoleCreator) {
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                  ((MVAvatarSpawnRoleCreator *)unaff_EDI.typeHandle,
                   (SpawnRoleBodySwitchData *)unaff_ESI,*pbVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_VehicleGotEnergy:
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)photonEvent < 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var61 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      _Var61.dummy = (void *)func_?();
      pOVar13 = (Object *)func_?();
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = _Var61.__klassIndex < 0;
      if (_Var61.dummy != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var61.typeHandle
                   ,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar16 = (int32_t *)func_?();
        iVar34 = *piVar16;
        uStack_56 = 0;
        pOVar13 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var61.typeHandle
                   ,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar17 = (this->fields).networkGame;
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar53 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar17,(MethodInfo *)0x0);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar53 < 0;
          if (pMVar53 != (MVWorldObjectClientManager *)0x0) {
            _Var61.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar53,iVar34,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar29 = (undefined4 *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar29;
            iVar54 = func_?();
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = iVar54 < 0;
            if (iVar54 != 0) {
              pMVar61 = (MethodInfo *)0x0;
              pMVar55 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar55,(int32_t)unaff_ESI,pMVar61);
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar17 = (this->fields).networkGame;
    bVar10 = 0;
    cVar11 = '\0';
    cVar12 = (int)pMVar17 < 0;
    _Var61 = unaff_EDI;
    if (pMVar17 != (MVNetworkGame *)0x0) {
      _Var61 = (_union_86)(pMVar17->fields).playerContainer;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        iVar34 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = _Var61.__klassIndex < 0;
        if (_Var61.dummy != (MVAvatar__Class *)0x0) {
          bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)_Var61.typeHandle,iVar34,&pMStack_7,
                              (MethodInfo *)0x0);
          if (bVar25 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xde,(MethodInfo *)0x0);
          puVar88 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar88);
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMStack_7 < 0;
          if (pMStack_7 != (MVPlayer *)0x0) {
            if ((pMStack_7->fields).playerState != *puVar88) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_7,eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
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
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar21 = unaff_ESI;
          }
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pDVar21 < 0;
          if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar21,(MethodInfo *)0x0);
        pMVar69 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pMVar69 < 0;
        if (pMVar69 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar69,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = unaff_EDI;
      if (photonEvent == (EventData *)0x0) break;
      this_12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfb,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)this_12 < 0;
      if (this_12 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) break;
      bVar19 = (this_12->klass->_1).naturalAligment;
      bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      bVar10 = bVar19 < bVar20;
      cVar11 = SBORROW1(bVar19,bVar20);
      cVar12 = (char)(bVar19 - bVar20) < '\0';
      if (!(bool)bVar10) {
        pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                  (this_12->klass->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment - 1];
        bVar10 = pDVar21 < 
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        cVar11 = SBORROW4((int)pDVar21,
                          (int)
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
        cVar12 = (int)pDVar21 -
                 (int)
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 < 0;
        if (pDVar21 ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
          this_13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)this_13 < 0;
          if (this_13 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pMVar61 = (MethodInfo *)photonEvent;
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
            photonEvent = (EventData *)&stack0xffffff88;
            VStack_9.y = 0.0;
            pSVar26 = (String *)pDVar89->_currentValue;
            uStack_2 = 3;
            VStack_9.z = (float)photonEvent;
            do {
              bVar25 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar25 == 0) {
                uStack_2 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)photonEvent,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar61);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
              pSVar80 = (String *)0x0;
              if (pSVar26 != (String *)0x0) {
                if (pSVar26->klass == TypeInfo__System__String) {
                  pSVar80 = pSVar26;
                }
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pSVar80 < 0;
                unaff_EDI.dummy = (MVAvatar__Class *)0x0;
                if (pSVar80 == (String *)0x0) goto code_?;
              }
              TVar90 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_12,(Object *)pSVar80,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar61 = (MethodInfo *)::StringLiteral___;
              if (TVar90.m_Index == 0) {
                str2 = (String *)0x0;
              }
              else {
                str2 = (String *)func_?();
              }
              pSVar80 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar80,(String *)pMVar61,str2,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar80,(MethodInfo *)0x0);
            } while( true );
          }
          break;
        }
      }
      goto code_?;
    case MVEventCodes__Enum_Leave:
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      _Var61 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Int32->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 != pIVar15) goto code_?;
          puVar29 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar29;
          pMVar17 = (this->fields).networkGame;
          bVar10 = 0;
          cVar11 = '\0';
          cVar12 = (int)pMVar17 < 0;
          _Var61 = (_union_86)this;
          if (pMVar17 != (MVNetworkGame *)0x0) {
            pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pMVar39 < 0;
            if (pMVar39 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI ==
                  (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar39->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
              pMVar17 = (this->fields).networkGame;
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pMVar17 < 0;
              if (pMVar17 != (MVNetworkGame *)0x0) {
                pMVar81 = (pMVar17->fields).playerContainer;
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pMVar81 < 0;
                if (pMVar81 != (MVPlayerContainer *)0x0) {
                  bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar25 == 0) {
code_?:
                    pMVar17 = (this->fields).networkGame;
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)pMVar17 < 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar81 = (pMVar17->fields).playerContainer;
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)pMVar81 < 0;
                      if (pMVar81 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_4;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar17 = (this->fields).networkGame;
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)pMVar17 < 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar81 = (pMVar17->fields).playerContainer;
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)pMVar81 < 0;
                      if (pMVar81 != (MVPlayerContainer *)0x0) {
                        pMStack_49 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar81,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pDStack_57 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_57,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_9.z = (float)func_?();
                        pOVar13 = (Object *)func_?();
                        bVar10 = 0;
                        cVar11 = '\0';
                        cVar12 = (int)pDStack_57 < 0;
                        if (pDStack_57 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_57,
                                     (Object *)VStack_9.z,pOVar13,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_56 = 3;
                          pOVar13 = (Object *)func_?();
                          bVar10 = 0;
                          cVar11 = '\0';
                          cVar12 = (int)pMStack_49 < 0;
                          if (pMStack_49 != (MVPlayer *)0x0) {
                            pUVar91 = (pMStack_49->fields)._UserProfileData_k__BackingField;
                            bVar10 = 0;
                            cVar11 = '\0';
                            cVar12 = (int)pUVar91 < 0;
                            if (pUVar91 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_57,
                                         pOVar13,(Object *)(pUVar91->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_50 = 6;
                              VStack_9.z = (float)func_?();
                              pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar10 = 0;
                              cVar11 = '\0';
                              cVar12 = (int)pMVar17 < 0;
                              if (pMVar17 != (MVNetworkGame *)0x0) {
                                this_06 = (pMVar17->fields)._Friends_k__BackingField;
                                bVar10 = 0;
                                cVar11 = '\0';
                                cVar12 = (int)this_06 < 0;
                                if (this_06 != (FriendList *)0x0) {
                                  bStack_92 = FriendList::FriendList_IsFriend
                                                        (this_06,(pMStack_49->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar13 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_57
                                             ,(Object *)VStack_9.z,pOVar13,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_57
                                             ,(MethodInfo *)0x0);
                                  pMVar17 = (this->fields).networkGame;
                                  bVar10 = 0;
                                  cVar11 = '\0';
                                  cVar12 = (int)pMVar17 < 0;
                                  if (pMVar17 != (MVNetworkGame *)0x0) {
                                    pGVar66 = (pMVar17->fields).gameStatCounterManager;
                                    bVar10 = 0;
                                    cVar11 = '\0';
                                    cVar12 = (int)pGVar66 < 0;
                                    if (pGVar66 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar66,(int32_t)unaff_ESI,
                                                 (pMStack_49->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar17 = (this->fields).networkGame;
                                      bVar10 = 0;
                                      cVar11 = '\0';
                                      cVar12 = (int)pMVar17 < 0;
                                      if (pMVar17 != (MVNetworkGame *)0x0) {
                                        pGVar66 = (pMVar17->fields).gameStatCounterManager;
                                        bVar10 = 0;
                                        cVar11 = '\0';
                                        cVar12 = (int)pGVar66 < 0;
                                        if (pGVar66 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar66,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      bVar10 = 0;
      cVar11 = '\0';
      cVar12 = (int)photonEvent < 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var61 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar10 = 0;
        cVar11 = '\0';
        cVar12 = (int)pOVar13 < 0;
        _Var61 = unaff_EDI;
        if (pOVar13 != (Object *)0x0) {
          pIVar14 = (pOVar13->klass->_0).element_class;
          pIVar15 = (TypeInfo__System__Int32->_0).element_class;
          bVar10 = pIVar14 < pIVar15;
          cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
          cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
          if (pIVar14 == pIVar15) {
            puVar29 = (undefined4 *)func_?();
            pMStack_58 = (MVWorldObject *)*puVar29;
            pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar10 = 0;
            cVar11 = '\0';
            cVar12 = (int)pOVar13 < 0;
            _Var61 = unaff_EDI;
            if (pOVar13 != (Object *)0x0) {
              pIVar14 = (pOVar13->klass->_0).element_class;
              pIVar15 = (TypeInfo__System__Int32->_0).element_class;
              bVar10 = pIVar14 < pIVar15;
              cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
              cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
              if (pIVar14 != pIVar15) goto code_?;
              piVar68 = (int *)func_?();
              iVar54 = *piVar68;
              _Var61.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (MVAvatar__Class *)0x0;
              if (_Var61.dummy != (MVAvatar__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var61.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var61.typeHandle;
                }
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = unaff_EDI.__klassIndex < 0;
                if (unaff_EDI.dummy == (MVAvatar__Class *)0x0) goto code_?;
              }
              pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar10 = 0;
              cVar11 = '\0';
              cVar12 = (int)pOVar13 < 0;
              _Var61 = unaff_EDI;
              if (pOVar13 != (Object *)0x0) {
                pIVar14 = (pOVar13->klass->_0).element_class;
                pIVar15 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar10 = pIVar14 < pIVar15;
                cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                if (pIVar14 != pIVar15) goto code_?;
                puVar63 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar63;
                pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar10 = 0;
                cVar11 = '\0';
                cVar12 = (int)pOVar13 < 0;
                if (pOVar13 != (Object *)0x0) {
                  pIVar14 = (pOVar13->klass->_0).element_class;
                  pIVar15 = (TypeInfo__System__Int32->_0).element_class;
                  bVar10 = pIVar14 < pIVar15;
                  cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                  cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                  if (pIVar14 != pIVar15) goto code_?;
                  p_Var46 = (_union_86 *)func_?();
                  _Stack_28 = *p_Var46;
                  pOVar13 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar10 = 0;
                  cVar11 = '\0';
                  cVar12 = (int)pOVar13 < 0;
                  if (pOVar13 != (Object *)0x0) {
                    pIVar14 = (pOVar13->klass->_0).element_class;
                    pIVar15 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar10 = pIVar14 < pIVar15;
                    cVar11 = SBORROW4((int)pIVar14,(int)pIVar15);
                    cVar12 = (int)pIVar14 - (int)pIVar15 < 0;
                    if (pIVar14 != pIVar15) goto code_?;
                    pbVar64 = (bool *)func_?();
                    bVar25 = *pbVar64;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                        pDVar21 = unaff_ESI;
                      }
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)pDVar21 < 0;
                      if (pDVar21 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                      goto code_?;
                    }
                    VStack_9.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pDVar21,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar17 = (this->fields).networkGame;
                    bVar10 = 0;
                    cVar11 = '\0';
                    cVar12 = (int)pMVar17 < 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar39 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar17,(MethodInfo *)0x0);
                      bVar10 = 0;
                      cVar11 = '\0';
                      cVar12 = (int)pMVar39 < 0;
                      if (pMVar39 != (MVLocalPlayer *)0x0) {
                        if (iVar54 == (pMVar39->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pvStack_4;
                          return;
                        }
                        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                    func_?();
                        MVPlayer::MVPlayer__ctor
                                  ((MVPlayer *)unaff_ESI,iVar54,(int32_t)pMStack_58,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_9.z,0,bVar25,(MethodInfo *)0x0);
                        bVar10 = 0;
                        cVar11 = '\0';
                        cVar12 = (int)unaff_ESI < 0;
                        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                          (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                          pMVar17 = (this->fields).networkGame;
                          bVar10 = 0;
                          cVar11 = '\0';
                          cVar12 = (int)pMVar17 < 0;
                          if (pMVar17 != (MVNetworkGame *)0x0) {
                            pMVar81 = (pMVar17->fields).playerContainer;
                            bVar10 = 0;
                            cVar11 = '\0';
                            cVar12 = (int)pMVar81 < 0;
                            if (pMVar81 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar81,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
                              *unaff_FS_OFFSET = pvStack_4;
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
code_?:
  func_?();
  unaff_EDI = _Var61;
code_?:
  func_?();
  _Var61 = unaff_EDI;
code_?:
  unaff_EDI = _Var61;
  func_?();
code_?:
  func_?();
  func_?();
  photonEvent = (EventData *)unaff_ESI;
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar93 = func_?();
  pcVar65 = (char *)((ulonglong)uVar93 >> 0x20);
  pEVar94 = (EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)uVar93;
  bVar95 = (byte)unaff_EBX;
  bVar19 = (byte)uVar93;
  bVar96 = (byte)((ulonglong)uVar93 >> 0x28);
  bVar20 = (byte)((ulonglong)uVar93 >> 8);
  if (cVar11 == cVar12) {
    pbVar52 = (byte *)((int)&(pEVar94->_1).genericContainerHandle + 1);
    bVar97 = CARRY1(*pbVar52,bVar95) || CARRY1(*pbVar52 + bVar95,bVar10);
    *pbVar52 = *pbVar52 + bVar95 + bVar10;
    pbVar52 = &stack0x34106579 + in_GS_OFFSET;
    bVar10 = *pbVar52;
    bVar98 = *pbVar52 + bVar19;
    bVar99 = CARRY1(*pbVar52,bVar19) || CARRY1(bVar98,bVar97);
    *pbVar52 = bVar98 + bVar97;
    bVar100 = bVar99;
    if (*pbVar52 != 0 && (SCARRY1(bVar10,bVar19) != SCARRY1(bVar98,bVar97)) == (char)*pbVar52 < '\0'
       ) {
      pbVar52 = (byte *)((int)&(((MVAvatar__Class *)(unaff_EDI.__klassIndex + 0x3a106200))->vtable).
                               OnSeatedChanged.methodPtr + 2);
      bVar10 = *pbVar52;
      bVar19 = *pbVar52 + bVar96;
      bVar100 = CARRY1(*pbVar52,bVar96) || CARRY1(bVar19,bVar99);
      *pbVar52 = bVar19 + bVar99;
      puVar1 = &stack0xfffffffc;
      if (*pbVar52 == 0 ||
          (SCARRY1(bVar10,bVar96) != SCARRY1(bVar19,bVar99)) != (char)*pbVar52 < '\0') {
        *pcVar65 = *pcVar65 + bVar20 + bVar100;
        return;
      }
      goto code_?;
    }
  }
  else {
    pEVar94 = (EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
              CONCAT31((int3)((ulonglong)uVar93 >> 8),bVar19 & bVar95);
    bVar100 = CARRY1((byte)extraout_CX,(byte)((ushort)extraout_CX >> 8));
    puVar1 = (undefined1 *)0x87c61065;
    pbVar52 = (byte *)(pcVar65 + in_GS_OFFSET + 0x36106588);
    bVar19 = *pbVar52;
    bVar10 = *pbVar52;
    *pbVar52 = bVar10 + bVar20 + bVar100;
    bVar100 = CARRY1(bVar19,bVar20) || CARRY1(bVar10 + bVar20,bVar100);
    bVar19 = bRam_?;
  }
  bRam_? = bVar19;
  *(undefined1 **)(puVar1 + 0x10) = &stack0xffffff60;
code_?:
  ((Il2CppClass_0 *)&(unaff_EDI.array)->etype)->image = (Il2CppImage *)pEVar94;
  bVar10 = puVar1[0x10];
  pbVar52 = (byte *)((int)photonEvent + in_GS_OFFSET + -0x75);
  bVar97 = CARRY1(*pbVar52,bVar10) || CARRY1(*pbVar52 + bVar10,bVar100);
  *pbVar52 = *pbVar52 + bVar10 + bVar100;
  pbVar52 = (byte *)(in_GS_OFFSET + -0x39ef9a74);
  bVar100 = CARRY1(*pbVar52,bVar96) || CARRY1(*pbVar52 + bVar96,bVar97);
  *pbVar52 = *pbVar52 + bVar96 + bVar97;
  *(undefined2 *)(puVar1 + 0x10) = in_FS;
  if (!SCARRY4(unaff_EBX,1)) {
    puVar1[in_GS_OFFSET + -0x35ef9a73] = puVar1[in_GS_OFFSET + -0x35ef9a73] + bVar95 + 1 + bVar100;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar65 = *pcVar65 + bVar10 + bVar100;
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

