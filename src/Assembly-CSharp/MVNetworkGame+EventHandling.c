
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pvStack_3 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_3;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff6c;
  puVar5 = unaff_EBX;
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
    ppIVar6 = ppIStack_4;
  }
  ppIStack_4 = ppIVar6;
  uVar7 = (undefined1)((uint)puVar5 >> 0x18);
  pMStack_8 = (MVPlayer *)0x0;
  BStack_9.m_value = 0;
  VStack_10.x = 0.0;
  VStack_10.y = 0.0;
  VStack_10.z = 0.0;
  _Var52 = (_union_86)eventCode;
  _Var56 = (_union_86)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        _Var56 = unaff_EDI;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Stack_28 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x12,(MethodInfo *)0x0);
          bVar11 = 0;
          _Var52 = (_union_86)eventCode;
          if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
          unaff_EDI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
            bVar11 = 0;
            if ((Object *)eventCode != (Object *)0x0) {
              pIVar13 = (((Object *)eventCode)->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 == pIVar14) {
                piVar15 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar15,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pMVar19 = (MVNetworkGame__Class *)(pDVar18->_0).image;
          if (((pMVar19->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar19->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar20) {
            unaff_ESI = pDVar18;
          }
          bVar11 = 0;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
        _Var56 = unaff_EDI;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var43 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var43->__klassIndex;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x12,(MethodInfo *)0x0);
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pWVar17 = (pMVar16->fields).worldNetwork;
          bVar11 = 0;
          if (pWVar17 != (WorldNetwork *)0x0) {
            pMVar22 = (pWVar17->fields)._.worldObjectClientManager;
            bVar11 = 0;
            if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar22,unaff_EDI.__klassIndex,pDVar21,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pWVar17 = (pMVar16->fields).worldNetwork;
        bVar11 = 0;
        if (pWVar17 != (WorldNetwork *)0x0) {
          pMVar22 = (pWVar17->fields)._.worldObjectClientManager;
          bVar11 = 0;
          if (pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar22,unaff_EDI.__klassIndex,pDVar21,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (this->fields).dynamicEventCallbackManager;
    bVar11 = 0;
    unaff_EDI = (_union_86)this;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      bVar11 = 0;
      if (pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar24 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar23,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar24 == 0) {
          pSVar25 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar25 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar25,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar25,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        bVar11 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pEVar23 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          bVar11 = 0;
          if (pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pEVar23,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
            bVar11 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery ==
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pSVar25 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar25 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pEVar23 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              bVar11 = 0;
              if (pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                (*(pEVar23->fields)._._.invoke_impl)();
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        _Var56 = unaff_EDI;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
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
        unaff_EDI = (_union_86)photonEvent;
        _Var52 = (_union_86)eventCode;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var56.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x31,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.typeHandle = _Var56.typeHandle;
          if ((MVWorldInventory *)eventCode == (MVWorldInventory *)0x0) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var56.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
            bVar11 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              puVar26 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar26;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (((MVWorldInventory *)eventCode)->fields).runtimePrototypes;
              bVar11 = 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar27 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                _Var52.dummy = (void *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          ((BytePacker *)_Var52.typeHandle,(Byte__Array *)unaff_EDI.typeHandle,
                           (MethodInfo *)0x0);
                bVar11 = 0;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (pRVar27 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar27,(BytePacker *)_Var52.typeHandle,(MethodInfo *)0x0);
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
          if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
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
        _Var56 = (_union_86)(pWVar17->fields)._.worldInventory;
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        _Var52 = _Var56;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI = _Var56;
          if ((_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
             (bVar11 = 0, pOVar12 != (Object *)0x0)) {
            pIVar13 = (pOVar12->klass->_0).element_class;
            pIVar14 = (TypeInfo__System__Single->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            if (pIVar13 != pIVar14) goto code_?;
            pfVar28 = (float *)func_?();
            eventCode = (MVEventCodes__Enum)*pfVar28;
            bVar11 = 0;
            _Var52 = (_union_86)eventCode;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              puVar26 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar26;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              bVar11 = 0;
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)_Var56.type[1].data.typeHandle
                  != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pRVar27 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)
                                     _Var56.type[1].data.typeHandle,(int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar11 = 0;
                if (pRVar27 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar27->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar27->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar27->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar27,(float)eventCode,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar30 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar15,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      _Var52 = (_union_86)*pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar16,unaff_EDI.__klassIndex,_Var52.__klassIndex,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      _Var52 = (_union_86)*pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar32 = (FriendStatus__Enum *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar16,unaff_EDI.__klassIndex,_Var52.__klassIndex,*pFVar32,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?();
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?();
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar15 = (int32_t *)func_?();
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar16->fields)._NetworkGameStateListener_k__BackingField;
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        _Var52.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var43 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var43->dummy;
          puVar26 = (undefined4 *)func_?();
          _Var52 = (_union_86)*puVar26;
          p_Var43 = (_union_86 *)func_?();
          _Stack_28 = *p_Var43;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (unaff_ESI->_0).byval_arg.data = _Stack_28;
          ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)_Var52;
          (unaff_ESI->_0).namespaze = (char *)unaff_EDI;
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            iVar29 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar16,(MethodInfo *)0x0);
            pMVar33 = (unaff_ESI->_0).this_arg.data.dummy;
            *(int *)&(unaff_ESI->_0).byval_arg.attrs =
                 (int)unaff_EDI.dummy + ((int)_Var52.dummy - iVar29);
            if (pMVar33 == (MVItemBusinessLogic *)0x0) goto code_?;
            pIVar34 = (unaff_ESI->_0).this_arg.data.array;
            _Var52.dummy = (void *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Var52.typeHandle,
                       (MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pIVar34 != (Il2CppArrayType *)0x0) {
              (*(code *)pIVar34->lobounds)();
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar35 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar35->fields)._._ActorNr_k__BackingField;
          puVar26 = (undefined4 *)func_?();
          if ((Dictionary_2_System_Object_System_Object___Class *)*puVar26 == unaff_ESI)
          goto code_?;
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            pWVar17 = (pMVar16->fields).worldNetwork;
            bVar11 = 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pWVar17 != (WorldNetwork *)0x0) {
              _Var56 = (_union_86)(pWVar17->fields)._.worldObjectClientManager;
              _Stack_28 = _Var56;
              _Var52.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar11 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              unaff_EDI = (_union_86)photonEvent;
              if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar15 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar15,
                           pDVar21,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar30 = *piVar15;
        pPVar36 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar36,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar26 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar26;
      pfVar28 = (float *)func_?();
      pIVar14 = (Il2CppClass *)*pfVar28;
      pfVar28 = (float *)func_?();
      VStack_10.x = *pfVar28;
      VStack_10.z = (float)_Stack_28;
      VStack_10.y = (float)pIVar14;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var43->dummy;
      pMVar31 = (MVEventCodes__Enum *)func_?();
      _Var52 = (_union_86)*pMVar31;
      puVar26 = (undefined4 *)func_?();
      _Var56 = _Stack_28;
      uVar37 = *puVar26;
      pMVar16 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        piVar15 = (int32_t *)func_?();
        VVar38.y = VStack_10.y;
        VVar38.x = VStack_10.x;
        VVar38.z = VStack_10.z;
        camDir.y = (float)_Var52;
        camDir.x = (float)uVar37;
        camDir.z = (float)_Var56.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar16,*piVar15,VVar38,camDir,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar39 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar39,pDVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    _Var52 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar15 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (_Var52.dummy != (MVNetworkGame *)0x0) {
        pMVar40 = (MVTeam__Enum *)func_?();
        team = *pMVar40;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)_Var52.typeHandle,*piVar15,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        iVar30 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar15,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar12 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      _Stack_28 = *p_Var43;
      pOVar41 = (Object *)func_?();
      pSVar25 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar12,pOVar41,
                           (MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      eventCode = 0x4000000;
      pOVar12 = (Object *)func_?();
      bVar11 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var52 = (_union_86)eventCode;
      if (pDVar43 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar26 = (undefined4 *)func_?();
        pMStack_44 = (MVPlayer *)*puVar26;
        uStack_45 = 0;
        pOVar12 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var43 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var43->__klassIndex;
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar46 = (pMVar16->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pMVar46 != (MVLocalObjectController *)0x0) {
            pbVar47 = (byte *)func_?();
            bVar11 = *pbVar47;
            piVar15 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar46,*piVar15,(int32_t)pMStack_44,_Stack_24.__klassIndex,(uint)bVar11,
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
      puVar26 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar26;
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar48,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
             (iVar49 = func_?(), iVar49 == 0)) goto code_?;
          iVar49 = func_?();
          bVar11 = 0;
          if (iVar49 != 0) {
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
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      eventCode = 0x1000000;
      pOVar12 = (Object *)func_?();
      bVar11 = 0;
      _Var52 = (_union_86)eventCode;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var43 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var43->__klassIndex;
        uStack_45 = 0;
        pOVar12 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var43 = (_union_86 *)func_?();
        _Stack_34 = *p_Var43;
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar48,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            pMVar50 = (MVWorldObjectSpawner *)func_?();
            bVar11 = 0;
            if (pMVar50 != (MVWorldObjectSpawner *)0x0) {
              pMStack_44 = (MVPlayer *)(pMVar50->fields).spawnWorldObjectID;
              uStack_51 = 3;
              pOVar12 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         unaff_EDI.typeHandle,pOVar12,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar26 = (undefined4 *)func_?();
              pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar26;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar26 = (undefined4 *)func_?();
              pMStack_53 = (MVWorldObject *)*puVar26;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              p_Var43 = (_union_86 *)func_?();
              _Stack_24 = (_union_86)p_Var43->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              p_Var43 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var43->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar26 = (undefined4 *)func_?();
              VStack_10.z = (float)*puVar26;
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_EDI = (_union_86)this;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pWVar17 = (pMVar16->fields).worldNetwork;
                bVar11 = 0;
                if (pWVar17 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar17,(int32_t)pMStack_53,0,1,(int32_t)pMStack_44,(int32_t)pDStack_52,
                             _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar16 = (this->fields).networkGame;
                  bVar11 = 0;
                  if (pMVar16 != (MVNetworkGame *)0x0) {
                    pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar16,(MethodInfo *)0x0);
                    bVar11 = 0;
                    if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_53 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar48,(int32_t)pDStack_52,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      unaff_EDI = (_union_86)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0
                         ) {
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
                        func_?();
                      }
                      bVar11 = 0;
                      if (pMStack_53 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar16 = (this->fields).networkGame;
                        bVar11 = 0;
                        if (pMVar16 != (MVNetworkGame *)0x0) {
                          pMVar46 = (pMVar16->fields)._PlayerController_k__BackingField;
                          pMStack_53 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar11 = 0;
                          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                          if (pMVar46 != (MVLocalObjectController *)0x0) {
                            pbVar47 = (byte *)func_?();
                            bVar11 = *pbVar47;
                            piVar15 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar46,*piVar15,(int32_t)pDStack_52,_Stack_34.__klassIndex,
                                       (uint)bVar11,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      (pMVar50,(int32_t)VStack_10.z,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      uVar7 = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar28 = (float *)func_?();
      pFVar55 = (FieldInfo *)*pfVar28;
      _Stack_34.dummy = (void *)func_?();
      uStack_51 = uVar7;
      pOVar12 = (Object *)func_?();
      VStack_10.z = (float)pFVar55;
      pOVar41 = (Object *)func_?();
      pSVar25 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar12,pOVar41,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar25,(MethodInfo *)0x0);
      pMVar56 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar14 = (pMVar56->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar14->vtable[0].methodPtr & 0x100) == 0) {
        pIVar14 = (Il2CppClass *)func_?();
      }
      if (pIVar14->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar14 = (pMVar56->field7_0x1c).rgctx_data[2].klass;
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
      _Var52.dummy = (void *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pWVar17 = (pMVar16->fields).worldNetwork;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar17 != (WorldNetwork *)0x0) {
          this_01 = (pWVar17->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,(Byte__Array *)_Var52.typeHandle,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
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
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pWVar17 = (pMVar16->fields).worldNetwork;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar17 != (WorldNetwork *)0x0) {
        this_02 = (RuntimeEventManager *)(pWVar17->fields)._.runtimeEventManagerNetwork;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (this_02 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var43->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var43 = (_union_86 *)func_?();
      _Stack_24 = *p_Var43;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar26 = (undefined4 *)func_?();
      pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar26;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar26 = (undefined4 *)func_?();
      pMStack_44 = (MVPlayer *)*puVar26;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar57 = (bool *)func_?();
      bVar24 = *pbVar57;
      eventCode = CONCAT31(eventCode._1_3_,bVar24);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar58 = (char *)func_?();
      pMVar16 = (this->fields).networkGame;
      _Var52 = (_union_86)eventCode;
      if (*pcVar58 == '\0') {
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pGVar59 = (pMVar16->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar59 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar59,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_52,(int32_t)pMStack_44,bVar24,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pGVar59 = (pMVar16->fields).gameStatCounterManager;
          bVar11 = 0;
          if (pGVar59 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar59,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_52,(int32_t)pMStack_44,bVar24,(MethodInfo *)0x0);
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
      pBVar60 = (Byte__Array *)func_?();
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pGVar59 = (pMVar16->fields).gameStatCounterManager;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar59 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar59,pBVar60,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar31 = (MVEventCodes__Enum *)func_?();
      _Var52 = (_union_86)*pMVar31;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pMVar56 = (MethodInfo *)0x0;
      pBVar60 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar60,pMVar56);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI.typeHandle,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        this_03 = (pMVar16->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar11 = 0;
        if (this_03 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_03,_Var52.__klassIndex,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar11 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar15,iVar29,(MethodInfo *)0x0);
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
      pbVar57 = (bool *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*pbVar57);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      _Var52 = (_union_86)eventCode;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar61 = (pMVar16->fields)._GameCoinManager_k__BackingField;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar61 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar61,*pbVar57,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
        _Var56 = unaff_EDI;
        if (pIVar13 != pIVar14) goto code_?;
        p_Var43 = (_union_86 *)func_?();
        eventCode = p_Var43->__klassIndex;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,200,(MethodInfo *)0x0);
        if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        }
        else {
          _Var56 = (_union_86)(unaff_ESI->_0).image;
          if ((*(byte *)(_Var56.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var56.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar20) {
            pDVar18 = unaff_ESI;
          }
          bVar11 = 0;
          if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = (_union_86)eventCode;
        _Var52 = (_union_86)eventCode;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar16,eventCode,(Dictionary_2_System_Object_System_Object_ *)pDVar18,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent == (EventData *)0x0) break;
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar11 = 0;
    if (_Var56.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var56.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar21->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar21->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar20) {
      pDVar62 = pDVar21;
    }
    bVar11 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var56.dummy = (void *)func_?();
    if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar60 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var56.typeHandle,pBVar60,(MethodInfo *)0x0);
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.dummy = _Var56.dummy;
      _Var52.dummy = _Var56.dummy;
      if (pOVar12 != (Object *)0x0) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        if (pIVar13 != pIVar14) {
code_?:
          eventCode = _Var52.__klassIndex;
          func_?();
          unaff_EDI = _Var56;
          goto code_?;
        }
        puVar54 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)_Var56 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar54);
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar11 = 0;
        _Var52 = (_union_86)eventCode;
        if (pOVar12 != (Object *)0x0) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 != pIVar14) goto code_?;
          pbVar57 = (bool *)func_?();
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar16,(BytePacker *)_Var56.typeHandle,eventCode,*pbVar57,(MethodInfo *)0x0)
            ;
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar60 = (Byte__Array *)func_?();
    bVar11 = 0;
    eventCode = (MVEventCodes__Enum)_Var56.dummy;
    if (pBVar60 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar35 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar35->fields)._._ActorNr_k__BackingField;
          bVar11 = 0;
          unaff_EDI = (_union_86)photonEvent;
          _Var52 = (_union_86)eventCode;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
            pIVar14 = (TypeInfo__System__Int32->_0).element_class;
            bVar11 = pIVar13 < pIVar14;
            unaff_EDI = (_union_86)photonEvent;
            if (pIVar13 != pIVar14) goto code_?;
            pMVar31 = (MVEventCodes__Enum *)func_?();
            if (*pMVar31 == eventCode) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pMVar61 = (pMVar16->fields)._GameCoinManager_k__BackingField;
                bVar11 = 0;
                unaff_EDI = (_union_86)photonEvent;
                if (pMVar61 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar61,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar16 = (this->fields).networkGame;
                  bVar11 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (pMVar16 != (MVNetworkGame *)0x0) {
                    pMVar63 = (pMVar16->fields).operationRequests;
                    bVar11 = 0;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    unaff_EDI = (_union_86)photonEvent;
                    if (pMVar63 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_06 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (this_06,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                  (pMVar63->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pSVar64 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      eventCode._0_1_ = (pSVar64->SendReliable).Encrypt;
                      eventCode._1_1_ = (pSVar64->SendReliable).Channel;
                      eventCode._2_2_ = *(undefined2 *)&(pSVar64->SendReliable).field_0x6;
                      bVar11 = 0;
                      unaff_EDI = (_union_86)photonEvent;
                      _Var52 = (_union_86)eventCode;
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
              uStack_1 = 0;
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar11 = 0;
              unaff_EDI = (_union_86)photonEvent;
              _Var52 = (_union_86)eventCode;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                unaff_EDI = (_union_86)(pMVar16->fields).playerContainer;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar11 = 0;
                _Var52 = unaff_EDI;
                if ((unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                   (bVar11 = 0, _Var52 = unaff_EDI, pOVar12 != (Object *)0x0)) {
                  pIVar13 = (pOVar12->klass->_0).element_class;
                  pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  eventCode = (MVEventCodes__Enum)unaff_EDI;
                  if (pIVar13 != pIVar14) goto code_?;
                  pbVar57 = (bool *)func_?();
                  bVar24 = *pbVar57;
                  eventCode = CONCAT31((int3)((uint)pbVar57 >> 8),bVar24);
                  bVar11 = 0;
                  _Var52 = (_union_86)eventCode;
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                    pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    if (pIVar13 == pIVar14) {
                      piVar15 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,bVar24,
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
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    _Var52 = _Var56;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar11 = 0;
    unaff_EDI = _Var56;
    if ((_Var56.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (bVar11 = 0, pOVar12 == (Object *)0x0)) break;
    pIVar13 = (pOVar12->klass->_0).element_class;
    pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
    bVar11 = pIVar13 < pIVar14;
    if (pIVar13 != pIVar14) goto code_?;
    pcVar58 = (char *)func_?();
    bVar20 = *pcVar58 == '\0';
    eventCode._1_3_ = (undefined3)((uint)_Var56 >> 8);
    eventCode = CONCAT31(eventCode._1_3_,bVar20);
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var56.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,bVar20,(MethodInfo *)0x0);
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
      bVar65 = false;
    }
    else {
      bVar65 = true;
    }
    pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar65) {
      pDVar18 = unaff_ESI;
    }
    bVar11 = 0;
    if (pDVar18 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var56.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)pDVar18,bVar20,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    _Var56 = (_union_86)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = _Var56;
    if (photonEvent != (EventData *)0x0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)_Var56.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar21->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar21->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pDVar62 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar20) {
          pDVar62 = pDVar21;
        }
        bVar11 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar62 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)_Var56.typeHandle,pDVar62,(MethodInfo *)0x0);
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
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode._3_1_ = (undefined1)((uint)TypeInfo__System__Byte >> 0x18);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar60 = (Byte__Array *)0x0;
code_?:
      _Var52 = (_union_86)(this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar60,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      bVar11 = 0;
      if (_Var52.dummy != (MVNetworkGame *)0x0) {
        (((MVNetworkGame *)_Var52.array)->fields)._AvatarMetaDataWoMap_k__BackingField =
             (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar60 = (Byte__Array *)func_?();
    bVar11 = 0;
    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pBVar60 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, unaff_EDI = unaff_EDI, pOVar12 != (Object *)0x0)) {
        pIVar13 = (pOVar12->klass->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
        _Var56 = unaff_EDI;
        if (pIVar13 == pIVar14) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar63 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar63 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar66 = (pMVar63->fields).peer;
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar66 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar66->klass->vtable).SendOperation.method)();
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = MVEventCodes__Enum_NoCodeSet;
    unaff_EDI.dummy = (void *)func_?();
    bVar11 = 0;
    _Var52 = (_union_86)eventCode;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar12 = (Object *)func_?();
      bVar11 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (Object *)unaff_EDI.typeHandle,pOVar12,
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
      pMVar67 = (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar67->fields).logicEventQueue;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
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
          bVar11 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (photonEvent != (EventData *)0x0) {
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pMVar31 = (MVEventCodes__Enum *)func_?();
              pEVar23 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              _Var52 = (_union_86)*pMVar31;
              bVar11 = 0;
              unaff_EDI = (_union_86)photonEvent;
              if (pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)pEVar23,
                                    _Var52.__klassIndex,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar24 == 0) {
                  pEVar23 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                  VStack_10.z = (float)func_?();
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_10.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar11 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (pEVar23 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pEVar23,_Var52.__klassIndex
                             ,(Object *)VStack_10.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pEVar23 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                bVar11 = 0;
                unaff_EDI = (_union_86)photonEvent;
                if (pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                  this_07 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pEVar23,
                                       _Var52.__klassIndex,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar11 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (this_07 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_07,(Object *)photonEvent,
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      pMVar67 = (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar67,(MethodInfo *)0x0);
        pMVar68 = (pMVar67->fields).updateEvaluatorStep;
        bVar11 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar68 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar15 = &(pMVar68->fields).stepTimestamp;
          *piVar15 = *piVar15 + 1000;
code_?:
          iVar29 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar68->fields).lastUpdateTick = iVar29;
          (pMVar68->fields).accumulatedTime = 0;
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          pMVar68 = *(MVNetworkGame_UpdateEvaluator **)&(unaff_ESI->_0).byval_arg.attrs;
          bVar11 = 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar68 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar68->fields).stepTimestamp = *piVar15;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar16->fields).logicObjectManagerClientWrapper;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var43 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var43->__klassIndex;
          pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          while (bVar11 = 0, pEVar23 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pMVar69 = (pEVar23->fields)._._.method_info;
            bVar11 = 0;
            if (pMVar69 == (MethodInfo_1 *)0x0) break;
            if (unaff_EDI.__klassIndex <= (int)pMVar69[2].monitor) goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0)
            ;
            pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar16 = (this->fields).networkGame;
    bVar11 = 0;
    unaff_EDI = (_union_86)this;
    if (pMVar16 == (MVNetworkGame *)0x0) break;
    pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar16,(MethodInfo *)0x0);
    bVar11 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar11 = 0;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar11 = 0;
      if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
        _Var52.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar48,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                        (MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          pEVar23 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          bVar11 = pEVar23 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          if (pEVar23 < (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2)
          goto code_?;
          bVar11 = 0;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            iVar29._0_2_ = (unaff_ESI->_0).byval_arg.attrs;
            iVar29._2_1_ = (unaff_ESI->_0).byval_arg.type;
            iVar29._3_1_ = (unaff_ESI->_0).byval_arg.field_0x7;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar48,iVar29,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (_Var52.dummy == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar11 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                  (((MVWorldObject *)_Var52.generic_class)->fields).id) goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar49 = func_?();
              bVar11 = 0;
              if (iVar49 != 0) {
                uVar7 = SUB41(unaff_ESI,0);
                uVar70 = (undefined1)((uint)unaff_ESI >> 8);
                uVar71 = (undefined2)((uint)unaff_ESI >> 0x10);
                bVar24 = 0xbe;
                this_08 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_08,bVar24,(MethodInfo *)CONCAT22(uVar71,CONCAT11(uVar70,uVar7)));
                pMVar16 = (this->fields).networkGame;
                bVar11 = 0;
                if (pMVar16 != (MVNetworkGame *)0x0) {
                  pMVar46 = (pMVar16->fields)._PlayerController_k__BackingField;
                  bVar11 = 0;
                  if (pMVar46 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar46,1,(MethodInfo *)0x0);
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
      bVar11 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Stack_34.typeHandle = unaff_EDI.typeHandle;
      if (photonEvent != (EventData *)0x0) {
        VStack_10.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xdb,(MethodInfo *)0x0);
        _Var52.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          iVar29 = *piVar15;
          piVar15 = (int32_t *)func_?();
          iVar30 = *piVar15;
          puVar54 = (undefined1 *)func_?();
          uVar7 = *puVar54;
          piVar15 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar15,
                     CONCAT31((int3)((uint)puVar54 >> 8),uVar7),iVar30,iVar29,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar57 = (bool *)func_?();
      bVar24 = *pbVar57;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar24
      ;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField == 0
         ) goto code_?;
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar56 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar56);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar11 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = (_union_86)photonEvent;
      if (pOVar12 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar12[1].monitor,(MethodInfo *)0x0);
        _Var52.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar25 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar25,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar12[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)photonEvent;
        if (pGVar72 != (GoldRewardManager *)0x0) {
          pbVar57 = (bool *)func_?();
          (pGVar72->fields).isGoldRewardGame = *pbVar57;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar57 = (bool *)func_?();
          BStack_9.m_value = *pbVar57;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar25 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_9,(MethodInfo *)0x0);
          pSVar25 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar25,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar25,(MethodInfo *)0x0);
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
      pSVar73 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar25 = (String *)0x0;
      if (pSVar73 == (String *)0x0) {
code_?:
        pSVar25 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar25,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar25,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar73->klass == TypeInfo__System__String) {
        pSVar25 = pSVar73;
      }
      bVar11 = 0;
      if (pSVar25 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      _Var56 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var56;
      _Var52 = (_union_86)eventCode;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar49 = func_?();
      pMVar56 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar25 = StringLiteral_V;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar49 != 0) {
        pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,(Object *)pSVar25,pMVar56);
        pbVar57 = (bool *)func_?();
        bVar24 = *pbVar57;
        eventCode._1_3_ = (undefined3)((uint)_Var52.__klassIndex >> 8);
        eventCode = CONCAT31(eventCode._1_3_,bVar24);
        pMVar16 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)pSVar25;
        _Var52 = (_union_86)eventCode;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          piVar15 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar16,*piVar15,bVar24,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar73 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar25 = (String *)0x0;
      if (pSVar73 != (String *)0x0) {
        if (pSVar73->klass == TypeInfo__System__String) {
          pSVar25 = pSVar73;
        }
        bVar11 = 0;
        photonEvent = (EventData *)0x0;
        if (pSVar25 == (String *)0x0) goto code_?;
      }
      bVar24 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar25,(MethodInfo *)0x0);
      if (bVar24 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar25,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar11 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar12[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar12[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar18,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pMVar74 = (pMVar16->fields).playerContainer;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar74 != (MVPlayerContainer *)0x0) {
          pMVar35 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar74,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pMVar35 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar35,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    bVar11 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar18,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar16->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        _Var52 = unaff_EDI;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar75 != (MVPlayer *)0x0) {
            (pMVar75->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar25 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar18,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar25,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar42 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar25,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar18,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar12 != (Object *)0x0) {
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pLVar76 = (pMVar16->fields).levelRewardsManager;
          bVar11 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar76 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar76,(Dictionary_2_System_Int32_System_Int32_ *)pOVar12[1].klass,
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar12 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar18,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        pLVar76 = (pMVar16->fields).levelRewardsManager;
        bVar11 = 0;
        unaff_EDI = unaff_EDI;
        if ((pOVar12 != (Object *)0x0) &&
           (bVar11 = 0, unaff_EDI = unaff_EDI, pLVar76 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar76,(int32_t)pOVar12[1].klass,(int32_t)pOVar12[1].monitor,(MethodInfo *)0x0
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar18,
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
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar18,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar18 = unaff_ESI;
      }
      bVar11 = 0;
      if (pDVar18 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar25 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar18,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar25,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        pKVar77 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar18,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar77;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar18 = unaff_ESI;
      }
      bVar11 = 0;
      if (pDVar18 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar11 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pIVar13 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
        pIVar14 = (TypeInfo__System__Int32->_0).element_class;
        bVar11 = pIVar13 < pIVar14;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar16 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
      pMVar16 = (this->fields).networkGame;
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar16,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar11 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar78 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_10,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      _Var52 = (_union_86)pVVar78->z;
      VVar38 = *pVVar78;
      pQVar79 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar80 = pQVar79->x;
      VStack_10.x = pQVar79->y;
      VStack_10.y = pQVar79->z;
      VStack_10.z = pQVar79->w;
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar16->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar15 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar15,(MethodInfo *)0x0)
          ;
          bVar11 = 0;
          if (pMVar75 != (MVPlayer *)0x0) {
            this_04 = (pMVar75->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_04 != (SpawnRolesManager *)0x0) {
              piVar15 = (int32_t *)func_?();
              rotation.y._0_1_ = SUB41(VStack_10.x,0);
              rotation.x = fVar80;
              rotation.y._1_1_ = (char)((uint)VStack_10.x >> 8);
              rotation.y._2_2_ = (short)((uint)VStack_10.x >> 0x10);
              rotation.z = VStack_10.y;
              rotation.w = VStack_10.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_04,*piVar15,VVar38,rotation,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar25 = (String *)func_?();
      _Var52.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar25,(MethodInfo *)unaff_ESI);
      this_09 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_09,(MethodInfo *)0x0);
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar16 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar16->fields).playerContainer;
        pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar11 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (bVar11 = 0, unaff_EDI = (_union_86)photonEvent, pOVar12 != (Object *)0x0)) {
          pIVar13 = (pOVar12->klass->_0).element_class;
          pIVar14 = (TypeInfo__System__Int32->_0).element_class;
          bVar11 = pIVar13 < pIVar14;
          if (pIVar13 != pIVar14) goto code_?;
          piVar15 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar15,(MethodInfo *)0x0);
          bVar11 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar75 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar75,(ISpawnRoleChangeHandler *)this_09,
                       (SpawnRolesRuntimeData *)_Var52.typeHandle,(MethodInfo *)0x0);
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar18 = unaff_ESI;
        }
        bVar11 = 0;
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      _Var56.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar18,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar48 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar11 = 0;
      unaff_EDI.typeHandle = _Var56.typeHandle;
      if ((_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar11 = 0, pMVar48 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar48,_Var56.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar16 = (this->fields).networkGame;
        bVar11 = 0;
        if (pMVar16 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar16,_Var56.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar16,(int32_t)_Var56.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pbVar57 = (bool *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*pbVar57);
              bVar11 = 0;
              _Var52 = (_union_86)eventCode;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar20 = false;
                }
                else {
                  bVar20 = true;
                }
                pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (bVar20) {
                  pDVar18 = unaff_ESI;
                }
                bVar11 = 0;
                if (pDVar18 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar20 = false;
                  }
                  else {
                    bVar20 = true;
                  }
                  pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  if (bVar20) {
                    pDVar18 = unaff_ESI;
                  }
                  bVar11 = 0;
                  if (pDVar18 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pDVar18,
                               (SpawnRoleBodySwitchData *)_Var56.typeHandle,*pbVar57,
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      eventCode = 0x1000000;
      pOVar12 = (Object *)func_?();
      bVar11 = 0;
      _Var52 = (_union_86)eventCode;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar15 = (int32_t *)func_?();
        iVar29 = *piVar15;
        uStack_51 = 0;
        pOVar12 = (Object *)func_?();
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
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar16,(MethodInfo *)0x0);
          bVar11 = 0;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar48,iVar29,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar26 = (undefined4 *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar26;
            iVar49 = func_?();
            bVar11 = 0;
            if (iVar49 != 0) {
              pMVar56 = (MethodInfo *)0x0;
              pMVar50 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar50,(int32_t)unaff_ESI,pMVar56);
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        iVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar11 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          bVar24 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar29,&pMStack_8,
                              (MethodInfo *)0x0);
          if (bVar24 == 0) {
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
          puVar81 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar81);
          bVar11 = 0;
          _Var52 = (_union_86)eventCode;
          if (pMStack_8 != (MVPlayer *)0x0) {
            if ((pMStack_8->fields).playerState != *puVar81) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_8,eventCode,(MethodInfo *)0x0);
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar18 = unaff_ESI;
          }
          bVar11 = 0;
          if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar18,(MethodInfo *)0x0);
        pMVar63 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar11 = 0;
        if (pMVar63 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar63,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar11 = 0;
      if (photonEvent != (EventData *)0x0) {
        _Var52.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (_Var52.dummy !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var56 = (_union_86)
                   ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)_Var52.array)->klass;
          if ((*(byte *)(_Var56.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var56.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          eventCode = (MVEventCodes__Enum)
                      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0;
          if (bVar20) {
            eventCode = (MVEventCodes__Enum)_Var52;
          }
          bVar11 = 0;
          _Var52 = (_union_86)eventCode;
          unaff_EDI = _Var56;
          if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)eventCode ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar11 = 0;
        if (_Var52.dummy !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar56 = (MethodInfo *)&UNK_?;
          this_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)_Var52.typeHandle,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar11 = 0;
          if (this_10 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            __return_storage_ptr__ =
                 (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffff78;
            pDVar82 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                (__return_storage_ptr__,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)&stack0xffffff88;
            VStack_10.y = 0.0;
            _Var56 = (_union_86)pDVar82->_currentValue;
            uStack_1 = 3;
            VStack_10.z = (float)unaff_ESI;
            do {
              uVar7 = (undefined1)((uint)__return_storage_ptr__ >> 0x18);
              bVar24 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar24 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar56);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var56.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var56.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var56;
                }
                bVar11 = 0;
                photonEvent = (EventData *)unaff_ESI;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              bVar11 = 0;
              if (_Var52.dummy ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar83 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  _Var52.typeHandle,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar56 = (MethodInfo *)::StringLiteral___;
              if (TVar83.m_Index == 0) {
                pSVar25 = (String *)0x0;
              }
              else {
                pSVar25 = (String *)func_?();
              }
              __return_storage_ptr__ =
                   (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0;
              pSVar25 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)pMVar56,pSVar25,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar25,(MethodInfo *)0x0);
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
          _Var56 = unaff_EDI;
          if (pIVar13 != pIVar14) goto code_?;
          puVar26 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar26;
          pMVar16 = (this->fields).networkGame;
          bVar11 = 0;
          unaff_EDI = (_union_86)this;
          if (pMVar16 != (MVNetworkGame *)0x0) {
            pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
            bVar11 = 0;
            if (pMVar35 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI ==
                  (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar35->fields)._._ActorNr_k__BackingField) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pMVar16 = (this->fields).networkGame;
              bVar11 = 0;
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pMVar74 = (pMVar16->fields).playerContainer;
                bVar11 = 0;
                if (pMVar74 != (MVPlayerContainer *)0x0) {
                  bVar24 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar24 == 0) {
code_?:
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    _Var52 = (_union_86)eventCode;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar74 = (pMVar16->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar74 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar74 = (pMVar16->fields).playerContainer;
                      bVar11 = 0;
                      if (pMVar74 != (MVPlayerContainer *)0x0) {
                        pMStack_44 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_52,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = MVEventCodes__Enum_NoCodeSet;
                        VStack_10.z = (float)func_?();
                        pOVar12 = (Object *)func_?();
                        bVar11 = 0;
                        _Var52 = (_union_86)eventCode;
                        if (pDStack_52 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                     (Object *)VStack_10.z,pOVar12,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_51 = 3;
                          pOVar12 = (Object *)func_?();
                          bVar11 = 0;
                          if (pMStack_44 != (MVPlayer *)0x0) {
                            pUVar84 = (pMStack_44->fields)._UserProfileData_k__BackingField;
                            bVar11 = 0;
                            if (pUVar84 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                         pOVar12,(Object *)(pUVar84->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_45 = 6;
                              VStack_10.z = (float)func_?();
                              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar11 = 0;
                              if (pMVar16 != (MVNetworkGame *)0x0) {
                                this_05 = (pMVar16->fields)._Friends_k__BackingField;
                                bVar11 = 0;
                                if (this_05 != (FriendList *)0x0) {
                                  bStack_85 = FriendList::FriendList_IsFriend
                                                        (this_05,(pMStack_44->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar12 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_52
                                             ,(Object *)VStack_10.z,pOVar12,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_52
                                             ,(MethodInfo *)0x0);
                                  pMVar16 = (this->fields).networkGame;
                                  bVar11 = 0;
                                  if (pMVar16 != (MVNetworkGame *)0x0) {
                                    pGVar59 = (pMVar16->fields).gameStatCounterManager;
                                    bVar11 = 0;
                                    if (pGVar59 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar59,(int32_t)unaff_ESI,
                                                 (pMStack_44->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar16 = (this->fields).networkGame;
                                      bVar11 = 0;
                                      if (pMVar16 != (MVNetworkGame *)0x0) {
                                        pGVar59 = (pMVar16->fields).gameStatCounterManager;
                                        bVar11 = 0;
                                        if (pGVar59 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar59,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
          _Var56 = unaff_EDI;
          if (pIVar13 == pIVar14) {
            puVar26 = (undefined4 *)func_?();
            uVar7 = (undefined1)((uint)pOVar12 >> 0x18);
            pMStack_53 = (MVWorldObject *)*puVar26;
            pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar11 = 0;
            unaff_EDI = unaff_EDI;
            if (pOVar12 != (Object *)0x0) {
              pIVar13 = (pOVar12->klass->_0).element_class;
              pIVar14 = (TypeInfo__System__Int32->_0).element_class;
              bVar11 = pIVar13 < pIVar14;
              if (pIVar13 != pIVar14) goto code_?;
              pMVar31 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar31;
              _Var52.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var52.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var52.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var52.typeHandle;
                }
                bVar11 = 0;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar11 = 0;
              _Var52 = (_union_86)eventCode;
              if (pOVar12 != (Object *)0x0) {
                pIVar13 = (pOVar12->klass->_0).element_class;
                pIVar14 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar11 = pIVar13 < pIVar14;
                _Var56 = unaff_EDI;
                if (pIVar13 != pIVar14) goto code_?;
                puVar54 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar54;
                pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar11 = 0;
                if (pOVar12 != (Object *)0x0) {
                  pIVar13 = (pOVar12->klass->_0).element_class;
                  pIVar14 = (TypeInfo__System__Int32->_0).element_class;
                  bVar11 = pIVar13 < pIVar14;
                  if (pIVar13 != pIVar14) goto code_?;
                  p_Var43 = (_union_86 *)func_?();
                  _Stack_28 = *p_Var43;
                  pOVar12 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar11 = 0;
                  if (pOVar12 != (Object *)0x0) {
                    pIVar13 = (pOVar12->klass->_0).element_class;
                    pIVar14 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar11 = pIVar13 < pIVar14;
                    if (pIVar13 != pIVar14) goto code_?;
                    pbVar57 = (bool *)func_?();
                    bVar24 = *pbVar57;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                        pDVar18 = unaff_ESI;
                      }
                      bVar11 = 0;
                      if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                      goto code_?;
                    }
                    VStack_10.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pDVar18,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar16 = (this->fields).networkGame;
                    bVar11 = 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar16,(MethodInfo *)0x0);
                      bVar11 = 0;
                      if (pMVar35 != (MVLocalPlayer *)0x0) {
                        if (eventCode == (pMVar35->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pvStack_3;
                          return;
                        }
                        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                    func_?();
                        MVPlayer::MVPlayer__ctor
                                  ((MVPlayer *)unaff_ESI,eventCode,(int32_t)pMStack_53,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_10.z,0,bVar24,(MethodInfo *)0x0);
                        bVar11 = 0;
                        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                          (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                          pMVar16 = (this->fields).networkGame;
                          bVar11 = 0;
                          if (pMVar16 != (MVNetworkGame *)0x0) {
                            pMVar74 = (pMVar16->fields).playerContainer;
                            bVar11 = 0;
                            if (pMVar74 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar74,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
  eventCode = _Var52.__klassIndex;
  func_?();
  _Var56 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  unaff_EDI = _Var56;
code_?:
  func_?();
  func_?();
code_?:
  uVar7 = eventCode._3_1_;
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar86 = func_?();
  bVar87 = (byte)unaff_EBX;
  bVar88 = (byte)((uint)unaff_EBX >> 8);
  if (!(bool)bVar11) {
    uVar89 = CONCAT31((int3)((ulonglong)uVar86 >> 8),(byte)uVar86 + bVar87);
    bVar11 = (byte)(uVar89 + 0xe2105314);
    bVar90 = bVar11 + 0x53;
    bVar20 = 0xac < bVar11 || CARRY1(bVar90,0x1defaceb < uVar89);
    bVar90 = bVar90 + (0x1defaceb < uVar89);
    uVar86 = CONCAT44((int)((ulonglong)uVar86 >> 0x20) + unaff_EBX[4] +
                      (uint)CARRY1((byte)uVar86,bVar87),
                      CONCAT31((int3)(uVar89 + 0xe2105314 >> 8),bVar90));
    pbVar47 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0)
                             .byval_arg.attrs + 1);
    bVar65 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar20);
    *pbVar47 = *pbVar47 + bVar88 + bVar20;
    bVar11 = CARRY1(*extraout_ECX,bVar90) || CARRY1(*extraout_ECX + bVar90,bVar65);
    *extraout_ECX = *extraout_ECX + bVar90 + bVar65;
  }
  pIVar91 = (Il2CppImage *)uVar86;
  pbVar47 = (byte *)((int)&pIVar91[2].name + 3);
  bVar92 = (byte)((ulonglong)uVar86 >> 0x20);
  bVar20 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar11);
  *pbVar47 = *pbVar47 + bVar92 + bVar11;
  pbVar47 = (byte *)((int)&pIVar91[2].name + 3);
  bVar65 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar20);
  *pbVar47 = *pbVar47 + bVar92 + bVar20;
  bVar93 = (byte)((uint)extraout_ECX >> 8);
  bVar11 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image +
           bVar93;
  bVar20 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                            image,bVar93) || CARRY1(bVar11,bVar65);
  *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       bVar11 + bVar65;
  pbVar47 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                            ((int)photonEvent + 0x17b50e78))->vtable).ContainsKey_1.method +
                    (int)((ulonglong)uVar86 >> 0x20) + 3);
  bVar65 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar20);
  *pbVar47 = *pbVar47 + bVar92 + bVar20;
  pbVar47 = (byte *)((int)&pIVar91[2].name + 3);
  bVar20 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar65);
  *pbVar47 = *pbVar47 + bVar92 + bVar65;
  bVar90 = (byte)extraout_ECX;
  bVar65 = CARRY1(bVar92,bVar90) || CARRY1(bVar92 + bVar90,bVar20);
  bVar92 = bVar92 + bVar90 + bVar20;
  puVar94 = (uint *)CONCAT31((int3)((ulonglong)uVar86 >> 0x28),bVar92);
  puVar5 = unaff_EBX + 4;
  uVar89 = *puVar5;
  bVar11 = (byte)*puVar5 - bVar92;
  *(byte *)puVar5 = bVar11 - bVar65;
  puVar5 = unaff_EBX + 4;
  uVar95 = (uint)((byte)uVar89 < bVar92 || bVar11 < bVar65);
  puVar96 = (uint *)*puVar5;
  uVar89 = *puVar5;
  *puVar5 = (uVar89 - (int)puVar94) - uVar95;
  ((Il2CppClass_0 *)&(unaff_EDI.array)->etype)->image = pIVar91;
  puVar5 = unaff_EBX + 4;
  uVar95 = (uint)(puVar96 < puVar94 || uVar89 - (int)puVar94 < uVar95);
  puVar96 = (uint *)*puVar5;
  uVar89 = *puVar5;
  *puVar5 = (uVar89 - (int)puVar94) - uVar95;
  puVar5 = unaff_EBX + 4;
  uVar95 = (uint)(puVar96 < puVar94 || uVar89 - (int)puVar94 < uVar95);
  puVar96 = (uint *)*puVar5;
  uVar89 = *puVar5;
  *puVar5 = (uVar89 - (int)puVar94) - uVar95;
  uVar89 = (uint)(puVar96 < puVar94 || uVar89 - (int)puVar94 < uVar95);
  bVar20 = *puVar94 < 0x53 || *puVar94 - 0x53 < uVar89;
  *puVar94 = (*puVar94 - 0x53) - uVar89;
  uVar89 = *unaff_EBX;
  bVar11 = (byte)*unaff_EBX + bVar90;
  *(byte *)unaff_EBX = bVar11 + bVar20;
  uVar89 = (uint)(CARRY1((byte)uVar89,bVar90) || CARRY1(bVar11,bVar20));
  uVar95 = (int)puVar94 - unaff_EBX[4];
  bVar20 = puVar94 < (uint *)unaff_EBX[4] || uVar95 < uVar89;
  pcVar58 = (char *)(uVar95 - uVar89);
  pbVar47 = extraout_ECX;
  if (-1 < (int)pcVar58) {
    bVar92 = (byte)((ulonglong)uVar86 >> 8);
    pbVar47 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                               CONCAT11(bVar93 + bVar92 + bVar20,bVar90));
    uVar89 = (uint)(CARRY1(bVar93,bVar92) || CARRY1(bVar93 + bVar92,bVar20));
    uVar95 = (int)pcVar58 - unaff_EBX[4];
    bVar20 = pcVar58 < (char *)unaff_EBX[4] || uVar95 < uVar89;
    pcVar58 = (char *)(uVar95 - uVar89);
    bVar90 = (byte)uVar86 + 0xad;
    bVar65 = (byte)uVar86 < 0x53 || bVar90 < bVar20;
    uVar97 = (undefined3)((ulonglong)uVar86 >> 8);
    bVar90 = bVar90 - bVar20;
    pbVar98 = (byte *)(CONCAT31(uVar97,bVar90) + 0x5b);
    bVar93 = (byte)pcVar58;
    bVar20 = CARRY1(*pbVar98,bVar93) || CARRY1(*pbVar98 + bVar93,bVar65);
    *pbVar98 = *pbVar98 + bVar93 + bVar65;
    puVar5 = unaff_EBX + 0x140414c7;
    bVar11 = (byte)*puVar5 + bVar92;
    bVar65 = CARRY1((byte)*puVar5,bVar92) || CARRY1(bVar11,bVar20);
    *(byte *)puVar5 = bVar11 + bVar20;
    bVar20 = CARRY1(bVar90,bVar93) || CARRY1(bVar90 + bVar93,bVar65);
    bVar90 = bVar90 + bVar93 + bVar65;
    bVar11 = bVar90 + 0xad;
    bVar65 = bVar90 < 0x53 || bVar11 < bVar20;
    pIVar91 = (Il2CppImage *)CONCAT31(uVar97,bVar11 - bVar20);
    bVar11 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image
             + bVar88;
    bVar20 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0
                              ).image,bVar88) || CARRY1(bVar11,bVar65);
    *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
         bVar11 + bVar65;
  }
  puVar54 = (undefined1 *)((int)&pIVar91[-0x2134631].metadataHandle + 1);
  bVar65 = pIVar91 < (Il2CppImage *)0x5b501053 || puVar54 < (undefined1 *)(uint)bVar20;
  uVar89 = (int)puVar54 - (int)(uint)bVar20;
  bVar92 = (byte)pcVar58;
  bVar20 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar65);
  *pbVar47 = *pbVar47 + bVar92 + bVar65;
  pbVar98 = (byte *)(pcVar58 + 0x7610531e);
  bVar11 = *pbVar98;
  bVar90 = *pbVar98;
  *pbVar98 = bVar90 + bVar87 + bVar20;
  bVar93 = (byte)pbVar47;
  *pcVar58 = *pcVar58 + bVar93 + (CARRY1(bVar11,bVar87) || CARRY1(bVar90 + bVar87,bVar20));
  puVar5 = unaff_EBX + 4;
  bVar20 = false;
  *(byte *)puVar5 = (byte)*puVar5 & bVar92;
  bVar11 = (byte)((uint)pbVar47 >> 8);
  if ((char)(byte)*puVar5 < '\x01') {
    pbVar98 = pbVar47 + 0x21e11053;
    bVar90 = *pbVar98;
    *pbVar98 = *pbVar98 + bVar11;
    *pcVar58 = *pcVar58 + bVar88 + CARRY1(bVar90,bVar11);
    uVar95 = CONCAT31((int3)((uint)pcVar58 >> 8),bVar92 & (byte)unaff_EBX[4]);
    *unaff_EBX = *unaff_EBX | (uint)&stack0xffffff24;
    pcVar58 = (char *)(uVar95 + 0xea105323);
    *pcVar58 = *pcVar58 + bVar87;
    pcVar58 = (char *)(uVar95 & unaff_EBX[4]);
    uVar89 = uVar89 & 0xffffff53;
    bVar20 = CARRY1(uVar7,(byte)uVar89);
  }
  pbVar98 = pbVar47 + 0x24;
  bVar90 = *pbVar98;
  bVar99 = (byte)((uint)pcVar58 >> 8);
  bVar92 = *pbVar98;
  *pbVar98 = bVar92 + bVar99 + bVar20;
  puVar100 = &(((Dictionary_2_System_Object_System_Object___Class *)((int)photonEvent + -0x37efad70))
            ->_1).thread_static_fields_size;
  *(byte *)puVar100 =
       (char)*puVar100 + bVar87 + (CARRY1(bVar90,bVar99) || CARRY1(bVar92 + bVar99,bVar20));
  uVar89 = uVar89 & 0xffffff53;
  pbVar98 = (byte *)CONCAT22((short)((uint)pbVar47 >> 0x10),CONCAT11(bVar11 + bVar99,bVar93));
  pbVar47 = (byte *)((int)unaff_EBX + 0x25);
  bVar90 = *pbVar47;
  bVar101 = (byte)(uVar89 >> 8);
  *pbVar47 = *pbVar47 + bVar101;
  bVar92 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image +
           bVar93;
  bVar20 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                            image,bVar93) || CARRY1(bVar92,CARRY1(bVar90,bVar101));
  *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       bVar92 + CARRY1(bVar90,bVar101);
  bVar65 = CARRY1(bRam_?,bVar87);
  bVar90 = bRam_? + bVar87;
  bRam_? = bVar90 + bVar20;
  bVar93 = (byte)uVar89;
  in_AF = 9 < (bVar93 & 0xf) | in_AF;
  bVar20 = 0x99 < bVar93 || (bVar65 || CARRY1(bVar90,bVar20));
  bVar90 = bVar93 + in_AF * '\x06' + bVar20 * '`';
  *pbVar98 = *pbVar98 + bVar90 + bVar20;
  pbVar47 = (byte *)(pcVar58 + -unaff_EBX[4]);
  bVar92 = bVar90 + 0xad + bVar88 + (bVar90 < 0x53);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar88 + (bVar92 < 0x53);
  bVar20 = CONCAT31((int3)(uVar89 >> 8),bVar92 + 0xad) < 0x2ea21053;
  bVar92 = bVar92 + 0x5a;
  bVar93 = *pbVar47;
  bVar90 = *pbVar47;
  *pbVar47 = bVar90 + bVar92 + bVar20;
  in_AF = 9 < (bVar92 & 0xf) | in_AF;
  bVar20 = 0x99 < bVar92 || (CARRY1(bVar93,bVar92) || CARRY1(bVar90 + bVar92,bVar20));
  bVar93 = bVar92 + in_AF * -6 + bVar20 * -0x60;
  bVar90 = bVar87 + (byte)pbVar47;
  cVar102 = bVar90 + bVar20;
  iVar49 = CONCAT31((int3)((uint)unaff_EBX >> 8),cVar102);
  bVar20 = 0x99 < bVar93 || (CARRY1(bVar87,(byte)pbVar47) || CARRY1(bVar90,bVar20));
  bVar93 = bVar93 + (9 < (bVar93 & 0xf) | in_AF) * -6 + bVar20 * -0x60;
  pp_Var26 = (Il2CppMetadataTypeHandle *)&unaff_EDI.type[6].attrs;
  bVar87 = *(byte *)pp_Var26;
  bVar90 = *(char *)pp_Var26 + bVar93;
  *(byte *)pp_Var26 = bVar90 + bVar20;
  *(char *)(iVar49 + 0x74105330) =
       *(char *)(iVar49 + 0x74105330) + bVar11 + bVar99 +
       (CARRY1(bVar87,bVar93) || CARRY1(bVar90,bVar20));
  *(uint *)(iVar49 + 0x10) = *(uint *)(iVar49 + 0x10) ^ (uint)pbVar47;
  pDVar18 = *(Dictionary_2_System_Object_System_Object___Class **)pbVar47;
  *(int *)pbVar47 = *(int *)pbVar47 - (int)photonEvent;
  pcVar58 = (char *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                            ((int)photonEvent + 0x631051a0))->vtable).
                           System_Collections_IDictionary_Add.method + 2);
  *pcVar58 = *pcVar58 + bVar88 + (pDVar18 < photonEvent);
  uVar89 = (uint)pbVar47 ^ *(uint *)(iVar49 + 0x10);
  (&stack0x383b0f4f)[(int)photonEvent] = (&stack0x383b0f4f)[(int)photonEvent] + cVar102;
  bVar20 = *(byte *)(iVar49 + 0x10) < (byte)uVar89;
  *pbVar98 = bVar88;
  pbVar47 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                           interopData + 2);
  bVar11 = *pbVar47;
  bVar88 = (byte)(uVar89 >> 8);
  bVar87 = *pbVar47 + bVar88;
  *pbVar47 = bVar87 + bVar20;
  *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image +
       cVar102 + (CARRY1(bVar11,bVar88) || CARRY1(bVar87,bVar20));
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

